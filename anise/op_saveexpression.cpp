#include "script.h"

SCRIPTCALL Script::op_saveExpression()
{
	word index = readExpression();
	while (true) {
		word data = readExpression();
		memory->saveVariable(index, data);

		byte code = fetch();
		if (code == CODE_CONTINUE) {
			advance();
			index++;
		}
		else {
			break;
		}
	}

	return RETURN_NORMAL;
}