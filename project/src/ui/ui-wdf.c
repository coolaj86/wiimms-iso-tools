
/***************************************************************************
 *                    __            __ _ ___________                       *
 *                    \ \          / /| |____   ____|                      *
 *                     \ \        / / | |    | |                           *
 *                      \ \  /\  / /  | |    | |                           *
 *                       \ \/  \/ /   | |    | |                           *
 *                        \  /\  /    | |    | |                           *
 *                         \/  \/     |_|    |_|                           *
 *                                                                         *
 *                           Wiimms ISO Tools                              *
 *                         https://wit.wiimm.de/                           *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   This file is part of the WIT project.                                 *
 *   Visit https://wit.wiimm.de/ for project details and sources.          *
 *                                                                         *
 *   Copyright (c) 2009-2017 by Dirk Clemens <wiimm@wiimm.de>              *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   See file gpl-2.0.txt or http://www.gnu.org/licenses/gpl-2.0.txt       *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   >>>  This file is automatically generated by './src/gen-ui.c'.  <<<   *
 *   >>>                   Do not edit this file!                    <<<   *
 *                                                                         *
 ***************************************************************************/

#include <getopt.h>
#include "ui-wdf.h"

//
///////////////////////////////////////////////////////////////////////////////
///////////////                  OptionInfo[]                   ///////////////
///////////////////////////////////////////////////////////////////////////////

