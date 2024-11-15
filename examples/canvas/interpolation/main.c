/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Arg)
R05_DECLARE_ENTRY_FUNCTION(Div)
R05_DECLARE_ENTRY_FUNCTION(Mul)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(SetFillStyle)
R05_DECLARE_ENTRY_FUNCTION(BeginPath)
R05_DECLARE_ENTRY_FUNCTION(Fill)
R05_DECLARE_ENTRY_FUNCTION(Arc)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(Reduce)
R05_DECLARE_ENTRY_FUNCTION(Trim)
R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(ParsePoints)
R05_DECLARE_LOCAL_FUNCTION(ParseRow)
R05_DECLARE_LOCAL_FUNCTION(Split)
R05_DECLARE_LOCAL_FUNCTION(JSFloatToFFm_Bracketed)
R05_DECLARE_LOCAL_FUNCTION(JSFloatToFF)
R05_DECLARE_LOCAL_FUNCTION(FFInt)
R05_DECLARE_LOCAL_FUNCTION(FFIntH)
R05_DECLARE_LOCAL_FUNCTION(FFUpScale)
R05_DECLARE_LOCAL_FUNCTION(FFWrap)
R05_DECLARE_LOCAL_FUNCTION(FFMul)
R05_DECLARE_LOCAL_FUNCTION(FFDiv)
R05_DECLARE_LOCAL_FUNCTION(FFAdd)
R05_DECLARE_LOCAL_FUNCTION(FFSub)
R05_DECLARE_LOCAL_FUNCTION(Next)
R05_DECLARE_LOCAL_FUNCTION(Lagrange)
R05_DECLARE_LOCAL_FUNCTION(Lagrangem_Unwrap)
R05_DECLARE_LOCAL_FUNCTION(Lagrangem_Sum)
R05_DECLARE_LOCAL_FUNCTION(ExtractXs)
R05_DECLARE_LOCAL_FUNCTION(Li)
R05_DECLARE_LOCAL_FUNCTION(Lim_Unwrap)
R05_DECLARE_LOCAL_FUNCTION(Lim_Product)
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
    /* s.F3: 8 */
    /* e.Rest: 9 */
    struct r05_node *p[14] = { 0 };
    /* e.Int '.' s.F0 s.F1 s.F2 s.F3 e.Rest */
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
      if (! r05_svar_left(p+8, p[7], p[1]))
        continue;
      r05_close_evar(p+9, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_Numb);
      r05_alloc_insert_pos(p+12);
      r05_alloc_svar(p+5);
      r05_alloc_svar(p+6);
      r05_alloc_svar(p+7);
      r05_alloc_svar(p+8);
      r05_alloc_close_call(p+13);
      r05_push_stack(p[13]);
      r05_push_stack(p[11]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[12], p+2);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.F2: 2 */
    /* s.F1: 3 */
    /* s.F0: 4 */
    /* e.Int: 6 */
    struct r05_node *p[11] = { 0 };
    /* e.Int '.' s.F0 s.F1 s.F2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_right(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_right(p+3, p[0], p[2]))
      continue;
    if (! r05_svar_right(p+4, p[0], p[3]))
      continue;
    if (! r05_char_right(p+5, p[0], p[4], '.'))
      continue;
    r05_close_evar(p+6, p[0], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_insert_pos(p+9);
    r05_alloc_svar(p+4);
    r05_alloc_svar(p+3);
    r05_alloc_svar(p+2);
    r05_alloc_char('0');
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
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
    r05_alloc_chars("00", 2);
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
    r05_alloc_chars("000", 3);
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
    r05_alloc_chars("0000", 4);
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

R05_DEFINE_LOCAL_FUNCTION(FFInt, "FFInt") {
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
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_number(10000UL);
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

R05_DEFINE_LOCAL_FUNCTION(FFIntH, "FFIntH") {
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
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_number(100UL);
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

R05_DEFINE_LOCAL_FUNCTION(FFUpScale, "FFUpScale") {
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
    r05_alloc_number(10000UL);
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

R05_DEFINE_LOCAL_FUNCTION(FFWrap, "FFWrap") {
  r05_this_is_generated_function();

  do {
    /* s.A: 3 */
    /* e.B: 4 */
    struct r05_node *p[6] = { 0 };
    /* '-' s.A e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '-'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_char('-');
    r05_alloc_svar(p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.A: 2 */
    /* e.B: 3 */
    struct r05_node *p[5] = { 0 };
    /* s.A e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FFMul, "FFMul") {
  r05_this_is_generated_function();

  do {
    /* e.A: 4 */
    /* e.B: 6 */
    struct r05_node *p[20] = { 0 };
    /* (e.A) e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FFWrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_FFIntH);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_FFIntH);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[8]);
    r05_push_stack(p[18]);
    r05_push_stack(p[9]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[10], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_evar(p[16], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FFDiv, "FFDiv") {
  r05_this_is_generated_function();

  do {
    /* e.A: 4 */
    /* e.B: 6 */
    struct r05_node *p[18] = { 0 };
    /* (e.A) e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FFWrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_FFUpScale);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[10], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_evar(p[15], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.A: 5 */
    struct r05_node *p[7] = { 0 };
    /* (e.A) 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_right(p+2, p[0], p[1], 0UL))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_number(4294967295UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.A: 6 */
    struct r05_node *p[8] = { 0 };
    /* (e.A) '-' 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_right(p+2, p[0], p[1], 0UL))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], '-'))
      continue;
    if (! r05_brackets_left(p+4, p[0], p[3]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_char('-');
    r05_alloc_number(4294967295UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FFAdd, "FFAdd") {
  r05_this_is_generated_function();

  do {
    /* e.A: 4 */
    /* e.B: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.A) e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FFWrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[8]);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FFSub, "FFSub") {
  r05_this_is_generated_function();

  do {
    /* e.A: 4 */
    /* e.B: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.A) e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FFWrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[8]);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Next, "Next") {
  r05_this_is_generated_function();

  do {
    /* e.X: 4 */
    /* e.Points: 6 */
    struct r05_node *p[30] = { 0 };
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
    r05_alloc_number(5UL);
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

