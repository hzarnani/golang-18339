CPPFLAGS = -I../../my-c-lib
EXES = say_hello_there say_hello_world
OBJS = main.o

$(EXES): $(OBJS)

say_hello_world: CPPFLAGS += -DSAY_HELLO_TO_WORLD

clean: ; -$(RM) $(OBJS)
cleanall: clean; -$(RM) $(EXES)