static const InfoOption_t OptionInfo[OPT__N_TOTAL+1] =
{
    {0,0,0,0,0,0,0,0,0,0}, // OPT_NONE,

    //----- command specific options -----

    {	OPT_CHUNK, false, false, false, false, false, 0, "chunk",
	0,
	"Print table with chunk header too."
    },

    {	OPT_LONG, false, false, false, false, false, 'l', "long",
	0,
	"Print (un)pack statistics, 1 line for each source. In dump mode:"
	" Print table with chunk header too (same as --chunk)."
    },

    {	OPT_MINUS1, false, false, false, false, false, '1', "minus-1",
	0,
	"If set the end address is the last address of a range. The standard"
	" is to print the first address that is not part of the address of a"
	" range."
    },

    {	OPT_LIMIT, false, false, false, false, false, 0, "limit",
	"num",
	"Limit the output to NUM messages."
    },

    {	OPT_FILE_LIMIT, false, false, false, false, false, 0, "file-limit",
	"size",
	"This option is only used if comparing discs on file level. If not set"
	" or set to null, then all files will be compared. If set to a value"
	" greater than comparison is aborted for the current source image if"
	" the entered number of files differ. This option is ignored in quiet"
	" mode."
    },

    {	OPT_BLOCK_SIZE, false, false, false, false, false, 0, "block-size",
	"size",
	"If a mismatch is found in raw or disc mode then the comparison is"
	" continued with the next block. This option sets the block size. The"
	" default value is 32K (Wii sector size). This option is ignored in"
	" quiet mode."
    },

    {	OPT_WDF, true, false, false, false, true, 'W', "wdf",
	"[=param]",
	"Force WDF output mode if packing and set the default suffix to"
	" '.wdf'. This is the general default. --wdf=param is a short cut for"
	" '--wdf --align-wdf=param'."
    },

    {	OPT_WDF1, true, false, false, false, false, 0, "wdf1",
	"[=param]",
	"Force WDF v1 output mode, if packing. Set the default suffix to"
	" '.wdf'. --wdf1=param is a short cut for '--wdf1 --align-wdf=param'."
    },

    {	OPT_WDF2, true, false, false, false, false, 0, "wdf2",
	"[=param]",
	"Force WDF v2 output mode, if packing. Set the default suffix to"
	" '.wdf'. --wdf2=param is a short cut for '--wdf2 --align-wdf=param'."
    },

    {	OPT_WIA, true, false, false, false, false, 0, "wia",
	"[=compr]",
	"Force WIA output mode if packing and set the default suffix to"
	" '.wia'. The optional parameter is a compression mode and --wia=mode"
	" is a shortcut for '--wia --compression mode'.\n"
	"  WIA output is the default, when the program name contains the sub"
	" string 'wia' in any case."
    },

    {	OPT_CISO, false, false, false, false, false, 'C', "ciso",
	0,
	"Force CISO output mode if packing and set the default suffix to"
	" '.ciso'.\n"
	"   This is the default, when the program name contains the sub string"
	" 'ciso' in any case."
    },

    {	OPT_WBI, false, false, false, false, false, 0, "wbi",
	0,
	"Force CISO output mode if packing and set the default suffix to"
	" '.wbi'.\n"
	"   This is the default, when the program name contains the sub string"
	" 'wbi' but not 'ciso' in any case."
    },

    {	OPT_SUFFIX, false, false, false, false, false, 's', "suffix",
	".suf",
	"Use suffix '.suf' instead of '.wdf', '.wia', or '.ciso' for packed"
	" files."
    },

    {	OPT_DEST, false, false, false, false, true, 'd', "dest",
	"path",
	"Define a destination path (directory/file)."
    },

    {	OPT_DEST2, false, false, false, false, false, 'D', "DEST",
	"path",
	"Like --dest, but create the directory path automatically."
    },

    {	OPT_STDOUT, false, false, false, false, false, 'c', "stdout",
	0,
	"Write to standard output (stdout) and keep (don't delete) input"
	" files.\n"
	"  This is the default, when the program is reading from standard"
	" input (stdin)."
    },

    {	OPT_KEEP, false, false, false, false, false, 'k', "keep",
	0,
	"Keep (don't delete) input files during (un-)packing."
    },

    {	OPT_OVERWRITE, false, false, false, false, false, 'o', "overwrite",
	0,
	"Overwrite already existing files without warning."
    },

    {	OPT_PRESERVE, false, false, false, false, false, 'p', "preserve",
	0,
	"Preserve file times (atime+mtime) while copying an image. This option"
	" is enabled by default if an unmodified disc image is copied."
    },

    {	OPT_AUTO_SPLIT, false, false, false, false, false, 0, "auto-split",
	0,
	"Enable auto split modus: Split only if necessary and determine the"
	" split size automatically.\n"
	"  THIS OPTION IS EXPERIMENTAL. In future versions it becomes the"
	" default."
    },

    {	OPT_NO_SPLIT, false, false, false, false, false, 0, "no-split",
	0,
	"Disable output file splitting. This is the default, but in future"
	" versions, the new option --auto-split becomes the default."
    },

    {	OPT_SPLIT, false, false, false, false, false, 'z', "split",
	0,
	"Enable output file splitting. The default split size is 4 GB."
    },

    {	OPT_SPLIT_SIZE, false, false, false, false, false, 'Z', "split-size",
	"sz",
	"Enable output file splitting and define a split size. The parameter"
	" 'sz' is a floating point number followed by an optional unit factor"
	" (one of 'cb' [=1] or 'kmgtpe' [base=1000] or 'KMGTPE' [base=1024])."
	" The default unit is 'G' (GiB)."
    },

    {	OPT_PREALLOC, true, false, false, false, false, 0, "prealloc",
	"[=mode]",
	"This option enables or disables the disc space preallocation. If"
	" enabled the tools try to allocate disc space for the new files"
	" before writing the data. This reduces the fragmentation but also"
	" disables the sparse effect for preallocated areas.\n"
	"  The optional parameter decides the preallocation mode: OFF (or 0),"
	" SMART (or 1), ALL (or 2). If no parameter is set, ALL is used.\n"
	"  Mode 'OFF' disables the preallocation. Mode 'SMART' looks into the"
	" source disc to find out the writing areas. SMART is only available"
	" for ISO, CISO and WBFS file types. For other file types ALL is used"
	" instead. Mode 'ALL' (the default) preallocate the whole destination"
	" file. Because of the large holes in plain ISO images, the SMART mode"
	" is used for ISOs instead."
    },

    {	OPT_CHUNK_MODE, false, false, false, false, false, 0, "chunk-mode",
	"mode",
	"Defines an operation mode for --chunk-size and --max-chunks. Allowed"
	" keywords are 'ANY' to allow any values, '32K' to force chunk sizes"
	" with a multiple of 32 KiB, 'POW2' to force chunk sizes >=32K and"
	" with a power of 2 or 'ISO' for ISO images (more restrictive as"
	" 'POW2', best for USB loaders). The case of the keyword is ignored."
	" The default key is '32K'.\n"
	"  --chm is a shortcut for --chunk-mode."
    },

    {	OPT_CHUNK_SIZE, false, false, false, false, false, 0, "chunk-size",
	"sz",
	"Define the minimal chunk size if creating a CISO or WIA file (for WIA"
	" details see option --compression}). The default is to calculate the"
	" chunk size from the input file size and find a good value by using a"
	" minimal value of 1 MiB for '--chunk-mode ISO' and 32 KiB for modes"
	" 32K and POW2. For the modes ISO and POW2 the value is rounded up to"
	" the next power of 2. This calculation also depends from option"
	" --max-chunks.\n"
	"  The parameter 'sz' is a floating point number followed by an"
	" optional unit factor (one of 'cb' [=1] or 'kmgtpe' [base=1000] or"
	" 'KMGTPE' [base=1024]). The default unit is 'M' (MiB). If the number"
	" is prefixed with a '=' then options --chunk-mode and --max-chunks"
	" are ignored and the given value is used without any rounding or"
	" changing.\n"
	"  If the input file size is not known (e.g. reading from pipe), its"
	" size is assumed as 12 GiB.\n"
	"  --chs is a shortcut for --chunk-size."
    },

    {	OPT_MAX_CHUNKS, false, false, false, false, false, 0, "max-chunks",
	"n",
	"Define the maximal number of chunks if creating a CISO file. The"
	" default value is 8192 for '--chunk-mode ISO' and 32760 (maximal"
	" value) for all other modes. If this value is set than the automatic"
	" calculation of --chunk-size will be modified too.\n"
	"  --mch is a shortcut for --max-chunks."
    },

    {	OPT_COMPRESSION, false, false, false, false, false, 0, "compression",
	"mode",
	"Select one compression method, level and chunk size for new WIA"
	" files. The syntax for mode is: [method] [.level] [@factor]\n"
	"  'method' is the name of the method. Possible compressions method"
	" are NONE, PURGE, BZIP2, LZMA and LZMA2. There are additional"
	" keywords: DEFAULT (=LZMA.5@20), FAST (=BZIP2.3@10), GOOD"
	" (=LZMA.5@20) BEST (=LZMA.7@50), and MEM (use best mode in respect to"
	" memory limit set by --mem). Additionally the single digit modes 0"
	" (=NONE), 1 (=fast LZMA) .. 9 (=BEST)are defined. These additional"
	" keywords may change their meanings if a new compression method is"
	" implemented.\n"
	"  '.level' is a point followed by one digit. It defines the"
	" compression level. The special value .0 means: Use default"
	" compression level (=.5).\n"
	"  '@factor' is a factor for the chunk size. The base size is 2 MiB."
	" The value @0 is replaced by the default factor @20 (40 MiB). If the"
	" factor is not set but option --chunk-size is set, the factor will be"
	" calculated by using a rounded value of that option.\n"
	"  All three parts are optional. All default values may be changed in"
	" the future. --compr is a shortcut for --compression and --wia=mode a"
	" shortcut for '--wia --compression mode'. The command 'wit COMPR'"
	" prints an overview about all compression modes."
    },

    {	OPT_MEM, false, false, false, false, false, 0, "mem",
	"size",
	"This option defines a memory usage limit for compressing files (in"
	" MiB if no other unit is entered). When compressing a file with"
	" method MEM (see --compression) the the compression method, level and"
	" chunk size are selected with respect to this limit.\n"
	"  If this option is not set or the value is 0, then the environment"
	" WIT_MEM is tried to read instead. If this fails, the tool tries to"
	" find out the total memory by reading /proc/meminfo. The limit is set"
	" to 80% of the total memory minus 50 MiB."
    },

    {0,0,0,0,0,0,0,0,0,0}, // OPT__N_SPECIFIC == 30

    //----- global options -----

    {	OPT_VERSION, false, false, false, false, false, 'V', "version",
	0,
	"Stop parsing the command line, print a version info and exit."
    },

    {	OPT_HELP, false, false, false, false, false, 'h', "help",
	0,
	"Stop parsing the command line, print a help message and exit."
    },

    {	OPT_XHELP, false, false, false, false, false, 0, "xhelp",
	0,
	"Stop parsing the command line and print a help message with all"
	" commands included. Exit after printing."
    },

    {	OPT_WIDTH, false, false, false, false, false, 0, "width",
	"width",
	"Define the width (number of columns) for help and some other messages"
	" and disable the automatic detection of the terminal width."
    },

    {	OPT_QUIET, false, false, false, false, true, 'q', "quiet",
	0,
	"Be quiet and print only error messages."
    },

    {	OPT_VERBOSE, false, false, false, false, false, 'v', "verbose",
	0,
	"Be verbose -> print program name."
    },

    {	OPT_LOGGING, false, false, false, false, false, 'L', "logging",
	0,
	"This debug option enables the logging of internal memory maps. If set"
	" twice second level memory maps are printed too."
    },

    {	OPT_COLOR, true, false, false, true, false, 0, "color",
	"[=modus]",
	"Define the modus for colored text output. Allowed keywords are: OFF"
	" or NO-COLORS to disable colors, AUTO (default) for automatic"
	" detection, ON for automatic detection but never OFF, 8-COLORS and"
	" 256-COLORS for 8 and 256 color support. Without parameter, ON is"
	" used.\n"
	"  AUTO will enable colorized output only for terminals. AUTO and ON"
	" use environment variable TERM to find the correct color modus.\n"
	"  If a command is prefixed by 'C-', then --color=ON is used"
	" implicitly as default."
    },

    {	OPT_COLOR_256, false, false, false, true, false, 0, "256-colors",
	0,
	"Short cut for --color=256-colors: Force colorized text with 256 color"
	" support."
    },

    {	OPT_NO_COLOR, false, false, false, true, false, 0, "no-colors",
	0,
	"Short cut for --color=off: Deactivate colorized text. This is the"
	" default, if an output file is not a terminal."
    },

    {	OPT_IO, false, false, false, false, false, 0, "io",
	"flags",
	"Setup the IO mode for experiments. The standard file IO is based on"
	" open() function. The value '1' defines that WBFS IO is based on"
	" fopen() function. The value '2' defines the same for ISO files and"
	" value '4' for WIA files. You can combine the values by adding them."
    },

    {	OPT_DSYNC, true, false, false, false, false, 0, "dsync",
	"[=mode]",
	"This option enables the usage of flag O_DSYNC when opening a"
	" partition at a hard drive for writing. With activated flag, writing"
	" an image is some percent slower, but the progress counters are exact"
	" again.\n"
	"  Parameter MODE is optional. If set, it is one of OFF (disable), ON"
	" (enable) or AUTO (default). With AUTO, DSYNC is enabled if the"
	" progress counters are active.\n"
	"  This option has only impact, if compiler and operation system"
	" support the flag O_DSYNC. Linux does."
    },

    {	OPT_ALIGN_WDF, false, false, false, false, false, 0, "align-wdf",
	"[align][,minhole]",
	"Parameter align defines the aligning factor for new WDF images. It"
	" must be a power of 2 and smaller or equal than 1 GiB. The default"
	" WDF alignment is 1 for WDF v1 and 4 for WDF v2. Usual values are 1,"
	" 512, 4K and 32K.\n"
	"  The optional parameter minhole defines the minimal hole size,"
	" before a new chunk is created. If NULL, an internal value is used to"
	" minimize the total file size. minhole can't be smaller than align."
    },

    {	OPT_TEST, false, false, false, false, true, 't', "test",
	0,
	"Run in test mode, modify nothing.\n"
	">>> USE THIS OPTION IF UNSURE! <<<"
    },

    {	OPT_OLD, false, true, false, false, false, 0, "OLD",
	0,
	"Use old implementation if available."
    },

    {	OPT_NEW, false, true, false, false, false, 0, "NEW",
	0,
	"Use new implementation if available."
    },

    {0,0,0,0,0,0,0,0,0,0} // OPT__N_TOTAL == 46

};