R05_DEFINE_LOCAL_FUNCTION(Lagrange, "Lagrange") {
  r05_this_is_generated_function();

  do {
    /* e.X: 4 */
    /* e.Points: 6 */
    struct r05_node *p[24] = { 0 };
    /* (e.X) e.Points */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Lagrangem_Unwrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Reduce);
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_Lagrangem_Sum);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_ExtractXs);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_number(0UL);
    r05_alloc_close_bracket(p+20);
    r05_alloc_number(0UL);
    r05_alloc_close_bracket(p+21);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[8]);
    r05_push_stack(p[22]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[18], p[21]);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[10], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_evar(p[15], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Lagrangem_Unwrap, "Lagrange-Unwrap") {
  r05_this_is_generated_function();

  do {
    /* e.Acc: 6 */
    /* s.I: 8 */
    struct r05_node *p[10] = { 0 };
    /* ((e.Acc) s.I) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+9);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Lagrangem_Sum, "Lagrange-Sum") {
  r05_this_is_generated_function();

  do {
    /* e.X: 14 */
    /* e.Xs: 16 */
    /* e.Acc: 18 */
    /* e.Xi: 20 */
    /* e.Yi: 22 */
    /* s.I: 24 */
    struct r05_node *p[50] = { 0 };
    /* (e.X) e.Xs ((e.Acc) s.I) ((e.Xi) (e.Yi)) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[5]))
      continue;
    if (! r05_brackets_right(p+10, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+12, p[10], p[11]))
      continue;
    if (! r05_empty_hole(p[9], p[5]))
      continue;
    r05_close_evar(p+14, p[2], p[3]);
    r05_close_evar(p+16, p[3], p[10]);
    r05_close_evar(p+18, p[12], p[13]);
    r05_close_evar(p+20, p[6], p[7]);
    r05_close_evar(p+22, p[8], p[9]);
    if (! r05_svar_left(p+24, p[13], p[11]))
      continue;
    if (! r05_empty_hole(p[24], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_FFAdd);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_Li);
    r05_alloc_svar(p+24);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_call(p+43);
    r05_alloc_close_call(p+44);
    r05_alloc_close_call(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_call(p+47);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+24);
    r05_alloc_close_call(p+48);
    r05_alloc_close_bracket(p+49);
    r05_link_brackets(p[25], p[49]);
    r05_push_stack(p[48]);
    r05_push_stack(p[47]);
    r05_link_brackets(p[26], p[46]);
    r05_push_stack(p[45]);
    r05_push_stack(p[27]);
    r05_push_stack(p[44]);
    r05_push_stack(p[31]);
    r05_push_stack(p[43]);
    r05_push_stack(p[35]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+18);
    r05_splice_evar(p[29], p+18);
    r05_splice_evar(p[33], p+22);
    r05_splice_evar(p[37], p+14);
    r05_splice_evar(p[40], p+20);
    r05_splice_evar(p[42], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractXs, "ExtractXs") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.X: 8 */
    /* e.Y: 10 */
    /* e.Points: 12 */
    struct r05_node *p[20] = { 0 };
    /* ((e.X) (e.Y)) e.Points */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[3]))
      continue;
    if (! r05_empty_hole(p[7], p[3]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ExtractXs);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[15], p+8);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Li, "Li") {
  r05_this_is_generated_function();

  do {
    /* s.I: 2 */
    /* e.X: 7 */
    /* e.Xi: 9 */
    /* e.Xs: 11 */
    struct r05_node *p[32] = { 0 };
    /* s.I (e.X) (e.Xi) e.Xs */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Lim_Unwrap);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Reduce);
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Lim_Product);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_FFUpScale);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_number(0UL);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[13]);
    r05_push_stack(p[30]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[23], p[28]);
    r05_link_brackets(p[24], p[27]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[15], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[20], p+9);
    r05_splice_evar(p[29], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Lim_Unwrap, "Li-Unwrap") {
  r05_this_is_generated_function();

  do {
    /* e.Acc: 6 */
    /* s.J: 8 */
    struct r05_node *p[10] = { 0 };
    /* ((e.Acc) s.J) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+9);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Lim_Product, "Li-Product") {
  r05_this_is_generated_function();

  do {
    /* e.X: 12 */
    /* e.Xi: 14 */
    /* e.Acc: 16 */
    /* e.Xj: 18 */
    /* s.I: 20, 21 */
    struct r05_node *p[29] = { 0 };
    /* s.I (e.X) (e.Xi) ((e.Acc) s.I) (e.Xj) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_brackets_right(p+8, p[0], p[4]))
      continue;
    if (! r05_brackets_right(p+10, p[0], p[8]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[2], p[3]);
    if (! r05_svar_left(p+20, p[0], p[10]))
      continue;
    if (! r05_empty_hole(p[20], p[10]))
      continue;
    if (! r05_repeated_svar_left(p+21, p[7], p[5], p+20))
      continue;
    if (! r05_empty_hole(p[21], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+20);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[22], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+16);
    r05_splice_evar(p[24], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.X: 12 */
    /* e.Xi: 14 */
    /* e.Acc: 16 */
    /* e.Xj: 18 */
    /* s.I: 20 */
    /* s.J: 21 */
    struct r05_node *p[48] = { 0 };
    /* s.I (e.X) (e.Xi) ((e.Acc) s.J) (e.Xj) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_brackets_right(p+8, p[0], p[4]))
      continue;
    if (! r05_brackets_right(p+10, p[0], p[8]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[2], p[3]);
    if (! r05_svar_left(p+20, p[0], p[10]))
      continue;
    if (! r05_empty_hole(p[20], p[10]))
      continue;
    if (! r05_svar_left(p+21, p[7], p[5]))
      continue;
    if (! r05_empty_hole(p[21], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_FFDiv);
    r05_alloc_open_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_call(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_evar(p+18);
    r05_alloc_close_call(p+41);
    r05_alloc_close_call(p+42);
    r05_alloc_close_call(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_call(p+45);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+21);
    r05_alloc_close_call(p+46);
    r05_alloc_close_bracket(p+47);
    r05_link_brackets(p[22], p[47]);
    r05_push_stack(p[46]);
    r05_push_stack(p[45]);
    r05_link_brackets(p[23], p[44]);
    r05_push_stack(p[43]);
    r05_push_stack(p[24]);
    r05_push_stack(p[42]);
    r05_push_stack(p[28]);
    r05_push_stack(p[41]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[29], p[36]);
    r05_push_stack(p[35]);
    r05_push_stack(p[30]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+16);
    r05_splice_evar(p[26], p+16);
    r05_splice_evar(p[32], p+12);
    r05_splice_evar(p[34], p+18);
    r05_splice_evar(p[39], p+14);
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
    r05_alloc_number(10UL);
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
    r05_alloc_function(&r05f_FFInt);
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
    r05_alloc_function(&r05f_FFInt);
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
