/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Arg)
R05_DECLARE_ENTRY_FUNCTION(Mul)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(SetFillStyle)
R05_DECLARE_ENTRY_FUNCTION(BeginPath)
R05_DECLARE_ENTRY_FUNCTION(Fill)
R05_DECLARE_ENTRY_FUNCTION(Arc)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Trim)
R05_DECLARE_ENTRY_FUNCTION(FPFm_ToInt)
R05_DECLARE_ENTRY_FUNCTION(Linear)
R05_DECLARE_ENTRY_FUNCTION(Lagrange)
R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(ParsePoints)
R05_DECLARE_LOCAL_FUNCTION(ParseRow)
R05_DECLARE_LOCAL_FUNCTION(Split)
R05_DECLARE_LOCAL_FUNCTION(JSFloatToFFm_Bracketed)
R05_DECLARE_LOCAL_FUNCTION(JSFloatToFF)
R05_DECLARE_LOCAL_FUNCTION(Next)
R05_DECLARE_LOCAL_FUNCTION(ToCanvasCenterX)
R05_DECLARE_LOCAL_FUNCTION(ToCanvasCenterY)
R05_DECLARE_LOCAL_FUNCTION(CanvasScale)
R05_DECLARE_LOCAL_FUNCTION(DrawPoint)

