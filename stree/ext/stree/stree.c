#include "ruby.h"
void Init_stree()

static VALUE hello_world(VALUE klass)
{
  return rb_str_new2("hello world");
}

{
  VALUE mStre = rb_define_module("Stree");
  rb_define_singleton_method(mStre, "hello world", hello_world, 0)


}

