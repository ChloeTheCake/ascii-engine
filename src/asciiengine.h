#define MAX_LINE_SIZE		512
#define MAX_BUFFER_SIZE		2048

typedef char consoleLine[MAX_LINE_SIZE]; 
typedef char consoleFrame[MAX_BUFFER_SIZE];

typedef struct characterFrameStruct
{
	char	character;
	int	x;
	int	y;
} CHARACTER_FRAME;

typedef struct frameListStruct
{
	CHARACTER_FRAME		characterInstance;
	CHARACTER_FRAME		*next;
	CHARACTER_FRAME		*prev;
} FRAME_LIST;

typedef struct frameStruct
{
	FRAME_LIST	*first;
	FRAME_LIST	*last;
} CONSOLE_FRAME;

consoleLine asciiConstructLine(int LINE, CONSOLE_FRAME *FRAME);

consoleFrame asciiConstructFrame(int FRAME_SIZE, CONSOLE_FRAME *FRAME);

