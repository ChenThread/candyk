OUTPUT_TOOLS += $(OUTPUT_BINDIR)xainterleave$(EXEPOST)
OUTPUT_TOOLS_OBJS +=
TOOLS_XAINTERLEAVE_SRCS = toolsrc/xainterleave/xainterleave.c
TOOLS_XAINTERLEAVE_INCS =

$(OUTPUT_BINDIR)xainterleave$(EXEPOST): $(TOOLS_XAINTERLEAVE_SRCS) $(TOOLS_XAINTERLEAVE_INCS)
	$(NATIVE_CC) -o $@ $(TOOLS_XAINTERLEAVE_SRCS) $(NATIVE_CFLAGS) $(NATIVE_LDFLAGS) -lavcodec -lavformat -lavutil -lswresample

