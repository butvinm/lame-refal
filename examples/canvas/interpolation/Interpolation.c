/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(Reduce)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Add)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Div)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Mul)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Sub)
R05_DECLARE_ENTRY_FUNCTION(FPFm_FromInt)
R05_DECLARE_ENTRY_FUNCTION(Lagrange)
R05_DECLARE_LOCAL_FUNCTION(Lagrangem_Unwrap)
R05_DECLARE_LOCAL_FUNCTION(Lagrangem_Sum)
R05_DECLARE_LOCAL_FUNCTION(ExtractXs)
R05_DECLARE_LOCAL_FUNCTION(Li)
R05_DECLARE_LOCAL_FUNCTION(Lim_Unwrap)
R05_DECLARE_LOCAL_FUNCTION(Lim_Product)
R05_DECLARE_ENTRY_FUNCTION(Linear)
R05_DECLARE_LOCAL_FUNCTION(Linearu_check)
R05_DECLARE_LOCAL_FUNCTION(Linearu_cont)

/*
*$FROM LibraryEx
*/
/*
*$FROM FPF
*/
R05_DEFINE_ENTRY_FUNCTION(Lagrange, "Lagrange") {
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
    r05_alloc_function(&r05f_FPFm_Add);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_FPFm_Mul);
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
    r05_alloc_function(&r05f_FPFm_FromInt);
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
    r05_alloc_function(&r05f_FPFm_Mul);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_FPFm_Div);
    r05_alloc_open_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_FPFm_Sub);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_call(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_FPFm_Sub);
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

