/* Automatically generated by chibi-ffi; version: 0.4 */

#include <chibi/eval.h>

#include <unistd.h>

#include <pwd.h>

#include <grp.h>

#include <sys/types.h>
/*
types: (group passwd)
enums: ()
*/

sexp sexp_getgrnam_r_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0, sexp arg2) {
  int err = 0;
  struct group* tmp1;
  struct group* *tmp4;
  sexp_gc_var3(res, res1, res4);
  if (! sexp_stringp(arg0))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg0);
  if (! sexp_stringp(arg2))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg2);
  sexp_gc_preserve3(ctx, res, res1, res4);
  tmp1 = (struct group*) calloc(1, 1 + sizeof(tmp1[0]));
  tmp4 = (struct group**) calloc(1, 1 + sizeof(tmp4[0]));
  err = getgrnam_r(sexp_string_data(arg0), tmp1, sexp_string_data(arg2), sexp_string_size(arg2), tmp4);
  if (err) {
  res = SEXP_FALSE;
  } else {
  res1 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_opcode_arg2_type(self)), tmp1, arg2, 1);
  res4 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_vector_ref(sexp_opcode_argn_type(self), SEXP_ONE)), tmp4, SEXP_FALSE, 1);
  res = SEXP_NULL;
  sexp_push(ctx, res, res4);
  sexp_push(ctx, res, res1);
  }
  sexp_gc_release3(ctx);
  return res;
}

sexp sexp_getgrgid_r_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0, sexp arg2) {
  int err = 0;
  struct group* tmp1;
  struct group* *tmp4;
  sexp_gc_var3(res, res1, res4);
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  if (! sexp_stringp(arg2))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg2);
  sexp_gc_preserve3(ctx, res, res1, res4);
  tmp1 = (struct group*) calloc(1, 1 + sizeof(tmp1[0]));
  tmp4 = (struct group**) calloc(1, 1 + sizeof(tmp4[0]));
  err = getgrgid_r(sexp_uint_value(arg0), tmp1, sexp_string_data(arg2), sexp_string_size(arg2), tmp4);
  if (err) {
  res = SEXP_FALSE;
  } else {
  res1 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_opcode_arg2_type(self)), tmp1, arg2, 1);
  res4 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_vector_ref(sexp_opcode_argn_type(self), SEXP_ONE)), tmp4, SEXP_FALSE, 1);
  res = SEXP_NULL;
  sexp_push(ctx, res, res4);
  sexp_push(ctx, res, res1);
  }
  sexp_gc_release3(ctx);
  return res;
}

sexp sexp_getpwnam_r_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0, sexp arg2) {
  int err = 0;
  struct passwd* tmp1;
  struct passwd* *tmp4;
  sexp_gc_var3(res, res1, res4);
  if (! sexp_stringp(arg0))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg0);
  if (! sexp_stringp(arg2))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg2);
  sexp_gc_preserve3(ctx, res, res1, res4);
  tmp1 = (struct passwd*) calloc(1, 1 + sizeof(tmp1[0]));
  tmp4 = (struct passwd**) calloc(1, 1 + sizeof(tmp4[0]));
  err = getpwnam_r(sexp_string_data(arg0), tmp1, sexp_string_data(arg2), sexp_string_size(arg2), tmp4);
  if (err) {
  res = SEXP_FALSE;
  } else {
  res1 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_opcode_arg2_type(self)), tmp1, arg2, 1);
  res4 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_vector_ref(sexp_opcode_argn_type(self), SEXP_ONE)), tmp4, SEXP_FALSE, 1);
  res = SEXP_NULL;
  sexp_push(ctx, res, res4);
  sexp_push(ctx, res, res1);
  }
  sexp_gc_release3(ctx);
  return res;
}

sexp sexp_getpwuid_r_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0, sexp arg2) {
  int err = 0;
  struct passwd* tmp1;
  struct passwd* *tmp4;
  sexp_gc_var3(res, res1, res4);
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  if (! sexp_stringp(arg2))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg2);
  sexp_gc_preserve3(ctx, res, res1, res4);
  tmp1 = (struct passwd*) calloc(1, 1 + sizeof(tmp1[0]));
  tmp4 = (struct passwd**) calloc(1, 1 + sizeof(tmp4[0]));
  err = getpwuid_r(sexp_uint_value(arg0), tmp1, sexp_string_data(arg2), sexp_string_size(arg2), tmp4);
  if (err) {
  res = SEXP_FALSE;
  } else {
  res1 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_opcode_arg2_type(self)), tmp1, arg2, 1);
  res4 = sexp_make_cpointer(ctx, sexp_unbox_fixnum(sexp_vector_ref(sexp_opcode_argn_type(self), SEXP_ONE)), tmp4, SEXP_FALSE, 1);
  res = SEXP_NULL;
  sexp_push(ctx, res, res4);
  sexp_push(ctx, res, res1);
  }
  sexp_gc_release3(ctx);
  return res;
}