//
///////////////////////////////////////////////////////////////////////////////
///////////////             alternate option infos              ///////////////
///////////////////////////////////////////////////////////////////////////////

static const InfoOption_t option_cmd_VERSION_LONG =
    {	OPT_LONG, false, false, false, false, false, 'l', "long",
	0,
	"Print in long format."
    };

static const InfoOption_t option_cmd_CMP_QUIET =
    {	OPT_QUIET, false, false, false, false, false, 'q', "quiet",
	0,
	"Be quiet and print only error messages and failure messages on"
	" mismatch. The comparison is aborted at the first mismatch for each"
	" source image. If set twice print nothing and report the diff result"
	" only as exit status and the complete comparison is aborted at the"
	" first mismatch at all."
    };

static const InfoOption_t option_cmd_CMP_VERBOSE =
    {	OPT_VERBOSE, false, false, false, false, false, 'v', "verbose",
	0,
	"The default is to print only differ messages. If set success messages"
	" and summaries are printed too. If set at least twice, a progress"
	" counter is printed too."
    };

static const InfoOption_t option_cmd_CMP_LIMIT =
    {	OPT_LIMIT, false, false, false, false, false, 0, "limit",
	"num",
	"If not set, the comparison of the current file is aborted if a"
	" mismatch is found. If set, the comparison is aborted after 'limit'"
	" mismatches. To compare the whole file use the special value 0. This"
	" option is ignored in quiet mode."
    };

