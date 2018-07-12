CPPFLAGS = -I../../my-c-lib
EXES = say_hello_there say_hello_world

.PHONY: all
all: $(EXES)

say_hello_world: CPPFLAGS += -DSAY_HELLO_TO_WORLD

clean: ; -$(RM) $(EXES)
