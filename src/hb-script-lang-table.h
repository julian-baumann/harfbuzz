typedef struct {
  const char lang[9];
  hb_script_t scripts[3];
} HbScriptForLang;

static const HbScriptForLang hb_script_for_lang[] = {
  { "aa",       { HB_SCRIPT_LATIN } },
  { "ab",       { HB_SCRIPT_CYRILLIC } },
  { "af",       { HB_SCRIPT_LATIN } },
  { "ak",       { HB_SCRIPT_LATIN } },
  { "am",       { HB_SCRIPT_ETHIOPIC } },
  { "an",       { HB_SCRIPT_LATIN } },
  { "ar",       { HB_SCRIPT_ARABIC } },
  { "as",       { HB_SCRIPT_BENGALI } },
  { "ast",      { HB_SCRIPT_LATIN } },
  { "av",       { HB_SCRIPT_CYRILLIC } },
  { "ay",       { HB_SCRIPT_LATIN } },
  { "az-az",    { HB_SCRIPT_LATIN } },
  { "az-ir",    { HB_SCRIPT_ARABIC } },
  { "ba",       { HB_SCRIPT_CYRILLIC } },
  { "be",       { HB_SCRIPT_CYRILLIC } },
  { "ber-dz",   { HB_SCRIPT_LATIN } },
  { "ber-ma",   { HB_SCRIPT_TIFINAGH } },
  { "bg",       { HB_SCRIPT_CYRILLIC } },
  { "bh",       { HB_SCRIPT_DEVANAGARI } },
  { "bho",      { HB_SCRIPT_DEVANAGARI } },
  { "bi",       { HB_SCRIPT_LATIN } },
  { "bin",      { HB_SCRIPT_LATIN } },
  { "bm",       { HB_SCRIPT_LATIN } },
  { "bn",       { HB_SCRIPT_BENGALI } },
  { "bo",       { HB_SCRIPT_TIBETAN } },
  { "br",       { HB_SCRIPT_LATIN } },
  { "brx",      { HB_SCRIPT_DEVANAGARI } },
  { "bs",       { HB_SCRIPT_LATIN } },
  { "bua",      { HB_SCRIPT_CYRILLIC } },
  { "byn",      { HB_SCRIPT_ETHIOPIC } },
  { "ca",       { HB_SCRIPT_LATIN } },
  { "ce",       { HB_SCRIPT_CYRILLIC } },
  { "ch",       { HB_SCRIPT_LATIN } },
  { "chm",      { HB_SCRIPT_CYRILLIC } },
  { "chr",      { HB_SCRIPT_CHEROKEE } },
  { "co",       { HB_SCRIPT_LATIN } },
  { "crh",      { HB_SCRIPT_LATIN } },
  { "cs",       { HB_SCRIPT_LATIN } },
  { "csb",      { HB_SCRIPT_LATIN } },
  { "cu",       { HB_SCRIPT_CYRILLIC } },
  { "cv",       { HB_SCRIPT_CYRILLIC, HB_SCRIPT_LATIN } },
  { "cy",       { HB_SCRIPT_LATIN } },
  { "da",       { HB_SCRIPT_LATIN } },
  { "de",       { HB_SCRIPT_LATIN } },
  { "doi",      { HB_SCRIPT_DEVANAGARI } },
  { "dv",       { HB_SCRIPT_THAANA } },
  { "dz",       { HB_SCRIPT_TIBETAN } },
  { "ee",       { HB_SCRIPT_LATIN } },
  { "el",       { HB_SCRIPT_GREEK } },
  { "en",       { HB_SCRIPT_LATIN } },
  { "eo",       { HB_SCRIPT_LATIN } },
  { "es",       { HB_SCRIPT_LATIN } },
  { "et",       { HB_SCRIPT_LATIN } },
  { "eu",       { HB_SCRIPT_LATIN } },
  { "fa",       { HB_SCRIPT_ARABIC } },
  { "fat",      { HB_SCRIPT_LATIN } },
  { "ff",       { HB_SCRIPT_LATIN } },
  { "fi",       { HB_SCRIPT_LATIN } },
  { "fil",      { HB_SCRIPT_LATIN } },
  { "fj",       { HB_SCRIPT_LATIN } },
  { "fo",       { HB_SCRIPT_LATIN } },
  { "fr",       { HB_SCRIPT_LATIN } },
  { "fur",      { HB_SCRIPT_LATIN } },
  { "fy",       { HB_SCRIPT_LATIN } },
  { "ga",       { HB_SCRIPT_LATIN } },
  { "gd",       { HB_SCRIPT_LATIN } },
  { "gez",      { HB_SCRIPT_ETHIOPIC } },
  { "gl",       { HB_SCRIPT_LATIN } },
  { "gn",       { HB_SCRIPT_LATIN } },
  { "gu",       { HB_SCRIPT_GUJARATI } },
  { "gv",       { HB_SCRIPT_LATIN } },
  { "ha",       { HB_SCRIPT_LATIN } },
  { "haw",      { HB_SCRIPT_LATIN } },
  { "he",       { HB_SCRIPT_HEBREW } },
  { "hi",       { HB_SCRIPT_DEVANAGARI } },
  { "hne",      { HB_SCRIPT_DEVANAGARI } },
  { "ho",       { HB_SCRIPT_LATIN } },
  { "hr",       { HB_SCRIPT_LATIN } },
  { "hsb",      { HB_SCRIPT_LATIN } },
  { "ht",       { HB_SCRIPT_LATIN } },
  { "hu",       { HB_SCRIPT_LATIN } },
  { "hy",       { HB_SCRIPT_ARMENIAN } },
  { "hz",       { HB_SCRIPT_LATIN } },
  { "ia",       { HB_SCRIPT_LATIN } },
  { "id",       { HB_SCRIPT_LATIN } },
  { "ie",       { HB_SCRIPT_LATIN } },
  { "ig",       { HB_SCRIPT_LATIN } },
  { "ii",       { HB_SCRIPT_YI } },
  { "ik",       { HB_SCRIPT_CYRILLIC } },
  { "io",       { HB_SCRIPT_LATIN } },
  { "is",       { HB_SCRIPT_LATIN } },
  { "it",       { HB_SCRIPT_LATIN } },
  { "iu",       { HB_SCRIPT_CANADIAN_SYLLABICS } },
  { "ja",       { HB_SCRIPT_HAN, HB_SCRIPT_KATAKANA, HB_SCRIPT_HIRAGANA } },
  { "jv",       { HB_SCRIPT_LATIN } },
  { "ka",       { HB_SCRIPT_GEORGIAN } },
  { "kaa",      { HB_SCRIPT_CYRILLIC } },
  { "kab",      { HB_SCRIPT_LATIN } },
  { "ki",       { HB_SCRIPT_LATIN } },
  { "kj",       { HB_SCRIPT_LATIN } },
  { "kk",       { HB_SCRIPT_CYRILLIC } },
  { "kl",       { HB_SCRIPT_LATIN } },
  { "km",       { HB_SCRIPT_KHMER } },
  { "kn",       { HB_SCRIPT_KANNADA } },
  { "ko",       { HB_SCRIPT_HANGUL } },
  { "kok",      { HB_SCRIPT_DEVANAGARI } },
  { "kr",       { HB_SCRIPT_LATIN } },
  { "ks",       { HB_SCRIPT_ARABIC } },
  { "ku-am",    { HB_SCRIPT_CYRILLIC } },
  { "ku-iq",    { HB_SCRIPT_ARABIC } },
  { "ku-ir",    { HB_SCRIPT_ARABIC } },
  { "ku-tr",    { HB_SCRIPT_LATIN } },
  { "kum",      { HB_SCRIPT_CYRILLIC } },
  { "kv",       { HB_SCRIPT_CYRILLIC } },
  { "kw",       { HB_SCRIPT_LATIN } },
  { "kwm",      { HB_SCRIPT_LATIN } },
  { "ky",       { HB_SCRIPT_CYRILLIC } },
  { "la",       { HB_SCRIPT_LATIN } },
  { "lah",      { HB_SCRIPT_ARABIC } },
  { "lb",       { HB_SCRIPT_LATIN } },
  { "lez",      { HB_SCRIPT_CYRILLIC } },
  { "lg",       { HB_SCRIPT_LATIN } },
  { "li",       { HB_SCRIPT_LATIN } },
  { "ln",       { HB_SCRIPT_LATIN } },
  { "lo",       { HB_SCRIPT_LAO } },
  { "lt",       { HB_SCRIPT_LATIN } },
  { "lv",       { HB_SCRIPT_LATIN } },
  { "mai",      { HB_SCRIPT_DEVANAGARI } },
  { "mg",       { HB_SCRIPT_LATIN } },
  { "mh",       { HB_SCRIPT_LATIN } },
  { "mi",       { HB_SCRIPT_LATIN } },
  { "mk",       { HB_SCRIPT_CYRILLIC } },
  { "ml",       { HB_SCRIPT_MALAYALAM } },
  { "mn-cn",    { HB_SCRIPT_MONGOLIAN } },
  { "mn-mn",    { HB_SCRIPT_CYRILLIC } },
  { "mni",      { HB_SCRIPT_BENGALI } },
  { "mo",       { HB_SCRIPT_CYRILLIC, HB_SCRIPT_LATIN } },
  { "mr",       { HB_SCRIPT_DEVANAGARI } },
  { "ms",       { HB_SCRIPT_LATIN } },
  { "mt",       { HB_SCRIPT_LATIN } },
  { "my",       { HB_SCRIPT_MYANMAR } },
  { "na",       { HB_SCRIPT_LATIN } },
  { "nb",       { HB_SCRIPT_LATIN } },
  { "nds",      { HB_SCRIPT_LATIN } },
  { "ne",       { HB_SCRIPT_DEVANAGARI } },
  { "ng",       { HB_SCRIPT_LATIN } },
  { "nl",       { HB_SCRIPT_LATIN } },
  { "nn",       { HB_SCRIPT_LATIN } },
  { "no",       { HB_SCRIPT_LATIN } },
  { "nqo",      { HB_SCRIPT_NKO } },
  { "nr",       { HB_SCRIPT_LATIN } },
  { "nso",      { HB_SCRIPT_LATIN } },
  { "nv",       { HB_SCRIPT_LATIN } },
  { "ny",       { HB_SCRIPT_LATIN } },
  { "oc",       { HB_SCRIPT_LATIN } },
  { "om",       { HB_SCRIPT_LATIN } },
  { "or",       { HB_SCRIPT_ORIYA } },
  { "os",       { HB_SCRIPT_CYRILLIC } },
  { "ota",      { HB_SCRIPT_ARABIC } },
  { "pa",       { HB_SCRIPT_GURMUKHI } },
  { "pa-pk",    { HB_SCRIPT_ARABIC } },
  { "pap-an",   { HB_SCRIPT_LATIN } },
  { "pap-aw",   { HB_SCRIPT_LATIN } },
  { "pl",       { HB_SCRIPT_LATIN } },
  { "ps-af",    { HB_SCRIPT_ARABIC } },
  { "ps-pk",    { HB_SCRIPT_ARABIC } },
  { "pt",       { HB_SCRIPT_LATIN } },
  { "qu",       { HB_SCRIPT_LATIN } },
  { "quz",      { HB_SCRIPT_LATIN } },
  { "rm",       { HB_SCRIPT_LATIN } },
  { "rn",       { HB_SCRIPT_LATIN } },
  { "ro",       { HB_SCRIPT_LATIN } },
  { "ru",       { HB_SCRIPT_CYRILLIC } },
  { "rw",       { HB_SCRIPT_LATIN } },
  { "sa",       { HB_SCRIPT_DEVANAGARI } },
  { "sah",      { HB_SCRIPT_CYRILLIC } },
  { "sat",      { HB_SCRIPT_DEVANAGARI } },
  { "sc",       { HB_SCRIPT_LATIN } },
  { "sco",      { HB_SCRIPT_LATIN } },
  { "sd",       { HB_SCRIPT_ARABIC } },
  { "se",       { HB_SCRIPT_LATIN } },
  { "sel",      { HB_SCRIPT_CYRILLIC } },
  { "sg",       { HB_SCRIPT_LATIN } },
  { "sh",       { HB_SCRIPT_CYRILLIC, HB_SCRIPT_LATIN } },
  { "shs",      { HB_SCRIPT_LATIN } },
  { "si",       { HB_SCRIPT_SINHALA } },
  { "sid",      { HB_SCRIPT_ETHIOPIC } },
  { "sk",       { HB_SCRIPT_LATIN } },
  { "sl",       { HB_SCRIPT_LATIN } },
  { "sm",       { HB_SCRIPT_LATIN } },
  { "sma",      { HB_SCRIPT_LATIN } },
  { "smj",      { HB_SCRIPT_LATIN } },
  { "smn",      { HB_SCRIPT_LATIN } },
  { "sms",      { HB_SCRIPT_LATIN } },
  { "sn",       { HB_SCRIPT_LATIN } },
  { "so",       { HB_SCRIPT_LATIN } },
  { "sq",       { HB_SCRIPT_LATIN } },
  { "sr",       { HB_SCRIPT_CYRILLIC } },
  { "ss",       { HB_SCRIPT_LATIN } },
  { "st",       { HB_SCRIPT_LATIN } },
  { "su",       { HB_SCRIPT_LATIN } },
  { "sv",       { HB_SCRIPT_LATIN } },
  { "sw",       { HB_SCRIPT_LATIN } },
  { "syr",      { HB_SCRIPT_SYRIAC } },
  { "ta",       { HB_SCRIPT_TAMIL } },
  { "te",       { HB_SCRIPT_TELUGU } },
  { "tg",       { HB_SCRIPT_CYRILLIC } },
  { "th",       { HB_SCRIPT_THAI } },
  { "ti-er",    { HB_SCRIPT_ETHIOPIC } },
  { "ti-et",    { HB_SCRIPT_ETHIOPIC } },
  { "tig",      { HB_SCRIPT_ETHIOPIC } },
  { "tk",       { HB_SCRIPT_LATIN } },
  { "tl",       { HB_SCRIPT_LATIN } },
  { "tn",       { HB_SCRIPT_LATIN } },
  { "to",       { HB_SCRIPT_LATIN } },
  { "tr",       { HB_SCRIPT_LATIN } },
  { "ts",       { HB_SCRIPT_LATIN } },
  { "tt",       { HB_SCRIPT_CYRILLIC } },
  { "tw",       { HB_SCRIPT_LATIN } },
  { "ty",       { HB_SCRIPT_LATIN } },
  { "tyv",      { HB_SCRIPT_CYRILLIC } },
  { "ug",       { HB_SCRIPT_ARABIC } },
  { "uk",       { HB_SCRIPT_CYRILLIC } },
  { "und-zmth", { HB_SCRIPT_LATIN, HB_SCRIPT_GREEK } },
  { "und-zsye", { (hb_script_t) 0 } },
  { "ur",       { HB_SCRIPT_ARABIC } },
  { "uz",       { HB_SCRIPT_LATIN } },
  { "ve",       { HB_SCRIPT_LATIN } },
  { "vi",       { HB_SCRIPT_LATIN } },
  { "vo",       { HB_SCRIPT_LATIN } },
  { "vot",      { HB_SCRIPT_LATIN } },
  { "wa",       { HB_SCRIPT_LATIN } },
  { "wal",      { HB_SCRIPT_ETHIOPIC } },
  { "wen",      { HB_SCRIPT_LATIN } },
  { "wo",       { HB_SCRIPT_LATIN } },
  { "xh",       { HB_SCRIPT_LATIN } },
  { "yap",      { HB_SCRIPT_LATIN } },
  { "yi",       { HB_SCRIPT_HEBREW } },
  { "yo",       { HB_SCRIPT_LATIN } },
  { "za",       { HB_SCRIPT_LATIN } },
  { "zh-cn",    { HB_SCRIPT_HAN } },
  { "zh-hk",    { HB_SCRIPT_HAN } },
  { "zh-mo",    { HB_SCRIPT_HAN } },
  { "zh-sg",    { HB_SCRIPT_HAN } },
  { "zh-tw",    { HB_SCRIPT_HAN } },
  { "zu",       { HB_SCRIPT_LATIN } }
};
