#include "refal05rts.h"
#include "lamewasm.h"

LAME_IMPORT("fillRect") void fillRect(int x, int y, int width, int height);
LAME_IMPORT("clearRect") void clearRect(int x, int y, int width, int height);
LAME_IMPORT("strokeRect") void strokeRect(int x, int y, int width, int height);
LAME_IMPORT("beginPath") void beginPath(void);
LAME_IMPORT("closePath") void closePath(void);
LAME_IMPORT("moveTo") void moveTo(int x, int y);
LAME_IMPORT("lineTo") void lineTo(int x, int y);
LAME_IMPORT("stroke") void stroke(void);
LAME_IMPORT("fill") void fill(void);
LAME_IMPORT("arc") void arc(int x, int y, int radius, int startAngle, int endAngle, int counterClockwise);
LAME_IMPORT("arcTo") void arcTo(int x1, int y1, int x2, int y2, int radius);
LAME_IMPORT("bezierCurveTo") void bezierCurveTo(int cp1x, int cp1y, int cp2x, int cp2y, int x, int y);
LAME_IMPORT("quadraticCurveTo") void quadraticCurveTo(int cpx, int cpy, int x, int y);
LAME_IMPORT("setLineWidth") void setLineWidth(int width);
LAME_IMPORT("setLineJoin") void setLineJoin(const char* joinStyle);
LAME_IMPORT("setLineCap") void setLineCap(const char* capStyle);
LAME_IMPORT("setStrokeStyle") void setStrokeStyle(const char* color);
LAME_IMPORT("setFillStyle") void setFillStyle(const char* color);
LAME_IMPORT("setGlobalAlpha") void setGlobalAlpha(int alpha);
LAME_IMPORT("setTransform") void setTransform(int a, int b, int c, int d, int e, int f);
LAME_IMPORT("drawImage") void drawImage(void* image, int x, int y, int width, int height);
LAME_IMPORT("createLinearGradient") void* createLinearGradient(int x0, int y0, int x1, int y1);
LAME_IMPORT("createRadialGradient") void* createRadialGradient(int x0, int y0, int r0, int x1, int y1, int r1);
LAME_IMPORT("createPattern") void* createPattern(void* image, const char* repetition);


// Адаптировано из файла refal05bif.c проекта Refal-05.
struct signed_number {
  signed sign;
  r05_number value;
};


static struct r05_node *parse_signed_number(
  struct signed_number *sn, struct r05_node *p
) {
  if (R05_DATATAG_CHAR == p->tag) {
    if ('-' == p->info.char_) {
      sn->sign = -1;
    } else if ('+' == p->info.char_) {
      sn->sign = +1;
    } else {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    sn->sign = +1;
  }

  if (R05_DATATAG_NUMBER != p->tag) {
    r05_recognition_impossible();
  }

  sn->value = p->info.number;

  if (0 == sn->value) {
    sn->sign = +1;
  }

  return p->next;
}

static struct r05_node *parse_maybe_bracket_signed_number(
  struct signed_number *sn, struct r05_node *p
) {
  if (R05_DATATAG_OPEN_BRACKET == p->tag) {
    p = p->next;
    p = parse_signed_number(sn, p);

    if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    p = parse_signed_number(sn, p);
  }

  return p;
}

R05_DEFINE_ENTRY_FUNCTION(FillRect, "FillRect") {
  struct signed_number x, y, w, h;

  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (R05_DATATAG_OPEN_BRACKET == p->tag) {
    p = p->next;
    p = parse_signed_number(&x, p);

    if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    p = parse_signed_number(&x, p);
  }

  if (R05_DATATAG_OPEN_BRACKET == p->tag) {
    p = p->next;
    p = parse_signed_number(&y, p);

    if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    p = parse_signed_number(&y, p);
  }

  if (R05_DATATAG_OPEN_BRACKET == p->tag) {
    p = p->next;
    p = parse_signed_number(&w, p);

    if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    p = parse_signed_number(&w, p);
  }

  p = parse_signed_number(&h, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  fillRect(
    x.sign*x.value,
    y.sign*y.value,
    w.sign*w.value,
    h.sign*h.value
  );
}



R05_DEFINE_ENTRY_FUNCTION(BeginPath, "BeginPath") {
  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  beginPath();
}

R05_DEFINE_ENTRY_FUNCTION(ClosePath, "ClosePath") {
  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  closePath();
}

R05_DEFINE_ENTRY_FUNCTION(MoveTo, "MoveTo") {
  struct signed_number x, y;

  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  p = parse_maybe_bracket_signed_number(&x, p);
  p = parse_maybe_bracket_signed_number(&y, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  moveTo(x.sign*x.value, y.sign*y.value);
}

R05_DEFINE_ENTRY_FUNCTION(LineTo, "LineTo") {
  struct signed_number x, y;

  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  p = parse_maybe_bracket_signed_number(&x, p);
  p = parse_maybe_bracket_signed_number(&y, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  lineTo(x.sign*x.value, y.sign*y.value);
}

R05_DEFINE_ENTRY_FUNCTION(Stroke, "Stroke") {
  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  stroke();
}

R05_DEFINE_ENTRY_FUNCTION(Fill, "Fill") {
  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  fill();
}

R05_DEFINE_ENTRY_FUNCTION(Arc, "Arc") {
  struct signed_number x, y, r, startAngle, endAngle, counterClockwise;

  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  p = parse_maybe_bracket_signed_number(&x, p);
  p = parse_maybe_bracket_signed_number(&y, p);
  p = parse_maybe_bracket_signed_number(&r, p);
  p = parse_maybe_bracket_signed_number(&startAngle, p);
  p = parse_maybe_bracket_signed_number(&endAngle, p);
  p = parse_signed_number(&counterClockwise, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  arc(
    x.sign*x.value,
    y.sign*y.value,
    r.sign*r.value,
    startAngle.sign*startAngle.value,
    endAngle.sign*endAngle.value,
    counterClockwise.sign*counterClockwise.value
  );
}


R05_DEFINE_ENTRY_FUNCTION(SetLineWidth, "SetLineWidth") {
  struct signed_number width;

  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  p = parse_maybe_bracket_signed_number(&width, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  setLineWidth(width.sign*width.value);
}


R05_DEFINE_ENTRY_FUNCTION(SetStrokeStyle, "SetStrokeStyle") {
  struct r05_node *eColor[2];
  enum { MAX_COLOR = 100 };
  char color[MAX_COLOR + 1];
  size_t color_len;

  color_len =
    r05_read_chars(eColor, color, MAX_COLOR, arg_begin->next, arg_end);

  if (!r05_empty_hole(eColor[1], arg_end)) {
    if (R05_DATATAG_CHAR == eColor[1]->next->tag) {
      r05_builtin_error("stroke style color too long");
    } else {
      r05_recognition_impossible();
    }
  }

  color[color_len] = '\0';

  setStrokeStyle(color);
}

R05_DEFINE_ENTRY_FUNCTION(SetFillStyle, "SetFillStyle") {
  struct r05_node *eColor[2];
  enum { MAX_COLOR = 100 };
  char color[MAX_COLOR + 1];
  size_t color_len;

  color_len =
    r05_read_chars(eColor, color, MAX_COLOR, arg_begin->next, arg_end);

  if (!r05_empty_hole(eColor[1], arg_end)) {
    if (R05_DATATAG_CHAR == eColor[1]->next->tag) {
      r05_builtin_error("fill style color too long");
    } else {
      r05_recognition_impossible();
    }
  }

  color[color_len] = '\0';

  setFillStyle(color);
}
