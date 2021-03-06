"[-mtx options: default -0]\n"
"-0     integer per-glyph metrics\n"
"-1     real per-glyph metrics\n"
"-2     integer per-glyph metrics + aggregate bbox\n"
"-3     real per-glyph metrics + aggregate bbox\n"
"\n"
"Metrics mode writes the glyph metrics of an abstract font. The type of the\n"
"metric values and the information displayed is controlled by the various\n"
"options described above.\n"
"\n"
"The glyph metrics include the identity of the glyph, its width, and its\n",
"bounding box. A precise bounding box is computed from analysis of the path\n"
"data. The aggregate bounding box is then computed from analysis of the bounding\n"
"boxes for each glyph. The glyphs that set the values in the aggregate bounding\n"
"box are also displayed.\n"
"\n"
"For example, the command:\n"
"\n"
"    tx -mtx -2 -fd 2 LogoCut-Ultra.otf\n"
"\n"
"will write the integer glyph metrics and aggregate bounding box for the glyphs\n"
"belonging to font dictionary 2 in the font file \"LogoCut-Ultra.otf\".\n"
