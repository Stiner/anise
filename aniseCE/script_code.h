#ifndef SCRIPT_CODE_H
#define SCRIPT_CODE_H

enum ScriptCode {
	CODE_NULL = 0x00,
	CODE_CONTINUE = 0x02,
	CODE_EXPRESSION_END = 0x03,
	CODE_CONSTANT_1OP = 0x07,
	CODE_CONSTANT_2OP = 0x08,
	CODE_CONSTANT_3OP = 0x09,
	CODE_EXPRESSION = 0x0F,
	CODE_CONSTANT_RE_FIRST = 0x20,
	CODE_CONSTANT_RE_LAST = 0x2F,
	CODE_ASCIINUMBER_FIRST = 0x30,
	CODE_ASCIINUMBER_LAST = 0x3F,
	CODE_BASEVARIABLE_FIRST = 0x40,
	CODE_BASEVARIABLE_LAST = 0x5A
};


enum ScriptOpcode {
	CODE_OP_RETURN_SUCCESS_0 = 0x00,
	CODE_OP_PARSE_NESTED = 0x01,
	CODE_OP_RETURN_SUCCESS_2 = 0x02,
	CODE_OP_OP4 = 0x04,
	CODE_OP_HALFSIZECHARACTER = 0x06,
	CODE_OP_OP_FIRST = 0x10,
	CODE_OP_OP_LAST = 0x1F,
	CODE_OP_DIALOGUE_FIRST = 0x60,
	CODE_OP_DIALOGUE_LAST = 0x7F,
	CODE_OP_DIALOGUE_PRE_FIRST = 0x80,
	CODE_OP_DIALOGUE_PRE_LAST = 0xFF
};


enum ScriptBlockCode {
	CODE_BLOCK_END = 0x00,
	CODE_BLOCK_START = 0x01
};


enum ScriptParameterCode {
	CODE_PARAMETER_BLOCK = 0x01,
	CODE_PARAMETER_STRING = 0x06,
};

#endif
