/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Div)
R05_DECLARE_ENTRY_FUNCTION(Mul)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(FPFm_ToInt)
R05_DECLARE_ENTRY_FUNCTION(FPFm_FromInt)
R05_DECLARE_ENTRY_FUNCTION(FPFm_UpScale)
R05_DECLARE_ENTRY_FUNCTION(FPFm_DownScale)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Wrap)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Mul)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Div)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Add)
R05_DECLARE_ENTRY_FUNCTION(FPFm_Sub)

R05_DEFINE_ENTRY_FUNCTION(FPFm_ToInt, "FPF-ToInt") {
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
    r05_alloc_function(&r05f_FPFm_DownScale);
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_FromInt, "FPF-FromInt") {
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
    r05_alloc_number(1000UL);
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_UpScale, "FPF-UpScale") {
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
    r05_alloc_number(1000UL);
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_DownScale, "FPF-DownScale") {
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
    r05_alloc_number(1000UL);
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_Wrap, "FPF-Wrap") {
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_Mul, "FPF-Mul") {
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
    r05_alloc_function(&r05f_FPFm_Wrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_FPFm_DownScale);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[9]);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(FPFm_Div, "FPF-Div") {
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
    r05_alloc_function(&r05f_FPFm_Wrap);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_FPFm_UpScale);
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_Add, "FPF-Add") {
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
    r05_alloc_function(&r05f_FPFm_Wrap);
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

R05_DEFINE_ENTRY_FUNCTION(FPFm_Sub, "FPF-Sub") {
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
    r05_alloc_function(&r05f_FPFm_Wrap);
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


/* End of file */