R05_DEFINE_ENTRY_FUNCTION(Linear, "Linear") {
  r05_this_is_generated_function();

  do {
    /* e.X: 22 */
    /* e.X0: 24 */
    /* e.Y0: 26 */
    /* e.X1: 28 */
    /* e.Y1: 30 */
    /* e.X2: 32 */
    /* e.Y2: 34 */
    /* e.Points: 36 */
    struct r05_node *p[68] = { 0 };
    /* (e.X) ((e.X0) (e.Y0)) ((e.X1) (e.Y1)) ((e.X2) (e.Y2)) e.Points */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[5]))
      continue;
    if (! r05_brackets_left(p+10, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[10], p[11]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[11]))
      continue;
    if (! r05_brackets_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+18, p[16], p[17]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[17]))
      continue;
    if (! r05_empty_hole(p[9], p[5]))
      continue;
    if (! r05_empty_hole(p[15], p[11]))
      continue;
    if (! r05_empty_hole(p[21], p[17]))
      continue;
    r05_close_evar(p+22, p[2], p[3]);
    r05_close_evar(p+24, p[6], p[7]);
    r05_close_evar(p+26, p[8], p[9]);
    r05_close_evar(p+28, p[12], p[13]);
    r05_close_evar(p+30, p[14], p[15]);
    r05_close_evar(p+32, p[18], p[19]);
    r05_close_evar(p+34, p[20], p[21]);
    r05_close_evar(p+36, p[17], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_Linearu_check);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_open_bracket(p+51);
    r05_alloc_insert_pos(p+52);
    r05_alloc_close_bracket(p+53);
    r05_alloc_open_bracket(p+54);
    r05_alloc_insert_pos(p+55);
    r05_alloc_close_bracket(p+56);
    r05_alloc_open_bracket(p+57);
    r05_alloc_insert_pos(p+58);
    r05_alloc_close_bracket(p+59);
    r05_alloc_open_bracket(p+60);
    r05_alloc_insert_pos(p+61);
    r05_alloc_close_bracket(p+62);
    r05_alloc_open_call(p+63);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_open_bracket(p+64);
    r05_alloc_evar(p+22);
    r05_alloc_close_bracket(p+65);
    r05_alloc_evar(p+28);
    r05_alloc_close_call(p+66);
    r05_alloc_close_call(p+67);
    r05_push_stack(p[67]);
    r05_push_stack(p[38]);
    r05_push_stack(p[66]);
    r05_push_stack(p[63]);
    r05_link_brackets(p[64], p[65]);
    r05_link_brackets(p[60], p[62]);
    r05_correct_evar(p+36);
    r05_link_brackets(p[57], p[59]);
    r05_correct_evar(p+34);
    r05_link_brackets(p[54], p[56]);
    r05_correct_evar(p+32);
    r05_link_brackets(p[51], p[53]);
    r05_correct_evar(p+30);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+28);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+24);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+22);
    r05_splice_evar(p[40], p+22);
    r05_splice_evar(p[43], p+24);
    r05_splice_evar(p[46], p+26);
    r05_splice_evar(p[49], p+28);
    r05_splice_evar(p[52], p+30);
    r05_splice_evar(p[55], p+32);
    r05_splice_evar(p[58], p+34);
    r05_splice_evar(p[61], p+36);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Linearu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Linearu_check, "Linear_check") {
  r05_this_is_generated_function();

  do {
    /* e.X: 19 */
    /* e.X0: 21 */
    /* e.Y0: 23 */
    /* e.X1: 25 */
    /* e.Y1: 27 */
    /* e.X2: 29 */
    /* e.Y2: 31 */
    /* e.Points: 33 */
    struct r05_node *p[57] = { 0 };
    /* (e.X) (e.X0) (e.Y0) (e.X1) (e.Y1) (e.X2) (e.Y2) (e.Points) '+' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '+'))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[2]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[2]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[2]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[2]))
      continue;
    if (! r05_empty_hole(p[18], p[2]))
      continue;
    r05_close_evar(p+19, p[3], p[4]);
    r05_close_evar(p+21, p[5], p[6]);
    r05_close_evar(p+23, p[7], p[8]);
    r05_close_evar(p+25, p[9], p[10]);
    r05_close_evar(p+27, p[11], p[12]);
    r05_close_evar(p+29, p[13], p[14]);
    r05_close_evar(p+31, p[15], p[16]);
    r05_close_evar(p+33, p[17], p[18]);

    r05_reset_allocator();
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_Linear);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_close_bracket(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_open_bracket(p+51);
    r05_alloc_insert_pos(p+52);
    r05_alloc_close_bracket(p+53);
    r05_alloc_close_bracket(p+54);
    r05_alloc_insert_pos(p+55);
    r05_alloc_close_call(p+56);
    r05_push_stack(p[56]);
    r05_push_stack(p[35]);
    r05_correct_evar(p+33);
    r05_link_brackets(p[47], p[54]);
    r05_link_brackets(p[51], p[53]);
    r05_correct_evar(p+31);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[39], p[46]);
    r05_link_brackets(p[43], p[45]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+19);
    r05_splice_evar(p[37], p+19);
    r05_splice_evar(p[41], p+25);
    r05_splice_evar(p[44], p+27);
    r05_splice_evar(p[49], p+29);
    r05_splice_evar(p[52], p+31);
    r05_splice_evar(p[55], p+33);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.X: 18 */
    /* e.X0: 20 */
    /* e.Y0: 22 */
    /* e.X1: 24 */
    /* e.Y1: 26 */
    /* e.X2: 28 */
    /* e.Y2: 30 */
    /* e.Points: 32 */
    /* e.Other: 34 */
    struct r05_node *p[66] = { 0 };
    /* (e.X) (e.X0) (e.Y0) (e.X1) (e.Y1) (e.X2) (e.Y2) (e.Points) e.Other */
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
    if (! r05_brackets_left(p+16, p[15], p[1]))
      continue;
    r05_close_evar(p+18, p[2], p[3]);
    r05_close_evar(p+20, p[4], p[5]);
    r05_close_evar(p+22, p[6], p[7]);
    r05_close_evar(p+24, p[8], p[9]);
    r05_close_evar(p+26, p[10], p[11]);
    r05_close_evar(p+28, p[12], p[13]);
    r05_close_evar(p+30, p[14], p[15]);
    r05_close_evar(p+32, p[16], p[17]);
    r05_close_evar(p+34, p[17], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_Linearu_cont);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_open_bracket(p+49);
    r05_alloc_insert_pos(p+50);
    r05_alloc_close_bracket(p+51);
    r05_alloc_open_bracket(p+52);
    r05_alloc_insert_pos(p+53);
    r05_alloc_close_bracket(p+54);
    r05_alloc_close_bracket(p+55);
    r05_alloc_open_bracket(p+56);
    r05_alloc_open_bracket(p+57);
    r05_alloc_insert_pos(p+58);
    r05_alloc_close_bracket(p+59);
    r05_alloc_open_bracket(p+60);
    r05_alloc_insert_pos(p+61);
    r05_alloc_close_bracket(p+62);
    r05_alloc_close_bracket(p+63);
    r05_alloc_insert_pos(p+64);
    r05_alloc_close_call(p+65);
    r05_push_stack(p[65]);
    r05_push_stack(p[36]);
    r05_correct_evar(p+32);
    r05_link_brackets(p[56], p[63]);
    r05_link_brackets(p[60], p[62]);
    r05_correct_evar(p+30);
    r05_link_brackets(p[57], p[59]);
    r05_correct_evar(p+28);
    r05_link_brackets(p[48], p[55]);
    r05_link_brackets(p[52], p[54]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[49], p[51]);
    r05_correct_evar(p+24);
    r05_link_brackets(p[40], p[47]);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+18);
    r05_splice_evar(p[38], p+18);
    r05_splice_evar(p[42], p+20);
    r05_splice_evar(p[45], p+22);
    r05_splice_evar(p[50], p+24);
    r05_splice_evar(p[53], p+26);
    r05_splice_evar(p[58], p+28);
    r05_splice_evar(p[61], p+30);
    r05_splice_evar(p[64], p+32);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Linearu_cont, "Linear_cont") {
  r05_this_is_generated_function();

  do {
    /* e.X: 16 */
    /* e.X0: 18 */
    /* e.Y0: 20 */
    /* e.X1: 22 */
    /* e.Y1: 24 */
    /* e.Points: 26 */
    struct r05_node *p[57] = { 0 };
    /* (e.X) ((e.X0) (e.Y0)) ((e.X1) (e.Y1)) e.Points */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[5]))
      continue;
    if (! r05_brackets_left(p+10, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[10], p[11]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[11]))
      continue;
    if (! r05_empty_hole(p[9], p[5]))
      continue;
    if (! r05_empty_hole(p[15], p[11]))
      continue;
    r05_close_evar(p+16, p[2], p[3]);
    r05_close_evar(p+18, p[6], p[7]);
    r05_close_evar(p+20, p[8], p[9]);
    r05_close_evar(p+22, p[12], p[13]);
    r05_close_evar(p+24, p[14], p[15]);
    r05_close_evar(p+26, p[11], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_FPFm_Add);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_FPFm_Mul);
    r05_alloc_open_bracket(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_FPFm_Sub);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_call(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_call(p+41);
    r05_alloc_function(&r05f_FPFm_Div);
    r05_alloc_open_bracket(p+42);
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_FPFm_Sub);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_evar(p+20);
    r05_alloc_close_call(p+47);
    r05_alloc_close_bracket(p+48);
    r05_alloc_open_call(p+49);
    r05_alloc_function(&r05f_FPFm_Sub);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_evar(p+18);
    r05_alloc_close_call(p+53);
    r05_alloc_close_call(p+54);
    r05_alloc_close_call(p+55);
    r05_alloc_close_call(p+56);
    r05_push_stack(p[56]);
    r05_push_stack(p[28]);
    r05_push_stack(p[55]);
    r05_push_stack(p[32]);
    r05_push_stack(p[54]);
    r05_push_stack(p[41]);
    r05_push_stack(p[53]);
    r05_push_stack(p[49]);
    r05_link_brackets(p[50], p[52]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[42], p[48]);
    r05_push_stack(p[47]);
    r05_push_stack(p[43]);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+24);
    r05_link_brackets(p[33], p[40]);
    r05_push_stack(p[39]);
    r05_push_stack(p[34]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+20);
    r05_splice_evar(p[30], p+20);
    r05_splice_evar(p[36], p+16);
    r05_splice_evar(p[38], p+18);
    r05_splice_evar(p[45], p+24);
    r05_splice_evar(p[51], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
