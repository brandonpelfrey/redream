#ifndef BACKEND_H
#define BACKEND_H

#include <memory>
#include "hw/memory.h"
#include "jit/ir/ir_builder.h"

namespace dvm {
namespace sys {
struct Exception;
}

namespace jit {

typedef uint32_t (*BlockPointer)();

namespace backend {

struct Register {
  const char *name;
  int value_types;
};

class Backend {
 public:
  Backend(hw::Memory &memory) : memory_(memory) {}
  virtual ~Backend() {}

  virtual const Register *registers() const = 0;
  virtual int num_registers() const = 0;

  virtual void Reset() = 0;

  virtual BlockPointer AssembleBlock(ir::IRBuilder &builder,
                                     void *guest_ctx) = 0;
  virtual void DumpBlock(BlockPointer block) = 0;

  virtual bool HandleException(sys::Exception &ex) = 0;

 protected:
  hw::Memory &memory_;
};
}
}
}

#endif