static const InfoOption_t option_cmd_CMP_LONG =
    {	OPT_LONG, false, false, false, false, false, 'l', "long",
	0,
	"If set, a status line with the offset is printed for each found"
	" mismatch. If set twice, an additional hex dump of the first bytes is"
	" printed. If set 3 or 4 times, the limit is set to 10 or unlimited if"
	" option --limit is not already set. This option is ignored in quiet"
	" mode."
    };

static const InfoOption_t option_cmd_DUMP_LONG =
    {	OPT_LONG, false, false, false, false, false, 'l', "long",
	0,
	"Same as --chunk"
    };


//
///////////////////////////////////////////////////////////////////////////////
///////////////                  CommandTab[]                   ///////////////
///////////////////////////////////////////////////////////////////////////////

static const KeywordTab_t CommandTab[] =
{
    { CMD_VERSION,	"+VERSION",	"+V",		0 },
    { CMD_HELP,		"+HELP",	"+H",		0 },
    { CMD_PACK,		"+PACK",	"+P",		0 },
    { CMD_UNPACK,	"+UNPACK",	"+U",		0 },
    { CMD_CAT,		"+CAT",		"+C",		0 },
    { CMD_CMP,		"+DIFF",	"+CMP",		0 },
    { CMD_DUMP,		"+DUMP",	"+D",		0 },

    { CMD__N,0,0,0 }
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////            OptionShort & OptionLong             ///////////////
///////////////////////////////////////////////////////////////////////////////

static const char OptionShort[] = "VhqvLl1WCs:d:D:ckopzZ:t";

static const struct option OptionLong[] =
{
	{ "version",		0, 0, 'V' },
	{ "help",		0, 0, 'h' },
	{ "xhelp",		0, 0, GO_XHELP },
	{ "width",		1, 0, GO_WIDTH },
	{ "quiet",		0, 0, 'q' },
	{ "verbose",		0, 0, 'v' },
	{ "logging",		0, 0, 'L' },
	{ "color",		2, 0, GO_COLOR },
	{ "256-colors",		0, 0, GO_COLOR_256 },
	 { "256colors",		0, 0, GO_COLOR_256 },
	{ "no-colors",		0, 0, GO_NO_COLOR },
	 { "nocolors",		0, 0, GO_NO_COLOR },
	{ "io",			1, 0, GO_IO },
	{ "dsync",		2, 0, GO_DSYNC },
	{ "chunk",		0, 0, GO_CHUNK },
	{ "long",		0, 0, 'l' },
	{ "minus-1",		0, 0, '1' },
	 { "minus1",		0, 0, '1' },
	{ "limit",		1, 0, GO_LIMIT },
	{ "file-limit",		1, 0, GO_FILE_LIMIT },
	 { "filelimit",		1, 0, GO_FILE_LIMIT },
	{ "block-size",		1, 0, GO_BLOCK_SIZE },
	 { "blocksize",		1, 0, GO_BLOCK_SIZE },
	{ "wdf",		2, 0, 'W' },
	{ "wdf1",		2, 0, GO_WDF1 },
	{ "wdf2",		2, 0, GO_WDF2 },
	{ "align-wdf",		1, 0, GO_ALIGN_WDF },
	 { "alignwdf",		1, 0, GO_ALIGN_WDF },
	 { "wdf-align",		1, 0, GO_ALIGN_WDF },
	 { "wdfalign",		1, 0, GO_ALIGN_WDF },
	{ "wia",		2, 0, GO_WIA },
	{ "ciso",		0, 0, 'C' },
	{ "wbi",		0, 0, GO_WBI },
	{ "suffix",		1, 0, 's' },
	{ "dest",		1, 0, 'd' },
	{ "DEST",		1, 0, 'D' },
	{ "stdout",		0, 0, 'c' },
	{ "keep",		0, 0, 'k' },
	{ "overwrite",		0, 0, 'o' },
	{ "preserve",		0, 0, 'p' },
	{ "auto-split",		0, 0, GO_AUTO_SPLIT },
	 { "autosplit",		0, 0, GO_AUTO_SPLIT },
	{ "no-split",		0, 0, GO_NO_SPLIT },
	 { "nosplit",		0, 0, GO_NO_SPLIT },
	{ "split",		0, 0, 'z' },
	{ "split-size",		1, 0, 'Z' },
	 { "splitsize",		1, 0, 'Z' },
	{ "prealloc",		2, 0, GO_PREALLOC },
	{ "chunk-mode",		1, 0, GO_CHUNK_MODE },
	 { "chunkmode",		1, 0, GO_CHUNK_MODE },
	 { "chm",		1, 0, GO_CHUNK_MODE },
	{ "chunk-size",		1, 0, GO_CHUNK_SIZE },
	 { "chunksize",		1, 0, GO_CHUNK_SIZE },
	 { "chs",		1, 0, GO_CHUNK_SIZE },
	{ "max-chunks",		1, 0, GO_MAX_CHUNKS },
	 { "maxchunks",		1, 0, GO_MAX_CHUNKS },
	 { "mch",		1, 0, GO_MAX_CHUNKS },
	{ "compression",	1, 0, GO_COMPRESSION },
	 { "compr",		1, 0, GO_COMPRESSION },
	{ "mem",		1, 0, GO_MEM },
	{ "test",		0, 0, 't' },
	{ "OLD",		0, 0, GO_OLD },
	{ "NEW",		0, 0, GO_NEW },

	{0,0,0,0}
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////            OptionUsed & OptionIndex             ///////////////
///////////////////////////////////////////////////////////////////////////////

static u8 OptionUsed[OPT__N_TOTAL+1] = {0};

static const OptionIndex_t OptionIndex[UIOPT_INDEX_SIZE] = 
{
	/* 0x00   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0x10   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0x20   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0x30   */	 0,
	/* 0x31 1 */	OPT_MINUS1,
	/* 0x32   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,
	/* 0x40   */	 0,0,0,
	/* 0x43 C */	OPT_CISO,
	/* 0x44 D */	OPT_DEST2,
	/* 0x45   */	 0,0,0,0, 0,0,0,
	/* 0x4c L */	OPT_LOGGING,
	/* 0x4d   */	 0,0,0,0, 0,0,0,0, 0,
	/* 0x56 V */	OPT_VERSION,
	/* 0x57 W */	OPT_WDF,
	/* 0x58   */	 0,0,
	/* 0x5a Z */	OPT_SPLIT_SIZE,
	/* 0x5b   */	 0,0,0,0, 0,0,0,0, 
	/* 0x63 c */	OPT_STDOUT,
	/* 0x64 d */	OPT_DEST,
	/* 0x65   */	 0,0,0,
	/* 0x68 h */	OPT_HELP,
	/* 0x69   */	 0,0,
	/* 0x6b k */	OPT_KEEP,
	/* 0x6c l */	OPT_LONG,
	/* 0x6d   */	 0,0,
	/* 0x6f o */	OPT_OVERWRITE,
	/* 0x70 p */	OPT_PRESERVE,
	/* 0x71 q */	OPT_QUIET,
	/* 0x72   */	 0,
	/* 0x73 s */	OPT_SUFFIX,
	/* 0x74 t */	OPT_TEST,
	/* 0x75   */	 0,
	/* 0x76 v */	OPT_VERBOSE,
	/* 0x77   */	 0,0,0,
	/* 0x7a z */	OPT_SPLIT,
	/* 0x7b   */	 0,0,0,0, 0,
	/* 0x80   */	OPT_XHELP,
	/* 0x81   */	OPT_WIDTH,
	/* 0x82   */	OPT_COLOR,
	/* 0x83   */	OPT_COLOR_256,
	/* 0x84   */	OPT_NO_COLOR,
	/* 0x85   */	OPT_IO,
	/* 0x86   */	OPT_DSYNC,
	/* 0x87   */	OPT_CHUNK,
	/* 0x88   */	OPT_LIMIT,
	/* 0x89   */	OPT_FILE_LIMIT,
	/* 0x8a   */	OPT_BLOCK_SIZE,
	/* 0x8b   */	OPT_WDF1,
	/* 0x8c   */	OPT_WDF2,
	/* 0x8d   */	OPT_ALIGN_WDF,
	/* 0x8e   */	OPT_WIA,
	/* 0x8f   */	OPT_WBI,
	/* 0x90   */	OPT_AUTO_SPLIT,
	/* 0x91   */	OPT_NO_SPLIT,
	/* 0x92   */	OPT_PREALLOC,
	/* 0x93   */	OPT_CHUNK_MODE,
	/* 0x94   */	OPT_CHUNK_SIZE,
	/* 0x95   */	OPT_MAX_CHUNKS,
	/* 0x96   */	OPT_COMPRESSION,
	/* 0x97   */	OPT_MEM,
	/* 0x98   */	OPT_OLD,
	/* 0x99   */	OPT_NEW,
	/* 0x9a   */	 0,0,0,0, 0,0,
	/* 0xa0   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0xb0   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0xc0   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0xd0   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0xe0   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/* 0xf0   */	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////                opt_allowed_cmd_*                ///////////////
///////////////////////////////////////////////////////////////////////////////

static u8 option_allowed_cmd_VERSION[30] = // cmd #1
{
    0,0,1,0,0, 0,0,0,0,0,  0,0,0,0,0, 0,0,0,0,0,  0,0,0,0,0, 0,0,0,0,0
};

static u8 option_allowed_cmd_HELP[30] = // cmd #2
{
    1,1,1,1,1, 1,1,1,1,1,  1,1,1,1,1, 1,1,1,1,1,  1,1,1,1,1, 1,1,1,1,1
};

static u8 option_allowed_cmd_PACK[30] = // cmd #3
{
    0,0,0,0,0, 0,0,1,1,1,  1,1,1,1,1, 1,1,1,1,1,  1,1,1,1,1, 1,1,1,1,1
};

static u8 option_allowed_cmd_UNPACK[30] = // cmd #4
{
    0,0,0,0,0, 0,0,0,0,0,  0,0,0,0,1, 1,1,1,1,1,  1,1,1,1,1, 1,1,1,1,1
};

static u8 option_allowed_cmd_CAT[30] = // cmd #5
{
    0,0,0,0,0, 0,0,0,0,0,  0,0,0,0,1, 1,0,0,1,0,  0,0,0,0,0, 0,0,0,0,0
};

static u8 option_allowed_cmd_CMP[30] = // cmd #6
{
    0,0,1,0,1, 1,1,0,0,0,  0,0,0,0,0, 0,0,0,0,0,  0,0,0,0,0, 0,0,0,0,0
};

static u8 option_allowed_cmd_DUMP[30] = // cmd #7
{
    0,1,1,1,0, 0,0,0,0,0,  0,0,0,0,1, 1,0,0,1,0,  0,0,0,0,0, 0,0,0,0,0
};


//
///////////////////////////////////////////////////////////////////////////////
///////////////                 InfoOption tabs                 ///////////////
///////////////////////////////////////////////////////////////////////////////

static const InfoOption_t * option_tab_tool[] =
{
	OptionInfo + OPT_VERSION,
	OptionInfo + OPT_HELP,
	OptionInfo + OPT_XHELP,
	OptionInfo + OPT_WIDTH,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_QUIET,
	OptionInfo + OPT_VERBOSE,
	OptionInfo + OPT_LOGGING,
	OptionInfo + OPT_COLOR,
	OptionInfo + OPT_COLOR_256,
	OptionInfo + OPT_NO_COLOR,
	OptionInfo + OPT_IO,
	OptionInfo + OPT_DSYNC,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_ALIGN_WDF,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_TEST,

	0
};

static const InfoOption_t * option_tab_cmd_VERSION[] =
{
	&option_cmd_VERSION_LONG,

	0
};

static const InfoOption_t * option_tab_cmd_HELP[] =
{
	OptionInfo + OPT_WIDTH,

	0
};

static const InfoOption_t * option_tab_cmd_PACK[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_AUTO_SPLIT,
	OptionInfo + OPT_NO_SPLIT,
	OptionInfo + OPT_SPLIT,
	OptionInfo + OPT_SPLIT_SIZE,
	OptionInfo + OPT_PREALLOC,
	OptionInfo + OPT_CHUNK_MODE,
	OptionInfo + OPT_CHUNK_SIZE,
	OptionInfo + OPT_MAX_CHUNKS,
	OptionInfo + OPT_COMPRESSION,
	OptionInfo + OPT_MEM,
	OptionInfo + OPT_STDOUT,
	OptionInfo + OPT_KEEP,
	OptionInfo + OPT_PRESERVE,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_WDF,
	OptionInfo + OPT_WDF1,
	OptionInfo + OPT_WDF2,
	OptionInfo + OPT_ALIGN_WDF,
	OptionInfo + OPT_WIA,
	OptionInfo + OPT_CISO,
	OptionInfo + OPT_WBI,
	OptionInfo + OPT_SUFFIX,

	0
};

static const InfoOption_t * option_tab_cmd_UNPACK[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_AUTO_SPLIT,
	OptionInfo + OPT_NO_SPLIT,
	OptionInfo + OPT_SPLIT,
	OptionInfo + OPT_SPLIT_SIZE,
	OptionInfo + OPT_PREALLOC,
	OptionInfo + OPT_CHUNK_MODE,
	OptionInfo + OPT_CHUNK_SIZE,
	OptionInfo + OPT_MAX_CHUNKS,
	OptionInfo + OPT_COMPRESSION,
	OptionInfo + OPT_MEM,
	OptionInfo + OPT_STDOUT,
	OptionInfo + OPT_KEEP,
	OptionInfo + OPT_PRESERVE,

	0
};

static const InfoOption_t * option_tab_cmd_CAT[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,

	0
};

static const InfoOption_t * option_tab_cmd_CMP[] =
{
	&option_cmd_CMP_QUIET,
	&option_cmd_CMP_VERBOSE,
	OptionInfo + OPT_FILE_LIMIT,
	&option_cmd_CMP_LIMIT,
	&option_cmd_CMP_LONG,
	OptionInfo + OPT_BLOCK_SIZE,

	0
};

static const InfoOption_t * option_tab_cmd_DUMP[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_CHUNK,
	&option_cmd_DUMP_LONG,
	OptionInfo + OPT_MINUS1,

	0
};


//
///////////////////////////////////////////////////////////////////////////////
///////////////                   InfoCommand                   ///////////////
///////////////////////////////////////////////////////////////////////////////

static const InfoCommand_t CommandInfo[CMD__N+1] =
{
    {	0,
	false,
	false,
	false,
	"wdf",
	0,
	"wdf [options]... [+command] [options]... files...",
	"wdf is a support tool for WDF, WIA, CISO and GCZ images. It converts"
	" (packs and unpacks), compares and dumps WDF and CISO images."
	" Additionally it dumps WIA and GCT image and unpacks WIA images. The"
	" default command depends on the program file name (see command"
	" descriptions). Usual names are wdf, unwdf, wdf-cat, wdf-cmp and"
	" wdf-dump (with or without minus signs).\n"
	"  'wdf +CAT' replaces the old tool wdf-cat and 'wdf +DUMP' the old"
	" tool wdf-dump.",
	0,
	14,
	option_tab_tool,
	0
    },

    {	CMD_VERSION,
	false,
	false,
	false,
	"+VERSION",
	"+V",
	"wdf +VERSION [ignored]...",
	"Print program name, version and the defaults and exit.",
	0,
	1,
	option_tab_cmd_VERSION,
	option_allowed_cmd_VERSION
    },

    {	CMD_HELP,
	false,
	false,
	false,
	"+HELP",
	"+H",
	"wdf +HELP [+command] [ignored]...",
	"Print help and exit. If the first non option is a valid command name,"
	" then a help for the given command is printed.",
	0,
	1,
	option_tab_cmd_HELP,
	option_allowed_cmd_HELP
    },

    {	CMD_PACK,
	false,
	false,
	true,
	"+PACK",
	"+P",
	"wdf +PACK [option]... files...",
	"Pack sources into WDF or CISO images. This is the general default.",
	0,
	24,
	option_tab_cmd_PACK,
	option_allowed_cmd_PACK
    },

    {	CMD_UNPACK,
	false,
	false,
	false,
	"+UNPACK",
	"+U",
	"wdf +UNPACK [option]... files...",
	"Unpack WDF, WIA and CISO images.\n"
	"  This is the default command, when the program name starts with the"
	" two letters 'un' in any case.",
	0,
	16,
	option_tab_cmd_UNPACK,
	option_allowed_cmd_UNPACK
    },

    {	CMD_CAT,
	false,
	false,
	false,
	"+CAT",
	"+C",
	"wdf +CAT [option]... files...",
	"Concatenate files and print on the standard output. WDF, WIA and CISO"
	" files are extracted before printing, all other files are copied byte"
	" by byte.\n"
	"  This is the default command, when the program name contains the sub"
	" string 'cat' in any case. 'wdf +CAT' replaces the old tool wdf-cat.",
	0,
	3,
	option_tab_cmd_CAT,
	option_allowed_cmd_CAT
    },

    {	CMD_CMP,
	false,
	false,
	false,
	"+DIFF",
	"+CMP",
	"wdf +DIFF [option]... files...",
	"Compare files and unpack WDF, WIA and CISO while comparing.\n"
	"  The standard is to compare two source files. If --dest or --DEST is"
	" set, than all source files are compared against files in the"
	" destination path with equal names. If the second source file is"
	" missed, then standard input (stdin) is used instead.\n"
	"  This is the default command, when the program name contains the sub"
	" string 'diff' or 'cmp' in any case.",
	0,
	6,
	option_tab_cmd_CMP,
	option_allowed_cmd_CMP
    },

    {	CMD_DUMP,
	false,
	false,
	false,
	"+DUMP",
	"+D",
	"wdf +DUMP [option]... files...",
	"Dump the data structure of WDF, WIA, CISO and GCZ images and ignore"
	" other files.\n"
	"  This is the default command, when the program contains the sub"
	" string 'dump' in any case. 'wdf +DUMP' replaces the old tool"
	" wdf-dump.",
	0,
	6,
	option_tab_cmd_DUMP,
	option_allowed_cmd_DUMP
    },

    {0,0,0,0,0,0,0,0,0,0,0,0}
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////                     InfoUI                      ///////////////
///////////////////////////////////////////////////////////////////////////////

const InfoUI_t InfoUI_wdf =
{
	"wdf",
	CMD__N,
	CommandTab,
	CommandInfo,
	OPT__N_SPECIFIC,
	OPT__N_TOTAL,
	OptionInfo,
	OptionUsed,
	OptionIndex,
	OptionShort,
	OptionLong
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////                       END                       ///////////////
///////////////////////////////////////////////////////////////////////////////
