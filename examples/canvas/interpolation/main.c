/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Arg)
R05_DECLARE_ENTRY_FUNCTION(Div)
R05_DECLARE_ENTRY_FUNCTION(Mul)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(FillRect)
R05_DECLARE_ENTRY_FUNCTION(SetFillStyle)
R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(SpeedScale)
R05_DECLARE_LOCAL_FUNCTION(CanvasCenterX)
R05_DECLARE_LOCAL_FUNCTION(CanvasCenterY)
R05_DECLARE_LOCAL_FUNCTION(CanvasScale)
R05_DECLARE_LOCAL_FUNCTION(FFScale)
R05_DECLARE_LOCAL_FUNCTION(FFScaleH)
R05_DECLARE_LOCAL_FUNCTION(FFWrap)
R05_DECLARE_LOCAL_FUNCTION(FFMul)
R05_DECLARE_LOCAL_FUNCTION(FFDiv)
R05_DECLARE_LOCAL_FUNCTION(FFAdd)
R05_DECLARE_LOCAL_FUNCTION(FFSub)
R05_DECLARE_LOCAL_FUNCTION(Next)
R05_DECLARE_LOCAL_FUNCTION(Draw)
R05_DECLARE_LOCAL_FUNCTION(P3)
R05_DECLARE_LOCAL_FUNCTION(L0)
R05_DECLARE_LOCAL_FUNCTION(L1)
R05_DECLARE_LOCAL_FUNCTION(L2)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[48] = { 0 };
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
    r05_alloc_function(&r05f_SpeedScale);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(2UL);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(3UL);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(4UL);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(5UL);
    r05_alloc_close_call(p+38);
    r05_alloc_close_call(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_open_call(p+42);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(6UL);
    r05_alloc_close_call(p+44);
    r05_alloc_close_call(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_call(p+47);
    r05_push_stack(p[47]);
    r05_push_stack(p[2]);
    r05_link_brackets(p[41], p[46]);
    r05_push_stack(p[45]);
    r05_push_stack(p[42]);
    r05_push_stack(p[44]);
    r05_push_stack(p[43]);
    r05_link_brackets(p[35], p[40]);
    r05_push_stack(p[39]);
    r05_push_stack(p[36]);
    r05_push_stack(p[38]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[29], p[34]);
    r05_push_stack(p[33]);
    r05_push_stack(p[30]);
    r05_push_stack(p[32]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[23], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[24]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[17], p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[18]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[11], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[3], p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SpeedScale, "SpeedScale") {
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
    r05_alloc_number(2UL);
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

R05_DEFINE_LOCAL_FUNCTION(CanvasCenterX, "CanvasCenterX") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(500UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CanvasCenterY, "CanvasCenterY") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(500UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
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

R05_DEFINE_LOCAL_FUNCTION(FFScale, "FFScale") {
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

R05_DEFINE_LOCAL_FUNCTION(FFScaleH, "FFScaleH") {
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

R05_DEFINE_LOCAL_FUNCTION(FFWrap, "FFWrap") {
  r05_this_is_generated_function();

  do {
    /* s.A: 2 */
    struct r05_node *p[3] = { 0 };
    /* s.A */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.A: 3 */
    struct r05_node *p[4] = { 0 };
    /* '-' s.A */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '-'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('-');
    r05_alloc_svar(p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.A: 3 */
    /* e.B: 4 */
    struct r05_node *p[9] = { 0 };
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
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_FFWrap);
    r05_alloc_insert_pos(p+7);
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
    /* s.A: 2 */
    /* e.B: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.A e.B */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_FFWrap);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
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
    r05_alloc_function(&r05f_FFScaleH);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_FFScaleH);
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
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_FFScale);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[9]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_evar(p[14], p+6);
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
    /* e.x: 16 */
    /* e.x0: 18 */
    /* e.y0: 20 */
    /* e.x1: 22 */
    /* e.y1: 24 */
    /* e.x2: 26 */
    /* e.y2: 28 */
    struct r05_node *p[61] = { 0 };
    /* (e.x) (e.x0) (e.y0) (e.x1) (e.y1) (e.x2) (e.y2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    if (! r05_empty_hole(p[15], p[1]))
      continue;
    r05_close_evar(p+16, p[2], p[3]);
    r05_close_evar(p+18, p[4], p[5]);
    r05_close_evar(p+20, p[6], p[7]);
    r05_close_evar(p+22, p[8], p[9]);
    r05_close_evar(p+24, p[10], p[11]);
    r05_close_evar(p+26, p[12], p[13]);
    r05_close_evar(p+28, p[14], p[15]);

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("e.x:  ", 6);
    r05_alloc_insert_pos(p+31);
    r05_alloc_chars(" e.x0: ", 7);
    r05_alloc_insert_pos(p+32);
    r05_alloc_chars(" e.y0: ", 7);
    r05_alloc_insert_pos(p+33);
    r05_alloc_chars(" e.x1: ", 7);
    r05_alloc_insert_pos(p+34);
    r05_alloc_chars(" e.y1: ", 7);
    r05_alloc_insert_pos(p+35);
    r05_alloc_chars(" e.x2: ", 7);
    r05_alloc_insert_pos(p+36);
    r05_alloc_chars(" e.y2: ", 7);
    r05_alloc_insert_pos(p+37);
    r05_alloc_char(' ');
    r05_alloc_close_call(p+38);
    r05_alloc_open_call(p+39);
    r05_alloc_function(&r05f_Draw);
    r05_alloc_open_bracket(p+40);
    r05_alloc_evar(p+16);
    r05_alloc_close_bracket(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_P3);
    r05_alloc_open_bracket(p+44);
    r05_alloc_evar(p+16);
    r05_alloc_close_bracket(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_evar(p+18);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_evar(p+20);
    r05_alloc_close_bracket(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_evar(p+22);
    r05_alloc_close_bracket(p+51);
    r05_alloc_open_bracket(p+52);
    r05_alloc_evar(p+24);
    r05_alloc_close_bracket(p+53);
    r05_alloc_open_bracket(p+54);
    r05_alloc_evar(p+26);
    r05_alloc_close_bracket(p+55);
    r05_alloc_open_bracket(p+56);
    r05_alloc_evar(p+28);
    r05_alloc_close_bracket(p+57);
    r05_alloc_close_call(p+58);
    r05_alloc_close_bracket(p+59);
    r05_alloc_close_call(p+60);
    r05_push_stack(p[60]);
    r05_push_stack(p[39]);
    r05_link_brackets(p[42], p[59]);
    r05_push_stack(p[58]);
    r05_push_stack(p[43]);
    r05_link_brackets(p[56], p[57]);
    r05_link_brackets(p[54], p[55]);
    r05_link_brackets(p[52], p[53]);
    r05_link_brackets(p[50], p[51]);
    r05_link_brackets(p[48], p[49]);
    r05_link_brackets(p[46], p[47]);
    r05_link_brackets(p[44], p[45]);
    r05_link_brackets(p[40], p[41]);
    r05_push_stack(p[38]);
    r05_push_stack(p[30]);
    r05_correct_evar(p+28);
    r05_correct_evar(p+26);
    r05_correct_evar(p+24);
    r05_correct_evar(p+22);
    r05_correct_evar(p+20);
    r05_correct_evar(p+18);
    r05_correct_evar(p+16);
    r05_splice_evar(p[31], p+16);
    r05_splice_evar(p[32], p+18);
    r05_splice_evar(p[33], p+20);
    r05_splice_evar(p[34], p+22);
    r05_splice_evar(p[35], p+24);
    r05_splice_evar(p[36], p+26);
    r05_splice_evar(p[37], p+28);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Draw, "Draw") {
  r05_this_is_generated_function();

  do {
    /* e.x: 6 */
    /* e.y: 8 */
    struct r05_node *p[40] = { 0 };
    /* (e.x) (e.y) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 0 0)", 10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_FFScale);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_CanvasScale);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_CanvasCenterX);
    r05_alloc_close_call(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_open_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_CanvasCenterY);
    r05_alloc_close_call(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_FFScale);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_CanvasScale);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_call(p+35);
    r05_alloc_close_call(p+36);
    r05_alloc_close_call(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_number(2UL);
    r05_alloc_number(2UL);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[26], p[38]);
    r05_push_stack(p[37]);
    r05_push_stack(p[27]);
    r05_push_stack(p[36]);
    r05_push_stack(p[32]);
    r05_push_stack(p[35]);
    r05_push_stack(p[33]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[28], p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[13], p[25]);
    r05_push_stack(p[24]);
    r05_push_stack(p[14]);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[15], p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[16]);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+6);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[18], p+6);
    r05_splice_evar(p[34], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(P3, "P3") {
  r05_this_is_generated_function();

  do {
    /* e.x: 16 */
    /* e.x0: 18 */
    /* e.y0: 20 */
    /* e.x1: 22 */
    /* e.y1: 24 */
    /* e.x2: 26 */
    /* e.y2: 28 */
    struct r05_node *p[87] = { 0 };
    /* (e.x) (e.x0) (e.y0) (e.x1) (e.y1) (e.x2) (e.y2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    if (! r05_empty_hole(p[15], p[1]))
      continue;
    r05_close_evar(p+16, p[2], p[3]);
    r05_close_evar(p+18, p[4], p[5]);
    r05_close_evar(p+20, p[6], p[7]);
    r05_close_evar(p+22, p[8], p[9]);
    r05_close_evar(p+24, p[10], p[11]);
    r05_close_evar(p+26, p[12], p[13]);
    r05_close_evar(p+28, p[14], p[15]);

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_FFAdd);
    r05_alloc_open_bracket(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_L0);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_call(p+47);
    r05_alloc_close_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_call(p+50);
    r05_alloc_close_bracket(p+51);
    r05_alloc_open_call(p+52);
    r05_alloc_function(&r05f_FFAdd);
    r05_alloc_open_bracket(p+53);
    r05_alloc_open_call(p+54);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+55);
    r05_alloc_open_call(p+56);
    r05_alloc_function(&r05f_L1);
    r05_alloc_open_bracket(p+57);
    r05_alloc_evar(p+16);
    r05_alloc_close_bracket(p+58);
    r05_alloc_open_bracket(p+59);
    r05_alloc_evar(p+18);
    r05_alloc_close_bracket(p+60);
    r05_alloc_open_bracket(p+61);
    r05_alloc_evar(p+22);
    r05_alloc_close_bracket(p+62);
    r05_alloc_open_bracket(p+63);
    r05_alloc_evar(p+26);
    r05_alloc_close_bracket(p+64);
    r05_alloc_close_call(p+65);
    r05_alloc_close_bracket(p+66);
    r05_alloc_insert_pos(p+67);
    r05_alloc_close_call(p+68);
    r05_alloc_close_bracket(p+69);
    r05_alloc_open_call(p+70);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+71);
    r05_alloc_open_call(p+72);
    r05_alloc_function(&r05f_L2);
    r05_alloc_open_bracket(p+73);
    r05_alloc_evar(p+16);
    r05_alloc_close_bracket(p+74);
    r05_alloc_open_bracket(p+75);
    r05_alloc_evar(p+18);
    r05_alloc_close_bracket(p+76);
    r05_alloc_open_bracket(p+77);
    r05_alloc_evar(p+22);
    r05_alloc_close_bracket(p+78);
    r05_alloc_open_bracket(p+79);
    r05_alloc_evar(p+26);
    r05_alloc_close_bracket(p+80);
    r05_alloc_close_call(p+81);
    r05_alloc_close_bracket(p+82);
    r05_alloc_insert_pos(p+83);
    r05_alloc_close_call(p+84);
    r05_alloc_close_call(p+85);
    r05_alloc_close_call(p+86);
    r05_push_stack(p[86]);
    r05_push_stack(p[30]);
    r05_push_stack(p[85]);
    r05_push_stack(p[52]);
    r05_push_stack(p[84]);
    r05_push_stack(p[70]);
    r05_correct_evar(p+28);
    r05_link_brackets(p[71], p[82]);
    r05_push_stack(p[81]);
    r05_push_stack(p[72]);
    r05_link_brackets(p[79], p[80]);
    r05_link_brackets(p[77], p[78]);
    r05_link_brackets(p[75], p[76]);
    r05_link_brackets(p[73], p[74]);
    r05_link_brackets(p[53], p[69]);
    r05_push_stack(p[68]);
    r05_push_stack(p[54]);
    r05_correct_evar(p+24);
    r05_link_brackets(p[55], p[66]);
    r05_push_stack(p[65]);
    r05_push_stack(p[56]);
    r05_link_brackets(p[63], p[64]);
    r05_link_brackets(p[61], p[62]);
    r05_link_brackets(p[59], p[60]);
    r05_link_brackets(p[57], p[58]);
    r05_link_brackets(p[31], p[51]);
    r05_push_stack(p[50]);
    r05_push_stack(p[32]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[33], p[48]);
    r05_push_stack(p[47]);
    r05_push_stack(p[34]);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+16);
    r05_splice_evar(p[36], p+16);
    r05_splice_evar(p[39], p+18);
    r05_splice_evar(p[42], p+22);
    r05_splice_evar(p[45], p+26);
    r05_splice_evar(p[49], p+20);
    r05_splice_evar(p[67], p+24);
    r05_splice_evar(p[83], p+28);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(L0, "L0") {
  r05_this_is_generated_function();

  do {
    /* e.x: 10 */
    /* e.x0: 12 */
    /* e.x1: 14 */
    /* e.x2: 16 */
    struct r05_node *p[50] = { 0 };
    /* (e.x) (e.x0) (e.x1) (e.x2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_FFDiv);
    r05_alloc_open_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+30);
    r05_alloc_evar(p+10);
    r05_alloc_close_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_evar(p+14);
    r05_alloc_close_call(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_call(p+44);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+45);
    r05_alloc_evar(p+12);
    r05_alloc_close_bracket(p+46);
    r05_alloc_evar(p+16);
    r05_alloc_close_call(p+47);
    r05_alloc_close_call(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[18]);
    r05_push_stack(p[48]);
    r05_push_stack(p[36]);
    r05_push_stack(p[47]);
    r05_push_stack(p[44]);
    r05_link_brackets(p[45], p[46]);
    r05_link_brackets(p[37], p[43]);
    r05_push_stack(p[42]);
    r05_push_stack(p[38]);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[20]);
    r05_push_stack(p[33]);
    r05_push_stack(p[29]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[30], p[31]);
    r05_link_brackets(p[21], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[24], p+10);
    r05_splice_evar(p[26], p+14);
    r05_splice_evar(p[32], p+16);
    r05_splice_evar(p[40], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(L1, "L1") {
  r05_this_is_generated_function();

  do {
    /* e.x: 10 */
    /* e.x0: 12 */
    /* e.x1: 14 */
    /* e.x2: 16 */
    struct r05_node *p[50] = { 0 };
    /* (e.x) (e.x0) (e.x1) (e.x2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_FFDiv);
    r05_alloc_open_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+30);
    r05_alloc_evar(p+10);
    r05_alloc_close_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_evar(p+12);
    r05_alloc_close_call(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_call(p+44);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+45);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+46);
    r05_alloc_evar(p+16);
    r05_alloc_close_call(p+47);
    r05_alloc_close_call(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[18]);
    r05_push_stack(p[48]);
    r05_push_stack(p[36]);
    r05_push_stack(p[47]);
    r05_push_stack(p[44]);
    r05_link_brackets(p[45], p[46]);
    r05_link_brackets(p[37], p[43]);
    r05_push_stack(p[42]);
    r05_push_stack(p[38]);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[19], p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[20]);
    r05_push_stack(p[33]);
    r05_push_stack(p[29]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[30], p[31]);
    r05_link_brackets(p[21], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[24], p+10);
    r05_splice_evar(p[26], p+12);
    r05_splice_evar(p[32], p+16);
    r05_splice_evar(p[40], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(L2, "L2") {
  r05_this_is_generated_function();

  do {
    /* e.x: 10 */
    /* e.x0: 12 */
    /* e.x1: 14 */
    /* e.x2: 16 */
    struct r05_node *p[50] = { 0 };
    /* (e.x) (e.x0) (e.x1) (e.x2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_FFDiv);
    r05_alloc_open_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+30);
    r05_alloc_evar(p+10);
    r05_alloc_close_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_FFMul);
    r05_alloc_open_bracket(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_evar(p+12);
    r05_alloc_close_call(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_call(p+44);
    r05_alloc_function(&r05f_FFSub);
    r05_alloc_open_bracket(p+45);
    r05_alloc_evar(p+16);
    r05_alloc_close_bracket(p+46);
    r05_alloc_evar(p+14);
    r05_alloc_close_call(p+47);
    r05_alloc_close_call(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[18]);
    r05_push_stack(p[48]);
    r05_push_stack(p[36]);
    r05_push_stack(p[47]);
    r05_push_stack(p[44]);
    r05_link_brackets(p[45], p[46]);
    r05_link_brackets(p[37], p[43]);
    r05_push_stack(p[42]);
    r05_push_stack(p[38]);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[19], p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[20]);
    r05_push_stack(p[33]);
    r05_push_stack(p[29]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[30], p[31]);
    r05_link_brackets(p[21], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[24], p+10);
    r05_splice_evar(p[26], p+12);
    r05_splice_evar(p[32], p+14);
    r05_splice_evar(p[40], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