sexp sexp_set_root_directory_x_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  int err = 0;
  sexp res;
  if (! sexp_stringp(arg0))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg0);
  err = chroot(sexp_string_data(arg0));
  if (err) {
  res = SEXP_FALSE;
  } else {
  res = SEXP_TRUE;
  }
  return res;
}

sexp sexp_create_session_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = sexp_make_unsigned_integer(ctx, setsid());
  return res;
}

sexp sexp_current_session_id_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  sexp res;
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  res = sexp_make_unsigned_integer(ctx, getsid(sexp_uint_value(arg0)));
  return res;
}

sexp sexp_set_current_effective_group_id_x_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  int err = 0;
  sexp res;
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  err = setegid(sexp_uint_value(arg0));
  if (err) {
  res = SEXP_FALSE;
  } else {
  res = SEXP_TRUE;
  }
  return res;
}

sexp sexp_set_current_group_id_x_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  int err = 0;
  sexp res;
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  err = setgid(sexp_uint_value(arg0));
  if (err) {
  res = SEXP_FALSE;
  } else {
  res = SEXP_TRUE;
  }
  return res;
}

sexp sexp_set_current_effective_user_id_x_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  int err = 0;
  sexp res;
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  err = seteuid(sexp_uint_value(arg0));
  if (err) {
  res = SEXP_FALSE;
  } else {
  res = SEXP_TRUE;
  }
  return res;
}

sexp sexp_set_current_user_id_x_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  int err = 0;
  sexp res;
  if (! sexp_exact_integerp(arg0))
    return sexp_type_exception(ctx, self, SEXP_FIXNUM, arg0);
  err = setuid(sexp_uint_value(arg0));
  if (err) {
  res = SEXP_FALSE;
  } else {
  res = SEXP_TRUE;
  }
  return res;
}

sexp sexp_current_effective_group_id_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = sexp_make_unsigned_integer(ctx, getegid());
  return res;
}

sexp sexp_current_effective_user_id_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = sexp_make_unsigned_integer(ctx, geteuid());
  return res;
}

sexp sexp_current_group_id_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = sexp_make_unsigned_integer(ctx, getgid());
  return res;
}

sexp sexp_current_user_id_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = sexp_make_unsigned_integer(ctx, getuid());
  return res;
}

sexp sexp_get_host_name_stub (sexp ctx, sexp self, sexp_sint_t n) {
  int err = 0;
  char buf0[256];
  int len0;
  char *tmp0;
  sexp res;
  sexp_gc_var1(res0);
  sexp_gc_preserve1(ctx, res0);
  len0 = 256;
  tmp0 = buf0;
 loop:
  err = gethostname(tmp0, len0);
  if (err) {
  if (len0 != 256)
    free(tmp0);
  len0 *= 2;
  tmp0 = (char*) calloc(len0, sizeof(tmp0[0]));
  goto loop;
  } else {
  res0 = sexp_c_string(ctx, tmp0, -1);
  res = res0;
  }
  if (len0 != 256)
    free(tmp0);
  sexp_gc_release1(ctx);
  return res;
}

sexp sexp_group_get_gr_name (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct group*)sexp_cpointer_value(x))->gr_name, -1);
}

sexp sexp_group_get_gr_passwd (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct group*)sexp_cpointer_value(x))->gr_passwd, -1);
}

sexp sexp_group_get_gr_gid (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_make_unsigned_integer(ctx, ((struct group*)sexp_cpointer_value(x))->gr_gid);
}

sexp sexp_passwd_get_pw_name (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_name, -1);
}

sexp sexp_passwd_get_pw_passwd (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_passwd, -1);
}

sexp sexp_passwd_get_pw_uid (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_make_unsigned_integer(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_uid);
}

sexp sexp_passwd_get_pw_gid (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_make_unsigned_integer(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_gid);
}

