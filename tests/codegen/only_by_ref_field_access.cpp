#include <cstdint>
#include <iostream>

#include "generated.h"

extern "C" void only_by_ref_field_access_main() {
  rust::Ref<rust::crate::RefOnly> r = rust::crate::RefOnly::get();
  std::cout << "r.a = " << int32_t(r.a) << "\n";

  rust::RefMut<rust::crate::RefOnly> m = rust::crate::RefOnly::get_mut();
  *rust::RefMut<int32_t>(m.a) = 7;
  std::cout << "m.a = " << int32_t(m.a) << "\n";
}
