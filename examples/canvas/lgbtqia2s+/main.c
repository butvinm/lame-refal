/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Arg)
R05_DECLARE_ENTRY_FUNCTION(Div)
R05_DECLARE_ENTRY_FUNCTION(Mul)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(FillRect)
R05_DECLARE_ENTRY_FUNCTION(SetFillStyle)
R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(CanvasWidth)
R05_DECLARE_LOCAL_FUNCTION(CanvasHeight)
R05_DECLARE_LOCAL_FUNCTION(StripWidth)
R05_DECLARE_LOCAL_FUNCTION(StripHeight)
R05_DECLARE_LOCAL_FUNCTION(SpeedFactor)
R05_DECLARE_LOCAL_FUNCTION(Draw)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[8] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Draw);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[2]);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CanvasWidth, "CanvasWidth") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(1000UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CanvasHeight, "CanvasHeight") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(1000UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(StripWidth, "StripWidth") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(100UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(StripHeight, "StripHeight") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(10UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SpeedFactor, "SpeedFactor") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(10UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Draw, "Draw") {
  r05_this_is_generated_function();

  do {
    /* e.Ts: 2 */
    struct r05_node *p[181] = { 0 };
    /* e.Ts */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(255 255 255)", 16);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(0UL);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_CanvasWidth);
    r05_alloc_close_call(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_CanvasHeight);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(228 3 3)", 12);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+24);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+30);
    r05_alloc_number(0UL);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_alloc_close_call(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_StripWidth);
    r05_alloc_close_call(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+39);
    r05_alloc_close_call(p+40);
    r05_alloc_open_call(p+41);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(255 140 0)", 14);
    r05_alloc_close_call(p+42);
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_call(p+44);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+45);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_call(p+47);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+48);
    r05_alloc_close_call(p+49);
    r05_alloc_open_call(p+50);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_call(p+51);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+52);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+53);
    r05_alloc_open_call(p+54);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+55);
    r05_alloc_close_call(p+56);
    r05_alloc_open_call(p+57);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+58);
    r05_alloc_number(1UL);
    r05_alloc_close_bracket(p+59);
    r05_alloc_open_call(p+60);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+61);
    r05_alloc_close_call(p+62);
    r05_alloc_close_call(p+63);
    r05_alloc_open_call(p+64);
    r05_alloc_function(&r05f_StripWidth);
    r05_alloc_close_call(p+65);
    r05_alloc_open_call(p+66);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+67);
    r05_alloc_close_call(p+68);
    r05_alloc_open_call(p+69);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(255 237 0)", 14);
    r05_alloc_close_call(p+70);
    r05_alloc_open_call(p+71);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_call(p+72);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+73);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+74);
    r05_alloc_open_call(p+75);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+76);
    r05_alloc_close_call(p+77);
    r05_alloc_open_call(p+78);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_call(p+79);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+80);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+81);
    r05_alloc_open_call(p+82);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+83);
    r05_alloc_close_call(p+84);
    r05_alloc_open_call(p+85);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+86);
    r05_alloc_number(2UL);
    r05_alloc_close_bracket(p+87);
    r05_alloc_open_call(p+88);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+89);
    r05_alloc_close_call(p+90);
    r05_alloc_close_call(p+91);
    r05_alloc_open_call(p+92);
    r05_alloc_function(&r05f_StripWidth);
    r05_alloc_close_call(p+93);
    r05_alloc_open_call(p+94);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+95);
    r05_alloc_close_call(p+96);
    r05_alloc_open_call(p+97);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 128 38)", 13);
    r05_alloc_close_call(p+98);
    r05_alloc_open_call(p+99);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_call(p+100);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+101);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+102);
    r05_alloc_open_call(p+103);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+104);
    r05_alloc_close_call(p+105);
    r05_alloc_open_call(p+106);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_call(p+107);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+108);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+109);
    r05_alloc_open_call(p+110);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+111);
    r05_alloc_close_call(p+112);
    r05_alloc_open_call(p+113);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+114);
    r05_alloc_number(3UL);
    r05_alloc_close_bracket(p+115);
    r05_alloc_open_call(p+116);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+117);
    r05_alloc_close_call(p+118);
    r05_alloc_close_call(p+119);
    r05_alloc_open_call(p+120);
    r05_alloc_function(&r05f_StripWidth);
    r05_alloc_close_call(p+121);
    r05_alloc_open_call(p+122);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+123);
    r05_alloc_close_call(p+124);
    r05_alloc_open_call(p+125);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 77 255)", 13);
    r05_alloc_close_call(p+126);
    r05_alloc_open_call(p+127);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_call(p+128);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+129);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+130);
    r05_alloc_open_call(p+131);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+132);
    r05_alloc_close_call(p+133);
    r05_alloc_open_call(p+134);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_call(p+135);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+136);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+137);
    r05_alloc_open_call(p+138);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+139);
    r05_alloc_close_call(p+140);
    r05_alloc_open_call(p+141);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+142);
    r05_alloc_number(4UL);
    r05_alloc_close_bracket(p+143);
    r05_alloc_open_call(p+144);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+145);
    r05_alloc_close_call(p+146);
    r05_alloc_close_call(p+147);
    r05_alloc_open_call(p+148);
    r05_alloc_function(&r05f_StripWidth);
    r05_alloc_close_call(p+149);
    r05_alloc_open_call(p+150);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+151);
    r05_alloc_close_call(p+152);
    r05_alloc_open_call(p+153);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(117 7 135)", 14);
    r05_alloc_close_call(p+154);
    r05_alloc_open_call(p+155);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_open_call(p+156);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+157);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+158);
    r05_alloc_open_call(p+159);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+160);
    r05_alloc_close_call(p+161);
    r05_alloc_open_call(p+162);
    r05_alloc_function(&r05f_Add);
    r05_alloc_open_call(p+163);
    r05_alloc_function(&r05f_Div);
    r05_alloc_open_bracket(p+164);
    r05_alloc_evar(p+2);
    r05_alloc_close_bracket(p+165);
    r05_alloc_open_call(p+166);
    r05_alloc_function(&r05f_SpeedFactor);
    r05_alloc_close_call(p+167);
    r05_alloc_close_call(p+168);
    r05_alloc_open_call(p+169);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_open_bracket(p+170);
    r05_alloc_number(5UL);
    r05_alloc_close_bracket(p+171);
    r05_alloc_open_call(p+172);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+173);
    r05_alloc_close_call(p+174);
    r05_alloc_close_call(p+175);
    r05_alloc_open_call(p+176);
    r05_alloc_function(&r05f_StripWidth);
    r05_alloc_close_call(p+177);
    r05_alloc_open_call(p+178);
    r05_alloc_function(&r05f_StripHeight);
    r05_alloc_close_call(p+179);
    r05_alloc_close_call(p+180);
    r05_push_stack(p[180]);
    r05_push_stack(p[155]);
    r05_push_stack(p[179]);
    r05_push_stack(p[178]);
    r05_push_stack(p[177]);
    r05_push_stack(p[176]);
    r05_push_stack(p[175]);
    r05_push_stack(p[162]);
    r05_push_stack(p[174]);
    r05_push_stack(p[169]);
    r05_push_stack(p[173]);
    r05_push_stack(p[172]);
    r05_link_brackets(p[170], p[171]);
    r05_push_stack(p[168]);
    r05_push_stack(p[163]);
    r05_push_stack(p[167]);
    r05_push_stack(p[166]);
    r05_link_brackets(p[164], p[165]);
    r05_push_stack(p[161]);
    r05_push_stack(p[156]);
    r05_push_stack(p[160]);
    r05_push_stack(p[159]);
    r05_link_brackets(p[157], p[158]);
    r05_push_stack(p[154]);
    r05_push_stack(p[153]);
    r05_push_stack(p[152]);
    r05_push_stack(p[127]);
    r05_push_stack(p[151]);
    r05_push_stack(p[150]);
    r05_push_stack(p[149]);
    r05_push_stack(p[148]);
    r05_push_stack(p[147]);
    r05_push_stack(p[134]);
    r05_push_stack(p[146]);
    r05_push_stack(p[141]);
    r05_push_stack(p[145]);
    r05_push_stack(p[144]);
    r05_link_brackets(p[142], p[143]);
    r05_push_stack(p[140]);
    r05_push_stack(p[135]);
    r05_push_stack(p[139]);
    r05_push_stack(p[138]);
    r05_link_brackets(p[136], p[137]);
    r05_push_stack(p[133]);
    r05_push_stack(p[128]);
    r05_push_stack(p[132]);
    r05_push_stack(p[131]);
    r05_link_brackets(p[129], p[130]);
    r05_push_stack(p[126]);
    r05_push_stack(p[125]);
    r05_push_stack(p[124]);
    r05_push_stack(p[99]);
    r05_push_stack(p[123]);
    r05_push_stack(p[122]);
    r05_push_stack(p[121]);
    r05_push_stack(p[120]);
    r05_push_stack(p[119]);
    r05_push_stack(p[106]);
    r05_push_stack(p[118]);
    r05_push_stack(p[113]);
    r05_push_stack(p[117]);
    r05_push_stack(p[116]);
    r05_link_brackets(p[114], p[115]);
    r05_push_stack(p[112]);
    r05_push_stack(p[107]);
    r05_push_stack(p[111]);
    r05_push_stack(p[110]);
    r05_link_brackets(p[108], p[109]);
    r05_push_stack(p[105]);
    r05_push_stack(p[100]);
    r05_push_stack(p[104]);
    r05_push_stack(p[103]);
    r05_link_brackets(p[101], p[102]);
    r05_push_stack(p[98]);
    r05_push_stack(p[97]);
    r05_push_stack(p[96]);
    r05_push_stack(p[71]);
    r05_push_stack(p[95]);
    r05_push_stack(p[94]);
    r05_push_stack(p[93]);
    r05_push_stack(p[92]);
    r05_push_stack(p[91]);
    r05_push_stack(p[78]);
    r05_push_stack(p[90]);
    r05_push_stack(p[85]);
    r05_push_stack(p[89]);
    r05_push_stack(p[88]);
    r05_link_brackets(p[86], p[87]);
    r05_push_stack(p[84]);
    r05_push_stack(p[79]);
    r05_push_stack(p[83]);
    r05_push_stack(p[82]);
    r05_link_brackets(p[80], p[81]);
    r05_push_stack(p[77]);
    r05_push_stack(p[72]);
    r05_push_stack(p[76]);
    r05_push_stack(p[75]);
    r05_link_brackets(p[73], p[74]);
    r05_push_stack(p[70]);
    r05_push_stack(p[69]);
    r05_push_stack(p[68]);
    r05_push_stack(p[43]);
    r05_push_stack(p[67]);
    r05_push_stack(p[66]);
    r05_push_stack(p[65]);
    r05_push_stack(p[64]);
    r05_push_stack(p[63]);
    r05_push_stack(p[50]);
    r05_push_stack(p[62]);
    r05_push_stack(p[57]);
    r05_push_stack(p[61]);
    r05_push_stack(p[60]);
    r05_link_brackets(p[58], p[59]);
    r05_push_stack(p[56]);
    r05_push_stack(p[51]);
    r05_push_stack(p[55]);
    r05_push_stack(p[54]);
    r05_link_brackets(p[52], p[53]);
    r05_push_stack(p[49]);
    r05_push_stack(p[44]);
    r05_push_stack(p[48]);
    r05_push_stack(p[47]);
    r05_link_brackets(p[45], p[46]);
    r05_push_stack(p[42]);
    r05_push_stack(p[41]);
    r05_push_stack(p[40]);
    r05_push_stack(p[14]);
    r05_push_stack(p[39]);
    r05_push_stack(p[38]);
    r05_push_stack(p[37]);
    r05_push_stack(p[36]);
    r05_push_stack(p[35]);
    r05_push_stack(p[22]);
    r05_push_stack(p[34]);
    r05_push_stack(p[29]);
    r05_push_stack(p[33]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[30], p[31]);
    r05_push_stack(p[28]);
    r05_push_stack(p[23]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[24], p[25]);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+2);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[6]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_evar(p[17], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}


/* End of file */