/*
*$FROM Canvas
*/
/*
*$FROM LibraryEx
*/
/*
*$FROM FPF
*/
/*
*$FROM Interpolation
*/
R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[14] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Next);
    r05_alloc_open_bracket(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_JSFloatToFF);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ParsePoints);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[2]);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[3], p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[4]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePoints, "ParsePoints") {
  r05_this_is_generated_function();

  do {
    /* e.Points: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.Points */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_ParseRow);
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Split);
    r05_alloc_char('\n');
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Trim);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[4]);
    r05_push_stack(p[11]);
    r05_push_stack(p[7]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[5], p[6]);
    r05_splice_evar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ParseRow, "ParseRow") {
  r05_this_is_generated_function();

  do {
    /* e.Row: 4 */
    struct r05_node *p[13] = { 0 };
    /* (e.Row) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_JSFloatToFFm_Bracketed);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Split);
    r05_alloc_char(';');
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[6], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[7]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Split, "Split") {
  r05_this_is_generated_function();

  do {
    /* s.Del: 2, 5 */
    /* e.StrB: 3 */
    /* e.StrE: 6 */
    struct r05_node *p[14] = { 0 };
    /* s.Del e.StrB s.Del e.StrE */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    p[3] = p[2]->next;
    p[4] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+5, p[4], p[1], p+2))
        continue;
      r05_close_evar(p+6, p[5], p[1]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+8);
      r05_alloc_insert_pos(p+9);
      r05_alloc_close_bracket(p+10);
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_Split);
      r05_alloc_svar(p+2);
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_call(p+13);
      r05_push_stack(p[13]);
      r05_push_stack(p[11]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[8], p[10]);
      r05_correct_evar(p+3);
      r05_splice_evar(p[9], p+3);
      r05_splice_evar(p[12], p+6);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+3, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Del: 2 */
    /* e.Str: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.Del e.Str */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(JSFloatToFFm_Bracketed, "JSFloatToFF-Bracketed") {
  r05_this_is_generated_function();

  do {
    /* e.Float: 4 */
    struct r05_node *p[11] = { 0 };
    /* (e.Float) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_JSFloatToFF);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[6], p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(JSFloatToFF, "JSFloatToFF") {
  r05_this_is_generated_function();

  do {
    /* e.Int: 2 */
    /* s.F0: 5 */
    /* s.F1: 6 */
    /* s.F2: 7 */
    /* e.Rest: 8 */
    struct r05_node *p[13] = { 0 };
    /* e.Int '.' s.F0 s.F1 s.F2 e.Rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_char_left(p+4, p[3], p[1], '.'))
        continue;
      if (! r05_svar_left(p+5, p[4], p[1]))
        continue;
      if (! r05_svar_left(p+6, p[5], p[1]))
        continue;
      if (! r05_svar_left(p+7, p[6], p[1]))
        continue;
      r05_close_evar(p+8, p[7], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_Numb);
      r05_alloc_insert_pos(p+11);
      r05_alloc_svar(p+5);
      r05_alloc_svar(p+6);
      r05_alloc_svar(p+7);
      r05_alloc_close_call(p+12);
      r05_push_stack(p[12]);
      r05_push_stack(p[10]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[11], p+2);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.F1: 2 */
    /* s.F0: 3 */
    /* e.Int: 5 */
    struct r05_node *p[10] = { 0 };
    /* e.Int '.' s.F0 s.F1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_right(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_right(p+3, p[0], p[2]))
      continue;
    if (! r05_char_right(p+4, p[0], p[3], '.'))
      continue;
    r05_close_evar(p+5, p[0], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_insert_pos(p+8);
    r05_alloc_svar(p+3);
    r05_alloc_svar(p+2);
    r05_alloc_char('0');
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.F0: 2 */
    /* e.Int: 4 */
    struct r05_node *p[9] = { 0 };
    /* e.Int '.' s.F0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_right(p+2, p[0], p[1]))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], '.'))
      continue;
    r05_close_evar(p+4, p[0], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_insert_pos(p+7);
    r05_alloc_svar(p+2);
    r05_alloc_chars("00", 2);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Int: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Int */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_insert_pos(p+5);
    r05_alloc_chars("000", 3);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Next, "Next") {
  r05_this_is_generated_function();

  do {
    /* e.X: 4 */
    /* e.Points: 6 */
    struct r05_node *p[44] = { 0 };
    /* (e.X) e.Points */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 0 0)", 10);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_DrawPoint);
    r05_alloc_number(2UL);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(255 0 0)", 12);
    r05_alloc_close_call(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DrawPoint);
    r05_alloc_number(1UL);
    r05_alloc_open_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Lagrange);
    r05_alloc_open_bracket(p+24);
    r05_alloc_evar(p+4);
    r05_alloc_close_bracket(p+25);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 0 255)", 12);
    r05_alloc_close_call(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_DrawPoint);
    r05_alloc_number(1UL);
    r05_alloc_open_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_evar(p+4);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_Linear);
    r05_alloc_open_bracket(p+38);
    r05_alloc_evar(p+4);
    r05_alloc_close_bracket(p+39);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_close_call(p+43);
    r05_push_stack(p[43]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[33], p[42]);
    r05_link_brackets(p[36], p[41]);
    r05_push_stack(p[40]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[38], p[39]);
    r05_link_brackets(p[34], p[35]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[18], p[28]);
    r05_link_brackets(p[22], p[27]);
    r05_push_stack(p[26]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+4);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[11], p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[13], p+6);
    r05_splice_evar(p[20], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ToCanvasCenterX, "ToCanvasCenterX") {
  r05_this_is_generated_function();

  do {
    /* e.A: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.A */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_number(500UL);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ToCanvasCenterY, "ToCanvasCenterY") {
  r05_this_is_generated_function();

  do {
    /* e.A: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.A */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_number(500UL);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CanvasScale, "CanvasScale") {
  r05_this_is_generated_function();

  do {
    /* e.A: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.A */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_number(30UL);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DrawPoint, "DrawPoint") {
  r05_this_is_generated_function();

  do {
    /* e.X: 8 */
    /* e.Y: 10 */
    /* s.R: 12 */
    struct r05_node *p[37] = { 0 };
    /* s.R ((e.X) (e.Y)) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[3]))
      continue;
    if (! r05_empty_hole(p[7], p[3]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[12], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_BeginPath);
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Arc);
    r05_alloc_open_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ToCanvasCenterX);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_FPFm_ToInt);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_CanvasScale);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_ToCanvasCenterY);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_FPFm_ToInt);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_CanvasScale);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+12);
    r05_alloc_number(0UL);
    r05_alloc_number(7UL);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+34);
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_Fill);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[25], p[33]);
    r05_push_stack(p[32]);
    r05_push_stack(p[26]);
    r05_push_stack(p[31]);
    r05_push_stack(p[27]);
    r05_push_stack(p[30]);
    r05_push_stack(p[28]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[16], p[24]);
    r05_push_stack(p[23]);
    r05_push_stack(p[17]);
    r05_push_stack(p[22]);
    r05_push_stack(p[18]);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+8);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_splice_evar(p[20], p+8);
    r05_splice_evar(p[29], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