sexp sexp_passwd_get_pw_gecos (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_gecos, -1);
}

sexp sexp_passwd_get_pw_dir (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_dir, -1);
}

sexp sexp_passwd_get_pw_shell (sexp ctx, sexp self, sexp_sint_t n, sexp x) {
  if (! (sexp_pointerp(x) && (sexp_pointer_tag(x) == sexp_unbox_fixnum(sexp_opcode_arg1_type(self)))))
    return sexp_type_exception(ctx, self, sexp_unbox_fixnum(sexp_opcode_arg1_type(self)), x);
  return sexp_c_string(ctx, ((struct passwd*)sexp_cpointer_value(x))->pw_shell, -1);
}


sexp sexp_init_library (sexp ctx, sexp self, sexp_sint_t n, sexp env, const char* version, const sexp_abi_identifier_t abi) {
  sexp sexp_group_type_obj;
  sexp sexp_passwd_type_obj;
  sexp_gc_var3(name, tmp, op);
  if (!(sexp_version_compatible(ctx, version, sexp_version)
        && sexp_abi_compatible(ctx, abi, SEXP_ABI_IDENTIFIER)))
    return SEXP_ABI_ERROR;
  sexp_gc_preserve3(ctx, name, tmp, op);
  name = sexp_c_string(ctx, "group", -1);
  sexp_group_type_obj = sexp_register_c_type(ctx, name, sexp_finalize_c_type);
  tmp = sexp_string_to_symbol(ctx, name);
  sexp_env_define(ctx, env, tmp, sexp_group_type_obj);
  sexp_type_slots(sexp_group_type_obj) = SEXP_NULL;
  sexp_push(ctx, sexp_type_slots(sexp_group_type_obj), sexp_intern(ctx, "gr_gid", -1));
  sexp_push(ctx, sexp_type_slots(sexp_group_type_obj), sexp_intern(ctx, "gr_passwd", -1));
  sexp_push(ctx, sexp_type_slots(sexp_group_type_obj), sexp_intern(ctx, "gr_name", -1));
  sexp_type_getters(sexp_group_type_obj) = sexp_make_vector(ctx, SEXP_THREE, SEXP_FALSE);
  sexp_type_setters(sexp_group_type_obj) = sexp_make_vector(ctx, SEXP_THREE, SEXP_FALSE);
  tmp = sexp_make_type_predicate(ctx, name, sexp_group_type_obj);
  name = sexp_intern(ctx, "group?", 6);
  sexp_env_define(ctx, env, name, tmp);
  name = sexp_c_string(ctx, "passwd", -1);
  sexp_passwd_type_obj = sexp_register_c_type(ctx, name, sexp_finalize_c_type);
  tmp = sexp_string_to_symbol(ctx, name);
  sexp_env_define(ctx, env, tmp, sexp_passwd_type_obj);
  sexp_type_slots(sexp_passwd_type_obj) = SEXP_NULL;
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_shell", -1));
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_dir", -1));
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_gecos", -1));
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_gid", -1));
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_uid", -1));
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_passwd", -1));
  sexp_push(ctx, sexp_type_slots(sexp_passwd_type_obj), sexp_intern(ctx, "pw_name", -1));
  sexp_type_getters(sexp_passwd_type_obj) = sexp_make_vector(ctx, SEXP_SEVEN, SEXP_FALSE);
  sexp_type_setters(sexp_passwd_type_obj) = sexp_make_vector(ctx, SEXP_SEVEN, SEXP_FALSE);
  tmp = sexp_make_type_predicate(ctx, name, sexp_passwd_type_obj);
  name = sexp_intern(ctx, "user?", 5);
  sexp_env_define(ctx, env, name, tmp);
  op = sexp_define_foreign(ctx, env, "user-shell", 1, sexp_passwd_get_pw_shell);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_SIX, op);
  op = sexp_define_foreign(ctx, env, "user-home", 1, sexp_passwd_get_pw_dir);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_FIVE, op);
  op = sexp_define_foreign(ctx, env, "user-gecos", 1, sexp_passwd_get_pw_gecos);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_FOUR, op);
  op = sexp_define_foreign(ctx, env, "user-group-id", 1, sexp_passwd_get_pw_gid);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_THREE, op);
  op = sexp_define_foreign(ctx, env, "user-id", 1, sexp_passwd_get_pw_uid);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_TWO, op);
  op = sexp_define_foreign(ctx, env, "user-password", 1, sexp_passwd_get_pw_passwd);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_ONE, op);
  op = sexp_define_foreign(ctx, env, "user-name", 1, sexp_passwd_get_pw_name);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_passwd_type_obj))) sexp_vector_set(sexp_type_getters(sexp_passwd_type_obj), SEXP_ZERO, op);
  op = sexp_define_foreign(ctx, env, "group-id", 1, sexp_group_get_gr_gid);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_group_type_obj))) sexp_vector_set(sexp_type_getters(sexp_group_type_obj), SEXP_TWO, op);
  op = sexp_define_foreign(ctx, env, "group-password", 1, sexp_group_get_gr_passwd);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_group_type_obj))) sexp_vector_set(sexp_type_getters(sexp_group_type_obj), SEXP_ONE, op);
  op = sexp_define_foreign(ctx, env, "group-name", 1, sexp_group_get_gr_name);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj));
  }
  if (sexp_vectorp(sexp_type_getters(sexp_group_type_obj))) sexp_vector_set(sexp_type_getters(sexp_group_type_obj), SEXP_ZERO, op);
  op = sexp_define_foreign(ctx, env, "getgrnam_r", 2, sexp_getgrnam_r_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg2_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj));
    sexp_opcode_arg3_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_argn_type(op) = sexp_make_vector(ctx, SEXP_TWO, sexp_make_fixnum(SEXP_OBJECT));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ZERO, sexp_make_fixnum(SEXP_FIXNUM));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ONE, sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj)));
  }
  op = sexp_define_foreign(ctx, env, "getgrgid_r", 2, sexp_getgrgid_r_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
    sexp_opcode_arg2_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj));
    sexp_opcode_arg3_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_argn_type(op) = sexp_make_vector(ctx, SEXP_TWO, sexp_make_fixnum(SEXP_OBJECT));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ZERO, sexp_make_fixnum(SEXP_FIXNUM));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ONE, sexp_make_fixnum(sexp_type_tag(sexp_group_type_obj)));
  }
  op = sexp_define_foreign(ctx, env, "getpwnam_r", 2, sexp_getpwnam_r_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_arg2_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
    sexp_opcode_arg3_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_argn_type(op) = sexp_make_vector(ctx, SEXP_TWO, sexp_make_fixnum(SEXP_OBJECT));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ZERO, sexp_make_fixnum(SEXP_FIXNUM));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ONE, sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj)));
  }
  op = sexp_define_foreign(ctx, env, "getpwuid_r", 2, sexp_getpwuid_r_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
    sexp_opcode_arg2_type(op) = sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj));
    sexp_opcode_arg3_type(op) = sexp_make_fixnum(SEXP_STRING);
    sexp_opcode_argn_type(op) = sexp_make_vector(ctx, SEXP_TWO, sexp_make_fixnum(SEXP_OBJECT));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ZERO, sexp_make_fixnum(SEXP_FIXNUM));
    sexp_vector_set(sexp_opcode_argn_type(op), SEXP_ONE, sexp_make_fixnum(sexp_type_tag(sexp_passwd_type_obj)));
  }
  op = sexp_define_foreign(ctx, env, "set-root-directory!", 1, sexp_set_root_directory_x_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_STRING);
  }
  op = sexp_define_foreign(ctx, env, "create-session", 0, sexp_create_session_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign_opt(ctx, env, "current-session-id", 1, sexp_current_session_id_stub, sexp_make_unsigned_integer(ctx, 0));
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "set-current-effective-group-id!", 1, sexp_set_current_effective_group_id_x_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "set-current-group-id!", 1, sexp_set_current_group_id_x_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "set-current-effective-user-id!", 1, sexp_set_current_effective_user_id_x_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "set-current-user-id!", 1, sexp_set_current_user_id_x_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "current-effective-group-id", 0, sexp_current_effective_group_id_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "current-effective-user-id", 0, sexp_current_effective_user_id_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "current-group-id", 0, sexp_current_group_id_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "current-user-id", 0, sexp_current_user_id_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  op = sexp_define_foreign(ctx, env, "get-host-name", 0, sexp_get_host_name_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_OBJECT);
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_CHAR);
    sexp_opcode_arg2_type(op) = sexp_make_fixnum(SEXP_FIXNUM);
  }
  sexp_gc_release3(ctx);
  return SEXP_VOID;
}

