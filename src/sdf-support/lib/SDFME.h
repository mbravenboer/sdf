#ifndef _SDFME_H
#define _SDFME_H

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "SDFME_dict.h"

typedef struct _SDF_OptLayout *SDF_OptLayout;
typedef struct _SDF_Layout *SDF_Layout;
typedef struct _SDF_LexLayoutList *SDF_LexLayoutList;
typedef struct _SDF_AFun *SDF_AFun;
typedef struct _SDF_ATerm *SDF_ATerm;
typedef struct _SDF_Annotation *SDF_Annotation;
typedef struct _SDF_Start *SDF_Start;
typedef struct _SDF_ATermArgs *SDF_ATermArgs;
typedef struct _SDF_ATermElems *SDF_ATermElems;
typedef struct _SDF_ATermAnnos *SDF_ATermAnnos;
typedef struct _SDF_IntCon *SDF_IntCon;
typedef struct _SDF_OptExp *SDF_OptExp;
typedef struct _SDF_RealCon *SDF_RealCon;
typedef struct _SDF_Grammar *SDF_Grammar;
typedef struct _SDF_Alias *SDF_Alias;
typedef struct _SDF_Aliases *SDF_Aliases;
typedef struct _SDF_AliasList *SDF_AliasList;
typedef struct _SDF_Symbol *SDF_Symbol;
typedef struct _SDF_CharRange *SDF_CharRange;
typedef struct _SDF_CharRanges *SDF_CharRanges;
typedef struct _SDF_OptCharRanges *SDF_OptCharRanges;
typedef struct _SDF_CharClass *SDF_CharClass;
typedef struct _SDF_LexNumChar *SDF_LexNumChar;
typedef struct _SDF_NumChar *SDF_NumChar;
typedef struct _SDF_LexShortChar *SDF_LexShortChar;
typedef struct _SDF_ShortChar *SDF_ShortChar;
typedef struct _SDF_Character *SDF_Character;
typedef struct _SDF_ATermAttribute *SDF_ATermAttribute;
typedef struct _SDF_Attribute *SDF_Attribute;
typedef struct _SDF_Attributes *SDF_Attributes;
typedef struct _SDF_Production *SDF_Production;
typedef struct _SDF_Productions *SDF_Productions;
typedef struct _SDF_AttributeList *SDF_AttributeList;
typedef struct _SDF_ProductionList *SDF_ProductionList;
typedef struct _SDF_Label *SDF_Label;
typedef struct _SDF_LexSingleQuotedStrChar *SDF_LexSingleQuotedStrChar;
typedef struct _SDF_SingleQuotedStrChar *SDF_SingleQuotedStrChar;
typedef struct _SDF_LexSingleQuotedStrCon *SDF_LexSingleQuotedStrCon;
typedef struct _SDF_SingleQuotedStrCon *SDF_SingleQuotedStrCon;
typedef struct _SDF_FunctionName *SDF_FunctionName;
typedef struct _SDF_LexSingleQuotedStrCharChars *SDF_LexSingleQuotedStrCharChars;
typedef struct _SDF_SymbolArguments *SDF_SymbolArguments;
typedef struct _SDF_LexModuleWord *SDF_LexModuleWord;
typedef struct _SDF_ModuleWord *SDF_ModuleWord;
typedef struct _SDF_LexModuleId *SDF_LexModuleId;
typedef struct _SDF_ModuleId *SDF_ModuleId;
typedef struct _SDF_Definition *SDF_Definition;
typedef struct _SDF_Module *SDF_Module;
typedef struct _SDF_Section *SDF_Section;
typedef struct _SDF_Sections *SDF_Sections;
typedef struct _SDF_ModuleName *SDF_ModuleName;
typedef struct _SDF_ImpSection *SDF_ImpSection;
typedef struct _SDF_Imports *SDF_Imports;
typedef struct _SDF_Import *SDF_Import;
typedef struct _SDF_ModuleList *SDF_ModuleList;
typedef struct _SDF_ImpSectionList *SDF_ImpSectionList;
typedef struct _SDF_SectionList *SDF_SectionList;
typedef struct _SDF_ImportList *SDF_ImportList;
typedef struct _SDF_Associativity *SDF_Associativity;
typedef struct _SDF_ArgumentIndicator *SDF_ArgumentIndicator;
typedef struct _SDF_Group *SDF_Group;
typedef struct _SDF_Priority *SDF_Priority;
typedef struct _SDF_Priorities *SDF_Priorities;
typedef struct _SDF_NatConArguments *SDF_NatConArguments;
typedef struct _SDF_GroupList *SDF_GroupList;
typedef struct _SDF_PriorityList *SDF_PriorityList;
typedef struct _SDF_SymbolTail *SDF_SymbolTail;
typedef struct _SDF_SymbolRest *SDF_SymbolRest;
typedef struct _SDF_Renamings *SDF_Renamings;
typedef struct _SDF_Renaming *SDF_Renaming;
typedef struct _SDF_RenamingList *SDF_RenamingList;
typedef struct _SDF_Lookahead *SDF_Lookahead;
typedef struct _SDF_Lookaheads *SDF_Lookaheads;
typedef struct _SDF_Restriction *SDF_Restriction;
typedef struct _SDF_Restrictions *SDF_Restrictions;
typedef struct _SDF_LookaheadList *SDF_LookaheadList;
typedef struct _SDF_RestrictionList *SDF_RestrictionList;
typedef struct _SDF_Sort *SDF_Sort;
typedef struct _SDF_SDF *SDF_SDF;
typedef struct _SDF_LexSort *SDF_LexSort;
typedef struct _SDF_SymbolParameters *SDF_SymbolParameters;
typedef struct _SDF_Symbols *SDF_Symbols;
typedef struct _SDF_SymbolList *SDF_SymbolList;
typedef struct _SDF_LexLayout *SDF_LexLayout;
typedef struct _SDF_LexStrChar *SDF_LexStrChar;
typedef struct _SDF_StrChar *SDF_StrChar;
typedef struct _SDF_LexStrCon *SDF_LexStrCon;
typedef struct _SDF_StrCon *SDF_StrCon;
typedef struct _SDF_LexStrCharChars *SDF_LexStrCharChars;
typedef struct _SDF_LexNatCon *SDF_LexNatCon;
typedef struct _SDF_NatCon *SDF_NatCon;
typedef struct _SDF_LexIdCon *SDF_LexIdCon;
typedef struct _SDF_IdCon *SDF_IdCon;

#ifdef FAST_API
#define SDF_initSDFMEApi() (init_SDFME_dict())
#else
void _SDF_initSDFMEApi(void);
#define SDF_initSDFMEApi() (_SDF_initSDFMEApi())
#endif

#ifdef FAST_API
#define SDF_protectOptLayout(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectOptLayout(SDF_OptLayout *arg);
#define SDF_protectOptLayout(arg) (_SDF_protectOptLayout(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectOptLayout(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectOptLayout(SDF_OptLayout *arg);
#define SDF_unprotectOptLayout(arg) (_SDF_unprotectOptLayout(arg))
#endif
#ifdef FAST_API
#define SDF_protectLayout(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLayout(SDF_Layout *arg);
#define SDF_protectLayout(arg) (_SDF_protectLayout(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLayout(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLayout(SDF_Layout *arg);
#define SDF_unprotectLayout(arg) (_SDF_unprotectLayout(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexLayoutList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexLayoutList(SDF_LexLayoutList *arg);
#define SDF_protectLexLayoutList(arg) (_SDF_protectLexLayoutList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexLayoutList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexLayoutList(SDF_LexLayoutList *arg);
#define SDF_unprotectLexLayoutList(arg) (_SDF_unprotectLexLayoutList(arg))
#endif
#ifdef FAST_API
#define SDF_protectAFun(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAFun(SDF_AFun *arg);
#define SDF_protectAFun(arg) (_SDF_protectAFun(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAFun(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAFun(SDF_AFun *arg);
#define SDF_unprotectAFun(arg) (_SDF_unprotectAFun(arg))
#endif
#ifdef FAST_API
#define SDF_protectATerm(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectATerm(SDF_ATerm *arg);
#define SDF_protectATerm(arg) (_SDF_protectATerm(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectATerm(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectATerm(SDF_ATerm *arg);
#define SDF_unprotectATerm(arg) (_SDF_unprotectATerm(arg))
#endif
#ifdef FAST_API
#define SDF_protectAnnotation(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAnnotation(SDF_Annotation *arg);
#define SDF_protectAnnotation(arg) (_SDF_protectAnnotation(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAnnotation(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAnnotation(SDF_Annotation *arg);
#define SDF_unprotectAnnotation(arg) (_SDF_unprotectAnnotation(arg))
#endif
#ifdef FAST_API
#define SDF_protectStart(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectStart(SDF_Start *arg);
#define SDF_protectStart(arg) (_SDF_protectStart(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectStart(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectStart(SDF_Start *arg);
#define SDF_unprotectStart(arg) (_SDF_unprotectStart(arg))
#endif
#ifdef FAST_API
#define SDF_protectATermArgs(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectATermArgs(SDF_ATermArgs *arg);
#define SDF_protectATermArgs(arg) (_SDF_protectATermArgs(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectATermArgs(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectATermArgs(SDF_ATermArgs *arg);
#define SDF_unprotectATermArgs(arg) (_SDF_unprotectATermArgs(arg))
#endif
#ifdef FAST_API
#define SDF_protectATermElems(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectATermElems(SDF_ATermElems *arg);
#define SDF_protectATermElems(arg) (_SDF_protectATermElems(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectATermElems(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectATermElems(SDF_ATermElems *arg);
#define SDF_unprotectATermElems(arg) (_SDF_unprotectATermElems(arg))
#endif
#ifdef FAST_API
#define SDF_protectATermAnnos(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectATermAnnos(SDF_ATermAnnos *arg);
#define SDF_protectATermAnnos(arg) (_SDF_protectATermAnnos(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectATermAnnos(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectATermAnnos(SDF_ATermAnnos *arg);
#define SDF_unprotectATermAnnos(arg) (_SDF_unprotectATermAnnos(arg))
#endif
#ifdef FAST_API
#define SDF_protectIntCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectIntCon(SDF_IntCon *arg);
#define SDF_protectIntCon(arg) (_SDF_protectIntCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectIntCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectIntCon(SDF_IntCon *arg);
#define SDF_unprotectIntCon(arg) (_SDF_unprotectIntCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectOptExp(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectOptExp(SDF_OptExp *arg);
#define SDF_protectOptExp(arg) (_SDF_protectOptExp(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectOptExp(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectOptExp(SDF_OptExp *arg);
#define SDF_unprotectOptExp(arg) (_SDF_unprotectOptExp(arg))
#endif
#ifdef FAST_API
#define SDF_protectRealCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRealCon(SDF_RealCon *arg);
#define SDF_protectRealCon(arg) (_SDF_protectRealCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRealCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRealCon(SDF_RealCon *arg);
#define SDF_unprotectRealCon(arg) (_SDF_unprotectRealCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectGrammar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectGrammar(SDF_Grammar *arg);
#define SDF_protectGrammar(arg) (_SDF_protectGrammar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectGrammar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectGrammar(SDF_Grammar *arg);
#define SDF_unprotectGrammar(arg) (_SDF_unprotectGrammar(arg))
#endif
#ifdef FAST_API
#define SDF_protectAlias(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAlias(SDF_Alias *arg);
#define SDF_protectAlias(arg) (_SDF_protectAlias(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAlias(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAlias(SDF_Alias *arg);
#define SDF_unprotectAlias(arg) (_SDF_unprotectAlias(arg))
#endif
#ifdef FAST_API
#define SDF_protectAliases(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAliases(SDF_Aliases *arg);
#define SDF_protectAliases(arg) (_SDF_protectAliases(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAliases(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAliases(SDF_Aliases *arg);
#define SDF_unprotectAliases(arg) (_SDF_unprotectAliases(arg))
#endif
#ifdef FAST_API
#define SDF_protectAliasList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAliasList(SDF_AliasList *arg);
#define SDF_protectAliasList(arg) (_SDF_protectAliasList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAliasList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAliasList(SDF_AliasList *arg);
#define SDF_unprotectAliasList(arg) (_SDF_unprotectAliasList(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbol(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbol(SDF_Symbol *arg);
#define SDF_protectSymbol(arg) (_SDF_protectSymbol(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbol(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbol(SDF_Symbol *arg);
#define SDF_unprotectSymbol(arg) (_SDF_unprotectSymbol(arg))
#endif
#ifdef FAST_API
#define SDF_protectCharRange(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectCharRange(SDF_CharRange *arg);
#define SDF_protectCharRange(arg) (_SDF_protectCharRange(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectCharRange(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectCharRange(SDF_CharRange *arg);
#define SDF_unprotectCharRange(arg) (_SDF_unprotectCharRange(arg))
#endif
#ifdef FAST_API
#define SDF_protectCharRanges(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectCharRanges(SDF_CharRanges *arg);
#define SDF_protectCharRanges(arg) (_SDF_protectCharRanges(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectCharRanges(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectCharRanges(SDF_CharRanges *arg);
#define SDF_unprotectCharRanges(arg) (_SDF_unprotectCharRanges(arg))
#endif
#ifdef FAST_API
#define SDF_protectOptCharRanges(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectOptCharRanges(SDF_OptCharRanges *arg);
#define SDF_protectOptCharRanges(arg) (_SDF_protectOptCharRanges(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectOptCharRanges(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectOptCharRanges(SDF_OptCharRanges *arg);
#define SDF_unprotectOptCharRanges(arg) (_SDF_unprotectOptCharRanges(arg))
#endif
#ifdef FAST_API
#define SDF_protectCharClass(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectCharClass(SDF_CharClass *arg);
#define SDF_protectCharClass(arg) (_SDF_protectCharClass(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectCharClass(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectCharClass(SDF_CharClass *arg);
#define SDF_unprotectCharClass(arg) (_SDF_unprotectCharClass(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexNumChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexNumChar(SDF_LexNumChar *arg);
#define SDF_protectLexNumChar(arg) (_SDF_protectLexNumChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexNumChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexNumChar(SDF_LexNumChar *arg);
#define SDF_unprotectLexNumChar(arg) (_SDF_unprotectLexNumChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectNumChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectNumChar(SDF_NumChar *arg);
#define SDF_protectNumChar(arg) (_SDF_protectNumChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectNumChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectNumChar(SDF_NumChar *arg);
#define SDF_unprotectNumChar(arg) (_SDF_unprotectNumChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexShortChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexShortChar(SDF_LexShortChar *arg);
#define SDF_protectLexShortChar(arg) (_SDF_protectLexShortChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexShortChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexShortChar(SDF_LexShortChar *arg);
#define SDF_unprotectLexShortChar(arg) (_SDF_unprotectLexShortChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectShortChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectShortChar(SDF_ShortChar *arg);
#define SDF_protectShortChar(arg) (_SDF_protectShortChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectShortChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectShortChar(SDF_ShortChar *arg);
#define SDF_unprotectShortChar(arg) (_SDF_unprotectShortChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectCharacter(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectCharacter(SDF_Character *arg);
#define SDF_protectCharacter(arg) (_SDF_protectCharacter(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectCharacter(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectCharacter(SDF_Character *arg);
#define SDF_unprotectCharacter(arg) (_SDF_unprotectCharacter(arg))
#endif
#ifdef FAST_API
#define SDF_protectATermAttribute(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectATermAttribute(SDF_ATermAttribute *arg);
#define SDF_protectATermAttribute(arg) (_SDF_protectATermAttribute(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectATermAttribute(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectATermAttribute(SDF_ATermAttribute *arg);
#define SDF_unprotectATermAttribute(arg) (_SDF_unprotectATermAttribute(arg))
#endif
#ifdef FAST_API
#define SDF_protectAttribute(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAttribute(SDF_Attribute *arg);
#define SDF_protectAttribute(arg) (_SDF_protectAttribute(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAttribute(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAttribute(SDF_Attribute *arg);
#define SDF_unprotectAttribute(arg) (_SDF_unprotectAttribute(arg))
#endif
#ifdef FAST_API
#define SDF_protectAttributes(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAttributes(SDF_Attributes *arg);
#define SDF_protectAttributes(arg) (_SDF_protectAttributes(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAttributes(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAttributes(SDF_Attributes *arg);
#define SDF_unprotectAttributes(arg) (_SDF_unprotectAttributes(arg))
#endif
#ifdef FAST_API
#define SDF_protectProduction(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectProduction(SDF_Production *arg);
#define SDF_protectProduction(arg) (_SDF_protectProduction(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectProduction(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectProduction(SDF_Production *arg);
#define SDF_unprotectProduction(arg) (_SDF_unprotectProduction(arg))
#endif
#ifdef FAST_API
#define SDF_protectProductions(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectProductions(SDF_Productions *arg);
#define SDF_protectProductions(arg) (_SDF_protectProductions(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectProductions(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectProductions(SDF_Productions *arg);
#define SDF_unprotectProductions(arg) (_SDF_unprotectProductions(arg))
#endif
#ifdef FAST_API
#define SDF_protectAttributeList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAttributeList(SDF_AttributeList *arg);
#define SDF_protectAttributeList(arg) (_SDF_protectAttributeList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAttributeList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAttributeList(SDF_AttributeList *arg);
#define SDF_unprotectAttributeList(arg) (_SDF_unprotectAttributeList(arg))
#endif
#ifdef FAST_API
#define SDF_protectProductionList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectProductionList(SDF_ProductionList *arg);
#define SDF_protectProductionList(arg) (_SDF_protectProductionList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectProductionList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectProductionList(SDF_ProductionList *arg);
#define SDF_unprotectProductionList(arg) (_SDF_unprotectProductionList(arg))
#endif
#ifdef FAST_API
#define SDF_protectLabel(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLabel(SDF_Label *arg);
#define SDF_protectLabel(arg) (_SDF_protectLabel(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLabel(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLabel(SDF_Label *arg);
#define SDF_unprotectLabel(arg) (_SDF_unprotectLabel(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexSingleQuotedStrChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexSingleQuotedStrChar(SDF_LexSingleQuotedStrChar *arg);
#define SDF_protectLexSingleQuotedStrChar(arg) (_SDF_protectLexSingleQuotedStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexSingleQuotedStrChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexSingleQuotedStrChar(SDF_LexSingleQuotedStrChar *arg);
#define SDF_unprotectLexSingleQuotedStrChar(arg) (_SDF_unprotectLexSingleQuotedStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectSingleQuotedStrChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSingleQuotedStrChar(SDF_SingleQuotedStrChar *arg);
#define SDF_protectSingleQuotedStrChar(arg) (_SDF_protectSingleQuotedStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSingleQuotedStrChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSingleQuotedStrChar(SDF_SingleQuotedStrChar *arg);
#define SDF_unprotectSingleQuotedStrChar(arg) (_SDF_unprotectSingleQuotedStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexSingleQuotedStrCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexSingleQuotedStrCon(SDF_LexSingleQuotedStrCon *arg);
#define SDF_protectLexSingleQuotedStrCon(arg) (_SDF_protectLexSingleQuotedStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexSingleQuotedStrCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexSingleQuotedStrCon(SDF_LexSingleQuotedStrCon *arg);
#define SDF_unprotectLexSingleQuotedStrCon(arg) (_SDF_unprotectLexSingleQuotedStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectSingleQuotedStrCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSingleQuotedStrCon(SDF_SingleQuotedStrCon *arg);
#define SDF_protectSingleQuotedStrCon(arg) (_SDF_protectSingleQuotedStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSingleQuotedStrCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSingleQuotedStrCon(SDF_SingleQuotedStrCon *arg);
#define SDF_unprotectSingleQuotedStrCon(arg) (_SDF_unprotectSingleQuotedStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectFunctionName(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectFunctionName(SDF_FunctionName *arg);
#define SDF_protectFunctionName(arg) (_SDF_protectFunctionName(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectFunctionName(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectFunctionName(SDF_FunctionName *arg);
#define SDF_unprotectFunctionName(arg) (_SDF_unprotectFunctionName(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexSingleQuotedStrCharChars(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars *arg);
#define SDF_protectLexSingleQuotedStrCharChars(arg) (_SDF_protectLexSingleQuotedStrCharChars(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexSingleQuotedStrCharChars(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars *arg);
#define SDF_unprotectLexSingleQuotedStrCharChars(arg) (_SDF_unprotectLexSingleQuotedStrCharChars(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbolArguments(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbolArguments(SDF_SymbolArguments *arg);
#define SDF_protectSymbolArguments(arg) (_SDF_protectSymbolArguments(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbolArguments(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbolArguments(SDF_SymbolArguments *arg);
#define SDF_unprotectSymbolArguments(arg) (_SDF_unprotectSymbolArguments(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexModuleWord(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexModuleWord(SDF_LexModuleWord *arg);
#define SDF_protectLexModuleWord(arg) (_SDF_protectLexModuleWord(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexModuleWord(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexModuleWord(SDF_LexModuleWord *arg);
#define SDF_unprotectLexModuleWord(arg) (_SDF_unprotectLexModuleWord(arg))
#endif
#ifdef FAST_API
#define SDF_protectModuleWord(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectModuleWord(SDF_ModuleWord *arg);
#define SDF_protectModuleWord(arg) (_SDF_protectModuleWord(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectModuleWord(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectModuleWord(SDF_ModuleWord *arg);
#define SDF_unprotectModuleWord(arg) (_SDF_unprotectModuleWord(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexModuleId(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexModuleId(SDF_LexModuleId *arg);
#define SDF_protectLexModuleId(arg) (_SDF_protectLexModuleId(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexModuleId(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexModuleId(SDF_LexModuleId *arg);
#define SDF_unprotectLexModuleId(arg) (_SDF_unprotectLexModuleId(arg))
#endif
#ifdef FAST_API
#define SDF_protectModuleId(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectModuleId(SDF_ModuleId *arg);
#define SDF_protectModuleId(arg) (_SDF_protectModuleId(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectModuleId(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectModuleId(SDF_ModuleId *arg);
#define SDF_unprotectModuleId(arg) (_SDF_unprotectModuleId(arg))
#endif
#ifdef FAST_API
#define SDF_protectDefinition(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectDefinition(SDF_Definition *arg);
#define SDF_protectDefinition(arg) (_SDF_protectDefinition(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectDefinition(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectDefinition(SDF_Definition *arg);
#define SDF_unprotectDefinition(arg) (_SDF_unprotectDefinition(arg))
#endif
#ifdef FAST_API
#define SDF_protectModule(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectModule(SDF_Module *arg);
#define SDF_protectModule(arg) (_SDF_protectModule(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectModule(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectModule(SDF_Module *arg);
#define SDF_unprotectModule(arg) (_SDF_unprotectModule(arg))
#endif
#ifdef FAST_API
#define SDF_protectSection(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSection(SDF_Section *arg);
#define SDF_protectSection(arg) (_SDF_protectSection(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSection(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSection(SDF_Section *arg);
#define SDF_unprotectSection(arg) (_SDF_unprotectSection(arg))
#endif
#ifdef FAST_API
#define SDF_protectSections(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSections(SDF_Sections *arg);
#define SDF_protectSections(arg) (_SDF_protectSections(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSections(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSections(SDF_Sections *arg);
#define SDF_unprotectSections(arg) (_SDF_unprotectSections(arg))
#endif
#ifdef FAST_API
#define SDF_protectModuleName(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectModuleName(SDF_ModuleName *arg);
#define SDF_protectModuleName(arg) (_SDF_protectModuleName(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectModuleName(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectModuleName(SDF_ModuleName *arg);
#define SDF_unprotectModuleName(arg) (_SDF_unprotectModuleName(arg))
#endif
#ifdef FAST_API
#define SDF_protectImpSection(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectImpSection(SDF_ImpSection *arg);
#define SDF_protectImpSection(arg) (_SDF_protectImpSection(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectImpSection(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectImpSection(SDF_ImpSection *arg);
#define SDF_unprotectImpSection(arg) (_SDF_unprotectImpSection(arg))
#endif
#ifdef FAST_API
#define SDF_protectImports(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectImports(SDF_Imports *arg);
#define SDF_protectImports(arg) (_SDF_protectImports(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectImports(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectImports(SDF_Imports *arg);
#define SDF_unprotectImports(arg) (_SDF_unprotectImports(arg))
#endif
#ifdef FAST_API
#define SDF_protectImport(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectImport(SDF_Import *arg);
#define SDF_protectImport(arg) (_SDF_protectImport(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectImport(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectImport(SDF_Import *arg);
#define SDF_unprotectImport(arg) (_SDF_unprotectImport(arg))
#endif
#ifdef FAST_API
#define SDF_protectModuleList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectModuleList(SDF_ModuleList *arg);
#define SDF_protectModuleList(arg) (_SDF_protectModuleList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectModuleList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectModuleList(SDF_ModuleList *arg);
#define SDF_unprotectModuleList(arg) (_SDF_unprotectModuleList(arg))
#endif
#ifdef FAST_API
#define SDF_protectImpSectionList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectImpSectionList(SDF_ImpSectionList *arg);
#define SDF_protectImpSectionList(arg) (_SDF_protectImpSectionList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectImpSectionList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectImpSectionList(SDF_ImpSectionList *arg);
#define SDF_unprotectImpSectionList(arg) (_SDF_unprotectImpSectionList(arg))
#endif
#ifdef FAST_API
#define SDF_protectSectionList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSectionList(SDF_SectionList *arg);
#define SDF_protectSectionList(arg) (_SDF_protectSectionList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSectionList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSectionList(SDF_SectionList *arg);
#define SDF_unprotectSectionList(arg) (_SDF_unprotectSectionList(arg))
#endif
#ifdef FAST_API
#define SDF_protectImportList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectImportList(SDF_ImportList *arg);
#define SDF_protectImportList(arg) (_SDF_protectImportList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectImportList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectImportList(SDF_ImportList *arg);
#define SDF_unprotectImportList(arg) (_SDF_unprotectImportList(arg))
#endif
#ifdef FAST_API
#define SDF_protectAssociativity(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectAssociativity(SDF_Associativity *arg);
#define SDF_protectAssociativity(arg) (_SDF_protectAssociativity(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectAssociativity(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectAssociativity(SDF_Associativity *arg);
#define SDF_unprotectAssociativity(arg) (_SDF_unprotectAssociativity(arg))
#endif
#ifdef FAST_API
#define SDF_protectArgumentIndicator(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectArgumentIndicator(SDF_ArgumentIndicator *arg);
#define SDF_protectArgumentIndicator(arg) (_SDF_protectArgumentIndicator(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectArgumentIndicator(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectArgumentIndicator(SDF_ArgumentIndicator *arg);
#define SDF_unprotectArgumentIndicator(arg) (_SDF_unprotectArgumentIndicator(arg))
#endif
#ifdef FAST_API
#define SDF_protectGroup(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectGroup(SDF_Group *arg);
#define SDF_protectGroup(arg) (_SDF_protectGroup(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectGroup(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectGroup(SDF_Group *arg);
#define SDF_unprotectGroup(arg) (_SDF_unprotectGroup(arg))
#endif
#ifdef FAST_API
#define SDF_protectPriority(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectPriority(SDF_Priority *arg);
#define SDF_protectPriority(arg) (_SDF_protectPriority(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectPriority(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectPriority(SDF_Priority *arg);
#define SDF_unprotectPriority(arg) (_SDF_unprotectPriority(arg))
#endif
#ifdef FAST_API
#define SDF_protectPriorities(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectPriorities(SDF_Priorities *arg);
#define SDF_protectPriorities(arg) (_SDF_protectPriorities(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectPriorities(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectPriorities(SDF_Priorities *arg);
#define SDF_unprotectPriorities(arg) (_SDF_unprotectPriorities(arg))
#endif
#ifdef FAST_API
#define SDF_protectNatConArguments(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectNatConArguments(SDF_NatConArguments *arg);
#define SDF_protectNatConArguments(arg) (_SDF_protectNatConArguments(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectNatConArguments(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectNatConArguments(SDF_NatConArguments *arg);
#define SDF_unprotectNatConArguments(arg) (_SDF_unprotectNatConArguments(arg))
#endif
#ifdef FAST_API
#define SDF_protectGroupList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectGroupList(SDF_GroupList *arg);
#define SDF_protectGroupList(arg) (_SDF_protectGroupList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectGroupList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectGroupList(SDF_GroupList *arg);
#define SDF_unprotectGroupList(arg) (_SDF_unprotectGroupList(arg))
#endif
#ifdef FAST_API
#define SDF_protectPriorityList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectPriorityList(SDF_PriorityList *arg);
#define SDF_protectPriorityList(arg) (_SDF_protectPriorityList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectPriorityList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectPriorityList(SDF_PriorityList *arg);
#define SDF_unprotectPriorityList(arg) (_SDF_unprotectPriorityList(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbolTail(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbolTail(SDF_SymbolTail *arg);
#define SDF_protectSymbolTail(arg) (_SDF_protectSymbolTail(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbolTail(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbolTail(SDF_SymbolTail *arg);
#define SDF_unprotectSymbolTail(arg) (_SDF_unprotectSymbolTail(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbolRest(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbolRest(SDF_SymbolRest *arg);
#define SDF_protectSymbolRest(arg) (_SDF_protectSymbolRest(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbolRest(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbolRest(SDF_SymbolRest *arg);
#define SDF_unprotectSymbolRest(arg) (_SDF_unprotectSymbolRest(arg))
#endif
#ifdef FAST_API
#define SDF_protectRenamings(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRenamings(SDF_Renamings *arg);
#define SDF_protectRenamings(arg) (_SDF_protectRenamings(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRenamings(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRenamings(SDF_Renamings *arg);
#define SDF_unprotectRenamings(arg) (_SDF_unprotectRenamings(arg))
#endif
#ifdef FAST_API
#define SDF_protectRenaming(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRenaming(SDF_Renaming *arg);
#define SDF_protectRenaming(arg) (_SDF_protectRenaming(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRenaming(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRenaming(SDF_Renaming *arg);
#define SDF_unprotectRenaming(arg) (_SDF_unprotectRenaming(arg))
#endif
#ifdef FAST_API
#define SDF_protectRenamingList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRenamingList(SDF_RenamingList *arg);
#define SDF_protectRenamingList(arg) (_SDF_protectRenamingList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRenamingList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRenamingList(SDF_RenamingList *arg);
#define SDF_unprotectRenamingList(arg) (_SDF_unprotectRenamingList(arg))
#endif
#ifdef FAST_API
#define SDF_protectLookahead(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLookahead(SDF_Lookahead *arg);
#define SDF_protectLookahead(arg) (_SDF_protectLookahead(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLookahead(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLookahead(SDF_Lookahead *arg);
#define SDF_unprotectLookahead(arg) (_SDF_unprotectLookahead(arg))
#endif
#ifdef FAST_API
#define SDF_protectLookaheads(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLookaheads(SDF_Lookaheads *arg);
#define SDF_protectLookaheads(arg) (_SDF_protectLookaheads(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLookaheads(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLookaheads(SDF_Lookaheads *arg);
#define SDF_unprotectLookaheads(arg) (_SDF_unprotectLookaheads(arg))
#endif
#ifdef FAST_API
#define SDF_protectRestriction(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRestriction(SDF_Restriction *arg);
#define SDF_protectRestriction(arg) (_SDF_protectRestriction(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRestriction(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRestriction(SDF_Restriction *arg);
#define SDF_unprotectRestriction(arg) (_SDF_unprotectRestriction(arg))
#endif
#ifdef FAST_API
#define SDF_protectRestrictions(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRestrictions(SDF_Restrictions *arg);
#define SDF_protectRestrictions(arg) (_SDF_protectRestrictions(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRestrictions(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRestrictions(SDF_Restrictions *arg);
#define SDF_unprotectRestrictions(arg) (_SDF_unprotectRestrictions(arg))
#endif
#ifdef FAST_API
#define SDF_protectLookaheadList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLookaheadList(SDF_LookaheadList *arg);
#define SDF_protectLookaheadList(arg) (_SDF_protectLookaheadList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLookaheadList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLookaheadList(SDF_LookaheadList *arg);
#define SDF_unprotectLookaheadList(arg) (_SDF_unprotectLookaheadList(arg))
#endif
#ifdef FAST_API
#define SDF_protectRestrictionList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectRestrictionList(SDF_RestrictionList *arg);
#define SDF_protectRestrictionList(arg) (_SDF_protectRestrictionList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectRestrictionList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectRestrictionList(SDF_RestrictionList *arg);
#define SDF_unprotectRestrictionList(arg) (_SDF_unprotectRestrictionList(arg))
#endif
#ifdef FAST_API
#define SDF_protectSort(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSort(SDF_Sort *arg);
#define SDF_protectSort(arg) (_SDF_protectSort(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSort(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSort(SDF_Sort *arg);
#define SDF_unprotectSort(arg) (_SDF_unprotectSort(arg))
#endif
#ifdef FAST_API
#define SDF_protectSDF(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSDF(SDF_SDF *arg);
#define SDF_protectSDF(arg) (_SDF_protectSDF(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSDF(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSDF(SDF_SDF *arg);
#define SDF_unprotectSDF(arg) (_SDF_unprotectSDF(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexSort(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexSort(SDF_LexSort *arg);
#define SDF_protectLexSort(arg) (_SDF_protectLexSort(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexSort(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexSort(SDF_LexSort *arg);
#define SDF_unprotectLexSort(arg) (_SDF_unprotectLexSort(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbolParameters(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbolParameters(SDF_SymbolParameters *arg);
#define SDF_protectSymbolParameters(arg) (_SDF_protectSymbolParameters(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbolParameters(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbolParameters(SDF_SymbolParameters *arg);
#define SDF_unprotectSymbolParameters(arg) (_SDF_unprotectSymbolParameters(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbols(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbols(SDF_Symbols *arg);
#define SDF_protectSymbols(arg) (_SDF_protectSymbols(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbols(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbols(SDF_Symbols *arg);
#define SDF_unprotectSymbols(arg) (_SDF_unprotectSymbols(arg))
#endif
#ifdef FAST_API
#define SDF_protectSymbolList(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectSymbolList(SDF_SymbolList *arg);
#define SDF_protectSymbolList(arg) (_SDF_protectSymbolList(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectSymbolList(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectSymbolList(SDF_SymbolList *arg);
#define SDF_unprotectSymbolList(arg) (_SDF_unprotectSymbolList(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexLayout(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexLayout(SDF_LexLayout *arg);
#define SDF_protectLexLayout(arg) (_SDF_protectLexLayout(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexLayout(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexLayout(SDF_LexLayout *arg);
#define SDF_unprotectLexLayout(arg) (_SDF_unprotectLexLayout(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexStrChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexStrChar(SDF_LexStrChar *arg);
#define SDF_protectLexStrChar(arg) (_SDF_protectLexStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexStrChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexStrChar(SDF_LexStrChar *arg);
#define SDF_unprotectLexStrChar(arg) (_SDF_unprotectLexStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectStrChar(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectStrChar(SDF_StrChar *arg);
#define SDF_protectStrChar(arg) (_SDF_protectStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectStrChar(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectStrChar(SDF_StrChar *arg);
#define SDF_unprotectStrChar(arg) (_SDF_unprotectStrChar(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexStrCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexStrCon(SDF_LexStrCon *arg);
#define SDF_protectLexStrCon(arg) (_SDF_protectLexStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexStrCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexStrCon(SDF_LexStrCon *arg);
#define SDF_unprotectLexStrCon(arg) (_SDF_unprotectLexStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectStrCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectStrCon(SDF_StrCon *arg);
#define SDF_protectStrCon(arg) (_SDF_protectStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectStrCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectStrCon(SDF_StrCon *arg);
#define SDF_unprotectStrCon(arg) (_SDF_unprotectStrCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexStrCharChars(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexStrCharChars(SDF_LexStrCharChars *arg);
#define SDF_protectLexStrCharChars(arg) (_SDF_protectLexStrCharChars(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexStrCharChars(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexStrCharChars(SDF_LexStrCharChars *arg);
#define SDF_unprotectLexStrCharChars(arg) (_SDF_unprotectLexStrCharChars(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexNatCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexNatCon(SDF_LexNatCon *arg);
#define SDF_protectLexNatCon(arg) (_SDF_protectLexNatCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexNatCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexNatCon(SDF_LexNatCon *arg);
#define SDF_unprotectLexNatCon(arg) (_SDF_unprotectLexNatCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectNatCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectNatCon(SDF_NatCon *arg);
#define SDF_protectNatCon(arg) (_SDF_protectNatCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectNatCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectNatCon(SDF_NatCon *arg);
#define SDF_unprotectNatCon(arg) (_SDF_unprotectNatCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectLexIdCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectLexIdCon(SDF_LexIdCon *arg);
#define SDF_protectLexIdCon(arg) (_SDF_protectLexIdCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectLexIdCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectLexIdCon(SDF_LexIdCon *arg);
#define SDF_unprotectLexIdCon(arg) (_SDF_unprotectLexIdCon(arg))
#endif
#ifdef FAST_API
#define SDF_protectIdCon(arg) (ATprotect((ATerm*)((void*) (arg))))
#else
void _SDF_protectIdCon(SDF_IdCon *arg);
#define SDF_protectIdCon(arg) (_SDF_protectIdCon(arg))
#endif
#ifdef FAST_API
#define SDF_unprotectIdCon(arg) (ATunprotect((ATerm*)((void*) (arg))))
#else
void _SDF_unprotectIdCon(SDF_IdCon *arg);
#define SDF_unprotectIdCon(arg) (_SDF_unprotectIdCon(arg))
#endif
#ifdef FAST_API
#define SDF_OptLayoutFromTerm(t) ((((union {SDF_OptLayout target; ATerm source; })(t)).target))
#else
SDF_OptLayout _SDF_OptLayoutFromTerm(ATerm t);
#define SDF_OptLayoutFromTerm(t) (_SDF_OptLayoutFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_OptLayoutToTerm(arg) ((((union {SDF_OptLayout source; ATerm target; })(arg)).target))
#else
ATerm _SDF_OptLayoutToTerm(SDF_OptLayout arg);
#define SDF_OptLayoutToTerm(arg) (_SDF_OptLayoutToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LayoutFromTerm(t) ((((union {SDF_Layout target; ATerm source; })(t)).target))
#else
SDF_Layout _SDF_LayoutFromTerm(ATerm t);
#define SDF_LayoutFromTerm(t) (_SDF_LayoutFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LayoutToTerm(arg) ((((union {SDF_Layout source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LayoutToTerm(SDF_Layout arg);
#define SDF_LayoutToTerm(arg) (_SDF_LayoutToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexLayoutListFromTerm(t) ((((union {SDF_LexLayoutList target; ATerm source; })(t)).target))
#else
SDF_LexLayoutList _SDF_LexLayoutListFromTerm(ATerm t);
#define SDF_LexLayoutListFromTerm(t) (_SDF_LexLayoutListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexLayoutListToTerm(arg) ((((union {SDF_LexLayoutList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexLayoutListToTerm(SDF_LexLayoutList arg);
#define SDF_LexLayoutListToTerm(arg) (_SDF_LexLayoutListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AFunFromTerm(t) ((((union {SDF_AFun target; ATerm source; })(t)).target))
#else
SDF_AFun _SDF_AFunFromTerm(ATerm t);
#define SDF_AFunFromTerm(t) (_SDF_AFunFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AFunToTerm(arg) ((((union {SDF_AFun source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AFunToTerm(SDF_AFun arg);
#define SDF_AFunToTerm(arg) (_SDF_AFunToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ATermFromTerm(t) ((((union {SDF_ATerm target; ATerm source; })(t)).target))
#else
SDF_ATerm _SDF_ATermFromTerm(ATerm t);
#define SDF_ATermFromTerm(t) (_SDF_ATermFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ATermToTerm(arg) ((((union {SDF_ATerm source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ATermToTerm(SDF_ATerm arg);
#define SDF_ATermToTerm(arg) (_SDF_ATermToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AnnotationFromTerm(t) ((((union {SDF_Annotation target; ATerm source; })(t)).target))
#else
SDF_Annotation _SDF_AnnotationFromTerm(ATerm t);
#define SDF_AnnotationFromTerm(t) (_SDF_AnnotationFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AnnotationToTerm(arg) ((((union {SDF_Annotation source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AnnotationToTerm(SDF_Annotation arg);
#define SDF_AnnotationToTerm(arg) (_SDF_AnnotationToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_StartFromTerm(t) ((((union {SDF_Start target; ATerm source; })(t)).target))
#else
SDF_Start _SDF_StartFromTerm(ATerm t);
#define SDF_StartFromTerm(t) (_SDF_StartFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_StartToTerm(arg) ((((union {SDF_Start source; ATerm target; })(arg)).target))
#else
ATerm _SDF_StartToTerm(SDF_Start arg);
#define SDF_StartToTerm(arg) (_SDF_StartToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ATermArgsFromTerm(t) ((((union {SDF_ATermArgs target; ATerm source; })(t)).target))
#else
SDF_ATermArgs _SDF_ATermArgsFromTerm(ATerm t);
#define SDF_ATermArgsFromTerm(t) (_SDF_ATermArgsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ATermArgsToTerm(arg) ((((union {SDF_ATermArgs source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ATermArgsToTerm(SDF_ATermArgs arg);
#define SDF_ATermArgsToTerm(arg) (_SDF_ATermArgsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ATermElemsFromTerm(t) ((((union {SDF_ATermElems target; ATerm source; })(t)).target))
#else
SDF_ATermElems _SDF_ATermElemsFromTerm(ATerm t);
#define SDF_ATermElemsFromTerm(t) (_SDF_ATermElemsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ATermElemsToTerm(arg) ((((union {SDF_ATermElems source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ATermElemsToTerm(SDF_ATermElems arg);
#define SDF_ATermElemsToTerm(arg) (_SDF_ATermElemsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ATermAnnosFromTerm(t) ((((union {SDF_ATermAnnos target; ATerm source; })(t)).target))
#else
SDF_ATermAnnos _SDF_ATermAnnosFromTerm(ATerm t);
#define SDF_ATermAnnosFromTerm(t) (_SDF_ATermAnnosFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ATermAnnosToTerm(arg) ((((union {SDF_ATermAnnos source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ATermAnnosToTerm(SDF_ATermAnnos arg);
#define SDF_ATermAnnosToTerm(arg) (_SDF_ATermAnnosToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_IntConFromTerm(t) ((((union {SDF_IntCon target; ATerm source; })(t)).target))
#else
SDF_IntCon _SDF_IntConFromTerm(ATerm t);
#define SDF_IntConFromTerm(t) (_SDF_IntConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_IntConToTerm(arg) ((((union {SDF_IntCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_IntConToTerm(SDF_IntCon arg);
#define SDF_IntConToTerm(arg) (_SDF_IntConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_OptExpFromTerm(t) ((((union {SDF_OptExp target; ATerm source; })(t)).target))
#else
SDF_OptExp _SDF_OptExpFromTerm(ATerm t);
#define SDF_OptExpFromTerm(t) (_SDF_OptExpFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_OptExpToTerm(arg) ((((union {SDF_OptExp source; ATerm target; })(arg)).target))
#else
ATerm _SDF_OptExpToTerm(SDF_OptExp arg);
#define SDF_OptExpToTerm(arg) (_SDF_OptExpToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RealConFromTerm(t) ((((union {SDF_RealCon target; ATerm source; })(t)).target))
#else
SDF_RealCon _SDF_RealConFromTerm(ATerm t);
#define SDF_RealConFromTerm(t) (_SDF_RealConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RealConToTerm(arg) ((((union {SDF_RealCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RealConToTerm(SDF_RealCon arg);
#define SDF_RealConToTerm(arg) (_SDF_RealConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_GrammarFromTerm(t) ((((union {SDF_Grammar target; ATerm source; })(t)).target))
#else
SDF_Grammar _SDF_GrammarFromTerm(ATerm t);
#define SDF_GrammarFromTerm(t) (_SDF_GrammarFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_GrammarToTerm(arg) ((((union {SDF_Grammar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_GrammarToTerm(SDF_Grammar arg);
#define SDF_GrammarToTerm(arg) (_SDF_GrammarToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AliasFromTerm(t) ((((union {SDF_Alias target; ATerm source; })(t)).target))
#else
SDF_Alias _SDF_AliasFromTerm(ATerm t);
#define SDF_AliasFromTerm(t) (_SDF_AliasFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AliasToTerm(arg) ((((union {SDF_Alias source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AliasToTerm(SDF_Alias arg);
#define SDF_AliasToTerm(arg) (_SDF_AliasToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AliasesFromTerm(t) ((((union {SDF_Aliases target; ATerm source; })(t)).target))
#else
SDF_Aliases _SDF_AliasesFromTerm(ATerm t);
#define SDF_AliasesFromTerm(t) (_SDF_AliasesFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AliasesToTerm(arg) ((((union {SDF_Aliases source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AliasesToTerm(SDF_Aliases arg);
#define SDF_AliasesToTerm(arg) (_SDF_AliasesToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AliasListFromTerm(t) ((((union {SDF_AliasList target; ATerm source; })(t)).target))
#else
SDF_AliasList _SDF_AliasListFromTerm(ATerm t);
#define SDF_AliasListFromTerm(t) (_SDF_AliasListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AliasListToTerm(arg) ((((union {SDF_AliasList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AliasListToTerm(SDF_AliasList arg);
#define SDF_AliasListToTerm(arg) (_SDF_AliasListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolFromTerm(t) ((((union {SDF_Symbol target; ATerm source; })(t)).target))
#else
SDF_Symbol _SDF_SymbolFromTerm(ATerm t);
#define SDF_SymbolFromTerm(t) (_SDF_SymbolFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolToTerm(arg) ((((union {SDF_Symbol source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolToTerm(SDF_Symbol arg);
#define SDF_SymbolToTerm(arg) (_SDF_SymbolToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_CharRangeFromTerm(t) ((((union {SDF_CharRange target; ATerm source; })(t)).target))
#else
SDF_CharRange _SDF_CharRangeFromTerm(ATerm t);
#define SDF_CharRangeFromTerm(t) (_SDF_CharRangeFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_CharRangeToTerm(arg) ((((union {SDF_CharRange source; ATerm target; })(arg)).target))
#else
ATerm _SDF_CharRangeToTerm(SDF_CharRange arg);
#define SDF_CharRangeToTerm(arg) (_SDF_CharRangeToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_CharRangesFromTerm(t) ((((union {SDF_CharRanges target; ATerm source; })(t)).target))
#else
SDF_CharRanges _SDF_CharRangesFromTerm(ATerm t);
#define SDF_CharRangesFromTerm(t) (_SDF_CharRangesFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_CharRangesToTerm(arg) ((((union {SDF_CharRanges source; ATerm target; })(arg)).target))
#else
ATerm _SDF_CharRangesToTerm(SDF_CharRanges arg);
#define SDF_CharRangesToTerm(arg) (_SDF_CharRangesToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_OptCharRangesFromTerm(t) ((((union {SDF_OptCharRanges target; ATerm source; })(t)).target))
#else
SDF_OptCharRanges _SDF_OptCharRangesFromTerm(ATerm t);
#define SDF_OptCharRangesFromTerm(t) (_SDF_OptCharRangesFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_OptCharRangesToTerm(arg) ((((union {SDF_OptCharRanges source; ATerm target; })(arg)).target))
#else
ATerm _SDF_OptCharRangesToTerm(SDF_OptCharRanges arg);
#define SDF_OptCharRangesToTerm(arg) (_SDF_OptCharRangesToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_CharClassFromTerm(t) ((((union {SDF_CharClass target; ATerm source; })(t)).target))
#else
SDF_CharClass _SDF_CharClassFromTerm(ATerm t);
#define SDF_CharClassFromTerm(t) (_SDF_CharClassFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_CharClassToTerm(arg) ((((union {SDF_CharClass source; ATerm target; })(arg)).target))
#else
ATerm _SDF_CharClassToTerm(SDF_CharClass arg);
#define SDF_CharClassToTerm(arg) (_SDF_CharClassToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexNumCharFromTerm(t) ((((union {SDF_LexNumChar target; ATerm source; })(t)).target))
#else
SDF_LexNumChar _SDF_LexNumCharFromTerm(ATerm t);
#define SDF_LexNumCharFromTerm(t) (_SDF_LexNumCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexNumCharToTerm(arg) ((((union {SDF_LexNumChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexNumCharToTerm(SDF_LexNumChar arg);
#define SDF_LexNumCharToTerm(arg) (_SDF_LexNumCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_NumCharFromTerm(t) ((((union {SDF_NumChar target; ATerm source; })(t)).target))
#else
SDF_NumChar _SDF_NumCharFromTerm(ATerm t);
#define SDF_NumCharFromTerm(t) (_SDF_NumCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_NumCharToTerm(arg) ((((union {SDF_NumChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_NumCharToTerm(SDF_NumChar arg);
#define SDF_NumCharToTerm(arg) (_SDF_NumCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexShortCharFromTerm(t) ((((union {SDF_LexShortChar target; ATerm source; })(t)).target))
#else
SDF_LexShortChar _SDF_LexShortCharFromTerm(ATerm t);
#define SDF_LexShortCharFromTerm(t) (_SDF_LexShortCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexShortCharToTerm(arg) ((((union {SDF_LexShortChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexShortCharToTerm(SDF_LexShortChar arg);
#define SDF_LexShortCharToTerm(arg) (_SDF_LexShortCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ShortCharFromTerm(t) ((((union {SDF_ShortChar target; ATerm source; })(t)).target))
#else
SDF_ShortChar _SDF_ShortCharFromTerm(ATerm t);
#define SDF_ShortCharFromTerm(t) (_SDF_ShortCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ShortCharToTerm(arg) ((((union {SDF_ShortChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ShortCharToTerm(SDF_ShortChar arg);
#define SDF_ShortCharToTerm(arg) (_SDF_ShortCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_CharacterFromTerm(t) ((((union {SDF_Character target; ATerm source; })(t)).target))
#else
SDF_Character _SDF_CharacterFromTerm(ATerm t);
#define SDF_CharacterFromTerm(t) (_SDF_CharacterFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_CharacterToTerm(arg) ((((union {SDF_Character source; ATerm target; })(arg)).target))
#else
ATerm _SDF_CharacterToTerm(SDF_Character arg);
#define SDF_CharacterToTerm(arg) (_SDF_CharacterToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ATermAttributeFromTerm(t) ((((union {SDF_ATermAttribute target; ATerm source; })(t)).target))
#else
SDF_ATermAttribute _SDF_ATermAttributeFromTerm(ATerm t);
#define SDF_ATermAttributeFromTerm(t) (_SDF_ATermAttributeFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ATermAttributeToTerm(arg) ((((union {SDF_ATermAttribute source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ATermAttributeToTerm(SDF_ATermAttribute arg);
#define SDF_ATermAttributeToTerm(arg) (_SDF_ATermAttributeToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AttributeFromTerm(t) ((((union {SDF_Attribute target; ATerm source; })(t)).target))
#else
SDF_Attribute _SDF_AttributeFromTerm(ATerm t);
#define SDF_AttributeFromTerm(t) (_SDF_AttributeFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AttributeToTerm(arg) ((((union {SDF_Attribute source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AttributeToTerm(SDF_Attribute arg);
#define SDF_AttributeToTerm(arg) (_SDF_AttributeToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AttributesFromTerm(t) ((((union {SDF_Attributes target; ATerm source; })(t)).target))
#else
SDF_Attributes _SDF_AttributesFromTerm(ATerm t);
#define SDF_AttributesFromTerm(t) (_SDF_AttributesFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AttributesToTerm(arg) ((((union {SDF_Attributes source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AttributesToTerm(SDF_Attributes arg);
#define SDF_AttributesToTerm(arg) (_SDF_AttributesToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ProductionFromTerm(t) ((((union {SDF_Production target; ATerm source; })(t)).target))
#else
SDF_Production _SDF_ProductionFromTerm(ATerm t);
#define SDF_ProductionFromTerm(t) (_SDF_ProductionFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ProductionToTerm(arg) ((((union {SDF_Production source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ProductionToTerm(SDF_Production arg);
#define SDF_ProductionToTerm(arg) (_SDF_ProductionToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ProductionsFromTerm(t) ((((union {SDF_Productions target; ATerm source; })(t)).target))
#else
SDF_Productions _SDF_ProductionsFromTerm(ATerm t);
#define SDF_ProductionsFromTerm(t) (_SDF_ProductionsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ProductionsToTerm(arg) ((((union {SDF_Productions source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ProductionsToTerm(SDF_Productions arg);
#define SDF_ProductionsToTerm(arg) (_SDF_ProductionsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AttributeListFromTerm(t) ((((union {SDF_AttributeList target; ATerm source; })(t)).target))
#else
SDF_AttributeList _SDF_AttributeListFromTerm(ATerm t);
#define SDF_AttributeListFromTerm(t) (_SDF_AttributeListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AttributeListToTerm(arg) ((((union {SDF_AttributeList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AttributeListToTerm(SDF_AttributeList arg);
#define SDF_AttributeListToTerm(arg) (_SDF_AttributeListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ProductionListFromTerm(t) ((((union {SDF_ProductionList target; ATerm source; })(t)).target))
#else
SDF_ProductionList _SDF_ProductionListFromTerm(ATerm t);
#define SDF_ProductionListFromTerm(t) (_SDF_ProductionListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ProductionListToTerm(arg) ((((union {SDF_ProductionList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ProductionListToTerm(SDF_ProductionList arg);
#define SDF_ProductionListToTerm(arg) (_SDF_ProductionListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LabelFromTerm(t) ((((union {SDF_Label target; ATerm source; })(t)).target))
#else
SDF_Label _SDF_LabelFromTerm(ATerm t);
#define SDF_LabelFromTerm(t) (_SDF_LabelFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LabelToTerm(arg) ((((union {SDF_Label source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LabelToTerm(SDF_Label arg);
#define SDF_LabelToTerm(arg) (_SDF_LabelToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexSingleQuotedStrCharFromTerm(t) ((((union {SDF_LexSingleQuotedStrChar target; ATerm source; })(t)).target))
#else
SDF_LexSingleQuotedStrChar _SDF_LexSingleQuotedStrCharFromTerm(ATerm t);
#define SDF_LexSingleQuotedStrCharFromTerm(t) (_SDF_LexSingleQuotedStrCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexSingleQuotedStrCharToTerm(arg) ((((union {SDF_LexSingleQuotedStrChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexSingleQuotedStrCharToTerm(SDF_LexSingleQuotedStrChar arg);
#define SDF_LexSingleQuotedStrCharToTerm(arg) (_SDF_LexSingleQuotedStrCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SingleQuotedStrCharFromTerm(t) ((((union {SDF_SingleQuotedStrChar target; ATerm source; })(t)).target))
#else
SDF_SingleQuotedStrChar _SDF_SingleQuotedStrCharFromTerm(ATerm t);
#define SDF_SingleQuotedStrCharFromTerm(t) (_SDF_SingleQuotedStrCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SingleQuotedStrCharToTerm(arg) ((((union {SDF_SingleQuotedStrChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SingleQuotedStrCharToTerm(SDF_SingleQuotedStrChar arg);
#define SDF_SingleQuotedStrCharToTerm(arg) (_SDF_SingleQuotedStrCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexSingleQuotedStrConFromTerm(t) ((((union {SDF_LexSingleQuotedStrCon target; ATerm source; })(t)).target))
#else
SDF_LexSingleQuotedStrCon _SDF_LexSingleQuotedStrConFromTerm(ATerm t);
#define SDF_LexSingleQuotedStrConFromTerm(t) (_SDF_LexSingleQuotedStrConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexSingleQuotedStrConToTerm(arg) ((((union {SDF_LexSingleQuotedStrCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexSingleQuotedStrConToTerm(SDF_LexSingleQuotedStrCon arg);
#define SDF_LexSingleQuotedStrConToTerm(arg) (_SDF_LexSingleQuotedStrConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SingleQuotedStrConFromTerm(t) ((((union {SDF_SingleQuotedStrCon target; ATerm source; })(t)).target))
#else
SDF_SingleQuotedStrCon _SDF_SingleQuotedStrConFromTerm(ATerm t);
#define SDF_SingleQuotedStrConFromTerm(t) (_SDF_SingleQuotedStrConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SingleQuotedStrConToTerm(arg) ((((union {SDF_SingleQuotedStrCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SingleQuotedStrConToTerm(SDF_SingleQuotedStrCon arg);
#define SDF_SingleQuotedStrConToTerm(arg) (_SDF_SingleQuotedStrConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_FunctionNameFromTerm(t) ((((union {SDF_FunctionName target; ATerm source; })(t)).target))
#else
SDF_FunctionName _SDF_FunctionNameFromTerm(ATerm t);
#define SDF_FunctionNameFromTerm(t) (_SDF_FunctionNameFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_FunctionNameToTerm(arg) ((((union {SDF_FunctionName source; ATerm target; })(arg)).target))
#else
ATerm _SDF_FunctionNameToTerm(SDF_FunctionName arg);
#define SDF_FunctionNameToTerm(arg) (_SDF_FunctionNameToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexSingleQuotedStrCharCharsFromTerm(t) ((((union {SDF_LexSingleQuotedStrCharChars target; ATerm source; })(t)).target))
#else
SDF_LexSingleQuotedStrCharChars _SDF_LexSingleQuotedStrCharCharsFromTerm(ATerm t);
#define SDF_LexSingleQuotedStrCharCharsFromTerm(t) (_SDF_LexSingleQuotedStrCharCharsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexSingleQuotedStrCharCharsToTerm(arg) ((((union {SDF_LexSingleQuotedStrCharChars source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexSingleQuotedStrCharCharsToTerm(SDF_LexSingleQuotedStrCharChars arg);
#define SDF_LexSingleQuotedStrCharCharsToTerm(arg) (_SDF_LexSingleQuotedStrCharCharsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolArgumentsFromTerm(t) ((((union {SDF_SymbolArguments target; ATerm source; })(t)).target))
#else
SDF_SymbolArguments _SDF_SymbolArgumentsFromTerm(ATerm t);
#define SDF_SymbolArgumentsFromTerm(t) (_SDF_SymbolArgumentsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolArgumentsToTerm(arg) ((((union {SDF_SymbolArguments source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolArgumentsToTerm(SDF_SymbolArguments arg);
#define SDF_SymbolArgumentsToTerm(arg) (_SDF_SymbolArgumentsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexModuleWordFromTerm(t) ((((union {SDF_LexModuleWord target; ATerm source; })(t)).target))
#else
SDF_LexModuleWord _SDF_LexModuleWordFromTerm(ATerm t);
#define SDF_LexModuleWordFromTerm(t) (_SDF_LexModuleWordFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexModuleWordToTerm(arg) ((((union {SDF_LexModuleWord source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexModuleWordToTerm(SDF_LexModuleWord arg);
#define SDF_LexModuleWordToTerm(arg) (_SDF_LexModuleWordToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ModuleWordFromTerm(t) ((((union {SDF_ModuleWord target; ATerm source; })(t)).target))
#else
SDF_ModuleWord _SDF_ModuleWordFromTerm(ATerm t);
#define SDF_ModuleWordFromTerm(t) (_SDF_ModuleWordFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ModuleWordToTerm(arg) ((((union {SDF_ModuleWord source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ModuleWordToTerm(SDF_ModuleWord arg);
#define SDF_ModuleWordToTerm(arg) (_SDF_ModuleWordToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexModuleIdFromTerm(t) ((((union {SDF_LexModuleId target; ATerm source; })(t)).target))
#else
SDF_LexModuleId _SDF_LexModuleIdFromTerm(ATerm t);
#define SDF_LexModuleIdFromTerm(t) (_SDF_LexModuleIdFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexModuleIdToTerm(arg) ((((union {SDF_LexModuleId source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexModuleIdToTerm(SDF_LexModuleId arg);
#define SDF_LexModuleIdToTerm(arg) (_SDF_LexModuleIdToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ModuleIdFromTerm(t) ((((union {SDF_ModuleId target; ATerm source; })(t)).target))
#else
SDF_ModuleId _SDF_ModuleIdFromTerm(ATerm t);
#define SDF_ModuleIdFromTerm(t) (_SDF_ModuleIdFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ModuleIdToTerm(arg) ((((union {SDF_ModuleId source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ModuleIdToTerm(SDF_ModuleId arg);
#define SDF_ModuleIdToTerm(arg) (_SDF_ModuleIdToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_DefinitionFromTerm(t) ((((union {SDF_Definition target; ATerm source; })(t)).target))
#else
SDF_Definition _SDF_DefinitionFromTerm(ATerm t);
#define SDF_DefinitionFromTerm(t) (_SDF_DefinitionFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_DefinitionToTerm(arg) ((((union {SDF_Definition source; ATerm target; })(arg)).target))
#else
ATerm _SDF_DefinitionToTerm(SDF_Definition arg);
#define SDF_DefinitionToTerm(arg) (_SDF_DefinitionToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ModuleFromTerm(t) ((((union {SDF_Module target; ATerm source; })(t)).target))
#else
SDF_Module _SDF_ModuleFromTerm(ATerm t);
#define SDF_ModuleFromTerm(t) (_SDF_ModuleFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ModuleToTerm(arg) ((((union {SDF_Module source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ModuleToTerm(SDF_Module arg);
#define SDF_ModuleToTerm(arg) (_SDF_ModuleToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SectionFromTerm(t) ((((union {SDF_Section target; ATerm source; })(t)).target))
#else
SDF_Section _SDF_SectionFromTerm(ATerm t);
#define SDF_SectionFromTerm(t) (_SDF_SectionFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SectionToTerm(arg) ((((union {SDF_Section source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SectionToTerm(SDF_Section arg);
#define SDF_SectionToTerm(arg) (_SDF_SectionToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SectionsFromTerm(t) ((((union {SDF_Sections target; ATerm source; })(t)).target))
#else
SDF_Sections _SDF_SectionsFromTerm(ATerm t);
#define SDF_SectionsFromTerm(t) (_SDF_SectionsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SectionsToTerm(arg) ((((union {SDF_Sections source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SectionsToTerm(SDF_Sections arg);
#define SDF_SectionsToTerm(arg) (_SDF_SectionsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ModuleNameFromTerm(t) ((((union {SDF_ModuleName target; ATerm source; })(t)).target))
#else
SDF_ModuleName _SDF_ModuleNameFromTerm(ATerm t);
#define SDF_ModuleNameFromTerm(t) (_SDF_ModuleNameFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ModuleNameToTerm(arg) ((((union {SDF_ModuleName source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ModuleNameToTerm(SDF_ModuleName arg);
#define SDF_ModuleNameToTerm(arg) (_SDF_ModuleNameToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ImpSectionFromTerm(t) ((((union {SDF_ImpSection target; ATerm source; })(t)).target))
#else
SDF_ImpSection _SDF_ImpSectionFromTerm(ATerm t);
#define SDF_ImpSectionFromTerm(t) (_SDF_ImpSectionFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ImpSectionToTerm(arg) ((((union {SDF_ImpSection source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ImpSectionToTerm(SDF_ImpSection arg);
#define SDF_ImpSectionToTerm(arg) (_SDF_ImpSectionToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ImportsFromTerm(t) ((((union {SDF_Imports target; ATerm source; })(t)).target))
#else
SDF_Imports _SDF_ImportsFromTerm(ATerm t);
#define SDF_ImportsFromTerm(t) (_SDF_ImportsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ImportsToTerm(arg) ((((union {SDF_Imports source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ImportsToTerm(SDF_Imports arg);
#define SDF_ImportsToTerm(arg) (_SDF_ImportsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ImportFromTerm(t) ((((union {SDF_Import target; ATerm source; })(t)).target))
#else
SDF_Import _SDF_ImportFromTerm(ATerm t);
#define SDF_ImportFromTerm(t) (_SDF_ImportFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ImportToTerm(arg) ((((union {SDF_Import source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ImportToTerm(SDF_Import arg);
#define SDF_ImportToTerm(arg) (_SDF_ImportToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ModuleListFromTerm(t) ((((union {SDF_ModuleList target; ATerm source; })(t)).target))
#else
SDF_ModuleList _SDF_ModuleListFromTerm(ATerm t);
#define SDF_ModuleListFromTerm(t) (_SDF_ModuleListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ModuleListToTerm(arg) ((((union {SDF_ModuleList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ModuleListToTerm(SDF_ModuleList arg);
#define SDF_ModuleListToTerm(arg) (_SDF_ModuleListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ImpSectionListFromTerm(t) ((((union {SDF_ImpSectionList target; ATerm source; })(t)).target))
#else
SDF_ImpSectionList _SDF_ImpSectionListFromTerm(ATerm t);
#define SDF_ImpSectionListFromTerm(t) (_SDF_ImpSectionListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ImpSectionListToTerm(arg) ((((union {SDF_ImpSectionList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ImpSectionListToTerm(SDF_ImpSectionList arg);
#define SDF_ImpSectionListToTerm(arg) (_SDF_ImpSectionListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SectionListFromTerm(t) ((((union {SDF_SectionList target; ATerm source; })(t)).target))
#else
SDF_SectionList _SDF_SectionListFromTerm(ATerm t);
#define SDF_SectionListFromTerm(t) (_SDF_SectionListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SectionListToTerm(arg) ((((union {SDF_SectionList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SectionListToTerm(SDF_SectionList arg);
#define SDF_SectionListToTerm(arg) (_SDF_SectionListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ImportListFromTerm(t) ((((union {SDF_ImportList target; ATerm source; })(t)).target))
#else
SDF_ImportList _SDF_ImportListFromTerm(ATerm t);
#define SDF_ImportListFromTerm(t) (_SDF_ImportListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ImportListToTerm(arg) ((((union {SDF_ImportList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ImportListToTerm(SDF_ImportList arg);
#define SDF_ImportListToTerm(arg) (_SDF_ImportListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_AssociativityFromTerm(t) ((((union {SDF_Associativity target; ATerm source; })(t)).target))
#else
SDF_Associativity _SDF_AssociativityFromTerm(ATerm t);
#define SDF_AssociativityFromTerm(t) (_SDF_AssociativityFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_AssociativityToTerm(arg) ((((union {SDF_Associativity source; ATerm target; })(arg)).target))
#else
ATerm _SDF_AssociativityToTerm(SDF_Associativity arg);
#define SDF_AssociativityToTerm(arg) (_SDF_AssociativityToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_ArgumentIndicatorFromTerm(t) ((((union {SDF_ArgumentIndicator target; ATerm source; })(t)).target))
#else
SDF_ArgumentIndicator _SDF_ArgumentIndicatorFromTerm(ATerm t);
#define SDF_ArgumentIndicatorFromTerm(t) (_SDF_ArgumentIndicatorFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_ArgumentIndicatorToTerm(arg) ((((union {SDF_ArgumentIndicator source; ATerm target; })(arg)).target))
#else
ATerm _SDF_ArgumentIndicatorToTerm(SDF_ArgumentIndicator arg);
#define SDF_ArgumentIndicatorToTerm(arg) (_SDF_ArgumentIndicatorToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_GroupFromTerm(t) ((((union {SDF_Group target; ATerm source; })(t)).target))
#else
SDF_Group _SDF_GroupFromTerm(ATerm t);
#define SDF_GroupFromTerm(t) (_SDF_GroupFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_GroupToTerm(arg) ((((union {SDF_Group source; ATerm target; })(arg)).target))
#else
ATerm _SDF_GroupToTerm(SDF_Group arg);
#define SDF_GroupToTerm(arg) (_SDF_GroupToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_PriorityFromTerm(t) ((((union {SDF_Priority target; ATerm source; })(t)).target))
#else
SDF_Priority _SDF_PriorityFromTerm(ATerm t);
#define SDF_PriorityFromTerm(t) (_SDF_PriorityFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_PriorityToTerm(arg) ((((union {SDF_Priority source; ATerm target; })(arg)).target))
#else
ATerm _SDF_PriorityToTerm(SDF_Priority arg);
#define SDF_PriorityToTerm(arg) (_SDF_PriorityToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_PrioritiesFromTerm(t) ((((union {SDF_Priorities target; ATerm source; })(t)).target))
#else
SDF_Priorities _SDF_PrioritiesFromTerm(ATerm t);
#define SDF_PrioritiesFromTerm(t) (_SDF_PrioritiesFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_PrioritiesToTerm(arg) ((((union {SDF_Priorities source; ATerm target; })(arg)).target))
#else
ATerm _SDF_PrioritiesToTerm(SDF_Priorities arg);
#define SDF_PrioritiesToTerm(arg) (_SDF_PrioritiesToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_NatConArgumentsFromTerm(t) ((((union {SDF_NatConArguments target; ATerm source; })(t)).target))
#else
SDF_NatConArguments _SDF_NatConArgumentsFromTerm(ATerm t);
#define SDF_NatConArgumentsFromTerm(t) (_SDF_NatConArgumentsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_NatConArgumentsToTerm(arg) ((((union {SDF_NatConArguments source; ATerm target; })(arg)).target))
#else
ATerm _SDF_NatConArgumentsToTerm(SDF_NatConArguments arg);
#define SDF_NatConArgumentsToTerm(arg) (_SDF_NatConArgumentsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_GroupListFromTerm(t) ((((union {SDF_GroupList target; ATerm source; })(t)).target))
#else
SDF_GroupList _SDF_GroupListFromTerm(ATerm t);
#define SDF_GroupListFromTerm(t) (_SDF_GroupListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_GroupListToTerm(arg) ((((union {SDF_GroupList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_GroupListToTerm(SDF_GroupList arg);
#define SDF_GroupListToTerm(arg) (_SDF_GroupListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_PriorityListFromTerm(t) ((((union {SDF_PriorityList target; ATerm source; })(t)).target))
#else
SDF_PriorityList _SDF_PriorityListFromTerm(ATerm t);
#define SDF_PriorityListFromTerm(t) (_SDF_PriorityListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_PriorityListToTerm(arg) ((((union {SDF_PriorityList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_PriorityListToTerm(SDF_PriorityList arg);
#define SDF_PriorityListToTerm(arg) (_SDF_PriorityListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolTailFromTerm(t) ((((union {SDF_SymbolTail target; ATerm source; })(t)).target))
#else
SDF_SymbolTail _SDF_SymbolTailFromTerm(ATerm t);
#define SDF_SymbolTailFromTerm(t) (_SDF_SymbolTailFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolTailToTerm(arg) ((((union {SDF_SymbolTail source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolTailToTerm(SDF_SymbolTail arg);
#define SDF_SymbolTailToTerm(arg) (_SDF_SymbolTailToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolRestFromTerm(t) ((((union {SDF_SymbolRest target; ATerm source; })(t)).target))
#else
SDF_SymbolRest _SDF_SymbolRestFromTerm(ATerm t);
#define SDF_SymbolRestFromTerm(t) (_SDF_SymbolRestFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolRestToTerm(arg) ((((union {SDF_SymbolRest source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolRestToTerm(SDF_SymbolRest arg);
#define SDF_SymbolRestToTerm(arg) (_SDF_SymbolRestToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RenamingsFromTerm(t) ((((union {SDF_Renamings target; ATerm source; })(t)).target))
#else
SDF_Renamings _SDF_RenamingsFromTerm(ATerm t);
#define SDF_RenamingsFromTerm(t) (_SDF_RenamingsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RenamingsToTerm(arg) ((((union {SDF_Renamings source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RenamingsToTerm(SDF_Renamings arg);
#define SDF_RenamingsToTerm(arg) (_SDF_RenamingsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RenamingFromTerm(t) ((((union {SDF_Renaming target; ATerm source; })(t)).target))
#else
SDF_Renaming _SDF_RenamingFromTerm(ATerm t);
#define SDF_RenamingFromTerm(t) (_SDF_RenamingFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RenamingToTerm(arg) ((((union {SDF_Renaming source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RenamingToTerm(SDF_Renaming arg);
#define SDF_RenamingToTerm(arg) (_SDF_RenamingToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RenamingListFromTerm(t) ((((union {SDF_RenamingList target; ATerm source; })(t)).target))
#else
SDF_RenamingList _SDF_RenamingListFromTerm(ATerm t);
#define SDF_RenamingListFromTerm(t) (_SDF_RenamingListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RenamingListToTerm(arg) ((((union {SDF_RenamingList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RenamingListToTerm(SDF_RenamingList arg);
#define SDF_RenamingListToTerm(arg) (_SDF_RenamingListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LookaheadFromTerm(t) ((((union {SDF_Lookahead target; ATerm source; })(t)).target))
#else
SDF_Lookahead _SDF_LookaheadFromTerm(ATerm t);
#define SDF_LookaheadFromTerm(t) (_SDF_LookaheadFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LookaheadToTerm(arg) ((((union {SDF_Lookahead source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LookaheadToTerm(SDF_Lookahead arg);
#define SDF_LookaheadToTerm(arg) (_SDF_LookaheadToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LookaheadsFromTerm(t) ((((union {SDF_Lookaheads target; ATerm source; })(t)).target))
#else
SDF_Lookaheads _SDF_LookaheadsFromTerm(ATerm t);
#define SDF_LookaheadsFromTerm(t) (_SDF_LookaheadsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LookaheadsToTerm(arg) ((((union {SDF_Lookaheads source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LookaheadsToTerm(SDF_Lookaheads arg);
#define SDF_LookaheadsToTerm(arg) (_SDF_LookaheadsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RestrictionFromTerm(t) ((((union {SDF_Restriction target; ATerm source; })(t)).target))
#else
SDF_Restriction _SDF_RestrictionFromTerm(ATerm t);
#define SDF_RestrictionFromTerm(t) (_SDF_RestrictionFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RestrictionToTerm(arg) ((((union {SDF_Restriction source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RestrictionToTerm(SDF_Restriction arg);
#define SDF_RestrictionToTerm(arg) (_SDF_RestrictionToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RestrictionsFromTerm(t) ((((union {SDF_Restrictions target; ATerm source; })(t)).target))
#else
SDF_Restrictions _SDF_RestrictionsFromTerm(ATerm t);
#define SDF_RestrictionsFromTerm(t) (_SDF_RestrictionsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RestrictionsToTerm(arg) ((((union {SDF_Restrictions source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RestrictionsToTerm(SDF_Restrictions arg);
#define SDF_RestrictionsToTerm(arg) (_SDF_RestrictionsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LookaheadListFromTerm(t) ((((union {SDF_LookaheadList target; ATerm source; })(t)).target))
#else
SDF_LookaheadList _SDF_LookaheadListFromTerm(ATerm t);
#define SDF_LookaheadListFromTerm(t) (_SDF_LookaheadListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LookaheadListToTerm(arg) ((((union {SDF_LookaheadList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LookaheadListToTerm(SDF_LookaheadList arg);
#define SDF_LookaheadListToTerm(arg) (_SDF_LookaheadListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_RestrictionListFromTerm(t) ((((union {SDF_RestrictionList target; ATerm source; })(t)).target))
#else
SDF_RestrictionList _SDF_RestrictionListFromTerm(ATerm t);
#define SDF_RestrictionListFromTerm(t) (_SDF_RestrictionListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_RestrictionListToTerm(arg) ((((union {SDF_RestrictionList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_RestrictionListToTerm(SDF_RestrictionList arg);
#define SDF_RestrictionListToTerm(arg) (_SDF_RestrictionListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SortFromTerm(t) ((((union {SDF_Sort target; ATerm source; })(t)).target))
#else
SDF_Sort _SDF_SortFromTerm(ATerm t);
#define SDF_SortFromTerm(t) (_SDF_SortFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SortToTerm(arg) ((((union {SDF_Sort source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SortToTerm(SDF_Sort arg);
#define SDF_SortToTerm(arg) (_SDF_SortToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SDFFromTerm(t) ((((union {SDF_SDF target; ATerm source; })(t)).target))
#else
SDF_SDF _SDF_SDFFromTerm(ATerm t);
#define SDF_SDFFromTerm(t) (_SDF_SDFFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SDFToTerm(arg) ((((union {SDF_SDF source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SDFToTerm(SDF_SDF arg);
#define SDF_SDFToTerm(arg) (_SDF_SDFToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexSortFromTerm(t) ((((union {SDF_LexSort target; ATerm source; })(t)).target))
#else
SDF_LexSort _SDF_LexSortFromTerm(ATerm t);
#define SDF_LexSortFromTerm(t) (_SDF_LexSortFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexSortToTerm(arg) ((((union {SDF_LexSort source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexSortToTerm(SDF_LexSort arg);
#define SDF_LexSortToTerm(arg) (_SDF_LexSortToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolParametersFromTerm(t) ((((union {SDF_SymbolParameters target; ATerm source; })(t)).target))
#else
SDF_SymbolParameters _SDF_SymbolParametersFromTerm(ATerm t);
#define SDF_SymbolParametersFromTerm(t) (_SDF_SymbolParametersFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolParametersToTerm(arg) ((((union {SDF_SymbolParameters source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolParametersToTerm(SDF_SymbolParameters arg);
#define SDF_SymbolParametersToTerm(arg) (_SDF_SymbolParametersToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolsFromTerm(t) ((((union {SDF_Symbols target; ATerm source; })(t)).target))
#else
SDF_Symbols _SDF_SymbolsFromTerm(ATerm t);
#define SDF_SymbolsFromTerm(t) (_SDF_SymbolsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolsToTerm(arg) ((((union {SDF_Symbols source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolsToTerm(SDF_Symbols arg);
#define SDF_SymbolsToTerm(arg) (_SDF_SymbolsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_SymbolListFromTerm(t) ((((union {SDF_SymbolList target; ATerm source; })(t)).target))
#else
SDF_SymbolList _SDF_SymbolListFromTerm(ATerm t);
#define SDF_SymbolListFromTerm(t) (_SDF_SymbolListFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_SymbolListToTerm(arg) ((((union {SDF_SymbolList source; ATerm target; })(arg)).target))
#else
ATerm _SDF_SymbolListToTerm(SDF_SymbolList arg);
#define SDF_SymbolListToTerm(arg) (_SDF_SymbolListToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexLayoutFromTerm(t) ((((union {SDF_LexLayout target; ATerm source; })(t)).target))
#else
SDF_LexLayout _SDF_LexLayoutFromTerm(ATerm t);
#define SDF_LexLayoutFromTerm(t) (_SDF_LexLayoutFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexLayoutToTerm(arg) ((((union {SDF_LexLayout source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexLayoutToTerm(SDF_LexLayout arg);
#define SDF_LexLayoutToTerm(arg) (_SDF_LexLayoutToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexStrCharFromTerm(t) ((((union {SDF_LexStrChar target; ATerm source; })(t)).target))
#else
SDF_LexStrChar _SDF_LexStrCharFromTerm(ATerm t);
#define SDF_LexStrCharFromTerm(t) (_SDF_LexStrCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexStrCharToTerm(arg) ((((union {SDF_LexStrChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexStrCharToTerm(SDF_LexStrChar arg);
#define SDF_LexStrCharToTerm(arg) (_SDF_LexStrCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_StrCharFromTerm(t) ((((union {SDF_StrChar target; ATerm source; })(t)).target))
#else
SDF_StrChar _SDF_StrCharFromTerm(ATerm t);
#define SDF_StrCharFromTerm(t) (_SDF_StrCharFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_StrCharToTerm(arg) ((((union {SDF_StrChar source; ATerm target; })(arg)).target))
#else
ATerm _SDF_StrCharToTerm(SDF_StrChar arg);
#define SDF_StrCharToTerm(arg) (_SDF_StrCharToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexStrConFromTerm(t) ((((union {SDF_LexStrCon target; ATerm source; })(t)).target))
#else
SDF_LexStrCon _SDF_LexStrConFromTerm(ATerm t);
#define SDF_LexStrConFromTerm(t) (_SDF_LexStrConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexStrConToTerm(arg) ((((union {SDF_LexStrCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexStrConToTerm(SDF_LexStrCon arg);
#define SDF_LexStrConToTerm(arg) (_SDF_LexStrConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_StrConFromTerm(t) ((((union {SDF_StrCon target; ATerm source; })(t)).target))
#else
SDF_StrCon _SDF_StrConFromTerm(ATerm t);
#define SDF_StrConFromTerm(t) (_SDF_StrConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_StrConToTerm(arg) ((((union {SDF_StrCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_StrConToTerm(SDF_StrCon arg);
#define SDF_StrConToTerm(arg) (_SDF_StrConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexStrCharCharsFromTerm(t) ((((union {SDF_LexStrCharChars target; ATerm source; })(t)).target))
#else
SDF_LexStrCharChars _SDF_LexStrCharCharsFromTerm(ATerm t);
#define SDF_LexStrCharCharsFromTerm(t) (_SDF_LexStrCharCharsFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexStrCharCharsToTerm(arg) ((((union {SDF_LexStrCharChars source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexStrCharCharsToTerm(SDF_LexStrCharChars arg);
#define SDF_LexStrCharCharsToTerm(arg) (_SDF_LexStrCharCharsToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexNatConFromTerm(t) ((((union {SDF_LexNatCon target; ATerm source; })(t)).target))
#else
SDF_LexNatCon _SDF_LexNatConFromTerm(ATerm t);
#define SDF_LexNatConFromTerm(t) (_SDF_LexNatConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexNatConToTerm(arg) ((((union {SDF_LexNatCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexNatConToTerm(SDF_LexNatCon arg);
#define SDF_LexNatConToTerm(arg) (_SDF_LexNatConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_NatConFromTerm(t) ((((union {SDF_NatCon target; ATerm source; })(t)).target))
#else
SDF_NatCon _SDF_NatConFromTerm(ATerm t);
#define SDF_NatConFromTerm(t) (_SDF_NatConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_NatConToTerm(arg) ((((union {SDF_NatCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_NatConToTerm(SDF_NatCon arg);
#define SDF_NatConToTerm(arg) (_SDF_NatConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_LexIdConFromTerm(t) ((((union {SDF_LexIdCon target; ATerm source; })(t)).target))
#else
SDF_LexIdCon _SDF_LexIdConFromTerm(ATerm t);
#define SDF_LexIdConFromTerm(t) (_SDF_LexIdConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_LexIdConToTerm(arg) ((((union {SDF_LexIdCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_LexIdConToTerm(SDF_LexIdCon arg);
#define SDF_LexIdConToTerm(arg) (_SDF_LexIdConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_IdConFromTerm(t) ((((union {SDF_IdCon target; ATerm source; })(t)).target))
#else
SDF_IdCon _SDF_IdConFromTerm(ATerm t);
#define SDF_IdConFromTerm(t) (_SDF_IdConFromTerm(t))
#endif
#ifdef FAST_API
#define SDF_IdConToTerm(arg) ((((union {SDF_IdCon source; ATerm target; })(arg)).target))
#else
ATerm _SDF_IdConToTerm(SDF_IdCon arg);
#define SDF_IdConToTerm(arg) (_SDF_IdConToTerm(arg))
#endif
#ifdef FAST_API
#define SDF_getLexLayoutListLength(arg) (ATgetLength((ATermList) (arg)))
#else
int _SDF_getLexLayoutListLength(SDF_LexLayoutList arg);
#define SDF_getLexLayoutListLength(arg) (_SDF_getLexLayoutListLength(arg))
#endif
#ifdef FAST_API
#define SDF_reverseLexLayoutList(arg) ((SDF_LexLayoutList) ATreverse((ATermList) (arg)))
#else
SDF_LexLayoutList _SDF_reverseLexLayoutList(SDF_LexLayoutList arg);
#define SDF_reverseLexLayoutList(arg) (_SDF_reverseLexLayoutList(arg))
#endif
#ifdef FAST_API
#define SDF_appendLexLayoutList(arg, elem) ((SDF_LexLayoutList) ATappend((ATermList) (arg), (ATerm) (((ATerm) elem))))
#else
SDF_LexLayoutList _SDF_appendLexLayoutList(SDF_LexLayoutList arg, SDF_LexLayout elem);
#define SDF_appendLexLayoutList(arg, elem) (_SDF_appendLexLayoutList(arg, elem))
#endif
#ifdef FAST_API
#define SDF_concatLexLayoutList(arg0, arg1) ((SDF_LexLayoutList) ATconcat((ATermList) (arg0), (ATermList) (arg1)))
#else
SDF_LexLayoutList _SDF_concatLexLayoutList(SDF_LexLayoutList arg0, SDF_LexLayoutList arg1);
#define SDF_concatLexLayoutList(arg0, arg1) (_SDF_concatLexLayoutList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_sliceLexLayoutList(arg, start, end) ((SDF_LexLayoutList) ATgetSlice((ATermList) (arg), (start), (end)))
#else
SDF_LexLayoutList _SDF_sliceLexLayoutList(SDF_LexLayoutList arg, int start, int end);
#define SDF_sliceLexLayoutList(arg, start, end) (_SDF_sliceLexLayoutList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getLexLayoutListLexLayoutAt(arg, index) ((SDF_LexLayout) (ATelementAt((ATermList) arg,index)))
#else
SDF_LexLayout _SDF_getLexLayoutListLexLayoutAt(SDF_LexLayoutList arg, int index);
#define SDF_getLexLayoutListLexLayoutAt(arg, index) (_SDF_getLexLayoutListLexLayoutAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceLexLayoutListLexLayoutAt(arg, elem, index) ((SDF_LexLayoutList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index)))
#else
SDF_LexLayoutList _SDF_replaceLexLayoutListLexLayoutAt(SDF_LexLayoutList arg, SDF_LexLayout elem, int index);
#define SDF_replaceLexLayoutListLexLayoutAt(arg, elem, index) (_SDF_replaceLexLayoutListLexLayoutAt(arg, elem, index))
#endif
#ifdef FAST_API
#define SDF_makeLexLayoutList2(elem1,  elem2) ((SDF_LexLayoutList) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) (((ATerm) elem2))))
#else
SDF_LexLayoutList _SDF_makeLexLayoutList2(SDF_LexLayout elem1, SDF_LexLayout elem2);
#define SDF_makeLexLayoutList2(elem1,  elem2) (_SDF_makeLexLayoutList2(elem1,  elem2))
#endif
#ifdef FAST_API
#define SDF_makeLexLayoutList3(elem1, elem2,  elem3) ((SDF_LexLayoutList) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) (((ATerm) elem3))))
#else
SDF_LexLayoutList _SDF_makeLexLayoutList3(SDF_LexLayout elem1, SDF_LexLayout elem2, SDF_LexLayout elem3);
#define SDF_makeLexLayoutList3(elem1, elem2,  elem3) (_SDF_makeLexLayoutList3(elem1, elem2,  elem3))
#endif
#ifdef FAST_API
#define SDF_makeLexLayoutList4(elem1, elem2, elem3,  elem4) ((SDF_LexLayoutList) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) (((ATerm) elem4))))
#else
SDF_LexLayoutList _SDF_makeLexLayoutList4(SDF_LexLayout elem1, SDF_LexLayout elem2, SDF_LexLayout elem3, SDF_LexLayout elem4);
#define SDF_makeLexLayoutList4(elem1, elem2, elem3,  elem4) (_SDF_makeLexLayoutList4(elem1, elem2, elem3,  elem4))
#endif
#ifdef FAST_API
#define SDF_makeLexLayoutList5(elem1, elem2, elem3, elem4,  elem5) ((SDF_LexLayoutList) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) (((ATerm) elem5))))
#else
SDF_LexLayoutList _SDF_makeLexLayoutList5(SDF_LexLayout elem1, SDF_LexLayout elem2, SDF_LexLayout elem3, SDF_LexLayout elem4, SDF_LexLayout elem5);
#define SDF_makeLexLayoutList5(elem1, elem2, elem3, elem4,  elem5) (_SDF_makeLexLayoutList5(elem1, elem2, elem3, elem4,  elem5))
#endif
#ifdef FAST_API
#define SDF_makeLexLayoutList6(elem1, elem2, elem3, elem4, elem5,  elem6) ((SDF_LexLayoutList) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) (((ATerm) elem6))))
#else
SDF_LexLayoutList _SDF_makeLexLayoutList6(SDF_LexLayout elem1, SDF_LexLayout elem2, SDF_LexLayout elem3, SDF_LexLayout elem4, SDF_LexLayout elem5, SDF_LexLayout elem6);
#define SDF_makeLexLayoutList6(elem1, elem2, elem3, elem4, elem5,  elem6) (_SDF_makeLexLayoutList6(elem1, elem2, elem3, elem4, elem5,  elem6))
#endif
#ifdef FAST_API
#define SDF_getATermArgsLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getATermArgsLength(SDF_ATermArgs arg);
#define SDF_getATermArgsLength(arg) (_SDF_getATermArgsLength(arg))
#endif
SDF_ATermArgs SDF_reverseATermArgs(SDF_ATermArgs arg);
SDF_ATermArgs SDF_appendATermArgs(SDF_ATermArgs arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm arg1);
SDF_ATermArgs SDF_concatATermArgs(SDF_ATermArgs arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATermArgs arg1);
#ifdef FAST_API
#define SDF_sliceATermArgs(arg, start, end) ((SDF_ATermArgs) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_ATermArgs _SDF_sliceATermArgs(SDF_ATermArgs arg, int start, int end);
#define SDF_sliceATermArgs(arg, start, end) (_SDF_sliceATermArgs(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getATermArgsATermAt(arg, index) ((SDF_ATerm) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_ATerm _SDF_getATermArgsATermAt(SDF_ATermArgs arg, int index);
#define SDF_getATermArgsATermAt(arg, index) (_SDF_getATermArgsATermAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceATermArgsATermAt(arg, elem, index) ((SDF_ATermArgs) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_ATermArgs _SDF_replaceATermArgsATermAt(SDF_ATermArgs arg, SDF_ATerm elem, int index);
#define SDF_replaceATermArgsATermAt(arg, elem, index) (_SDF_replaceATermArgsATermAt(arg, elem, index))
#endif
SDF_ATermArgs SDF_makeATermArgs2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2);
SDF_ATermArgs SDF_makeATermArgs3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3);
SDF_ATermArgs SDF_makeATermArgs4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4);
SDF_ATermArgs SDF_makeATermArgs5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4, SDF_ATerm elem5);
SDF_ATermArgs SDF_makeATermArgs6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4, SDF_ATerm elem5, SDF_ATerm elem6);
#ifdef FAST_API
#define SDF_getATermElemsLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getATermElemsLength(SDF_ATermElems arg);
#define SDF_getATermElemsLength(arg) (_SDF_getATermElemsLength(arg))
#endif
SDF_ATermElems SDF_reverseATermElems(SDF_ATermElems arg);
SDF_ATermElems SDF_appendATermElems(SDF_ATermElems arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm arg1);
SDF_ATermElems SDF_concatATermElems(SDF_ATermElems arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATermElems arg1);
#ifdef FAST_API
#define SDF_sliceATermElems(arg, start, end) ((SDF_ATermElems) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_ATermElems _SDF_sliceATermElems(SDF_ATermElems arg, int start, int end);
#define SDF_sliceATermElems(arg, start, end) (_SDF_sliceATermElems(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getATermElemsATermAt(arg, index) ((SDF_ATerm) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_ATerm _SDF_getATermElemsATermAt(SDF_ATermElems arg, int index);
#define SDF_getATermElemsATermAt(arg, index) (_SDF_getATermElemsATermAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceATermElemsATermAt(arg, elem, index) ((SDF_ATermElems) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_ATermElems _SDF_replaceATermElemsATermAt(SDF_ATermElems arg, SDF_ATerm elem, int index);
#define SDF_replaceATermElemsATermAt(arg, elem, index) (_SDF_replaceATermElemsATermAt(arg, elem, index))
#endif
SDF_ATermElems SDF_makeATermElems2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2);
SDF_ATermElems SDF_makeATermElems3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3);
SDF_ATermElems SDF_makeATermElems4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4);
SDF_ATermElems SDF_makeATermElems5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4, SDF_ATerm elem5);
SDF_ATermElems SDF_makeATermElems6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4, SDF_ATerm elem5, SDF_ATerm elem6);
#ifdef FAST_API
#define SDF_getATermAnnosLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getATermAnnosLength(SDF_ATermAnnos arg);
#define SDF_getATermAnnosLength(arg) (_SDF_getATermAnnosLength(arg))
#endif
SDF_ATermAnnos SDF_reverseATermAnnos(SDF_ATermAnnos arg);
SDF_ATermAnnos SDF_appendATermAnnos(SDF_ATermAnnos arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm arg1);
SDF_ATermAnnos SDF_concatATermAnnos(SDF_ATermAnnos arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATermAnnos arg1);
#ifdef FAST_API
#define SDF_sliceATermAnnos(arg, start, end) ((SDF_ATermAnnos) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_ATermAnnos _SDF_sliceATermAnnos(SDF_ATermAnnos arg, int start, int end);
#define SDF_sliceATermAnnos(arg, start, end) (_SDF_sliceATermAnnos(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getATermAnnosATermAt(arg, index) ((SDF_ATerm) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_ATerm _SDF_getATermAnnosATermAt(SDF_ATermAnnos arg, int index);
#define SDF_getATermAnnosATermAt(arg, index) (_SDF_getATermAnnosATermAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceATermAnnosATermAt(arg, elem, index) ((SDF_ATermAnnos) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_ATermAnnos _SDF_replaceATermAnnosATermAt(SDF_ATermAnnos arg, SDF_ATerm elem, int index);
#define SDF_replaceATermAnnosATermAt(arg, elem, index) (_SDF_replaceATermAnnosATermAt(arg, elem, index))
#endif
SDF_ATermAnnos SDF_makeATermAnnos2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2);
SDF_ATermAnnos SDF_makeATermAnnos3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3);
SDF_ATermAnnos SDF_makeATermAnnos4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4);
SDF_ATermAnnos SDF_makeATermAnnos5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4, SDF_ATerm elem5);
SDF_ATermAnnos SDF_makeATermAnnos6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATerm elem1, SDF_ATerm elem2, SDF_ATerm elem3, SDF_ATerm elem4, SDF_ATerm elem5, SDF_ATerm elem6);
#ifdef FAST_API
#define SDF_getAliasListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getAliasListLength(SDF_AliasList arg);
#define SDF_getAliasListLength(arg) (_SDF_getAliasListLength(arg))
#endif
SDF_AliasList SDF_reverseAliasList(SDF_AliasList arg);
SDF_AliasList SDF_appendAliasList(SDF_AliasList arg0, SDF_OptLayout wsAfterHead, SDF_Alias arg1);
SDF_AliasList SDF_concatAliasList(SDF_AliasList arg0, SDF_OptLayout wsAfterHead, SDF_AliasList arg1);
#ifdef FAST_API
#define SDF_sliceAliasList(arg, start, end) ((SDF_AliasList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_AliasList _SDF_sliceAliasList(SDF_AliasList arg, int start, int end);
#define SDF_sliceAliasList(arg, start, end) (_SDF_sliceAliasList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getAliasListAliasAt(arg, index) ((SDF_Alias) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Alias _SDF_getAliasListAliasAt(SDF_AliasList arg, int index);
#define SDF_getAliasListAliasAt(arg, index) (_SDF_getAliasListAliasAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceAliasListAliasAt(arg, elem, index) ((SDF_AliasList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_AliasList _SDF_replaceAliasListAliasAt(SDF_AliasList arg, SDF_Alias elem, int index);
#define SDF_replaceAliasListAliasAt(arg, elem, index) (_SDF_replaceAliasListAliasAt(arg, elem, index))
#endif
SDF_AliasList SDF_makeAliasList2(SDF_OptLayout wsAfterHead, SDF_Alias elem1, SDF_Alias elem2);
SDF_AliasList SDF_makeAliasList3(SDF_OptLayout wsAfterHead, SDF_Alias elem1, SDF_Alias elem2, SDF_Alias elem3);
SDF_AliasList SDF_makeAliasList4(SDF_OptLayout wsAfterHead, SDF_Alias elem1, SDF_Alias elem2, SDF_Alias elem3, SDF_Alias elem4);
SDF_AliasList SDF_makeAliasList5(SDF_OptLayout wsAfterHead, SDF_Alias elem1, SDF_Alias elem2, SDF_Alias elem3, SDF_Alias elem4, SDF_Alias elem5);
SDF_AliasList SDF_makeAliasList6(SDF_OptLayout wsAfterHead, SDF_Alias elem1, SDF_Alias elem2, SDF_Alias elem3, SDF_Alias elem4, SDF_Alias elem5, SDF_Alias elem6);
#ifdef FAST_API
#define SDF_getAttributeListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getAttributeListLength(SDF_AttributeList arg);
#define SDF_getAttributeListLength(arg) (_SDF_getAttributeListLength(arg))
#endif
SDF_AttributeList SDF_reverseAttributeList(SDF_AttributeList arg);
SDF_AttributeList SDF_appendAttributeList(SDF_AttributeList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Attribute arg1);
SDF_AttributeList SDF_concatAttributeList(SDF_AttributeList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_AttributeList arg1);
#ifdef FAST_API
#define SDF_sliceAttributeList(arg, start, end) ((SDF_AttributeList) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_AttributeList _SDF_sliceAttributeList(SDF_AttributeList arg, int start, int end);
#define SDF_sliceAttributeList(arg, start, end) (_SDF_sliceAttributeList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getAttributeListAttributeAt(arg, index) ((SDF_Attribute) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Attribute _SDF_getAttributeListAttributeAt(SDF_AttributeList arg, int index);
#define SDF_getAttributeListAttributeAt(arg, index) (_SDF_getAttributeListAttributeAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceAttributeListAttributeAt(arg, elem, index) ((SDF_AttributeList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_AttributeList _SDF_replaceAttributeListAttributeAt(SDF_AttributeList arg, SDF_Attribute elem, int index);
#define SDF_replaceAttributeListAttributeAt(arg, elem, index) (_SDF_replaceAttributeListAttributeAt(arg, elem, index))
#endif
SDF_AttributeList SDF_makeAttributeList2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Attribute elem1, SDF_Attribute elem2);
SDF_AttributeList SDF_makeAttributeList3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Attribute elem1, SDF_Attribute elem2, SDF_Attribute elem3);
SDF_AttributeList SDF_makeAttributeList4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Attribute elem1, SDF_Attribute elem2, SDF_Attribute elem3, SDF_Attribute elem4);
SDF_AttributeList SDF_makeAttributeList5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Attribute elem1, SDF_Attribute elem2, SDF_Attribute elem3, SDF_Attribute elem4, SDF_Attribute elem5);
SDF_AttributeList SDF_makeAttributeList6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Attribute elem1, SDF_Attribute elem2, SDF_Attribute elem3, SDF_Attribute elem4, SDF_Attribute elem5, SDF_Attribute elem6);
#ifdef FAST_API
#define SDF_getProductionListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getProductionListLength(SDF_ProductionList arg);
#define SDF_getProductionListLength(arg) (_SDF_getProductionListLength(arg))
#endif
SDF_ProductionList SDF_reverseProductionList(SDF_ProductionList arg);
SDF_ProductionList SDF_appendProductionList(SDF_ProductionList arg0, SDF_OptLayout wsAfterHead, SDF_Production arg1);
SDF_ProductionList SDF_concatProductionList(SDF_ProductionList arg0, SDF_OptLayout wsAfterHead, SDF_ProductionList arg1);
#ifdef FAST_API
#define SDF_sliceProductionList(arg, start, end) ((SDF_ProductionList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_ProductionList _SDF_sliceProductionList(SDF_ProductionList arg, int start, int end);
#define SDF_sliceProductionList(arg, start, end) (_SDF_sliceProductionList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getProductionListProductionAt(arg, index) ((SDF_Production) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Production _SDF_getProductionListProductionAt(SDF_ProductionList arg, int index);
#define SDF_getProductionListProductionAt(arg, index) (_SDF_getProductionListProductionAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceProductionListProductionAt(arg, elem, index) ((SDF_ProductionList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_ProductionList _SDF_replaceProductionListProductionAt(SDF_ProductionList arg, SDF_Production elem, int index);
#define SDF_replaceProductionListProductionAt(arg, elem, index) (_SDF_replaceProductionListProductionAt(arg, elem, index))
#endif
SDF_ProductionList SDF_makeProductionList2(SDF_OptLayout wsAfterHead, SDF_Production elem1, SDF_Production elem2);
SDF_ProductionList SDF_makeProductionList3(SDF_OptLayout wsAfterHead, SDF_Production elem1, SDF_Production elem2, SDF_Production elem3);
SDF_ProductionList SDF_makeProductionList4(SDF_OptLayout wsAfterHead, SDF_Production elem1, SDF_Production elem2, SDF_Production elem3, SDF_Production elem4);
SDF_ProductionList SDF_makeProductionList5(SDF_OptLayout wsAfterHead, SDF_Production elem1, SDF_Production elem2, SDF_Production elem3, SDF_Production elem4, SDF_Production elem5);
SDF_ProductionList SDF_makeProductionList6(SDF_OptLayout wsAfterHead, SDF_Production elem1, SDF_Production elem2, SDF_Production elem3, SDF_Production elem4, SDF_Production elem5, SDF_Production elem6);
#ifdef FAST_API
#define SDF_getLexSingleQuotedStrCharCharsLength(arg) (ATgetLength((ATermList) (arg)))
#else
int _SDF_getLexSingleQuotedStrCharCharsLength(SDF_LexSingleQuotedStrCharChars arg);
#define SDF_getLexSingleQuotedStrCharCharsLength(arg) (_SDF_getLexSingleQuotedStrCharCharsLength(arg))
#endif
#ifdef FAST_API
#define SDF_reverseLexSingleQuotedStrCharChars(arg) ((SDF_LexSingleQuotedStrCharChars) ATreverse((ATermList) (arg)))
#else
SDF_LexSingleQuotedStrCharChars _SDF_reverseLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg);
#define SDF_reverseLexSingleQuotedStrCharChars(arg) (_SDF_reverseLexSingleQuotedStrCharChars(arg))
#endif
#ifdef FAST_API
#define SDF_appendLexSingleQuotedStrCharChars(arg, elem) ((SDF_LexSingleQuotedStrCharChars) ATappend((ATermList) (arg), (ATerm) (((ATerm) elem))))
#else
SDF_LexSingleQuotedStrCharChars _SDF_appendLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg, SDF_LexSingleQuotedStrChar elem);
#define SDF_appendLexSingleQuotedStrCharChars(arg, elem) (_SDF_appendLexSingleQuotedStrCharChars(arg, elem))
#endif
#ifdef FAST_API
#define SDF_concatLexSingleQuotedStrCharChars(arg0, arg1) ((SDF_LexSingleQuotedStrCharChars) ATconcat((ATermList) (arg0), (ATermList) (arg1)))
#else
SDF_LexSingleQuotedStrCharChars _SDF_concatLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg0, SDF_LexSingleQuotedStrCharChars arg1);
#define SDF_concatLexSingleQuotedStrCharChars(arg0, arg1) (_SDF_concatLexSingleQuotedStrCharChars(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_sliceLexSingleQuotedStrCharChars(arg, start, end) ((SDF_LexSingleQuotedStrCharChars) ATgetSlice((ATermList) (arg), (start), (end)))
#else
SDF_LexSingleQuotedStrCharChars _SDF_sliceLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg, int start, int end);
#define SDF_sliceLexSingleQuotedStrCharChars(arg, start, end) (_SDF_sliceLexSingleQuotedStrCharChars(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(arg, index) ((SDF_LexSingleQuotedStrChar) (ATelementAt((ATermList) arg,index)))
#else
SDF_LexSingleQuotedStrChar _SDF_getLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(SDF_LexSingleQuotedStrCharChars arg, int index);
#define SDF_getLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(arg, index) (_SDF_getLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(arg, elem, index) ((SDF_LexSingleQuotedStrCharChars) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index)))
#else
SDF_LexSingleQuotedStrCharChars _SDF_replaceLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(SDF_LexSingleQuotedStrCharChars arg, SDF_LexSingleQuotedStrChar elem, int index);
#define SDF_replaceLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(arg, elem, index) (_SDF_replaceLexSingleQuotedStrCharCharsLexSingleQuotedStrCharAt(arg, elem, index))
#endif
#ifdef FAST_API
#define SDF_makeLexSingleQuotedStrCharChars2(elem1,  elem2) ((SDF_LexSingleQuotedStrCharChars) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) (((ATerm) elem2))))
#else
SDF_LexSingleQuotedStrCharChars _SDF_makeLexSingleQuotedStrCharChars2(SDF_LexSingleQuotedStrChar elem1, SDF_LexSingleQuotedStrChar elem2);
#define SDF_makeLexSingleQuotedStrCharChars2(elem1,  elem2) (_SDF_makeLexSingleQuotedStrCharChars2(elem1,  elem2))
#endif
#ifdef FAST_API
#define SDF_makeLexSingleQuotedStrCharChars3(elem1, elem2,  elem3) ((SDF_LexSingleQuotedStrCharChars) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) (((ATerm) elem3))))
#else
SDF_LexSingleQuotedStrCharChars _SDF_makeLexSingleQuotedStrCharChars3(SDF_LexSingleQuotedStrChar elem1, SDF_LexSingleQuotedStrChar elem2, SDF_LexSingleQuotedStrChar elem3);
#define SDF_makeLexSingleQuotedStrCharChars3(elem1, elem2,  elem3) (_SDF_makeLexSingleQuotedStrCharChars3(elem1, elem2,  elem3))
#endif
#ifdef FAST_API
#define SDF_makeLexSingleQuotedStrCharChars4(elem1, elem2, elem3,  elem4) ((SDF_LexSingleQuotedStrCharChars) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) (((ATerm) elem4))))
#else
SDF_LexSingleQuotedStrCharChars _SDF_makeLexSingleQuotedStrCharChars4(SDF_LexSingleQuotedStrChar elem1, SDF_LexSingleQuotedStrChar elem2, SDF_LexSingleQuotedStrChar elem3, SDF_LexSingleQuotedStrChar elem4);
#define SDF_makeLexSingleQuotedStrCharChars4(elem1, elem2, elem3,  elem4) (_SDF_makeLexSingleQuotedStrCharChars4(elem1, elem2, elem3,  elem4))
#endif
#ifdef FAST_API
#define SDF_makeLexSingleQuotedStrCharChars5(elem1, elem2, elem3, elem4,  elem5) ((SDF_LexSingleQuotedStrCharChars) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) (((ATerm) elem5))))
#else
SDF_LexSingleQuotedStrCharChars _SDF_makeLexSingleQuotedStrCharChars5(SDF_LexSingleQuotedStrChar elem1, SDF_LexSingleQuotedStrChar elem2, SDF_LexSingleQuotedStrChar elem3, SDF_LexSingleQuotedStrChar elem4, SDF_LexSingleQuotedStrChar elem5);
#define SDF_makeLexSingleQuotedStrCharChars5(elem1, elem2, elem3, elem4,  elem5) (_SDF_makeLexSingleQuotedStrCharChars5(elem1, elem2, elem3, elem4,  elem5))
#endif
#ifdef FAST_API
#define SDF_makeLexSingleQuotedStrCharChars6(elem1, elem2, elem3, elem4, elem5,  elem6) ((SDF_LexSingleQuotedStrCharChars) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) (((ATerm) elem6))))
#else
SDF_LexSingleQuotedStrCharChars _SDF_makeLexSingleQuotedStrCharChars6(SDF_LexSingleQuotedStrChar elem1, SDF_LexSingleQuotedStrChar elem2, SDF_LexSingleQuotedStrChar elem3, SDF_LexSingleQuotedStrChar elem4, SDF_LexSingleQuotedStrChar elem5, SDF_LexSingleQuotedStrChar elem6);
#define SDF_makeLexSingleQuotedStrCharChars6(elem1, elem2, elem3, elem4, elem5,  elem6) (_SDF_makeLexSingleQuotedStrCharChars6(elem1, elem2, elem3, elem4, elem5,  elem6))
#endif
#ifdef FAST_API
#define SDF_getSymbolArgumentsLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getSymbolArgumentsLength(SDF_SymbolArguments arg);
#define SDF_getSymbolArgumentsLength(arg) (_SDF_getSymbolArgumentsLength(arg))
#endif
SDF_SymbolArguments SDF_reverseSymbolArguments(SDF_SymbolArguments arg);
SDF_SymbolArguments SDF_appendSymbolArguments(SDF_SymbolArguments arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol arg1);
SDF_SymbolArguments SDF_concatSymbolArguments(SDF_SymbolArguments arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_SymbolArguments arg1);
#ifdef FAST_API
#define SDF_sliceSymbolArguments(arg, start, end) ((SDF_SymbolArguments) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_SymbolArguments _SDF_sliceSymbolArguments(SDF_SymbolArguments arg, int start, int end);
#define SDF_sliceSymbolArguments(arg, start, end) (_SDF_sliceSymbolArguments(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getSymbolArgumentsSymbolAt(arg, index) ((SDF_Symbol) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Symbol _SDF_getSymbolArgumentsSymbolAt(SDF_SymbolArguments arg, int index);
#define SDF_getSymbolArgumentsSymbolAt(arg, index) (_SDF_getSymbolArgumentsSymbolAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceSymbolArgumentsSymbolAt(arg, elem, index) ((SDF_SymbolArguments) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_SymbolArguments _SDF_replaceSymbolArgumentsSymbolAt(SDF_SymbolArguments arg, SDF_Symbol elem, int index);
#define SDF_replaceSymbolArgumentsSymbolAt(arg, elem, index) (_SDF_replaceSymbolArgumentsSymbolAt(arg, elem, index))
#endif
SDF_SymbolArguments SDF_makeSymbolArguments2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2);
SDF_SymbolArguments SDF_makeSymbolArguments3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3);
SDF_SymbolArguments SDF_makeSymbolArguments4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4);
SDF_SymbolArguments SDF_makeSymbolArguments5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5);
SDF_SymbolArguments SDF_makeSymbolArguments6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5, SDF_Symbol elem6);
#ifdef FAST_API
#define SDF_getModuleListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getModuleListLength(SDF_ModuleList arg);
#define SDF_getModuleListLength(arg) (_SDF_getModuleListLength(arg))
#endif
SDF_ModuleList SDF_reverseModuleList(SDF_ModuleList arg);
SDF_ModuleList SDF_appendModuleList(SDF_ModuleList arg0, SDF_OptLayout wsAfterHead, SDF_Module arg1);
SDF_ModuleList SDF_concatModuleList(SDF_ModuleList arg0, SDF_OptLayout wsAfterHead, SDF_ModuleList arg1);
#ifdef FAST_API
#define SDF_sliceModuleList(arg, start, end) ((SDF_ModuleList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_ModuleList _SDF_sliceModuleList(SDF_ModuleList arg, int start, int end);
#define SDF_sliceModuleList(arg, start, end) (_SDF_sliceModuleList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getModuleListModuleAt(arg, index) ((SDF_Module) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Module _SDF_getModuleListModuleAt(SDF_ModuleList arg, int index);
#define SDF_getModuleListModuleAt(arg, index) (_SDF_getModuleListModuleAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceModuleListModuleAt(arg, elem, index) ((SDF_ModuleList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_ModuleList _SDF_replaceModuleListModuleAt(SDF_ModuleList arg, SDF_Module elem, int index);
#define SDF_replaceModuleListModuleAt(arg, elem, index) (_SDF_replaceModuleListModuleAt(arg, elem, index))
#endif
SDF_ModuleList SDF_makeModuleList2(SDF_OptLayout wsAfterHead, SDF_Module elem1, SDF_Module elem2);
SDF_ModuleList SDF_makeModuleList3(SDF_OptLayout wsAfterHead, SDF_Module elem1, SDF_Module elem2, SDF_Module elem3);
SDF_ModuleList SDF_makeModuleList4(SDF_OptLayout wsAfterHead, SDF_Module elem1, SDF_Module elem2, SDF_Module elem3, SDF_Module elem4);
SDF_ModuleList SDF_makeModuleList5(SDF_OptLayout wsAfterHead, SDF_Module elem1, SDF_Module elem2, SDF_Module elem3, SDF_Module elem4, SDF_Module elem5);
SDF_ModuleList SDF_makeModuleList6(SDF_OptLayout wsAfterHead, SDF_Module elem1, SDF_Module elem2, SDF_Module elem3, SDF_Module elem4, SDF_Module elem5, SDF_Module elem6);
#ifdef FAST_API
#define SDF_getImpSectionListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getImpSectionListLength(SDF_ImpSectionList arg);
#define SDF_getImpSectionListLength(arg) (_SDF_getImpSectionListLength(arg))
#endif
SDF_ImpSectionList SDF_reverseImpSectionList(SDF_ImpSectionList arg);
SDF_ImpSectionList SDF_appendImpSectionList(SDF_ImpSectionList arg0, SDF_OptLayout wsAfterHead, SDF_ImpSection arg1);
SDF_ImpSectionList SDF_concatImpSectionList(SDF_ImpSectionList arg0, SDF_OptLayout wsAfterHead, SDF_ImpSectionList arg1);
#ifdef FAST_API
#define SDF_sliceImpSectionList(arg, start, end) ((SDF_ImpSectionList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_ImpSectionList _SDF_sliceImpSectionList(SDF_ImpSectionList arg, int start, int end);
#define SDF_sliceImpSectionList(arg, start, end) (_SDF_sliceImpSectionList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getImpSectionListImpSectionAt(arg, index) ((SDF_ImpSection) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_ImpSection _SDF_getImpSectionListImpSectionAt(SDF_ImpSectionList arg, int index);
#define SDF_getImpSectionListImpSectionAt(arg, index) (_SDF_getImpSectionListImpSectionAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceImpSectionListImpSectionAt(arg, elem, index) ((SDF_ImpSectionList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_ImpSectionList _SDF_replaceImpSectionListImpSectionAt(SDF_ImpSectionList arg, SDF_ImpSection elem, int index);
#define SDF_replaceImpSectionListImpSectionAt(arg, elem, index) (_SDF_replaceImpSectionListImpSectionAt(arg, elem, index))
#endif
SDF_ImpSectionList SDF_makeImpSectionList2(SDF_OptLayout wsAfterHead, SDF_ImpSection elem1, SDF_ImpSection elem2);
SDF_ImpSectionList SDF_makeImpSectionList3(SDF_OptLayout wsAfterHead, SDF_ImpSection elem1, SDF_ImpSection elem2, SDF_ImpSection elem3);
SDF_ImpSectionList SDF_makeImpSectionList4(SDF_OptLayout wsAfterHead, SDF_ImpSection elem1, SDF_ImpSection elem2, SDF_ImpSection elem3, SDF_ImpSection elem4);
SDF_ImpSectionList SDF_makeImpSectionList5(SDF_OptLayout wsAfterHead, SDF_ImpSection elem1, SDF_ImpSection elem2, SDF_ImpSection elem3, SDF_ImpSection elem4, SDF_ImpSection elem5);
SDF_ImpSectionList SDF_makeImpSectionList6(SDF_OptLayout wsAfterHead, SDF_ImpSection elem1, SDF_ImpSection elem2, SDF_ImpSection elem3, SDF_ImpSection elem4, SDF_ImpSection elem5, SDF_ImpSection elem6);
#ifdef FAST_API
#define SDF_getSectionListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getSectionListLength(SDF_SectionList arg);
#define SDF_getSectionListLength(arg) (_SDF_getSectionListLength(arg))
#endif
SDF_SectionList SDF_reverseSectionList(SDF_SectionList arg);
SDF_SectionList SDF_appendSectionList(SDF_SectionList arg0, SDF_OptLayout wsAfterHead, SDF_Section arg1);
SDF_SectionList SDF_concatSectionList(SDF_SectionList arg0, SDF_OptLayout wsAfterHead, SDF_SectionList arg1);
#ifdef FAST_API
#define SDF_sliceSectionList(arg, start, end) ((SDF_SectionList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_SectionList _SDF_sliceSectionList(SDF_SectionList arg, int start, int end);
#define SDF_sliceSectionList(arg, start, end) (_SDF_sliceSectionList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getSectionListSectionAt(arg, index) ((SDF_Section) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Section _SDF_getSectionListSectionAt(SDF_SectionList arg, int index);
#define SDF_getSectionListSectionAt(arg, index) (_SDF_getSectionListSectionAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceSectionListSectionAt(arg, elem, index) ((SDF_SectionList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_SectionList _SDF_replaceSectionListSectionAt(SDF_SectionList arg, SDF_Section elem, int index);
#define SDF_replaceSectionListSectionAt(arg, elem, index) (_SDF_replaceSectionListSectionAt(arg, elem, index))
#endif
SDF_SectionList SDF_makeSectionList2(SDF_OptLayout wsAfterHead, SDF_Section elem1, SDF_Section elem2);
SDF_SectionList SDF_makeSectionList3(SDF_OptLayout wsAfterHead, SDF_Section elem1, SDF_Section elem2, SDF_Section elem3);
SDF_SectionList SDF_makeSectionList4(SDF_OptLayout wsAfterHead, SDF_Section elem1, SDF_Section elem2, SDF_Section elem3, SDF_Section elem4);
SDF_SectionList SDF_makeSectionList5(SDF_OptLayout wsAfterHead, SDF_Section elem1, SDF_Section elem2, SDF_Section elem3, SDF_Section elem4, SDF_Section elem5);
SDF_SectionList SDF_makeSectionList6(SDF_OptLayout wsAfterHead, SDF_Section elem1, SDF_Section elem2, SDF_Section elem3, SDF_Section elem4, SDF_Section elem5, SDF_Section elem6);
#ifdef FAST_API
#define SDF_getImportListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getImportListLength(SDF_ImportList arg);
#define SDF_getImportListLength(arg) (_SDF_getImportListLength(arg))
#endif
SDF_ImportList SDF_reverseImportList(SDF_ImportList arg);
SDF_ImportList SDF_appendImportList(SDF_ImportList arg0, SDF_OptLayout wsAfterHead, SDF_Import arg1);
SDF_ImportList SDF_concatImportList(SDF_ImportList arg0, SDF_OptLayout wsAfterHead, SDF_ImportList arg1);
#ifdef FAST_API
#define SDF_sliceImportList(arg, start, end) ((SDF_ImportList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_ImportList _SDF_sliceImportList(SDF_ImportList arg, int start, int end);
#define SDF_sliceImportList(arg, start, end) (_SDF_sliceImportList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getImportListImportAt(arg, index) ((SDF_Import) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Import _SDF_getImportListImportAt(SDF_ImportList arg, int index);
#define SDF_getImportListImportAt(arg, index) (_SDF_getImportListImportAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceImportListImportAt(arg, elem, index) ((SDF_ImportList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_ImportList _SDF_replaceImportListImportAt(SDF_ImportList arg, SDF_Import elem, int index);
#define SDF_replaceImportListImportAt(arg, elem, index) (_SDF_replaceImportListImportAt(arg, elem, index))
#endif
SDF_ImportList SDF_makeImportList2(SDF_OptLayout wsAfterHead, SDF_Import elem1, SDF_Import elem2);
SDF_ImportList SDF_makeImportList3(SDF_OptLayout wsAfterHead, SDF_Import elem1, SDF_Import elem2, SDF_Import elem3);
SDF_ImportList SDF_makeImportList4(SDF_OptLayout wsAfterHead, SDF_Import elem1, SDF_Import elem2, SDF_Import elem3, SDF_Import elem4);
SDF_ImportList SDF_makeImportList5(SDF_OptLayout wsAfterHead, SDF_Import elem1, SDF_Import elem2, SDF_Import elem3, SDF_Import elem4, SDF_Import elem5);
SDF_ImportList SDF_makeImportList6(SDF_OptLayout wsAfterHead, SDF_Import elem1, SDF_Import elem2, SDF_Import elem3, SDF_Import elem4, SDF_Import elem5, SDF_Import elem6);
#ifdef FAST_API
#define SDF_getNatConArgumentsLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getNatConArgumentsLength(SDF_NatConArguments arg);
#define SDF_getNatConArgumentsLength(arg) (_SDF_getNatConArgumentsLength(arg))
#endif
SDF_NatConArguments SDF_reverseNatConArguments(SDF_NatConArguments arg);
SDF_NatConArguments SDF_appendNatConArguments(SDF_NatConArguments arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatCon arg1);
SDF_NatConArguments SDF_concatNatConArguments(SDF_NatConArguments arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatConArguments arg1);
#ifdef FAST_API
#define SDF_sliceNatConArguments(arg, start, end) ((SDF_NatConArguments) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_NatConArguments _SDF_sliceNatConArguments(SDF_NatConArguments arg, int start, int end);
#define SDF_sliceNatConArguments(arg, start, end) (_SDF_sliceNatConArguments(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getNatConArgumentsNatConAt(arg, index) ((SDF_NatCon) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_NatCon _SDF_getNatConArgumentsNatConAt(SDF_NatConArguments arg, int index);
#define SDF_getNatConArgumentsNatConAt(arg, index) (_SDF_getNatConArgumentsNatConAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceNatConArgumentsNatConAt(arg, elem, index) ((SDF_NatConArguments) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_NatConArguments _SDF_replaceNatConArgumentsNatConAt(SDF_NatConArguments arg, SDF_NatCon elem, int index);
#define SDF_replaceNatConArgumentsNatConAt(arg, elem, index) (_SDF_replaceNatConArgumentsNatConAt(arg, elem, index))
#endif
SDF_NatConArguments SDF_makeNatConArguments2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatCon elem1, SDF_NatCon elem2);
SDF_NatConArguments SDF_makeNatConArguments3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatCon elem1, SDF_NatCon elem2, SDF_NatCon elem3);
SDF_NatConArguments SDF_makeNatConArguments4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatCon elem1, SDF_NatCon elem2, SDF_NatCon elem3, SDF_NatCon elem4);
SDF_NatConArguments SDF_makeNatConArguments5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatCon elem1, SDF_NatCon elem2, SDF_NatCon elem3, SDF_NatCon elem4, SDF_NatCon elem5);
SDF_NatConArguments SDF_makeNatConArguments6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatCon elem1, SDF_NatCon elem2, SDF_NatCon elem3, SDF_NatCon elem4, SDF_NatCon elem5, SDF_NatCon elem6);
#ifdef FAST_API
#define SDF_getGroupListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getGroupListLength(SDF_GroupList arg);
#define SDF_getGroupListLength(arg) (_SDF_getGroupListLength(arg))
#endif
SDF_GroupList SDF_reverseGroupList(SDF_GroupList arg);
SDF_GroupList SDF_appendGroupList(SDF_GroupList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Group arg1);
SDF_GroupList SDF_concatGroupList(SDF_GroupList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_GroupList arg1);
#ifdef FAST_API
#define SDF_sliceGroupList(arg, start, end) ((SDF_GroupList) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_GroupList _SDF_sliceGroupList(SDF_GroupList arg, int start, int end);
#define SDF_sliceGroupList(arg, start, end) (_SDF_sliceGroupList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getGroupListGroupAt(arg, index) ((SDF_Group) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Group _SDF_getGroupListGroupAt(SDF_GroupList arg, int index);
#define SDF_getGroupListGroupAt(arg, index) (_SDF_getGroupListGroupAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceGroupListGroupAt(arg, elem, index) ((SDF_GroupList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_GroupList _SDF_replaceGroupListGroupAt(SDF_GroupList arg, SDF_Group elem, int index);
#define SDF_replaceGroupListGroupAt(arg, elem, index) (_SDF_replaceGroupListGroupAt(arg, elem, index))
#endif
SDF_GroupList SDF_makeGroupList2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Group elem1, SDF_Group elem2);
SDF_GroupList SDF_makeGroupList3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Group elem1, SDF_Group elem2, SDF_Group elem3);
SDF_GroupList SDF_makeGroupList4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Group elem1, SDF_Group elem2, SDF_Group elem3, SDF_Group elem4);
SDF_GroupList SDF_makeGroupList5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Group elem1, SDF_Group elem2, SDF_Group elem3, SDF_Group elem4, SDF_Group elem5);
SDF_GroupList SDF_makeGroupList6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Group elem1, SDF_Group elem2, SDF_Group elem3, SDF_Group elem4, SDF_Group elem5, SDF_Group elem6);
#ifdef FAST_API
#define SDF_getPriorityListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getPriorityListLength(SDF_PriorityList arg);
#define SDF_getPriorityListLength(arg) (_SDF_getPriorityListLength(arg))
#endif
SDF_PriorityList SDF_reversePriorityList(SDF_PriorityList arg);
SDF_PriorityList SDF_appendPriorityList(SDF_PriorityList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Priority arg1);
SDF_PriorityList SDF_concatPriorityList(SDF_PriorityList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_PriorityList arg1);
#ifdef FAST_API
#define SDF_slicePriorityList(arg, start, end) ((SDF_PriorityList) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_PriorityList _SDF_slicePriorityList(SDF_PriorityList arg, int start, int end);
#define SDF_slicePriorityList(arg, start, end) (_SDF_slicePriorityList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getPriorityListPriorityAt(arg, index) ((SDF_Priority) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Priority _SDF_getPriorityListPriorityAt(SDF_PriorityList arg, int index);
#define SDF_getPriorityListPriorityAt(arg, index) (_SDF_getPriorityListPriorityAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replacePriorityListPriorityAt(arg, elem, index) ((SDF_PriorityList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_PriorityList _SDF_replacePriorityListPriorityAt(SDF_PriorityList arg, SDF_Priority elem, int index);
#define SDF_replacePriorityListPriorityAt(arg, elem, index) (_SDF_replacePriorityListPriorityAt(arg, elem, index))
#endif
SDF_PriorityList SDF_makePriorityList2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Priority elem1, SDF_Priority elem2);
SDF_PriorityList SDF_makePriorityList3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Priority elem1, SDF_Priority elem2, SDF_Priority elem3);
SDF_PriorityList SDF_makePriorityList4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Priority elem1, SDF_Priority elem2, SDF_Priority elem3, SDF_Priority elem4);
SDF_PriorityList SDF_makePriorityList5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Priority elem1, SDF_Priority elem2, SDF_Priority elem3, SDF_Priority elem4, SDF_Priority elem5);
SDF_PriorityList SDF_makePriorityList6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Priority elem1, SDF_Priority elem2, SDF_Priority elem3, SDF_Priority elem4, SDF_Priority elem5, SDF_Priority elem6);
#ifdef FAST_API
#define SDF_getSymbolTailLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getSymbolTailLength(SDF_SymbolTail arg);
#define SDF_getSymbolTailLength(arg) (_SDF_getSymbolTailLength(arg))
#endif
SDF_SymbolTail SDF_reverseSymbolTail(SDF_SymbolTail arg);
SDF_SymbolTail SDF_appendSymbolTail(SDF_SymbolTail arg0, SDF_OptLayout wsAfterHead, SDF_Symbol arg1);
SDF_SymbolTail SDF_concatSymbolTail(SDF_SymbolTail arg0, SDF_OptLayout wsAfterHead, SDF_SymbolTail arg1);
#ifdef FAST_API
#define SDF_sliceSymbolTail(arg, start, end) ((SDF_SymbolTail) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_SymbolTail _SDF_sliceSymbolTail(SDF_SymbolTail arg, int start, int end);
#define SDF_sliceSymbolTail(arg, start, end) (_SDF_sliceSymbolTail(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getSymbolTailSymbolAt(arg, index) ((SDF_Symbol) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Symbol _SDF_getSymbolTailSymbolAt(SDF_SymbolTail arg, int index);
#define SDF_getSymbolTailSymbolAt(arg, index) (_SDF_getSymbolTailSymbolAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceSymbolTailSymbolAt(arg, elem, index) ((SDF_SymbolTail) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_SymbolTail _SDF_replaceSymbolTailSymbolAt(SDF_SymbolTail arg, SDF_Symbol elem, int index);
#define SDF_replaceSymbolTailSymbolAt(arg, elem, index) (_SDF_replaceSymbolTailSymbolAt(arg, elem, index))
#endif
SDF_SymbolTail SDF_makeSymbolTail2(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2);
SDF_SymbolTail SDF_makeSymbolTail3(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3);
SDF_SymbolTail SDF_makeSymbolTail4(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4);
SDF_SymbolTail SDF_makeSymbolTail5(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5);
SDF_SymbolTail SDF_makeSymbolTail6(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5, SDF_Symbol elem6);
#ifdef FAST_API
#define SDF_getSymbolRestLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getSymbolRestLength(SDF_SymbolRest arg);
#define SDF_getSymbolRestLength(arg) (_SDF_getSymbolRestLength(arg))
#endif
SDF_SymbolRest SDF_reverseSymbolRest(SDF_SymbolRest arg);
SDF_SymbolRest SDF_appendSymbolRest(SDF_SymbolRest arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol arg1);
SDF_SymbolRest SDF_concatSymbolRest(SDF_SymbolRest arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_SymbolRest arg1);
#ifdef FAST_API
#define SDF_sliceSymbolRest(arg, start, end) ((SDF_SymbolRest) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_SymbolRest _SDF_sliceSymbolRest(SDF_SymbolRest arg, int start, int end);
#define SDF_sliceSymbolRest(arg, start, end) (_SDF_sliceSymbolRest(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getSymbolRestSymbolAt(arg, index) ((SDF_Symbol) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Symbol _SDF_getSymbolRestSymbolAt(SDF_SymbolRest arg, int index);
#define SDF_getSymbolRestSymbolAt(arg, index) (_SDF_getSymbolRestSymbolAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceSymbolRestSymbolAt(arg, elem, index) ((SDF_SymbolRest) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_SymbolRest _SDF_replaceSymbolRestSymbolAt(SDF_SymbolRest arg, SDF_Symbol elem, int index);
#define SDF_replaceSymbolRestSymbolAt(arg, elem, index) (_SDF_replaceSymbolRestSymbolAt(arg, elem, index))
#endif
SDF_SymbolRest SDF_makeSymbolRest2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2);
SDF_SymbolRest SDF_makeSymbolRest3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3);
SDF_SymbolRest SDF_makeSymbolRest4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4);
SDF_SymbolRest SDF_makeSymbolRest5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5);
SDF_SymbolRest SDF_makeSymbolRest6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5, SDF_Symbol elem6);
#ifdef FAST_API
#define SDF_getRenamingListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getRenamingListLength(SDF_RenamingList arg);
#define SDF_getRenamingListLength(arg) (_SDF_getRenamingListLength(arg))
#endif
SDF_RenamingList SDF_reverseRenamingList(SDF_RenamingList arg);
SDF_RenamingList SDF_appendRenamingList(SDF_RenamingList arg0, SDF_OptLayout wsAfterHead, SDF_Renaming arg1);
SDF_RenamingList SDF_concatRenamingList(SDF_RenamingList arg0, SDF_OptLayout wsAfterHead, SDF_RenamingList arg1);
#ifdef FAST_API
#define SDF_sliceRenamingList(arg, start, end) ((SDF_RenamingList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_RenamingList _SDF_sliceRenamingList(SDF_RenamingList arg, int start, int end);
#define SDF_sliceRenamingList(arg, start, end) (_SDF_sliceRenamingList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getRenamingListRenamingAt(arg, index) ((SDF_Renaming) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Renaming _SDF_getRenamingListRenamingAt(SDF_RenamingList arg, int index);
#define SDF_getRenamingListRenamingAt(arg, index) (_SDF_getRenamingListRenamingAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceRenamingListRenamingAt(arg, elem, index) ((SDF_RenamingList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_RenamingList _SDF_replaceRenamingListRenamingAt(SDF_RenamingList arg, SDF_Renaming elem, int index);
#define SDF_replaceRenamingListRenamingAt(arg, elem, index) (_SDF_replaceRenamingListRenamingAt(arg, elem, index))
#endif
SDF_RenamingList SDF_makeRenamingList2(SDF_OptLayout wsAfterHead, SDF_Renaming elem1, SDF_Renaming elem2);
SDF_RenamingList SDF_makeRenamingList3(SDF_OptLayout wsAfterHead, SDF_Renaming elem1, SDF_Renaming elem2, SDF_Renaming elem3);
SDF_RenamingList SDF_makeRenamingList4(SDF_OptLayout wsAfterHead, SDF_Renaming elem1, SDF_Renaming elem2, SDF_Renaming elem3, SDF_Renaming elem4);
SDF_RenamingList SDF_makeRenamingList5(SDF_OptLayout wsAfterHead, SDF_Renaming elem1, SDF_Renaming elem2, SDF_Renaming elem3, SDF_Renaming elem4, SDF_Renaming elem5);
SDF_RenamingList SDF_makeRenamingList6(SDF_OptLayout wsAfterHead, SDF_Renaming elem1, SDF_Renaming elem2, SDF_Renaming elem3, SDF_Renaming elem4, SDF_Renaming elem5, SDF_Renaming elem6);
#ifdef FAST_API
#define SDF_getLookaheadListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getLookaheadListLength(SDF_LookaheadList arg);
#define SDF_getLookaheadListLength(arg) (_SDF_getLookaheadListLength(arg))
#endif
SDF_LookaheadList SDF_reverseLookaheadList(SDF_LookaheadList arg);
SDF_LookaheadList SDF_appendLookaheadList(SDF_LookaheadList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Lookahead arg1);
SDF_LookaheadList SDF_concatLookaheadList(SDF_LookaheadList arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_LookaheadList arg1);
#ifdef FAST_API
#define SDF_sliceLookaheadList(arg, start, end) ((SDF_LookaheadList) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_LookaheadList _SDF_sliceLookaheadList(SDF_LookaheadList arg, int start, int end);
#define SDF_sliceLookaheadList(arg, start, end) (_SDF_sliceLookaheadList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getLookaheadListLookaheadAt(arg, index) ((SDF_Lookahead) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Lookahead _SDF_getLookaheadListLookaheadAt(SDF_LookaheadList arg, int index);
#define SDF_getLookaheadListLookaheadAt(arg, index) (_SDF_getLookaheadListLookaheadAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceLookaheadListLookaheadAt(arg, elem, index) ((SDF_LookaheadList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_LookaheadList _SDF_replaceLookaheadListLookaheadAt(SDF_LookaheadList arg, SDF_Lookahead elem, int index);
#define SDF_replaceLookaheadListLookaheadAt(arg, elem, index) (_SDF_replaceLookaheadListLookaheadAt(arg, elem, index))
#endif
SDF_LookaheadList SDF_makeLookaheadList2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Lookahead elem1, SDF_Lookahead elem2);
SDF_LookaheadList SDF_makeLookaheadList3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Lookahead elem1, SDF_Lookahead elem2, SDF_Lookahead elem3);
SDF_LookaheadList SDF_makeLookaheadList4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Lookahead elem1, SDF_Lookahead elem2, SDF_Lookahead elem3, SDF_Lookahead elem4);
SDF_LookaheadList SDF_makeLookaheadList5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Lookahead elem1, SDF_Lookahead elem2, SDF_Lookahead elem3, SDF_Lookahead elem4, SDF_Lookahead elem5);
SDF_LookaheadList SDF_makeLookaheadList6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Lookahead elem1, SDF_Lookahead elem2, SDF_Lookahead elem3, SDF_Lookahead elem4, SDF_Lookahead elem5, SDF_Lookahead elem6);
#ifdef FAST_API
#define SDF_getRestrictionListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getRestrictionListLength(SDF_RestrictionList arg);
#define SDF_getRestrictionListLength(arg) (_SDF_getRestrictionListLength(arg))
#endif
SDF_RestrictionList SDF_reverseRestrictionList(SDF_RestrictionList arg);
SDF_RestrictionList SDF_appendRestrictionList(SDF_RestrictionList arg0, SDF_OptLayout wsAfterHead, SDF_Restriction arg1);
SDF_RestrictionList SDF_concatRestrictionList(SDF_RestrictionList arg0, SDF_OptLayout wsAfterHead, SDF_RestrictionList arg1);
#ifdef FAST_API
#define SDF_sliceRestrictionList(arg, start, end) ((SDF_RestrictionList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_RestrictionList _SDF_sliceRestrictionList(SDF_RestrictionList arg, int start, int end);
#define SDF_sliceRestrictionList(arg, start, end) (_SDF_sliceRestrictionList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getRestrictionListRestrictionAt(arg, index) ((SDF_Restriction) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Restriction _SDF_getRestrictionListRestrictionAt(SDF_RestrictionList arg, int index);
#define SDF_getRestrictionListRestrictionAt(arg, index) (_SDF_getRestrictionListRestrictionAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceRestrictionListRestrictionAt(arg, elem, index) ((SDF_RestrictionList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_RestrictionList _SDF_replaceRestrictionListRestrictionAt(SDF_RestrictionList arg, SDF_Restriction elem, int index);
#define SDF_replaceRestrictionListRestrictionAt(arg, elem, index) (_SDF_replaceRestrictionListRestrictionAt(arg, elem, index))
#endif
SDF_RestrictionList SDF_makeRestrictionList2(SDF_OptLayout wsAfterHead, SDF_Restriction elem1, SDF_Restriction elem2);
SDF_RestrictionList SDF_makeRestrictionList3(SDF_OptLayout wsAfterHead, SDF_Restriction elem1, SDF_Restriction elem2, SDF_Restriction elem3);
SDF_RestrictionList SDF_makeRestrictionList4(SDF_OptLayout wsAfterHead, SDF_Restriction elem1, SDF_Restriction elem2, SDF_Restriction elem3, SDF_Restriction elem4);
SDF_RestrictionList SDF_makeRestrictionList5(SDF_OptLayout wsAfterHead, SDF_Restriction elem1, SDF_Restriction elem2, SDF_Restriction elem3, SDF_Restriction elem4, SDF_Restriction elem5);
SDF_RestrictionList SDF_makeRestrictionList6(SDF_OptLayout wsAfterHead, SDF_Restriction elem1, SDF_Restriction elem2, SDF_Restriction elem3, SDF_Restriction elem4, SDF_Restriction elem5, SDF_Restriction elem6);
#ifdef FAST_API
#define SDF_getSymbolParametersLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 4) + 1))
#else
int _SDF_getSymbolParametersLength(SDF_SymbolParameters arg);
#define SDF_getSymbolParametersLength(arg) (_SDF_getSymbolParametersLength(arg))
#endif
SDF_SymbolParameters SDF_reverseSymbolParameters(SDF_SymbolParameters arg);
SDF_SymbolParameters SDF_appendSymbolParameters(SDF_SymbolParameters arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol arg1);
SDF_SymbolParameters SDF_concatSymbolParameters(SDF_SymbolParameters arg0, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_SymbolParameters arg1);
#ifdef FAST_API
#define SDF_sliceSymbolParameters(arg, start, end) ((SDF_SymbolParameters) ATgetSlice((ATermList) (arg), (start * 4), (end * 4)))
#else
SDF_SymbolParameters _SDF_sliceSymbolParameters(SDF_SymbolParameters arg, int start, int end);
#define SDF_sliceSymbolParameters(arg, start, end) (_SDF_sliceSymbolParameters(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getSymbolParametersSymbolAt(arg, index) ((SDF_Symbol) (ATelementAt((ATermList) arg,index * 4)))
#else
SDF_Symbol _SDF_getSymbolParametersSymbolAt(SDF_SymbolParameters arg, int index);
#define SDF_getSymbolParametersSymbolAt(arg, index) (_SDF_getSymbolParametersSymbolAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceSymbolParametersSymbolAt(arg, elem, index) ((SDF_SymbolParameters) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 4)))
#else
SDF_SymbolParameters _SDF_replaceSymbolParametersSymbolAt(SDF_SymbolParameters arg, SDF_Symbol elem, int index);
#define SDF_replaceSymbolParametersSymbolAt(arg, elem, index) (_SDF_replaceSymbolParametersSymbolAt(arg, elem, index))
#endif
SDF_SymbolParameters SDF_makeSymbolParameters2(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2);
SDF_SymbolParameters SDF_makeSymbolParameters3(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3);
SDF_SymbolParameters SDF_makeSymbolParameters4(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4);
SDF_SymbolParameters SDF_makeSymbolParameters5(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5);
SDF_SymbolParameters SDF_makeSymbolParameters6(SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5, SDF_Symbol elem6);
#ifdef FAST_API
#define SDF_getSymbolListLength(arg) ((ATisEmpty((ATermList) (arg)) ? 0 : (ATgetLength((ATermList) (arg)) / 2) + 1))
#else
int _SDF_getSymbolListLength(SDF_SymbolList arg);
#define SDF_getSymbolListLength(arg) (_SDF_getSymbolListLength(arg))
#endif
SDF_SymbolList SDF_reverseSymbolList(SDF_SymbolList arg);
SDF_SymbolList SDF_appendSymbolList(SDF_SymbolList arg0, SDF_OptLayout wsAfterHead, SDF_Symbol arg1);
SDF_SymbolList SDF_concatSymbolList(SDF_SymbolList arg0, SDF_OptLayout wsAfterHead, SDF_SymbolList arg1);
#ifdef FAST_API
#define SDF_sliceSymbolList(arg, start, end) ((SDF_SymbolList) ATgetSlice((ATermList) (arg), (start * 2), (end * 2)))
#else
SDF_SymbolList _SDF_sliceSymbolList(SDF_SymbolList arg, int start, int end);
#define SDF_sliceSymbolList(arg, start, end) (_SDF_sliceSymbolList(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getSymbolListSymbolAt(arg, index) ((SDF_Symbol) (ATelementAt((ATermList) arg,index * 2)))
#else
SDF_Symbol _SDF_getSymbolListSymbolAt(SDF_SymbolList arg, int index);
#define SDF_getSymbolListSymbolAt(arg, index) (_SDF_getSymbolListSymbolAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceSymbolListSymbolAt(arg, elem, index) ((SDF_SymbolList) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index * 2)))
#else
SDF_SymbolList _SDF_replaceSymbolListSymbolAt(SDF_SymbolList arg, SDF_Symbol elem, int index);
#define SDF_replaceSymbolListSymbolAt(arg, elem, index) (_SDF_replaceSymbolListSymbolAt(arg, elem, index))
#endif
SDF_SymbolList SDF_makeSymbolList2(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2);
SDF_SymbolList SDF_makeSymbolList3(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3);
SDF_SymbolList SDF_makeSymbolList4(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4);
SDF_SymbolList SDF_makeSymbolList5(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5);
SDF_SymbolList SDF_makeSymbolList6(SDF_OptLayout wsAfterHead, SDF_Symbol elem1, SDF_Symbol elem2, SDF_Symbol elem3, SDF_Symbol elem4, SDF_Symbol elem5, SDF_Symbol elem6);
#ifdef FAST_API
#define SDF_getLexStrCharCharsLength(arg) (ATgetLength((ATermList) (arg)))
#else
int _SDF_getLexStrCharCharsLength(SDF_LexStrCharChars arg);
#define SDF_getLexStrCharCharsLength(arg) (_SDF_getLexStrCharCharsLength(arg))
#endif
#ifdef FAST_API
#define SDF_reverseLexStrCharChars(arg) ((SDF_LexStrCharChars) ATreverse((ATermList) (arg)))
#else
SDF_LexStrCharChars _SDF_reverseLexStrCharChars(SDF_LexStrCharChars arg);
#define SDF_reverseLexStrCharChars(arg) (_SDF_reverseLexStrCharChars(arg))
#endif
#ifdef FAST_API
#define SDF_appendLexStrCharChars(arg, elem) ((SDF_LexStrCharChars) ATappend((ATermList) (arg), (ATerm) (((ATerm) elem))))
#else
SDF_LexStrCharChars _SDF_appendLexStrCharChars(SDF_LexStrCharChars arg, SDF_LexStrChar elem);
#define SDF_appendLexStrCharChars(arg, elem) (_SDF_appendLexStrCharChars(arg, elem))
#endif
#ifdef FAST_API
#define SDF_concatLexStrCharChars(arg0, arg1) ((SDF_LexStrCharChars) ATconcat((ATermList) (arg0), (ATermList) (arg1)))
#else
SDF_LexStrCharChars _SDF_concatLexStrCharChars(SDF_LexStrCharChars arg0, SDF_LexStrCharChars arg1);
#define SDF_concatLexStrCharChars(arg0, arg1) (_SDF_concatLexStrCharChars(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_sliceLexStrCharChars(arg, start, end) ((SDF_LexStrCharChars) ATgetSlice((ATermList) (arg), (start), (end)))
#else
SDF_LexStrCharChars _SDF_sliceLexStrCharChars(SDF_LexStrCharChars arg, int start, int end);
#define SDF_sliceLexStrCharChars(arg, start, end) (_SDF_sliceLexStrCharChars(arg, start, end))
#endif
#ifdef FAST_API
#define SDF_getLexStrCharCharsLexStrCharAt(arg, index) ((SDF_LexStrChar) (ATelementAt((ATermList) arg,index)))
#else
SDF_LexStrChar _SDF_getLexStrCharCharsLexStrCharAt(SDF_LexStrCharChars arg, int index);
#define SDF_getLexStrCharCharsLexStrCharAt(arg, index) (_SDF_getLexStrCharCharsLexStrCharAt(arg, index))
#endif
#ifdef FAST_API
#define SDF_replaceLexStrCharCharsLexStrCharAt(arg, elem, index) ((SDF_LexStrCharChars) ATreplace((ATermList) (arg), (ATerm) (((ATerm) elem)), (index)))
#else
SDF_LexStrCharChars _SDF_replaceLexStrCharCharsLexStrCharAt(SDF_LexStrCharChars arg, SDF_LexStrChar elem, int index);
#define SDF_replaceLexStrCharCharsLexStrCharAt(arg, elem, index) (_SDF_replaceLexStrCharCharsLexStrCharAt(arg, elem, index))
#endif
#ifdef FAST_API
#define SDF_makeLexStrCharChars2(elem1,  elem2) ((SDF_LexStrCharChars) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) (((ATerm) elem2))))
#else
SDF_LexStrCharChars _SDF_makeLexStrCharChars2(SDF_LexStrChar elem1, SDF_LexStrChar elem2);
#define SDF_makeLexStrCharChars2(elem1,  elem2) (_SDF_makeLexStrCharChars2(elem1,  elem2))
#endif
#ifdef FAST_API
#define SDF_makeLexStrCharChars3(elem1, elem2,  elem3) ((SDF_LexStrCharChars) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) (((ATerm) elem3))))
#else
SDF_LexStrCharChars _SDF_makeLexStrCharChars3(SDF_LexStrChar elem1, SDF_LexStrChar elem2, SDF_LexStrChar elem3);
#define SDF_makeLexStrCharChars3(elem1, elem2,  elem3) (_SDF_makeLexStrCharChars3(elem1, elem2,  elem3))
#endif
#ifdef FAST_API
#define SDF_makeLexStrCharChars4(elem1, elem2, elem3,  elem4) ((SDF_LexStrCharChars) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) (((ATerm) elem4))))
#else
SDF_LexStrCharChars _SDF_makeLexStrCharChars4(SDF_LexStrChar elem1, SDF_LexStrChar elem2, SDF_LexStrChar elem3, SDF_LexStrChar elem4);
#define SDF_makeLexStrCharChars4(elem1, elem2, elem3,  elem4) (_SDF_makeLexStrCharChars4(elem1, elem2, elem3,  elem4))
#endif
#ifdef FAST_API
#define SDF_makeLexStrCharChars5(elem1, elem2, elem3, elem4,  elem5) ((SDF_LexStrCharChars) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) (((ATerm) elem5))))
#else
SDF_LexStrCharChars _SDF_makeLexStrCharChars5(SDF_LexStrChar elem1, SDF_LexStrChar elem2, SDF_LexStrChar elem3, SDF_LexStrChar elem4, SDF_LexStrChar elem5);
#define SDF_makeLexStrCharChars5(elem1, elem2, elem3, elem4,  elem5) (_SDF_makeLexStrCharChars5(elem1, elem2, elem3, elem4,  elem5))
#endif
#ifdef FAST_API
#define SDF_makeLexStrCharChars6(elem1, elem2, elem3, elem4, elem5,  elem6) ((SDF_LexStrCharChars) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) (((ATerm) elem6))))
#else
SDF_LexStrCharChars _SDF_makeLexStrCharChars6(SDF_LexStrChar elem1, SDF_LexStrChar elem2, SDF_LexStrChar elem3, SDF_LexStrChar elem4, SDF_LexStrChar elem5, SDF_LexStrChar elem6);
#define SDF_makeLexStrCharChars6(elem1, elem2, elem3, elem4, elem5,  elem6) (_SDF_makeLexStrCharChars6(elem1, elem2, elem3, elem4, elem5,  elem6))
#endif
SDF_OptLayout SDF_makeOptLayoutAbsent(void);
SDF_OptLayout SDF_makeOptLayoutPresent(SDF_Layout layout);
SDF_Layout SDF_makeLayoutLexToCf(SDF_LexLayoutList list);
SDF_LexLayoutList SDF_makeLexLayoutListEmpty(void);
SDF_LexLayoutList SDF_makeLexLayoutListSingle(SDF_LexLayout head);
SDF_LexLayoutList SDF_makeLexLayoutListMany(SDF_LexLayout head, SDF_LexLayoutList tail);
SDF_AFun SDF_makeAFunQuoted(SDF_StrCon StrCon);
SDF_AFun SDF_makeAFunUnquoted(SDF_IdCon IdCon);
SDF_ATerm SDF_makeATermInt(SDF_IntCon IntCon);
SDF_ATerm SDF_makeATermReal(SDF_RealCon RealCon);
SDF_ATerm SDF_makeATermFun(SDF_AFun fun);
SDF_ATerm SDF_makeATermAppl(SDF_AFun fun, SDF_OptLayout wsAfterFun, SDF_OptLayout wsAfterParenOpen, SDF_ATermArgs args, SDF_OptLayout wsAfterArgs);
SDF_ATerm SDF_makeATermPlaceholder(SDF_OptLayout wsAfterLessThan, SDF_ATerm type, SDF_OptLayout wsAfterType);
SDF_ATerm SDF_makeATermList(SDF_OptLayout wsAfterBracketOpen, SDF_ATermElems elems, SDF_OptLayout wsAfterElems);
SDF_ATerm SDF_makeATermAnnotated(SDF_ATerm trm, SDF_OptLayout wsAfterTrm, SDF_Annotation Annotation);
SDF_Annotation SDF_makeAnnotationDefault(SDF_OptLayout wsAfterBraceOpen, SDF_ATermAnnos annos, SDF_OptLayout wsAfterAnnos);
SDF_Start SDF_makeStartATerm(SDF_OptLayout wsBefore, SDF_ATerm topATerm, SDF_OptLayout wsAfter, int ambCnt);
SDF_Start SDF_makeStartIntCon(SDF_OptLayout wsBefore, SDF_IntCon topIntCon, SDF_OptLayout wsAfter, int ambCnt);
SDF_Start SDF_makeStartRealCon(SDF_OptLayout wsBefore, SDF_RealCon topRealCon, SDF_OptLayout wsAfter, int ambCnt);
SDF_Start SDF_makeStartModule(SDF_OptLayout wsBefore, SDF_Module topModule, SDF_OptLayout wsAfter, int ambCnt);
SDF_Start SDF_makeStartSDF(SDF_OptLayout wsBefore, SDF_SDF topSDF, SDF_OptLayout wsAfter, int ambCnt);
SDF_ATermArgs SDF_makeATermArgsEmpty(void);
SDF_ATermArgs SDF_makeATermArgsSingle(SDF_ATerm head);
SDF_ATermArgs SDF_makeATermArgsMany(SDF_ATerm head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATermArgs tail);
SDF_ATermElems SDF_makeATermElemsEmpty(void);
SDF_ATermElems SDF_makeATermElemsSingle(SDF_ATerm head);
SDF_ATermElems SDF_makeATermElemsMany(SDF_ATerm head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATermElems tail);
SDF_ATermAnnos SDF_makeATermAnnosEmpty(void);
SDF_ATermAnnos SDF_makeATermAnnosSingle(SDF_ATerm head);
SDF_ATermAnnos SDF_makeATermAnnosMany(SDF_ATerm head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_ATermAnnos tail);
SDF_IntCon SDF_makeIntConNatural(SDF_NatCon NatCon);
SDF_IntCon SDF_makeIntConPositive(SDF_OptLayout wsAfterPos, SDF_NatCon NatCon);
SDF_IntCon SDF_makeIntConNegative(SDF_OptLayout wsAfterNeg, SDF_NatCon NatCon);
SDF_OptExp SDF_makeOptExpPresent(SDF_OptLayout wsAfterE, SDF_IntCon IntCon);
SDF_OptExp SDF_makeOptExpAbsent(void);
SDF_RealCon SDF_makeRealConRealCon(SDF_IntCon base, SDF_OptLayout wsAfterBase, SDF_OptLayout wsAfterPeriod, SDF_NatCon decimal, SDF_OptLayout wsAfterDecimal, SDF_OptExp exp);
SDF_Grammar SDF_makeGrammarAliases(SDF_OptLayout wsAfterAliases, SDF_Aliases Aliases);
SDF_Grammar SDF_makeGrammarLexicalSyntax(SDF_OptLayout wsAfterLexical, SDF_OptLayout wsAfterSyntax, SDF_Productions Productions);
SDF_Grammar SDF_makeGrammarContextFreeSyntax(SDF_OptLayout wsAfterContextFree, SDF_OptLayout wsAfterSyntax, SDF_Productions Productions);
SDF_Grammar SDF_makeGrammarVariables(SDF_OptLayout wsAfterVariables, SDF_Productions Productions);
SDF_Grammar SDF_makeGrammarLexicalVariables(SDF_OptLayout wsAfterLexical, SDF_OptLayout wsAfterVariables, SDF_Productions Productions);
SDF_Grammar SDF_makeGrammarEmptyGrammar(void);
SDF_Grammar SDF_makeGrammarConcGrammars(SDF_Grammar left, SDF_OptLayout wsAfterLeft, SDF_Grammar right);
SDF_Grammar SDF_makeGrammarBracket(SDF_OptLayout wsAfterParenOpen, SDF_Grammar Grammar, SDF_OptLayout wsAfterGrammar);
SDF_Grammar SDF_makeGrammarSyntax(SDF_OptLayout wsAfterSyntax, SDF_Productions Productions);
SDF_Grammar SDF_makeGrammarImpSection(SDF_ImpSection ImpSection);
SDF_Grammar SDF_makeGrammarPriorities(SDF_OptLayout wsAfterPriorities, SDF_Priorities Priorities);
SDF_Grammar SDF_makeGrammarRestrictions(SDF_OptLayout wsAfterRestrictions, SDF_Restrictions Restrictions);
SDF_Grammar SDF_makeGrammarLexicalPriorities(SDF_OptLayout wsAfterLexical, SDF_OptLayout wsAfterPriorities, SDF_Priorities Priorities);
SDF_Grammar SDF_makeGrammarContextFreePriorities(SDF_OptLayout wsAfterContextFree, SDF_OptLayout wsAfterPriorities, SDF_Priorities Priorities);
SDF_Grammar SDF_makeGrammarLexicalRestrictions(SDF_OptLayout wsAfterLexical, SDF_OptLayout wsAfterRestrictions, SDF_Restrictions Restrictions);
SDF_Grammar SDF_makeGrammarContextFreeRestrictions(SDF_OptLayout wsAfterContextFree, SDF_OptLayout wsAfterRestrictions, SDF_Restrictions Restrictions);
SDF_Grammar SDF_makeGrammarSorts(SDF_OptLayout wsAfterSorts, SDF_Symbols Symbols);
SDF_Grammar SDF_makeGrammarKernelStartSymbols(SDF_OptLayout wsAfterStartSymbols, SDF_Symbols Symbols);
SDF_Grammar SDF_makeGrammarLexicalStartSymbols(SDF_OptLayout wsAfterLexical, SDF_OptLayout wsAfterStartSymbols, SDF_Symbols Symbols);
SDF_Grammar SDF_makeGrammarContextFreeStartSymbols(SDF_OptLayout wsAfterContextFree, SDF_OptLayout wsAfterStartSymbols, SDF_Symbols Symbols);
SDF_Alias SDF_makeAliasAlias(SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol, SDF_OptLayout wsAfterArrow, SDF_Symbol alias);
SDF_Aliases SDF_makeAliasesDefault(SDF_AliasList list);
SDF_AliasList SDF_makeAliasListEmpty(void);
SDF_AliasList SDF_makeAliasListSingle(SDF_Alias head);
SDF_AliasList SDF_makeAliasListMany(SDF_Alias head, SDF_OptLayout wsAfterHead, SDF_AliasList tail);
SDF_Symbol SDF_makeSymbolCf(SDF_OptLayout wsAfterLessThan, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol, SDF_OptLayout wsAfterCF);
SDF_Symbol SDF_makeSymbolLex(SDF_OptLayout wsAfterLessThan, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol, SDF_OptLayout wsAfterLEX);
SDF_Symbol SDF_makeSymbolVarsym(SDF_OptLayout wsAfterLessThan, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol, SDF_OptLayout wsAfterVAR);
SDF_Symbol SDF_makeSymbolLayout(void);
SDF_Symbol SDF_makeSymbolCharClass(SDF_CharClass CharClass);
SDF_Symbol SDF_makeSymbolLabel(SDF_Label Label, SDF_OptLayout wsAfterLabel, SDF_OptLayout wsAfterColon, SDF_Symbol Symbol);
SDF_Symbol SDF_makeSymbolLifting(SDF_OptLayout wsAfterLeftQuote, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol);
SDF_Symbol SDF_makeSymbolLit(SDF_StrCon string);
SDF_Symbol SDF_makeSymbolCiLit(SDF_SingleQuotedStrCon ciString);
SDF_Symbol SDF_makeSymbolEmpty(SDF_OptLayout wsAfterParenOpen);
SDF_Symbol SDF_makeSymbolSeq(SDF_OptLayout wsAfterParenOpen, SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_SymbolTail tail, SDF_OptLayout wsAfterTail);
SDF_Symbol SDF_makeSymbolOpt(SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol);
SDF_Symbol SDF_makeSymbolIter(SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol);
SDF_Symbol SDF_makeSymbolIterStar(SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol);
SDF_Symbol SDF_makeSymbolIterSep(SDF_OptLayout wsAfterBraceOpen, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol, SDF_Symbol sep, SDF_OptLayout wsAfterSep, SDF_OptLayout wsAfterBraceClose);
SDF_Symbol SDF_makeSymbolIterStarSep(SDF_OptLayout wsAfterBraceOpen, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol, SDF_Symbol sep, SDF_OptLayout wsAfterSep, SDF_OptLayout wsAfterBraceClose);
SDF_Symbol SDF_makeSymbolTuple(SDF_OptLayout wsAfterLessThan, SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterComma, SDF_SymbolRest rest, SDF_OptLayout wsAfterRest);
SDF_Symbol SDF_makeSymbolFunc(SDF_OptLayout wsAfterParenOpen, SDF_Symbols arguments, SDF_OptLayout wsAfterArguments, SDF_OptLayout wsAfterEqualityGreaterThan, SDF_Symbol results, SDF_OptLayout wsAfterResults);
SDF_Symbol SDF_makeSymbolAlt(SDF_Symbol left, SDF_OptLayout wsAfterLeft, SDF_OptLayout wsAfterBar, SDF_Symbol right);
SDF_Symbol SDF_makeSymbolStrategy(SDF_OptLayout wsAfterParenOpen, SDF_Symbol left, SDF_OptLayout wsAfterLeft, SDF_OptLayout wsAfterGreaterThan, SDF_Symbol right, SDF_OptLayout wsAfterRight);
SDF_Symbol SDF_makeSymbolStart(void);
SDF_Symbol SDF_makeSymbolFileStart(void);
SDF_Symbol SDF_makeSymbolSort(SDF_Sort Sort);
SDF_Symbol SDF_makeSymbolParameterizedSort(SDF_Sort Sort, SDF_OptLayout wsAfterSort, SDF_OptLayout wsAfterBracketOpenBracketOpen, SDF_SymbolParameters parameters, SDF_OptLayout wsAfterParameters);
SDF_Symbol SDF_makeSymbolBracket(SDF_OptLayout wsAfterParenOpen, SDF_Symbol Symbol, SDF_OptLayout wsAfterSymbol);
SDF_CharRange SDF_makeCharRangeDefault(SDF_Character Character);
SDF_CharRange SDF_makeCharRangeRange(SDF_Character start, SDF_OptLayout wsAfterStart, SDF_OptLayout wsAfter, SDF_Character end);
SDF_CharRanges SDF_makeCharRangesDefault(SDF_CharRange CharRange);
SDF_CharRanges SDF_makeCharRangesConc(SDF_CharRanges left, SDF_OptLayout wsAfterLeft, SDF_CharRanges right);
SDF_CharRanges SDF_makeCharRangesBracket(SDF_OptLayout wsAfterParenOpen, SDF_CharRanges CharRanges, SDF_OptLayout wsAfterCharRanges);
SDF_OptCharRanges SDF_makeOptCharRangesAbsent(void);
SDF_OptCharRanges SDF_makeOptCharRangesPresent(SDF_CharRanges CharRanges);
SDF_CharClass SDF_makeCharClassSimpleCharclass(SDF_OptLayout wsAfterBracketOpen, SDF_OptCharRanges OptCharRanges, SDF_OptLayout wsAfterOptCharRanges);
SDF_CharClass SDF_makeCharClassComp(SDF_OptLayout wsAfterTilde, SDF_CharClass CharClass);
SDF_CharClass SDF_makeCharClassDiff(SDF_CharClass left, SDF_OptLayout wsAfterLeft, SDF_OptLayout wsAfterSlash, SDF_CharClass right);
SDF_CharClass SDF_makeCharClassIsect(SDF_CharClass left, SDF_OptLayout wsAfterLeft, SDF_OptLayout wsAfterSlashBackslash, SDF_CharClass right);
SDF_CharClass SDF_makeCharClassUnion(SDF_CharClass left, SDF_OptLayout wsAfterLeft, SDF_OptLayout wsAfterBackslashSlash, SDF_CharClass right);
SDF_CharClass SDF_makeCharClassBracket(SDF_OptLayout wsAfterParenOpen, SDF_CharClass CharClass, SDF_OptLayout wsAfterCharClass);
SDF_LexNumChar SDF_makeLexNumCharDigits(const char* number);
SDF_NumChar SDF_makeNumCharLexToCf(SDF_LexNumChar NumChar);
SDF_LexShortChar SDF_makeLexShortCharRegular(char character);
SDF_LexShortChar SDF_makeLexShortCharEscaped(char escape);
SDF_ShortChar SDF_makeShortCharLexToCf(SDF_LexShortChar ShortChar);
SDF_Character SDF_makeCharacterNumeric(SDF_NumChar NumChar);
SDF_Character SDF_makeCharacterShort(SDF_ShortChar ShortChar);
SDF_Character SDF_makeCharacterTop(void);
SDF_Character SDF_makeCharacterEof(void);
SDF_Character SDF_makeCharacterBot(void);
SDF_Character SDF_makeCharacterLabelUnderscoreStart(void);
SDF_ATermAttribute SDF_makeATermAttributeDefault(SDF_ATerm aterm);
SDF_Attribute SDF_makeAttributeTerm(SDF_ATermAttribute ATermAttribute);
SDF_Attribute SDF_makeAttributeId(SDF_OptLayout wsAfterId, SDF_OptLayout wsAfterParenOpen, SDF_ModuleName ModuleName, SDF_OptLayout wsAfterModuleName);
SDF_Attribute SDF_makeAttributeBracket(void);
SDF_Attribute SDF_makeAttributeAssoc(SDF_Associativity Associativity);
SDF_Attribute SDF_makeAttributeReject(void);
SDF_Attribute SDF_makeAttributePrefer(void);
SDF_Attribute SDF_makeAttributeAvoid(void);
SDF_Attributes SDF_makeAttributesAttrs(SDF_OptLayout wsAfterBraceOpen, SDF_AttributeList list, SDF_OptLayout wsAfterList);
SDF_Attributes SDF_makeAttributesNoAttrs(void);
SDF_Production SDF_makeProductionProd(SDF_Symbols Symbols, SDF_OptLayout wsAfterSymbols, SDF_OptLayout wsAfterGreaterThan, SDF_Symbol result, SDF_OptLayout wsAfterResult, SDF_Attributes Attributes);
SDF_Production SDF_makeProductionPrefixFun(SDF_FunctionName fun, SDF_OptLayout wsAfterFun, SDF_OptLayout wsAfterParenOpen, SDF_SymbolArguments arguments, SDF_OptLayout wsAfterArguments, SDF_OptLayout wsAfterParenClose, SDF_OptLayout wsAfterGreaterThan, SDF_Symbol result, SDF_OptLayout wsAfterResult, SDF_Attributes Attributes);
SDF_Productions SDF_makeProductionsDefault(SDF_ProductionList list);
SDF_AttributeList SDF_makeAttributeListEmpty(void);
SDF_AttributeList SDF_makeAttributeListSingle(SDF_Attribute head);
SDF_AttributeList SDF_makeAttributeListMany(SDF_Attribute head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_AttributeList tail);
SDF_ProductionList SDF_makeProductionListEmpty(void);
SDF_ProductionList SDF_makeProductionListSingle(SDF_Production head);
SDF_ProductionList SDF_makeProductionListMany(SDF_Production head, SDF_OptLayout wsAfterHead, SDF_ProductionList tail);
SDF_Label SDF_makeLabelQuoted(SDF_StrCon StrCon);
SDF_Label SDF_makeLabelUnquoted(SDF_IdCon IdCon);
SDF_LexSingleQuotedStrChar SDF_makeLexSingleQuotedStrCharNewline(void);
SDF_LexSingleQuotedStrChar SDF_makeLexSingleQuotedStrCharTab(void);
SDF_LexSingleQuotedStrChar SDF_makeLexSingleQuotedStrCharQuote(void);
SDF_LexSingleQuotedStrChar SDF_makeLexSingleQuotedStrCharBackslash(void);
SDF_LexSingleQuotedStrChar SDF_makeLexSingleQuotedStrCharDecimal(char a, char b, char c);
SDF_LexSingleQuotedStrChar SDF_makeLexSingleQuotedStrCharNormal(char ch);
SDF_SingleQuotedStrChar SDF_makeSingleQuotedStrCharLexToCf(SDF_LexSingleQuotedStrChar SingleQuotedStrChar);
SDF_LexSingleQuotedStrCon SDF_makeLexSingleQuotedStrConDefault(SDF_LexSingleQuotedStrCharChars chars);
SDF_SingleQuotedStrCon SDF_makeSingleQuotedStrConLexToCf(SDF_LexSingleQuotedStrCon SingleQuotedStrCon);
SDF_FunctionName SDF_makeFunctionNameUnquotedFun(SDF_IdCon IdCon);
SDF_FunctionName SDF_makeFunctionNameQuotedFun(SDF_StrCon StrCon);
SDF_LexSingleQuotedStrCharChars SDF_makeLexSingleQuotedStrCharCharsEmpty(void);
SDF_LexSingleQuotedStrCharChars SDF_makeLexSingleQuotedStrCharCharsSingle(SDF_LexSingleQuotedStrChar head);
SDF_LexSingleQuotedStrCharChars SDF_makeLexSingleQuotedStrCharCharsMany(SDF_LexSingleQuotedStrChar head, SDF_LexSingleQuotedStrCharChars tail);
SDF_SymbolArguments SDF_makeSymbolArgumentsEmpty(void);
SDF_SymbolArguments SDF_makeSymbolArgumentsSingle(SDF_Symbol head);
SDF_SymbolArguments SDF_makeSymbolArgumentsMany(SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_SymbolArguments tail);
SDF_LexModuleWord SDF_makeLexModuleWordWord(const char* letters);
SDF_ModuleWord SDF_makeModuleWordLexToCf(SDF_LexModuleWord ModuleWord);
SDF_LexModuleId SDF_makeLexModuleIdLeaf(SDF_LexModuleWord ModuleWord);
SDF_LexModuleId SDF_makeLexModuleIdRoot(SDF_LexModuleId basename);
SDF_LexModuleId SDF_makeLexModuleIdPath(SDF_LexModuleWord dirname, SDF_LexModuleId basename);
SDF_ModuleId SDF_makeModuleIdLexToCf(SDF_LexModuleId ModuleId);
SDF_Definition SDF_makeDefinitionDefault(SDF_ModuleList list);
SDF_Module SDF_makeModuleModule(SDF_OptLayout wsAfterModule, SDF_ModuleName ModuleName, SDF_OptLayout wsAfterModuleName, SDF_ImpSectionList list, SDF_OptLayout wsAfterList, SDF_Sections Sections);
SDF_Section SDF_makeSectionExports(SDF_OptLayout wsAfterExports, SDF_Grammar Grammar);
SDF_Section SDF_makeSectionHiddens(SDF_OptLayout wsAfterHiddens, SDF_Grammar Grammar);
SDF_Sections SDF_makeSectionsDefault(SDF_SectionList list);
SDF_ModuleName SDF_makeModuleNameUnparameterized(SDF_ModuleId ModuleId);
SDF_ModuleName SDF_makeModuleNameParameterized(SDF_ModuleId ModuleId, SDF_OptLayout wsAfterModuleId, SDF_OptLayout wsAfterBracketOpen, SDF_Symbols params, SDF_OptLayout wsAfterParams);
SDF_ImpSection SDF_makeImpSectionImports(SDF_OptLayout wsAfterImports, SDF_Imports list);
SDF_Imports SDF_makeImportsDefault(SDF_ImportList list);
SDF_Import SDF_makeImportModule(SDF_ModuleName ModuleName);
SDF_Import SDF_makeImportRenamedModule(SDF_ModuleName ModuleName, SDF_OptLayout wsAfterModuleName, SDF_Renamings Renamings);
SDF_Import SDF_makeImportBracket(SDF_OptLayout wsAfterParenOpen, SDF_Import Import, SDF_OptLayout wsAfterImport);
SDF_ModuleList SDF_makeModuleListEmpty(void);
SDF_ModuleList SDF_makeModuleListSingle(SDF_Module head);
SDF_ModuleList SDF_makeModuleListMany(SDF_Module head, SDF_OptLayout wsAfterHead, SDF_ModuleList tail);
SDF_ImpSectionList SDF_makeImpSectionListEmpty(void);
SDF_ImpSectionList SDF_makeImpSectionListSingle(SDF_ImpSection head);
SDF_ImpSectionList SDF_makeImpSectionListMany(SDF_ImpSection head, SDF_OptLayout wsAfterHead, SDF_ImpSectionList tail);
SDF_SectionList SDF_makeSectionListEmpty(void);
SDF_SectionList SDF_makeSectionListSingle(SDF_Section head);
SDF_SectionList SDF_makeSectionListMany(SDF_Section head, SDF_OptLayout wsAfterHead, SDF_SectionList tail);
SDF_ImportList SDF_makeImportListEmpty(void);
SDF_ImportList SDF_makeImportListSingle(SDF_Import head);
SDF_ImportList SDF_makeImportListMany(SDF_Import head, SDF_OptLayout wsAfterHead, SDF_ImportList tail);
SDF_Associativity SDF_makeAssociativityLeft(void);
SDF_Associativity SDF_makeAssociativityRight(void);
SDF_Associativity SDF_makeAssociativityNonAssoc(void);
SDF_Associativity SDF_makeAssociativityAssoc(void);
SDF_ArgumentIndicator SDF_makeArgumentIndicatorDefault(SDF_OptLayout wsAfterLessThan, SDF_NatConArguments arguments, SDF_OptLayout wsAfterArguments);
SDF_Group SDF_makeGroupWithArguments(SDF_Group Group, SDF_OptLayout wsAfterGroup, SDF_ArgumentIndicator ArgumentIndicator);
SDF_Group SDF_makeGroupNonTransitive(SDF_Group Group, SDF_OptLayout wsAfterGroup);
SDF_Group SDF_makeGroupSimpleGroup(SDF_Production Production);
SDF_Group SDF_makeGroupProdsGroup(SDF_OptLayout wsAfterBraceOpen, SDF_Productions Productions, SDF_OptLayout wsAfterProductions);
SDF_Group SDF_makeGroupAssocGroup(SDF_OptLayout wsAfterBraceOpen, SDF_Associativity Associativity, SDF_OptLayout wsAfterAssociativity, SDF_OptLayout wsAfterColon, SDF_Productions Productions, SDF_OptLayout wsAfterProductions);
SDF_Priority SDF_makePriorityChain(SDF_GroupList list);
SDF_Priority SDF_makePriorityAssoc(SDF_Group left, SDF_OptLayout wsAfterLeft, SDF_Associativity Associativity, SDF_OptLayout wsAfterAssociativity, SDF_Group right);
SDF_Priorities SDF_makePrioritiesDefault(SDF_PriorityList list);
SDF_NatConArguments SDF_makeNatConArgumentsEmpty(void);
SDF_NatConArguments SDF_makeNatConArgumentsSingle(SDF_NatCon head);
SDF_NatConArguments SDF_makeNatConArgumentsMany(SDF_NatCon head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_NatConArguments tail);
SDF_GroupList SDF_makeGroupListEmpty(void);
SDF_GroupList SDF_makeGroupListSingle(SDF_Group head);
SDF_GroupList SDF_makeGroupListMany(SDF_Group head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_GroupList tail);
SDF_PriorityList SDF_makePriorityListEmpty(void);
SDF_PriorityList SDF_makePriorityListSingle(SDF_Priority head);
SDF_PriorityList SDF_makePriorityListMany(SDF_Priority head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_PriorityList tail);
SDF_SymbolTail SDF_makeSymbolTailEmpty(void);
SDF_SymbolTail SDF_makeSymbolTailSingle(SDF_Symbol head);
SDF_SymbolTail SDF_makeSymbolTailMany(SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_SymbolTail tail);
SDF_SymbolRest SDF_makeSymbolRestEmpty(void);
SDF_SymbolRest SDF_makeSymbolRestSingle(SDF_Symbol head);
SDF_SymbolRest SDF_makeSymbolRestMany(SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_SymbolRest tail);
SDF_Renamings SDF_makeRenamingsRenamings(SDF_OptLayout wsAfterBracketOpen, SDF_RenamingList list, SDF_OptLayout wsAfterList);
SDF_Renaming SDF_makeRenamingSymbol(SDF_Symbol from, SDF_OptLayout wsAfterFrom, SDF_OptLayout wsAfterEqualityGreaterThan, SDF_Symbol to);
SDF_Renaming SDF_makeRenamingProduction(SDF_Production fromProd, SDF_OptLayout wsAfterFromProd, SDF_OptLayout wsAfterEqualityGreaterThan, SDF_Production toProd);
SDF_RenamingList SDF_makeRenamingListEmpty(void);
SDF_RenamingList SDF_makeRenamingListSingle(SDF_Renaming head);
SDF_RenamingList SDF_makeRenamingListMany(SDF_Renaming head, SDF_OptLayout wsAfterHead, SDF_RenamingList tail);
SDF_Lookahead SDF_makeLookaheadCharClass(SDF_CharClass CharClass);
SDF_Lookahead SDF_makeLookaheadSeq(SDF_CharClass head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterPeriod, SDF_Lookaheads tail);
SDF_Lookaheads SDF_makeLookaheadsSingle(SDF_Lookahead Lookahead);
SDF_Lookaheads SDF_makeLookaheadsAlt(SDF_Lookaheads left, SDF_OptLayout wsAfterLeft, SDF_OptLayout wsAfterBar, SDF_Lookaheads right);
SDF_Lookaheads SDF_makeLookaheadsBracket(SDF_OptLayout wsAfterParenOpen, SDF_Lookaheads Lookaheads, SDF_OptLayout wsAfterLookaheads);
SDF_Lookaheads SDF_makeLookaheadsList(SDF_OptLayout wsAfterBracketOpenBracketOpen, SDF_LookaheadList list, SDF_OptLayout wsAfterList);
SDF_Restriction SDF_makeRestrictionFollow(SDF_Symbols Symbols, SDF_OptLayout wsAfterSymbols, SDF_OptLayout wsAfterSlash, SDF_Lookaheads Lookaheads);
SDF_Restrictions SDF_makeRestrictionsDefault(SDF_RestrictionList list);
SDF_LookaheadList SDF_makeLookaheadListEmpty(void);
SDF_LookaheadList SDF_makeLookaheadListSingle(SDF_Lookahead head);
SDF_LookaheadList SDF_makeLookaheadListMany(SDF_Lookahead head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_LookaheadList tail);
SDF_RestrictionList SDF_makeRestrictionListEmpty(void);
SDF_RestrictionList SDF_makeRestrictionListSingle(SDF_Restriction head);
SDF_RestrictionList SDF_makeRestrictionListMany(SDF_Restriction head, SDF_OptLayout wsAfterHead, SDF_RestrictionList tail);
SDF_Sort SDF_makeSortLexToCf(SDF_LexSort Sort);
SDF_SDF SDF_makeSDFDefinition(SDF_OptLayout wsAfterDefinition, SDF_Definition Definition);
SDF_LexSort SDF_makeLexSortOneChar(char head);
SDF_LexSort SDF_makeLexSortMoreChars(char head, const char* middle, char last);
SDF_SymbolParameters SDF_makeSymbolParametersEmpty(void);
SDF_SymbolParameters SDF_makeSymbolParametersSingle(SDF_Symbol head);
SDF_SymbolParameters SDF_makeSymbolParametersMany(SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_OptLayout wsAfterSep, SDF_SymbolParameters tail);
SDF_Symbols SDF_makeSymbolsDefault(SDF_SymbolList list);
SDF_SymbolList SDF_makeSymbolListEmpty(void);
SDF_SymbolList SDF_makeSymbolListSingle(SDF_Symbol head);
SDF_SymbolList SDF_makeSymbolListMany(SDF_Symbol head, SDF_OptLayout wsAfterHead, SDF_SymbolList tail);
SDF_LexLayout SDF_makeLexLayoutWhitespace(char ch);
SDF_LexLayout SDF_makeLexLayoutLine(const char* line);
SDF_LexLayout SDF_makeLexLayoutNested(const char* content);
SDF_LexStrChar SDF_makeLexStrCharNewline(void);
SDF_LexStrChar SDF_makeLexStrCharTab(void);
SDF_LexStrChar SDF_makeLexStrCharQuote(void);
SDF_LexStrChar SDF_makeLexStrCharBackslash(void);
SDF_LexStrChar SDF_makeLexStrCharDecimal(char a, char b, char c);
SDF_LexStrChar SDF_makeLexStrCharNormal(char ch);
SDF_StrChar SDF_makeStrCharLexToCf(SDF_LexStrChar StrChar);
SDF_LexStrCon SDF_makeLexStrConDefault(SDF_LexStrCharChars chars);
SDF_StrCon SDF_makeStrConLexToCf(SDF_LexStrCon StrCon);
SDF_LexStrCharChars SDF_makeLexStrCharCharsEmpty(void);
SDF_LexStrCharChars SDF_makeLexStrCharCharsSingle(SDF_LexStrChar head);
SDF_LexStrCharChars SDF_makeLexStrCharCharsMany(SDF_LexStrChar head, SDF_LexStrCharChars tail);
SDF_LexNatCon SDF_makeLexNatConDigits(const char* list);
SDF_NatCon SDF_makeNatConLexToCf(SDF_LexNatCon NatCon);
SDF_LexIdCon SDF_makeLexIdConDefault(char head, const char* tail);
SDF_IdCon SDF_makeIdConLexToCf(SDF_LexIdCon IdCon);
#ifdef FAST_API
#define SDF_isEqualOptLayout(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualOptLayout(SDF_OptLayout arg0, SDF_OptLayout arg1);
#define SDF_isEqualOptLayout(arg0, arg1) (_SDF_isEqualOptLayout(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLayout(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLayout(SDF_Layout arg0, SDF_Layout arg1);
#define SDF_isEqualLayout(arg0, arg1) (_SDF_isEqualLayout(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexLayoutList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexLayoutList(SDF_LexLayoutList arg0, SDF_LexLayoutList arg1);
#define SDF_isEqualLexLayoutList(arg0, arg1) (_SDF_isEqualLexLayoutList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAFun(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAFun(SDF_AFun arg0, SDF_AFun arg1);
#define SDF_isEqualAFun(arg0, arg1) (_SDF_isEqualAFun(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualATerm(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualATerm(SDF_ATerm arg0, SDF_ATerm arg1);
#define SDF_isEqualATerm(arg0, arg1) (_SDF_isEqualATerm(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAnnotation(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAnnotation(SDF_Annotation arg0, SDF_Annotation arg1);
#define SDF_isEqualAnnotation(arg0, arg1) (_SDF_isEqualAnnotation(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualStart(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualStart(SDF_Start arg0, SDF_Start arg1);
#define SDF_isEqualStart(arg0, arg1) (_SDF_isEqualStart(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualATermArgs(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualATermArgs(SDF_ATermArgs arg0, SDF_ATermArgs arg1);
#define SDF_isEqualATermArgs(arg0, arg1) (_SDF_isEqualATermArgs(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualATermElems(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualATermElems(SDF_ATermElems arg0, SDF_ATermElems arg1);
#define SDF_isEqualATermElems(arg0, arg1) (_SDF_isEqualATermElems(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualATermAnnos(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualATermAnnos(SDF_ATermAnnos arg0, SDF_ATermAnnos arg1);
#define SDF_isEqualATermAnnos(arg0, arg1) (_SDF_isEqualATermAnnos(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualIntCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualIntCon(SDF_IntCon arg0, SDF_IntCon arg1);
#define SDF_isEqualIntCon(arg0, arg1) (_SDF_isEqualIntCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualOptExp(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualOptExp(SDF_OptExp arg0, SDF_OptExp arg1);
#define SDF_isEqualOptExp(arg0, arg1) (_SDF_isEqualOptExp(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRealCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRealCon(SDF_RealCon arg0, SDF_RealCon arg1);
#define SDF_isEqualRealCon(arg0, arg1) (_SDF_isEqualRealCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualGrammar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualGrammar(SDF_Grammar arg0, SDF_Grammar arg1);
#define SDF_isEqualGrammar(arg0, arg1) (_SDF_isEqualGrammar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAlias(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAlias(SDF_Alias arg0, SDF_Alias arg1);
#define SDF_isEqualAlias(arg0, arg1) (_SDF_isEqualAlias(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAliases(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAliases(SDF_Aliases arg0, SDF_Aliases arg1);
#define SDF_isEqualAliases(arg0, arg1) (_SDF_isEqualAliases(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAliasList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAliasList(SDF_AliasList arg0, SDF_AliasList arg1);
#define SDF_isEqualAliasList(arg0, arg1) (_SDF_isEqualAliasList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbol(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbol(SDF_Symbol arg0, SDF_Symbol arg1);
#define SDF_isEqualSymbol(arg0, arg1) (_SDF_isEqualSymbol(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualCharRange(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualCharRange(SDF_CharRange arg0, SDF_CharRange arg1);
#define SDF_isEqualCharRange(arg0, arg1) (_SDF_isEqualCharRange(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualCharRanges(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualCharRanges(SDF_CharRanges arg0, SDF_CharRanges arg1);
#define SDF_isEqualCharRanges(arg0, arg1) (_SDF_isEqualCharRanges(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualOptCharRanges(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualOptCharRanges(SDF_OptCharRanges arg0, SDF_OptCharRanges arg1);
#define SDF_isEqualOptCharRanges(arg0, arg1) (_SDF_isEqualOptCharRanges(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualCharClass(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualCharClass(SDF_CharClass arg0, SDF_CharClass arg1);
#define SDF_isEqualCharClass(arg0, arg1) (_SDF_isEqualCharClass(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexNumChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexNumChar(SDF_LexNumChar arg0, SDF_LexNumChar arg1);
#define SDF_isEqualLexNumChar(arg0, arg1) (_SDF_isEqualLexNumChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualNumChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualNumChar(SDF_NumChar arg0, SDF_NumChar arg1);
#define SDF_isEqualNumChar(arg0, arg1) (_SDF_isEqualNumChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexShortChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexShortChar(SDF_LexShortChar arg0, SDF_LexShortChar arg1);
#define SDF_isEqualLexShortChar(arg0, arg1) (_SDF_isEqualLexShortChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualShortChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualShortChar(SDF_ShortChar arg0, SDF_ShortChar arg1);
#define SDF_isEqualShortChar(arg0, arg1) (_SDF_isEqualShortChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualCharacter(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualCharacter(SDF_Character arg0, SDF_Character arg1);
#define SDF_isEqualCharacter(arg0, arg1) (_SDF_isEqualCharacter(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualATermAttribute(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualATermAttribute(SDF_ATermAttribute arg0, SDF_ATermAttribute arg1);
#define SDF_isEqualATermAttribute(arg0, arg1) (_SDF_isEqualATermAttribute(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAttribute(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAttribute(SDF_Attribute arg0, SDF_Attribute arg1);
#define SDF_isEqualAttribute(arg0, arg1) (_SDF_isEqualAttribute(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAttributes(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAttributes(SDF_Attributes arg0, SDF_Attributes arg1);
#define SDF_isEqualAttributes(arg0, arg1) (_SDF_isEqualAttributes(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualProduction(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualProduction(SDF_Production arg0, SDF_Production arg1);
#define SDF_isEqualProduction(arg0, arg1) (_SDF_isEqualProduction(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualProductions(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualProductions(SDF_Productions arg0, SDF_Productions arg1);
#define SDF_isEqualProductions(arg0, arg1) (_SDF_isEqualProductions(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAttributeList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAttributeList(SDF_AttributeList arg0, SDF_AttributeList arg1);
#define SDF_isEqualAttributeList(arg0, arg1) (_SDF_isEqualAttributeList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualProductionList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualProductionList(SDF_ProductionList arg0, SDF_ProductionList arg1);
#define SDF_isEqualProductionList(arg0, arg1) (_SDF_isEqualProductionList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLabel(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLabel(SDF_Label arg0, SDF_Label arg1);
#define SDF_isEqualLabel(arg0, arg1) (_SDF_isEqualLabel(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexSingleQuotedStrChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexSingleQuotedStrChar(SDF_LexSingleQuotedStrChar arg0, SDF_LexSingleQuotedStrChar arg1);
#define SDF_isEqualLexSingleQuotedStrChar(arg0, arg1) (_SDF_isEqualLexSingleQuotedStrChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSingleQuotedStrChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSingleQuotedStrChar(SDF_SingleQuotedStrChar arg0, SDF_SingleQuotedStrChar arg1);
#define SDF_isEqualSingleQuotedStrChar(arg0, arg1) (_SDF_isEqualSingleQuotedStrChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexSingleQuotedStrCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexSingleQuotedStrCon(SDF_LexSingleQuotedStrCon arg0, SDF_LexSingleQuotedStrCon arg1);
#define SDF_isEqualLexSingleQuotedStrCon(arg0, arg1) (_SDF_isEqualLexSingleQuotedStrCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSingleQuotedStrCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSingleQuotedStrCon(SDF_SingleQuotedStrCon arg0, SDF_SingleQuotedStrCon arg1);
#define SDF_isEqualSingleQuotedStrCon(arg0, arg1) (_SDF_isEqualSingleQuotedStrCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualFunctionName(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualFunctionName(SDF_FunctionName arg0, SDF_FunctionName arg1);
#define SDF_isEqualFunctionName(arg0, arg1) (_SDF_isEqualFunctionName(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexSingleQuotedStrCharChars(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg0, SDF_LexSingleQuotedStrCharChars arg1);
#define SDF_isEqualLexSingleQuotedStrCharChars(arg0, arg1) (_SDF_isEqualLexSingleQuotedStrCharChars(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbolArguments(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbolArguments(SDF_SymbolArguments arg0, SDF_SymbolArguments arg1);
#define SDF_isEqualSymbolArguments(arg0, arg1) (_SDF_isEqualSymbolArguments(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexModuleWord(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexModuleWord(SDF_LexModuleWord arg0, SDF_LexModuleWord arg1);
#define SDF_isEqualLexModuleWord(arg0, arg1) (_SDF_isEqualLexModuleWord(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualModuleWord(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualModuleWord(SDF_ModuleWord arg0, SDF_ModuleWord arg1);
#define SDF_isEqualModuleWord(arg0, arg1) (_SDF_isEqualModuleWord(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexModuleId(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexModuleId(SDF_LexModuleId arg0, SDF_LexModuleId arg1);
#define SDF_isEqualLexModuleId(arg0, arg1) (_SDF_isEqualLexModuleId(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualModuleId(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualModuleId(SDF_ModuleId arg0, SDF_ModuleId arg1);
#define SDF_isEqualModuleId(arg0, arg1) (_SDF_isEqualModuleId(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualDefinition(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualDefinition(SDF_Definition arg0, SDF_Definition arg1);
#define SDF_isEqualDefinition(arg0, arg1) (_SDF_isEqualDefinition(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualModule(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualModule(SDF_Module arg0, SDF_Module arg1);
#define SDF_isEqualModule(arg0, arg1) (_SDF_isEqualModule(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSection(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSection(SDF_Section arg0, SDF_Section arg1);
#define SDF_isEqualSection(arg0, arg1) (_SDF_isEqualSection(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSections(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSections(SDF_Sections arg0, SDF_Sections arg1);
#define SDF_isEqualSections(arg0, arg1) (_SDF_isEqualSections(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualModuleName(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualModuleName(SDF_ModuleName arg0, SDF_ModuleName arg1);
#define SDF_isEqualModuleName(arg0, arg1) (_SDF_isEqualModuleName(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualImpSection(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualImpSection(SDF_ImpSection arg0, SDF_ImpSection arg1);
#define SDF_isEqualImpSection(arg0, arg1) (_SDF_isEqualImpSection(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualImports(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualImports(SDF_Imports arg0, SDF_Imports arg1);
#define SDF_isEqualImports(arg0, arg1) (_SDF_isEqualImports(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualImport(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualImport(SDF_Import arg0, SDF_Import arg1);
#define SDF_isEqualImport(arg0, arg1) (_SDF_isEqualImport(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualModuleList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualModuleList(SDF_ModuleList arg0, SDF_ModuleList arg1);
#define SDF_isEqualModuleList(arg0, arg1) (_SDF_isEqualModuleList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualImpSectionList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualImpSectionList(SDF_ImpSectionList arg0, SDF_ImpSectionList arg1);
#define SDF_isEqualImpSectionList(arg0, arg1) (_SDF_isEqualImpSectionList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSectionList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSectionList(SDF_SectionList arg0, SDF_SectionList arg1);
#define SDF_isEqualSectionList(arg0, arg1) (_SDF_isEqualSectionList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualImportList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualImportList(SDF_ImportList arg0, SDF_ImportList arg1);
#define SDF_isEqualImportList(arg0, arg1) (_SDF_isEqualImportList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualAssociativity(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualAssociativity(SDF_Associativity arg0, SDF_Associativity arg1);
#define SDF_isEqualAssociativity(arg0, arg1) (_SDF_isEqualAssociativity(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualArgumentIndicator(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualArgumentIndicator(SDF_ArgumentIndicator arg0, SDF_ArgumentIndicator arg1);
#define SDF_isEqualArgumentIndicator(arg0, arg1) (_SDF_isEqualArgumentIndicator(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualGroup(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualGroup(SDF_Group arg0, SDF_Group arg1);
#define SDF_isEqualGroup(arg0, arg1) (_SDF_isEqualGroup(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualPriority(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualPriority(SDF_Priority arg0, SDF_Priority arg1);
#define SDF_isEqualPriority(arg0, arg1) (_SDF_isEqualPriority(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualPriorities(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualPriorities(SDF_Priorities arg0, SDF_Priorities arg1);
#define SDF_isEqualPriorities(arg0, arg1) (_SDF_isEqualPriorities(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualNatConArguments(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualNatConArguments(SDF_NatConArguments arg0, SDF_NatConArguments arg1);
#define SDF_isEqualNatConArguments(arg0, arg1) (_SDF_isEqualNatConArguments(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualGroupList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualGroupList(SDF_GroupList arg0, SDF_GroupList arg1);
#define SDF_isEqualGroupList(arg0, arg1) (_SDF_isEqualGroupList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualPriorityList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualPriorityList(SDF_PriorityList arg0, SDF_PriorityList arg1);
#define SDF_isEqualPriorityList(arg0, arg1) (_SDF_isEqualPriorityList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbolTail(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbolTail(SDF_SymbolTail arg0, SDF_SymbolTail arg1);
#define SDF_isEqualSymbolTail(arg0, arg1) (_SDF_isEqualSymbolTail(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbolRest(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbolRest(SDF_SymbolRest arg0, SDF_SymbolRest arg1);
#define SDF_isEqualSymbolRest(arg0, arg1) (_SDF_isEqualSymbolRest(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRenamings(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRenamings(SDF_Renamings arg0, SDF_Renamings arg1);
#define SDF_isEqualRenamings(arg0, arg1) (_SDF_isEqualRenamings(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRenaming(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRenaming(SDF_Renaming arg0, SDF_Renaming arg1);
#define SDF_isEqualRenaming(arg0, arg1) (_SDF_isEqualRenaming(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRenamingList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRenamingList(SDF_RenamingList arg0, SDF_RenamingList arg1);
#define SDF_isEqualRenamingList(arg0, arg1) (_SDF_isEqualRenamingList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLookahead(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLookahead(SDF_Lookahead arg0, SDF_Lookahead arg1);
#define SDF_isEqualLookahead(arg0, arg1) (_SDF_isEqualLookahead(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLookaheads(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLookaheads(SDF_Lookaheads arg0, SDF_Lookaheads arg1);
#define SDF_isEqualLookaheads(arg0, arg1) (_SDF_isEqualLookaheads(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRestriction(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRestriction(SDF_Restriction arg0, SDF_Restriction arg1);
#define SDF_isEqualRestriction(arg0, arg1) (_SDF_isEqualRestriction(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRestrictions(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRestrictions(SDF_Restrictions arg0, SDF_Restrictions arg1);
#define SDF_isEqualRestrictions(arg0, arg1) (_SDF_isEqualRestrictions(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLookaheadList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLookaheadList(SDF_LookaheadList arg0, SDF_LookaheadList arg1);
#define SDF_isEqualLookaheadList(arg0, arg1) (_SDF_isEqualLookaheadList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualRestrictionList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualRestrictionList(SDF_RestrictionList arg0, SDF_RestrictionList arg1);
#define SDF_isEqualRestrictionList(arg0, arg1) (_SDF_isEqualRestrictionList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSort(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSort(SDF_Sort arg0, SDF_Sort arg1);
#define SDF_isEqualSort(arg0, arg1) (_SDF_isEqualSort(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSDF(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSDF(SDF_SDF arg0, SDF_SDF arg1);
#define SDF_isEqualSDF(arg0, arg1) (_SDF_isEqualSDF(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexSort(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexSort(SDF_LexSort arg0, SDF_LexSort arg1);
#define SDF_isEqualLexSort(arg0, arg1) (_SDF_isEqualLexSort(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbolParameters(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbolParameters(SDF_SymbolParameters arg0, SDF_SymbolParameters arg1);
#define SDF_isEqualSymbolParameters(arg0, arg1) (_SDF_isEqualSymbolParameters(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbols(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbols(SDF_Symbols arg0, SDF_Symbols arg1);
#define SDF_isEqualSymbols(arg0, arg1) (_SDF_isEqualSymbols(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualSymbolList(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualSymbolList(SDF_SymbolList arg0, SDF_SymbolList arg1);
#define SDF_isEqualSymbolList(arg0, arg1) (_SDF_isEqualSymbolList(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexLayout(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexLayout(SDF_LexLayout arg0, SDF_LexLayout arg1);
#define SDF_isEqualLexLayout(arg0, arg1) (_SDF_isEqualLexLayout(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexStrChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexStrChar(SDF_LexStrChar arg0, SDF_LexStrChar arg1);
#define SDF_isEqualLexStrChar(arg0, arg1) (_SDF_isEqualLexStrChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualStrChar(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualStrChar(SDF_StrChar arg0, SDF_StrChar arg1);
#define SDF_isEqualStrChar(arg0, arg1) (_SDF_isEqualStrChar(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexStrCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexStrCon(SDF_LexStrCon arg0, SDF_LexStrCon arg1);
#define SDF_isEqualLexStrCon(arg0, arg1) (_SDF_isEqualLexStrCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualStrCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualStrCon(SDF_StrCon arg0, SDF_StrCon arg1);
#define SDF_isEqualStrCon(arg0, arg1) (_SDF_isEqualStrCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexStrCharChars(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexStrCharChars(SDF_LexStrCharChars arg0, SDF_LexStrCharChars arg1);
#define SDF_isEqualLexStrCharChars(arg0, arg1) (_SDF_isEqualLexStrCharChars(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexNatCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexNatCon(SDF_LexNatCon arg0, SDF_LexNatCon arg1);
#define SDF_isEqualLexNatCon(arg0, arg1) (_SDF_isEqualLexNatCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualNatCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualNatCon(SDF_NatCon arg0, SDF_NatCon arg1);
#define SDF_isEqualNatCon(arg0, arg1) (_SDF_isEqualNatCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualLexIdCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualLexIdCon(SDF_LexIdCon arg0, SDF_LexIdCon arg1);
#define SDF_isEqualLexIdCon(arg0, arg1) (_SDF_isEqualLexIdCon(arg0, arg1))
#endif
#ifdef FAST_API
#define SDF_isEqualIdCon(arg0, arg1) (ATisEqual((ATerm)(arg0), (ATerm)(arg1)))
#else
ATbool _SDF_isEqualIdCon(SDF_IdCon arg0, SDF_IdCon arg1);
#define SDF_isEqualIdCon(arg0, arg1) (_SDF_isEqualIdCon(arg0, arg1))
#endif
ATbool SDF_isValidOptLayout(SDF_OptLayout arg);
ATbool SDF_isOptLayoutAbsent(SDF_OptLayout arg);
ATbool SDF_isOptLayoutPresent(SDF_OptLayout arg);
ATbool SDF_hasOptLayoutLayout(SDF_OptLayout arg);
SDF_Layout SDF_getOptLayoutLayout(SDF_OptLayout arg);
SDF_OptLayout SDF_setOptLayoutLayout(SDF_OptLayout arg, SDF_Layout layout);
ATbool SDF_isValidLayout(SDF_Layout arg);
ATbool SDF_isLayoutLexToCf(SDF_Layout arg);
ATbool SDF_hasLayoutList(SDF_Layout arg);
SDF_LexLayoutList SDF_getLayoutList(SDF_Layout arg);
SDF_Layout SDF_setLayoutList(SDF_Layout arg, SDF_LexLayoutList list);
ATbool SDF_isValidLexLayoutList(SDF_LexLayoutList arg);
ATbool SDF_isLexLayoutListEmpty(SDF_LexLayoutList arg);
ATbool SDF_isLexLayoutListSingle(SDF_LexLayoutList arg);
ATbool SDF_isLexLayoutListMany(SDF_LexLayoutList arg);
ATbool SDF_hasLexLayoutListHead(SDF_LexLayoutList arg);
ATbool SDF_hasLexLayoutListTail(SDF_LexLayoutList arg);
SDF_LexLayout SDF_getLexLayoutListHead(SDF_LexLayoutList arg);
SDF_LexLayoutList SDF_getLexLayoutListTail(SDF_LexLayoutList arg);
SDF_LexLayoutList SDF_setLexLayoutListHead(SDF_LexLayoutList arg, SDF_LexLayout head);
SDF_LexLayoutList SDF_setLexLayoutListTail(SDF_LexLayoutList arg, SDF_LexLayoutList tail);
ATbool SDF_isValidAFun(SDF_AFun arg);
ATbool SDF_isAFunQuoted(SDF_AFun arg);
ATbool SDF_isAFunUnquoted(SDF_AFun arg);
ATbool SDF_hasAFunStrCon(SDF_AFun arg);
ATbool SDF_hasAFunIdCon(SDF_AFun arg);
SDF_StrCon SDF_getAFunStrCon(SDF_AFun arg);
SDF_IdCon SDF_getAFunIdCon(SDF_AFun arg);
SDF_AFun SDF_setAFunStrCon(SDF_AFun arg, SDF_StrCon StrCon);
SDF_AFun SDF_setAFunIdCon(SDF_AFun arg, SDF_IdCon IdCon);
ATbool SDF_isValidATerm(SDF_ATerm arg);
ATbool SDF_isATermInt(SDF_ATerm arg);
ATbool SDF_isATermReal(SDF_ATerm arg);
ATbool SDF_isATermFun(SDF_ATerm arg);
ATbool SDF_isATermAppl(SDF_ATerm arg);
ATbool SDF_isATermPlaceholder(SDF_ATerm arg);
ATbool SDF_isATermList(SDF_ATerm arg);
ATbool SDF_isATermAnnotated(SDF_ATerm arg);
ATbool SDF_hasATermIntCon(SDF_ATerm arg);
ATbool SDF_hasATermRealCon(SDF_ATerm arg);
ATbool SDF_hasATermFun(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterFun(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterParenOpen(SDF_ATerm arg);
ATbool SDF_hasATermArgs(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterArgs(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterLessThan(SDF_ATerm arg);
ATbool SDF_hasATermType(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterType(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterBracketOpen(SDF_ATerm arg);
ATbool SDF_hasATermElems(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterElems(SDF_ATerm arg);
ATbool SDF_hasATermTrm(SDF_ATerm arg);
ATbool SDF_hasATermWsAfterTrm(SDF_ATerm arg);
ATbool SDF_hasATermAnnotation(SDF_ATerm arg);
SDF_IntCon SDF_getATermIntCon(SDF_ATerm arg);
SDF_RealCon SDF_getATermRealCon(SDF_ATerm arg);
SDF_AFun SDF_getATermFun(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterFun(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterParenOpen(SDF_ATerm arg);
SDF_ATermArgs SDF_getATermArgs(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterArgs(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterLessThan(SDF_ATerm arg);
SDF_ATerm SDF_getATermType(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterType(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterBracketOpen(SDF_ATerm arg);
SDF_ATermElems SDF_getATermElems(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterElems(SDF_ATerm arg);
SDF_ATerm SDF_getATermTrm(SDF_ATerm arg);
SDF_OptLayout SDF_getATermWsAfterTrm(SDF_ATerm arg);
SDF_Annotation SDF_getATermAnnotation(SDF_ATerm arg);
SDF_ATerm SDF_setATermIntCon(SDF_ATerm arg, SDF_IntCon IntCon);
SDF_ATerm SDF_setATermRealCon(SDF_ATerm arg, SDF_RealCon RealCon);
SDF_ATerm SDF_setATermFun(SDF_ATerm arg, SDF_AFun fun);
SDF_ATerm SDF_setATermWsAfterFun(SDF_ATerm arg, SDF_OptLayout wsAfterFun);
SDF_ATerm SDF_setATermWsAfterParenOpen(SDF_ATerm arg, SDF_OptLayout wsAfterParenOpen);
SDF_ATerm SDF_setATermArgs(SDF_ATerm arg, SDF_ATermArgs args);
SDF_ATerm SDF_setATermWsAfterArgs(SDF_ATerm arg, SDF_OptLayout wsAfterArgs);
SDF_ATerm SDF_setATermWsAfterLessThan(SDF_ATerm arg, SDF_OptLayout wsAfterLessThan);
SDF_ATerm SDF_setATermType(SDF_ATerm arg, SDF_ATerm type);
SDF_ATerm SDF_setATermWsAfterType(SDF_ATerm arg, SDF_OptLayout wsAfterType);
SDF_ATerm SDF_setATermWsAfterBracketOpen(SDF_ATerm arg, SDF_OptLayout wsAfterBracketOpen);
SDF_ATerm SDF_setATermElems(SDF_ATerm arg, SDF_ATermElems elems);
SDF_ATerm SDF_setATermWsAfterElems(SDF_ATerm arg, SDF_OptLayout wsAfterElems);
SDF_ATerm SDF_setATermTrm(SDF_ATerm arg, SDF_ATerm trm);
SDF_ATerm SDF_setATermWsAfterTrm(SDF_ATerm arg, SDF_OptLayout wsAfterTrm);
SDF_ATerm SDF_setATermAnnotation(SDF_ATerm arg, SDF_Annotation Annotation);
ATbool SDF_isValidAnnotation(SDF_Annotation arg);
ATbool SDF_isAnnotationDefault(SDF_Annotation arg);
ATbool SDF_hasAnnotationWsAfterBraceOpen(SDF_Annotation arg);
ATbool SDF_hasAnnotationAnnos(SDF_Annotation arg);
ATbool SDF_hasAnnotationWsAfterAnnos(SDF_Annotation arg);
SDF_OptLayout SDF_getAnnotationWsAfterBraceOpen(SDF_Annotation arg);
SDF_ATermAnnos SDF_getAnnotationAnnos(SDF_Annotation arg);
SDF_OptLayout SDF_getAnnotationWsAfterAnnos(SDF_Annotation arg);
SDF_Annotation SDF_setAnnotationWsAfterBraceOpen(SDF_Annotation arg, SDF_OptLayout wsAfterBraceOpen);
SDF_Annotation SDF_setAnnotationAnnos(SDF_Annotation arg, SDF_ATermAnnos annos);
SDF_Annotation SDF_setAnnotationWsAfterAnnos(SDF_Annotation arg, SDF_OptLayout wsAfterAnnos);
ATbool SDF_isValidStart(SDF_Start arg);
ATbool SDF_isStartATerm(SDF_Start arg);
ATbool SDF_isStartIntCon(SDF_Start arg);
ATbool SDF_isStartRealCon(SDF_Start arg);
ATbool SDF_isStartModule(SDF_Start arg);
ATbool SDF_isStartSDF(SDF_Start arg);
ATbool SDF_hasStartWsBefore(SDF_Start arg);
ATbool SDF_hasStartTopATerm(SDF_Start arg);
ATbool SDF_hasStartWsAfter(SDF_Start arg);
ATbool SDF_hasStartAmbCnt(SDF_Start arg);
ATbool SDF_hasStartTopIntCon(SDF_Start arg);
ATbool SDF_hasStartTopRealCon(SDF_Start arg);
ATbool SDF_hasStartTopModule(SDF_Start arg);
ATbool SDF_hasStartTopSDF(SDF_Start arg);
SDF_OptLayout SDF_getStartWsBefore(SDF_Start arg);
SDF_ATerm SDF_getStartTopATerm(SDF_Start arg);
SDF_OptLayout SDF_getStartWsAfter(SDF_Start arg);
int SDF_getStartAmbCnt(SDF_Start arg);
SDF_IntCon SDF_getStartTopIntCon(SDF_Start arg);
SDF_RealCon SDF_getStartTopRealCon(SDF_Start arg);
SDF_Module SDF_getStartTopModule(SDF_Start arg);
SDF_SDF SDF_getStartTopSDF(SDF_Start arg);
SDF_Start SDF_setStartWsBefore(SDF_Start arg, SDF_OptLayout wsBefore);
SDF_Start SDF_setStartTopATerm(SDF_Start arg, SDF_ATerm topATerm);
SDF_Start SDF_setStartWsAfter(SDF_Start arg, SDF_OptLayout wsAfter);
SDF_Start SDF_setStartAmbCnt(SDF_Start arg, int ambCnt);
SDF_Start SDF_setStartTopIntCon(SDF_Start arg, SDF_IntCon topIntCon);
SDF_Start SDF_setStartTopRealCon(SDF_Start arg, SDF_RealCon topRealCon);
SDF_Start SDF_setStartTopModule(SDF_Start arg, SDF_Module topModule);
SDF_Start SDF_setStartTopSDF(SDF_Start arg, SDF_SDF topSDF);
ATbool SDF_isValidATermArgs(SDF_ATermArgs arg);
ATbool SDF_isATermArgsEmpty(SDF_ATermArgs arg);
ATbool SDF_isATermArgsSingle(SDF_ATermArgs arg);
ATbool SDF_isATermArgsMany(SDF_ATermArgs arg);
ATbool SDF_hasATermArgsHead(SDF_ATermArgs arg);
ATbool SDF_hasATermArgsWsAfterHead(SDF_ATermArgs arg);
ATbool SDF_hasATermArgsWsAfterSep(SDF_ATermArgs arg);
ATbool SDF_hasATermArgsTail(SDF_ATermArgs arg);
SDF_ATermArgs SDF_getATermArgsTail(SDF_ATermArgs arg);
SDF_ATerm SDF_getATermArgsHead(SDF_ATermArgs arg);
SDF_OptLayout SDF_getATermArgsWsAfterHead(SDF_ATermArgs arg);
SDF_OptLayout SDF_getATermArgsWsAfterSep(SDF_ATermArgs arg);
SDF_ATermArgs SDF_setATermArgsHead(SDF_ATermArgs arg, SDF_ATerm head);
SDF_ATermArgs SDF_setATermArgsWsAfterHead(SDF_ATermArgs arg, SDF_OptLayout wsAfterHead);
SDF_ATermArgs SDF_setATermArgsWsAfterSep(SDF_ATermArgs arg, SDF_OptLayout wsAfterSep);
SDF_ATermArgs SDF_setATermArgsTail(SDF_ATermArgs arg, SDF_ATermArgs tail);
ATbool SDF_isValidATermElems(SDF_ATermElems arg);
ATbool SDF_isATermElemsEmpty(SDF_ATermElems arg);
ATbool SDF_isATermElemsSingle(SDF_ATermElems arg);
ATbool SDF_isATermElemsMany(SDF_ATermElems arg);
ATbool SDF_hasATermElemsHead(SDF_ATermElems arg);
ATbool SDF_hasATermElemsWsAfterHead(SDF_ATermElems arg);
ATbool SDF_hasATermElemsWsAfterSep(SDF_ATermElems arg);
ATbool SDF_hasATermElemsTail(SDF_ATermElems arg);
SDF_ATermElems SDF_getATermElemsTail(SDF_ATermElems arg);
SDF_ATerm SDF_getATermElemsHead(SDF_ATermElems arg);
SDF_OptLayout SDF_getATermElemsWsAfterHead(SDF_ATermElems arg);
SDF_OptLayout SDF_getATermElemsWsAfterSep(SDF_ATermElems arg);
SDF_ATermElems SDF_setATermElemsHead(SDF_ATermElems arg, SDF_ATerm head);
SDF_ATermElems SDF_setATermElemsWsAfterHead(SDF_ATermElems arg, SDF_OptLayout wsAfterHead);
SDF_ATermElems SDF_setATermElemsWsAfterSep(SDF_ATermElems arg, SDF_OptLayout wsAfterSep);
SDF_ATermElems SDF_setATermElemsTail(SDF_ATermElems arg, SDF_ATermElems tail);
ATbool SDF_isValidATermAnnos(SDF_ATermAnnos arg);
ATbool SDF_isATermAnnosEmpty(SDF_ATermAnnos arg);
ATbool SDF_isATermAnnosSingle(SDF_ATermAnnos arg);
ATbool SDF_isATermAnnosMany(SDF_ATermAnnos arg);
ATbool SDF_hasATermAnnosHead(SDF_ATermAnnos arg);
ATbool SDF_hasATermAnnosWsAfterHead(SDF_ATermAnnos arg);
ATbool SDF_hasATermAnnosWsAfterSep(SDF_ATermAnnos arg);
ATbool SDF_hasATermAnnosTail(SDF_ATermAnnos arg);
SDF_ATermAnnos SDF_getATermAnnosTail(SDF_ATermAnnos arg);
SDF_ATerm SDF_getATermAnnosHead(SDF_ATermAnnos arg);
SDF_OptLayout SDF_getATermAnnosWsAfterHead(SDF_ATermAnnos arg);
SDF_OptLayout SDF_getATermAnnosWsAfterSep(SDF_ATermAnnos arg);
SDF_ATermAnnos SDF_setATermAnnosHead(SDF_ATermAnnos arg, SDF_ATerm head);
SDF_ATermAnnos SDF_setATermAnnosWsAfterHead(SDF_ATermAnnos arg, SDF_OptLayout wsAfterHead);
SDF_ATermAnnos SDF_setATermAnnosWsAfterSep(SDF_ATermAnnos arg, SDF_OptLayout wsAfterSep);
SDF_ATermAnnos SDF_setATermAnnosTail(SDF_ATermAnnos arg, SDF_ATermAnnos tail);
ATbool SDF_isValidIntCon(SDF_IntCon arg);
ATbool SDF_isIntConNatural(SDF_IntCon arg);
ATbool SDF_isIntConPositive(SDF_IntCon arg);
ATbool SDF_isIntConNegative(SDF_IntCon arg);
ATbool SDF_hasIntConNatCon(SDF_IntCon arg);
ATbool SDF_hasIntConWsAfterPos(SDF_IntCon arg);
ATbool SDF_hasIntConWsAfterNeg(SDF_IntCon arg);
SDF_NatCon SDF_getIntConNatCon(SDF_IntCon arg);
SDF_OptLayout SDF_getIntConWsAfterPos(SDF_IntCon arg);
SDF_OptLayout SDF_getIntConWsAfterNeg(SDF_IntCon arg);
SDF_IntCon SDF_setIntConNatCon(SDF_IntCon arg, SDF_NatCon NatCon);
SDF_IntCon SDF_setIntConWsAfterPos(SDF_IntCon arg, SDF_OptLayout wsAfterPos);
SDF_IntCon SDF_setIntConWsAfterNeg(SDF_IntCon arg, SDF_OptLayout wsAfterNeg);
ATbool SDF_isValidOptExp(SDF_OptExp arg);
ATbool SDF_isOptExpPresent(SDF_OptExp arg);
ATbool SDF_isOptExpAbsent(SDF_OptExp arg);
ATbool SDF_hasOptExpWsAfterE(SDF_OptExp arg);
ATbool SDF_hasOptExpIntCon(SDF_OptExp arg);
SDF_OptLayout SDF_getOptExpWsAfterE(SDF_OptExp arg);
SDF_IntCon SDF_getOptExpIntCon(SDF_OptExp arg);
SDF_OptExp SDF_setOptExpWsAfterE(SDF_OptExp arg, SDF_OptLayout wsAfterE);
SDF_OptExp SDF_setOptExpIntCon(SDF_OptExp arg, SDF_IntCon IntCon);
ATbool SDF_isValidRealCon(SDF_RealCon arg);
ATbool SDF_isRealConRealCon(SDF_RealCon arg);
ATbool SDF_hasRealConBase(SDF_RealCon arg);
ATbool SDF_hasRealConWsAfterBase(SDF_RealCon arg);
ATbool SDF_hasRealConWsAfterPeriod(SDF_RealCon arg);
ATbool SDF_hasRealConDecimal(SDF_RealCon arg);
ATbool SDF_hasRealConWsAfterDecimal(SDF_RealCon arg);
ATbool SDF_hasRealConExp(SDF_RealCon arg);
SDF_IntCon SDF_getRealConBase(SDF_RealCon arg);
SDF_OptLayout SDF_getRealConWsAfterBase(SDF_RealCon arg);
SDF_OptLayout SDF_getRealConWsAfterPeriod(SDF_RealCon arg);
SDF_NatCon SDF_getRealConDecimal(SDF_RealCon arg);
SDF_OptLayout SDF_getRealConWsAfterDecimal(SDF_RealCon arg);
SDF_OptExp SDF_getRealConExp(SDF_RealCon arg);
SDF_RealCon SDF_setRealConBase(SDF_RealCon arg, SDF_IntCon base);
SDF_RealCon SDF_setRealConWsAfterBase(SDF_RealCon arg, SDF_OptLayout wsAfterBase);
SDF_RealCon SDF_setRealConWsAfterPeriod(SDF_RealCon arg, SDF_OptLayout wsAfterPeriod);
SDF_RealCon SDF_setRealConDecimal(SDF_RealCon arg, SDF_NatCon decimal);
SDF_RealCon SDF_setRealConWsAfterDecimal(SDF_RealCon arg, SDF_OptLayout wsAfterDecimal);
SDF_RealCon SDF_setRealConExp(SDF_RealCon arg, SDF_OptExp exp);
ATbool SDF_isValidGrammar(SDF_Grammar arg);
ATbool SDF_isGrammarAliases(SDF_Grammar arg);
ATbool SDF_isGrammarLexicalSyntax(SDF_Grammar arg);
ATbool SDF_isGrammarContextFreeSyntax(SDF_Grammar arg);
ATbool SDF_isGrammarVariables(SDF_Grammar arg);
ATbool SDF_isGrammarLexicalVariables(SDF_Grammar arg);
ATbool SDF_isGrammarEmptyGrammar(SDF_Grammar arg);
ATbool SDF_isGrammarConcGrammars(SDF_Grammar arg);
ATbool SDF_isGrammarBracket(SDF_Grammar arg);
ATbool SDF_isGrammarSyntax(SDF_Grammar arg);
ATbool SDF_isGrammarImpSection(SDF_Grammar arg);
ATbool SDF_isGrammarPriorities(SDF_Grammar arg);
ATbool SDF_isGrammarRestrictions(SDF_Grammar arg);
ATbool SDF_isGrammarLexicalPriorities(SDF_Grammar arg);
ATbool SDF_isGrammarContextFreePriorities(SDF_Grammar arg);
ATbool SDF_isGrammarLexicalRestrictions(SDF_Grammar arg);
ATbool SDF_isGrammarContextFreeRestrictions(SDF_Grammar arg);
ATbool SDF_isGrammarSorts(SDF_Grammar arg);
ATbool SDF_isGrammarKernelStartSymbols(SDF_Grammar arg);
ATbool SDF_isGrammarLexicalStartSymbols(SDF_Grammar arg);
ATbool SDF_isGrammarContextFreeStartSymbols(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterAliases(SDF_Grammar arg);
ATbool SDF_hasGrammarAliases(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterLexical(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterSyntax(SDF_Grammar arg);
ATbool SDF_hasGrammarProductions(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterContextFree(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterVariables(SDF_Grammar arg);
ATbool SDF_hasGrammarLeft(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterLeft(SDF_Grammar arg);
ATbool SDF_hasGrammarRight(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterParenOpen(SDF_Grammar arg);
ATbool SDF_hasGrammarGrammar(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterGrammar(SDF_Grammar arg);
ATbool SDF_hasGrammarImpSection(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterPriorities(SDF_Grammar arg);
ATbool SDF_hasGrammarPriorities(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterRestrictions(SDF_Grammar arg);
ATbool SDF_hasGrammarRestrictions(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterSorts(SDF_Grammar arg);
ATbool SDF_hasGrammarSymbols(SDF_Grammar arg);
ATbool SDF_hasGrammarWsAfterStartSymbols(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterAliases(SDF_Grammar arg);
SDF_Aliases SDF_getGrammarAliases(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterLexical(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterSyntax(SDF_Grammar arg);
SDF_Productions SDF_getGrammarProductions(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterContextFree(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterVariables(SDF_Grammar arg);
SDF_Grammar SDF_getGrammarLeft(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterLeft(SDF_Grammar arg);
SDF_Grammar SDF_getGrammarRight(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterParenOpen(SDF_Grammar arg);
SDF_Grammar SDF_getGrammarGrammar(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterGrammar(SDF_Grammar arg);
SDF_ImpSection SDF_getGrammarImpSection(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterPriorities(SDF_Grammar arg);
SDF_Priorities SDF_getGrammarPriorities(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterRestrictions(SDF_Grammar arg);
SDF_Restrictions SDF_getGrammarRestrictions(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterSorts(SDF_Grammar arg);
SDF_Symbols SDF_getGrammarSymbols(SDF_Grammar arg);
SDF_OptLayout SDF_getGrammarWsAfterStartSymbols(SDF_Grammar arg);
SDF_Grammar SDF_setGrammarWsAfterAliases(SDF_Grammar arg, SDF_OptLayout wsAfterAliases);
SDF_Grammar SDF_setGrammarAliases(SDF_Grammar arg, SDF_Aliases Aliases);
SDF_Grammar SDF_setGrammarWsAfterLexical(SDF_Grammar arg, SDF_OptLayout wsAfterLexical);
SDF_Grammar SDF_setGrammarWsAfterSyntax(SDF_Grammar arg, SDF_OptLayout wsAfterSyntax);
SDF_Grammar SDF_setGrammarProductions(SDF_Grammar arg, SDF_Productions Productions);
SDF_Grammar SDF_setGrammarWsAfterContextFree(SDF_Grammar arg, SDF_OptLayout wsAfterContextFree);
SDF_Grammar SDF_setGrammarWsAfterVariables(SDF_Grammar arg, SDF_OptLayout wsAfterVariables);
SDF_Grammar SDF_setGrammarLeft(SDF_Grammar arg, SDF_Grammar left);
SDF_Grammar SDF_setGrammarWsAfterLeft(SDF_Grammar arg, SDF_OptLayout wsAfterLeft);
SDF_Grammar SDF_setGrammarRight(SDF_Grammar arg, SDF_Grammar right);
SDF_Grammar SDF_setGrammarWsAfterParenOpen(SDF_Grammar arg, SDF_OptLayout wsAfterParenOpen);
SDF_Grammar SDF_setGrammarGrammar(SDF_Grammar arg, SDF_Grammar Grammar);
SDF_Grammar SDF_setGrammarWsAfterGrammar(SDF_Grammar arg, SDF_OptLayout wsAfterGrammar);
SDF_Grammar SDF_setGrammarImpSection(SDF_Grammar arg, SDF_ImpSection ImpSection);
SDF_Grammar SDF_setGrammarWsAfterPriorities(SDF_Grammar arg, SDF_OptLayout wsAfterPriorities);
SDF_Grammar SDF_setGrammarPriorities(SDF_Grammar arg, SDF_Priorities Priorities);
SDF_Grammar SDF_setGrammarWsAfterRestrictions(SDF_Grammar arg, SDF_OptLayout wsAfterRestrictions);
SDF_Grammar SDF_setGrammarRestrictions(SDF_Grammar arg, SDF_Restrictions Restrictions);
SDF_Grammar SDF_setGrammarWsAfterSorts(SDF_Grammar arg, SDF_OptLayout wsAfterSorts);
SDF_Grammar SDF_setGrammarSymbols(SDF_Grammar arg, SDF_Symbols Symbols);
SDF_Grammar SDF_setGrammarWsAfterStartSymbols(SDF_Grammar arg, SDF_OptLayout wsAfterStartSymbols);
ATbool SDF_isValidAlias(SDF_Alias arg);
ATbool SDF_isAliasAlias(SDF_Alias arg);
ATbool SDF_hasAliasSymbol(SDF_Alias arg);
ATbool SDF_hasAliasWsAfterSymbol(SDF_Alias arg);
ATbool SDF_hasAliasWsAfterArrow(SDF_Alias arg);
ATbool SDF_hasAliasAlias(SDF_Alias arg);
SDF_Symbol SDF_getAliasSymbol(SDF_Alias arg);
SDF_OptLayout SDF_getAliasWsAfterSymbol(SDF_Alias arg);
SDF_OptLayout SDF_getAliasWsAfterArrow(SDF_Alias arg);
SDF_Symbol SDF_getAliasAlias(SDF_Alias arg);
SDF_Alias SDF_setAliasSymbol(SDF_Alias arg, SDF_Symbol Symbol);
SDF_Alias SDF_setAliasWsAfterSymbol(SDF_Alias arg, SDF_OptLayout wsAfterSymbol);
SDF_Alias SDF_setAliasWsAfterArrow(SDF_Alias arg, SDF_OptLayout wsAfterArrow);
SDF_Alias SDF_setAliasAlias(SDF_Alias arg, SDF_Symbol alias);
ATbool SDF_isValidAliases(SDF_Aliases arg);
ATbool SDF_isAliasesDefault(SDF_Aliases arg);
ATbool SDF_hasAliasesList(SDF_Aliases arg);
SDF_AliasList SDF_getAliasesList(SDF_Aliases arg);
SDF_Aliases SDF_setAliasesList(SDF_Aliases arg, SDF_AliasList list);
ATbool SDF_isValidAliasList(SDF_AliasList arg);
ATbool SDF_isAliasListEmpty(SDF_AliasList arg);
ATbool SDF_isAliasListSingle(SDF_AliasList arg);
ATbool SDF_isAliasListMany(SDF_AliasList arg);
ATbool SDF_hasAliasListHead(SDF_AliasList arg);
ATbool SDF_hasAliasListWsAfterHead(SDF_AliasList arg);
ATbool SDF_hasAliasListTail(SDF_AliasList arg);
SDF_AliasList SDF_getAliasListTail(SDF_AliasList arg);
SDF_Alias SDF_getAliasListHead(SDF_AliasList arg);
SDF_OptLayout SDF_getAliasListWsAfterHead(SDF_AliasList arg);
SDF_AliasList SDF_setAliasListHead(SDF_AliasList arg, SDF_Alias head);
SDF_AliasList SDF_setAliasListWsAfterHead(SDF_AliasList arg, SDF_OptLayout wsAfterHead);
SDF_AliasList SDF_setAliasListTail(SDF_AliasList arg, SDF_AliasList tail);
ATbool SDF_isValidSymbol(SDF_Symbol arg);
ATbool SDF_isSymbolCf(SDF_Symbol arg);
ATbool SDF_isSymbolLex(SDF_Symbol arg);
ATbool SDF_isSymbolVarsym(SDF_Symbol arg);
ATbool SDF_isSymbolLayout(SDF_Symbol arg);
ATbool SDF_isSymbolCharClass(SDF_Symbol arg);
ATbool SDF_isSymbolLabel(SDF_Symbol arg);
ATbool SDF_isSymbolLifting(SDF_Symbol arg);
ATbool SDF_isSymbolLit(SDF_Symbol arg);
ATbool SDF_isSymbolCiLit(SDF_Symbol arg);
ATbool SDF_isSymbolEmpty(SDF_Symbol arg);
ATbool SDF_isSymbolSeq(SDF_Symbol arg);
ATbool SDF_isSymbolOpt(SDF_Symbol arg);
ATbool SDF_isSymbolIter(SDF_Symbol arg);
ATbool SDF_isSymbolIterStar(SDF_Symbol arg);
ATbool SDF_isSymbolIterSep(SDF_Symbol arg);
ATbool SDF_isSymbolIterStarSep(SDF_Symbol arg);
ATbool SDF_isSymbolTuple(SDF_Symbol arg);
ATbool SDF_isSymbolFunc(SDF_Symbol arg);
ATbool SDF_isSymbolAlt(SDF_Symbol arg);
ATbool SDF_isSymbolStrategy(SDF_Symbol arg);
ATbool SDF_isSymbolStart(SDF_Symbol arg);
ATbool SDF_isSymbolFileStart(SDF_Symbol arg);
ATbool SDF_isSymbolSort(SDF_Symbol arg);
ATbool SDF_isSymbolParameterizedSort(SDF_Symbol arg);
ATbool SDF_isSymbolBracket(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterLessThan(SDF_Symbol arg);
ATbool SDF_hasSymbolSymbol(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterSymbol(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterCF(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterLEX(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterVAR(SDF_Symbol arg);
ATbool SDF_hasSymbolCharClass(SDF_Symbol arg);
ATbool SDF_hasSymbolLabel(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterLabel(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterColon(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterLeftQuote(SDF_Symbol arg);
ATbool SDF_hasSymbolString(SDF_Symbol arg);
ATbool SDF_hasSymbolCiString(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterParenOpen(SDF_Symbol arg);
ATbool SDF_hasSymbolHead(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterHead(SDF_Symbol arg);
ATbool SDF_hasSymbolTail(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterTail(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterBraceOpen(SDF_Symbol arg);
ATbool SDF_hasSymbolSep(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterSep(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterBraceClose(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterComma(SDF_Symbol arg);
ATbool SDF_hasSymbolRest(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterRest(SDF_Symbol arg);
ATbool SDF_hasSymbolArguments(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterArguments(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterEqualityGreaterThan(SDF_Symbol arg);
ATbool SDF_hasSymbolResults(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterResults(SDF_Symbol arg);
ATbool SDF_hasSymbolLeft(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterLeft(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterBar(SDF_Symbol arg);
ATbool SDF_hasSymbolRight(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterGreaterThan(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterRight(SDF_Symbol arg);
ATbool SDF_hasSymbolSort(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterSort(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterBracketOpenBracketOpen(SDF_Symbol arg);
ATbool SDF_hasSymbolParameters(SDF_Symbol arg);
ATbool SDF_hasSymbolWsAfterParameters(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterLessThan(SDF_Symbol arg);
SDF_Symbol SDF_getSymbolSymbol(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterSymbol(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterCF(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterLEX(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterVAR(SDF_Symbol arg);
SDF_CharClass SDF_getSymbolCharClass(SDF_Symbol arg);
SDF_Label SDF_getSymbolLabel(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterLabel(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterColon(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterLeftQuote(SDF_Symbol arg);
SDF_StrCon SDF_getSymbolString(SDF_Symbol arg);
SDF_SingleQuotedStrCon SDF_getSymbolCiString(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterParenOpen(SDF_Symbol arg);
SDF_Symbol SDF_getSymbolHead(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterHead(SDF_Symbol arg);
SDF_SymbolTail SDF_getSymbolTail(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterTail(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterBraceOpen(SDF_Symbol arg);
SDF_Symbol SDF_getSymbolSep(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterSep(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterBraceClose(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterComma(SDF_Symbol arg);
SDF_SymbolRest SDF_getSymbolRest(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterRest(SDF_Symbol arg);
SDF_Symbols SDF_getSymbolArguments(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterArguments(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterEqualityGreaterThan(SDF_Symbol arg);
SDF_Symbol SDF_getSymbolResults(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterResults(SDF_Symbol arg);
SDF_Symbol SDF_getSymbolLeft(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterLeft(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterBar(SDF_Symbol arg);
SDF_Symbol SDF_getSymbolRight(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterGreaterThan(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterRight(SDF_Symbol arg);
SDF_Sort SDF_getSymbolSort(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterSort(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterBracketOpenBracketOpen(SDF_Symbol arg);
SDF_SymbolParameters SDF_getSymbolParameters(SDF_Symbol arg);
SDF_OptLayout SDF_getSymbolWsAfterParameters(SDF_Symbol arg);
SDF_Symbol SDF_setSymbolWsAfterLessThan(SDF_Symbol arg, SDF_OptLayout wsAfterLessThan);
SDF_Symbol SDF_setSymbolSymbol(SDF_Symbol arg, SDF_Symbol Symbol);
SDF_Symbol SDF_setSymbolWsAfterSymbol(SDF_Symbol arg, SDF_OptLayout wsAfterSymbol);
SDF_Symbol SDF_setSymbolWsAfterCF(SDF_Symbol arg, SDF_OptLayout wsAfterCF);
SDF_Symbol SDF_setSymbolWsAfterLEX(SDF_Symbol arg, SDF_OptLayout wsAfterLEX);
SDF_Symbol SDF_setSymbolWsAfterVAR(SDF_Symbol arg, SDF_OptLayout wsAfterVAR);
SDF_Symbol SDF_setSymbolCharClass(SDF_Symbol arg, SDF_CharClass CharClass);
SDF_Symbol SDF_setSymbolLabel(SDF_Symbol arg, SDF_Label Label);
SDF_Symbol SDF_setSymbolWsAfterLabel(SDF_Symbol arg, SDF_OptLayout wsAfterLabel);
SDF_Symbol SDF_setSymbolWsAfterColon(SDF_Symbol arg, SDF_OptLayout wsAfterColon);
SDF_Symbol SDF_setSymbolWsAfterLeftQuote(SDF_Symbol arg, SDF_OptLayout wsAfterLeftQuote);
SDF_Symbol SDF_setSymbolString(SDF_Symbol arg, SDF_StrCon string);
SDF_Symbol SDF_setSymbolCiString(SDF_Symbol arg, SDF_SingleQuotedStrCon ciString);
SDF_Symbol SDF_setSymbolWsAfterParenOpen(SDF_Symbol arg, SDF_OptLayout wsAfterParenOpen);
SDF_Symbol SDF_setSymbolHead(SDF_Symbol arg, SDF_Symbol head);
SDF_Symbol SDF_setSymbolWsAfterHead(SDF_Symbol arg, SDF_OptLayout wsAfterHead);
SDF_Symbol SDF_setSymbolTail(SDF_Symbol arg, SDF_SymbolTail tail);
SDF_Symbol SDF_setSymbolWsAfterTail(SDF_Symbol arg, SDF_OptLayout wsAfterTail);
SDF_Symbol SDF_setSymbolWsAfterBraceOpen(SDF_Symbol arg, SDF_OptLayout wsAfterBraceOpen);
SDF_Symbol SDF_setSymbolSep(SDF_Symbol arg, SDF_Symbol sep);
SDF_Symbol SDF_setSymbolWsAfterSep(SDF_Symbol arg, SDF_OptLayout wsAfterSep);
SDF_Symbol SDF_setSymbolWsAfterBraceClose(SDF_Symbol arg, SDF_OptLayout wsAfterBraceClose);
SDF_Symbol SDF_setSymbolWsAfterComma(SDF_Symbol arg, SDF_OptLayout wsAfterComma);
SDF_Symbol SDF_setSymbolRest(SDF_Symbol arg, SDF_SymbolRest rest);
SDF_Symbol SDF_setSymbolWsAfterRest(SDF_Symbol arg, SDF_OptLayout wsAfterRest);
SDF_Symbol SDF_setSymbolArguments(SDF_Symbol arg, SDF_Symbols arguments);
SDF_Symbol SDF_setSymbolWsAfterArguments(SDF_Symbol arg, SDF_OptLayout wsAfterArguments);
SDF_Symbol SDF_setSymbolWsAfterEqualityGreaterThan(SDF_Symbol arg, SDF_OptLayout wsAfterEqualityGreaterThan);
SDF_Symbol SDF_setSymbolResults(SDF_Symbol arg, SDF_Symbol results);
SDF_Symbol SDF_setSymbolWsAfterResults(SDF_Symbol arg, SDF_OptLayout wsAfterResults);
SDF_Symbol SDF_setSymbolLeft(SDF_Symbol arg, SDF_Symbol left);
SDF_Symbol SDF_setSymbolWsAfterLeft(SDF_Symbol arg, SDF_OptLayout wsAfterLeft);
SDF_Symbol SDF_setSymbolWsAfterBar(SDF_Symbol arg, SDF_OptLayout wsAfterBar);
SDF_Symbol SDF_setSymbolRight(SDF_Symbol arg, SDF_Symbol right);
SDF_Symbol SDF_setSymbolWsAfterGreaterThan(SDF_Symbol arg, SDF_OptLayout wsAfterGreaterThan);
SDF_Symbol SDF_setSymbolWsAfterRight(SDF_Symbol arg, SDF_OptLayout wsAfterRight);
SDF_Symbol SDF_setSymbolSort(SDF_Symbol arg, SDF_Sort Sort);
SDF_Symbol SDF_setSymbolWsAfterSort(SDF_Symbol arg, SDF_OptLayout wsAfterSort);
SDF_Symbol SDF_setSymbolWsAfterBracketOpenBracketOpen(SDF_Symbol arg, SDF_OptLayout wsAfterBracketOpenBracketOpen);
SDF_Symbol SDF_setSymbolParameters(SDF_Symbol arg, SDF_SymbolParameters parameters);
SDF_Symbol SDF_setSymbolWsAfterParameters(SDF_Symbol arg, SDF_OptLayout wsAfterParameters);
ATbool SDF_isValidCharRange(SDF_CharRange arg);
ATbool SDF_isCharRangeDefault(SDF_CharRange arg);
ATbool SDF_isCharRangeRange(SDF_CharRange arg);
ATbool SDF_hasCharRangeCharacter(SDF_CharRange arg);
ATbool SDF_hasCharRangeStart(SDF_CharRange arg);
ATbool SDF_hasCharRangeWsAfterStart(SDF_CharRange arg);
ATbool SDF_hasCharRangeWsAfter(SDF_CharRange arg);
ATbool SDF_hasCharRangeEnd(SDF_CharRange arg);
SDF_Character SDF_getCharRangeCharacter(SDF_CharRange arg);
SDF_Character SDF_getCharRangeStart(SDF_CharRange arg);
SDF_OptLayout SDF_getCharRangeWsAfterStart(SDF_CharRange arg);
SDF_OptLayout SDF_getCharRangeWsAfter(SDF_CharRange arg);
SDF_Character SDF_getCharRangeEnd(SDF_CharRange arg);
SDF_CharRange SDF_setCharRangeCharacter(SDF_CharRange arg, SDF_Character Character);
SDF_CharRange SDF_setCharRangeStart(SDF_CharRange arg, SDF_Character start);
SDF_CharRange SDF_setCharRangeWsAfterStart(SDF_CharRange arg, SDF_OptLayout wsAfterStart);
SDF_CharRange SDF_setCharRangeWsAfter(SDF_CharRange arg, SDF_OptLayout wsAfter);
SDF_CharRange SDF_setCharRangeEnd(SDF_CharRange arg, SDF_Character end);
ATbool SDF_isValidCharRanges(SDF_CharRanges arg);
ATbool SDF_isCharRangesDefault(SDF_CharRanges arg);
ATbool SDF_isCharRangesConc(SDF_CharRanges arg);
ATbool SDF_isCharRangesBracket(SDF_CharRanges arg);
ATbool SDF_hasCharRangesCharRange(SDF_CharRanges arg);
ATbool SDF_hasCharRangesLeft(SDF_CharRanges arg);
ATbool SDF_hasCharRangesWsAfterLeft(SDF_CharRanges arg);
ATbool SDF_hasCharRangesRight(SDF_CharRanges arg);
ATbool SDF_hasCharRangesWsAfterParenOpen(SDF_CharRanges arg);
ATbool SDF_hasCharRangesCharRanges(SDF_CharRanges arg);
ATbool SDF_hasCharRangesWsAfterCharRanges(SDF_CharRanges arg);
SDF_CharRange SDF_getCharRangesCharRange(SDF_CharRanges arg);
SDF_CharRanges SDF_getCharRangesLeft(SDF_CharRanges arg);
SDF_OptLayout SDF_getCharRangesWsAfterLeft(SDF_CharRanges arg);
SDF_CharRanges SDF_getCharRangesRight(SDF_CharRanges arg);
SDF_OptLayout SDF_getCharRangesWsAfterParenOpen(SDF_CharRanges arg);
SDF_CharRanges SDF_getCharRangesCharRanges(SDF_CharRanges arg);
SDF_OptLayout SDF_getCharRangesWsAfterCharRanges(SDF_CharRanges arg);
SDF_CharRanges SDF_setCharRangesCharRange(SDF_CharRanges arg, SDF_CharRange CharRange);
SDF_CharRanges SDF_setCharRangesLeft(SDF_CharRanges arg, SDF_CharRanges left);
SDF_CharRanges SDF_setCharRangesWsAfterLeft(SDF_CharRanges arg, SDF_OptLayout wsAfterLeft);
SDF_CharRanges SDF_setCharRangesRight(SDF_CharRanges arg, SDF_CharRanges right);
SDF_CharRanges SDF_setCharRangesWsAfterParenOpen(SDF_CharRanges arg, SDF_OptLayout wsAfterParenOpen);
SDF_CharRanges SDF_setCharRangesCharRanges(SDF_CharRanges arg, SDF_CharRanges CharRanges);
SDF_CharRanges SDF_setCharRangesWsAfterCharRanges(SDF_CharRanges arg, SDF_OptLayout wsAfterCharRanges);
ATbool SDF_isValidOptCharRanges(SDF_OptCharRanges arg);
ATbool SDF_isOptCharRangesAbsent(SDF_OptCharRanges arg);
ATbool SDF_isOptCharRangesPresent(SDF_OptCharRanges arg);
ATbool SDF_hasOptCharRangesCharRanges(SDF_OptCharRanges arg);
SDF_CharRanges SDF_getOptCharRangesCharRanges(SDF_OptCharRanges arg);
SDF_OptCharRanges SDF_setOptCharRangesCharRanges(SDF_OptCharRanges arg, SDF_CharRanges CharRanges);
ATbool SDF_isValidCharClass(SDF_CharClass arg);
ATbool SDF_isCharClassSimpleCharclass(SDF_CharClass arg);
ATbool SDF_isCharClassComp(SDF_CharClass arg);
ATbool SDF_isCharClassDiff(SDF_CharClass arg);
ATbool SDF_isCharClassIsect(SDF_CharClass arg);
ATbool SDF_isCharClassUnion(SDF_CharClass arg);
ATbool SDF_isCharClassBracket(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterBracketOpen(SDF_CharClass arg);
ATbool SDF_hasCharClassOptCharRanges(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterOptCharRanges(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterTilde(SDF_CharClass arg);
ATbool SDF_hasCharClassCharClass(SDF_CharClass arg);
ATbool SDF_hasCharClassLeft(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterLeft(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterSlash(SDF_CharClass arg);
ATbool SDF_hasCharClassRight(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterSlashBackslash(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterBackslashSlash(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterParenOpen(SDF_CharClass arg);
ATbool SDF_hasCharClassWsAfterCharClass(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterBracketOpen(SDF_CharClass arg);
SDF_OptCharRanges SDF_getCharClassOptCharRanges(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterOptCharRanges(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterTilde(SDF_CharClass arg);
SDF_CharClass SDF_getCharClassCharClass(SDF_CharClass arg);
SDF_CharClass SDF_getCharClassLeft(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterLeft(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterSlash(SDF_CharClass arg);
SDF_CharClass SDF_getCharClassRight(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterSlashBackslash(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterBackslashSlash(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterParenOpen(SDF_CharClass arg);
SDF_OptLayout SDF_getCharClassWsAfterCharClass(SDF_CharClass arg);
SDF_CharClass SDF_setCharClassWsAfterBracketOpen(SDF_CharClass arg, SDF_OptLayout wsAfterBracketOpen);
SDF_CharClass SDF_setCharClassOptCharRanges(SDF_CharClass arg, SDF_OptCharRanges OptCharRanges);
SDF_CharClass SDF_setCharClassWsAfterOptCharRanges(SDF_CharClass arg, SDF_OptLayout wsAfterOptCharRanges);
SDF_CharClass SDF_setCharClassWsAfterTilde(SDF_CharClass arg, SDF_OptLayout wsAfterTilde);
SDF_CharClass SDF_setCharClassCharClass(SDF_CharClass arg, SDF_CharClass CharClass);
SDF_CharClass SDF_setCharClassLeft(SDF_CharClass arg, SDF_CharClass left);
SDF_CharClass SDF_setCharClassWsAfterLeft(SDF_CharClass arg, SDF_OptLayout wsAfterLeft);
SDF_CharClass SDF_setCharClassWsAfterSlash(SDF_CharClass arg, SDF_OptLayout wsAfterSlash);
SDF_CharClass SDF_setCharClassRight(SDF_CharClass arg, SDF_CharClass right);
SDF_CharClass SDF_setCharClassWsAfterSlashBackslash(SDF_CharClass arg, SDF_OptLayout wsAfterSlashBackslash);
SDF_CharClass SDF_setCharClassWsAfterBackslashSlash(SDF_CharClass arg, SDF_OptLayout wsAfterBackslashSlash);
SDF_CharClass SDF_setCharClassWsAfterParenOpen(SDF_CharClass arg, SDF_OptLayout wsAfterParenOpen);
SDF_CharClass SDF_setCharClassWsAfterCharClass(SDF_CharClass arg, SDF_OptLayout wsAfterCharClass);
ATbool SDF_isValidLexNumChar(SDF_LexNumChar arg);
ATbool SDF_isLexNumCharDigits(SDF_LexNumChar arg);
ATbool SDF_hasLexNumCharNumber(SDF_LexNumChar arg);
char* SDF_getLexNumCharNumber(SDF_LexNumChar arg);
SDF_LexNumChar SDF_setLexNumCharNumber(SDF_LexNumChar arg, const char* number);
ATbool SDF_isValidNumChar(SDF_NumChar arg);
ATbool SDF_isNumCharLexToCf(SDF_NumChar arg);
ATbool SDF_hasNumCharNumChar(SDF_NumChar arg);
SDF_LexNumChar SDF_getNumCharNumChar(SDF_NumChar arg);
SDF_NumChar SDF_setNumCharNumChar(SDF_NumChar arg, SDF_LexNumChar NumChar);
ATbool SDF_isValidLexShortChar(SDF_LexShortChar arg);
ATbool SDF_isLexShortCharRegular(SDF_LexShortChar arg);
ATbool SDF_isLexShortCharEscaped(SDF_LexShortChar arg);
ATbool SDF_hasLexShortCharCharacter(SDF_LexShortChar arg);
ATbool SDF_hasLexShortCharEscape(SDF_LexShortChar arg);
char SDF_getLexShortCharCharacter(SDF_LexShortChar arg);
char SDF_getLexShortCharEscape(SDF_LexShortChar arg);
SDF_LexShortChar SDF_setLexShortCharCharacter(SDF_LexShortChar arg, char character);
SDF_LexShortChar SDF_setLexShortCharEscape(SDF_LexShortChar arg, char escape);
ATbool SDF_isValidShortChar(SDF_ShortChar arg);
ATbool SDF_isShortCharLexToCf(SDF_ShortChar arg);
ATbool SDF_hasShortCharShortChar(SDF_ShortChar arg);
SDF_LexShortChar SDF_getShortCharShortChar(SDF_ShortChar arg);
SDF_ShortChar SDF_setShortCharShortChar(SDF_ShortChar arg, SDF_LexShortChar ShortChar);
ATbool SDF_isValidCharacter(SDF_Character arg);
ATbool SDF_isCharacterNumeric(SDF_Character arg);
ATbool SDF_isCharacterShort(SDF_Character arg);
ATbool SDF_isCharacterTop(SDF_Character arg);
ATbool SDF_isCharacterEof(SDF_Character arg);
ATbool SDF_isCharacterBot(SDF_Character arg);
ATbool SDF_isCharacterLabelUnderscoreStart(SDF_Character arg);
ATbool SDF_hasCharacterNumChar(SDF_Character arg);
ATbool SDF_hasCharacterShortChar(SDF_Character arg);
SDF_NumChar SDF_getCharacterNumChar(SDF_Character arg);
SDF_ShortChar SDF_getCharacterShortChar(SDF_Character arg);
SDF_Character SDF_setCharacterNumChar(SDF_Character arg, SDF_NumChar NumChar);
SDF_Character SDF_setCharacterShortChar(SDF_Character arg, SDF_ShortChar ShortChar);
ATbool SDF_isValidATermAttribute(SDF_ATermAttribute arg);
ATbool SDF_isATermAttributeDefault(SDF_ATermAttribute arg);
ATbool SDF_hasATermAttributeAterm(SDF_ATermAttribute arg);
SDF_ATerm SDF_getATermAttributeAterm(SDF_ATermAttribute arg);
SDF_ATermAttribute SDF_setATermAttributeAterm(SDF_ATermAttribute arg, SDF_ATerm aterm);
ATbool SDF_isValidAttribute(SDF_Attribute arg);
ATbool SDF_isAttributeTerm(SDF_Attribute arg);
ATbool SDF_isAttributeId(SDF_Attribute arg);
ATbool SDF_isAttributeBracket(SDF_Attribute arg);
ATbool SDF_isAttributeAssoc(SDF_Attribute arg);
ATbool SDF_isAttributeReject(SDF_Attribute arg);
ATbool SDF_isAttributePrefer(SDF_Attribute arg);
ATbool SDF_isAttributeAvoid(SDF_Attribute arg);
ATbool SDF_hasAttributeATermAttribute(SDF_Attribute arg);
ATbool SDF_hasAttributeWsAfterId(SDF_Attribute arg);
ATbool SDF_hasAttributeWsAfterParenOpen(SDF_Attribute arg);
ATbool SDF_hasAttributeModuleName(SDF_Attribute arg);
ATbool SDF_hasAttributeWsAfterModuleName(SDF_Attribute arg);
ATbool SDF_hasAttributeAssociativity(SDF_Attribute arg);
SDF_ATermAttribute SDF_getAttributeATermAttribute(SDF_Attribute arg);
SDF_OptLayout SDF_getAttributeWsAfterId(SDF_Attribute arg);
SDF_OptLayout SDF_getAttributeWsAfterParenOpen(SDF_Attribute arg);
SDF_ModuleName SDF_getAttributeModuleName(SDF_Attribute arg);
SDF_OptLayout SDF_getAttributeWsAfterModuleName(SDF_Attribute arg);
SDF_Associativity SDF_getAttributeAssociativity(SDF_Attribute arg);
SDF_Attribute SDF_setAttributeATermAttribute(SDF_Attribute arg, SDF_ATermAttribute ATermAttribute);
SDF_Attribute SDF_setAttributeWsAfterId(SDF_Attribute arg, SDF_OptLayout wsAfterId);
SDF_Attribute SDF_setAttributeWsAfterParenOpen(SDF_Attribute arg, SDF_OptLayout wsAfterParenOpen);
SDF_Attribute SDF_setAttributeModuleName(SDF_Attribute arg, SDF_ModuleName ModuleName);
SDF_Attribute SDF_setAttributeWsAfterModuleName(SDF_Attribute arg, SDF_OptLayout wsAfterModuleName);
SDF_Attribute SDF_setAttributeAssociativity(SDF_Attribute arg, SDF_Associativity Associativity);
ATbool SDF_isValidAttributes(SDF_Attributes arg);
ATbool SDF_isAttributesAttrs(SDF_Attributes arg);
ATbool SDF_isAttributesNoAttrs(SDF_Attributes arg);
ATbool SDF_hasAttributesWsAfterBraceOpen(SDF_Attributes arg);
ATbool SDF_hasAttributesList(SDF_Attributes arg);
ATbool SDF_hasAttributesWsAfterList(SDF_Attributes arg);
SDF_OptLayout SDF_getAttributesWsAfterBraceOpen(SDF_Attributes arg);
SDF_AttributeList SDF_getAttributesList(SDF_Attributes arg);
SDF_OptLayout SDF_getAttributesWsAfterList(SDF_Attributes arg);
SDF_Attributes SDF_setAttributesWsAfterBraceOpen(SDF_Attributes arg, SDF_OptLayout wsAfterBraceOpen);
SDF_Attributes SDF_setAttributesList(SDF_Attributes arg, SDF_AttributeList list);
SDF_Attributes SDF_setAttributesWsAfterList(SDF_Attributes arg, SDF_OptLayout wsAfterList);
ATbool SDF_isValidProduction(SDF_Production arg);
ATbool SDF_isProductionProd(SDF_Production arg);
ATbool SDF_isProductionPrefixFun(SDF_Production arg);
ATbool SDF_hasProductionSymbols(SDF_Production arg);
ATbool SDF_hasProductionWsAfterSymbols(SDF_Production arg);
ATbool SDF_hasProductionWsAfterGreaterThan(SDF_Production arg);
ATbool SDF_hasProductionResult(SDF_Production arg);
ATbool SDF_hasProductionWsAfterResult(SDF_Production arg);
ATbool SDF_hasProductionAttributes(SDF_Production arg);
ATbool SDF_hasProductionFun(SDF_Production arg);
ATbool SDF_hasProductionWsAfterFun(SDF_Production arg);
ATbool SDF_hasProductionWsAfterParenOpen(SDF_Production arg);
ATbool SDF_hasProductionArguments(SDF_Production arg);
ATbool SDF_hasProductionWsAfterArguments(SDF_Production arg);
ATbool SDF_hasProductionWsAfterParenClose(SDF_Production arg);
SDF_Symbols SDF_getProductionSymbols(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterSymbols(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterGreaterThan(SDF_Production arg);
SDF_Symbol SDF_getProductionResult(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterResult(SDF_Production arg);
SDF_Attributes SDF_getProductionAttributes(SDF_Production arg);
SDF_FunctionName SDF_getProductionFun(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterFun(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterParenOpen(SDF_Production arg);
SDF_SymbolArguments SDF_getProductionArguments(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterArguments(SDF_Production arg);
SDF_OptLayout SDF_getProductionWsAfterParenClose(SDF_Production arg);
SDF_Production SDF_setProductionSymbols(SDF_Production arg, SDF_Symbols Symbols);
SDF_Production SDF_setProductionWsAfterSymbols(SDF_Production arg, SDF_OptLayout wsAfterSymbols);
SDF_Production SDF_setProductionWsAfterGreaterThan(SDF_Production arg, SDF_OptLayout wsAfterGreaterThan);
SDF_Production SDF_setProductionResult(SDF_Production arg, SDF_Symbol result);
SDF_Production SDF_setProductionWsAfterResult(SDF_Production arg, SDF_OptLayout wsAfterResult);
SDF_Production SDF_setProductionAttributes(SDF_Production arg, SDF_Attributes Attributes);
SDF_Production SDF_setProductionFun(SDF_Production arg, SDF_FunctionName fun);
SDF_Production SDF_setProductionWsAfterFun(SDF_Production arg, SDF_OptLayout wsAfterFun);
SDF_Production SDF_setProductionWsAfterParenOpen(SDF_Production arg, SDF_OptLayout wsAfterParenOpen);
SDF_Production SDF_setProductionArguments(SDF_Production arg, SDF_SymbolArguments arguments);
SDF_Production SDF_setProductionWsAfterArguments(SDF_Production arg, SDF_OptLayout wsAfterArguments);
SDF_Production SDF_setProductionWsAfterParenClose(SDF_Production arg, SDF_OptLayout wsAfterParenClose);
ATbool SDF_isValidProductions(SDF_Productions arg);
ATbool SDF_isProductionsDefault(SDF_Productions arg);
ATbool SDF_hasProductionsList(SDF_Productions arg);
SDF_ProductionList SDF_getProductionsList(SDF_Productions arg);
SDF_Productions SDF_setProductionsList(SDF_Productions arg, SDF_ProductionList list);
ATbool SDF_isValidAttributeList(SDF_AttributeList arg);
ATbool SDF_isAttributeListEmpty(SDF_AttributeList arg);
ATbool SDF_isAttributeListSingle(SDF_AttributeList arg);
ATbool SDF_isAttributeListMany(SDF_AttributeList arg);
ATbool SDF_hasAttributeListHead(SDF_AttributeList arg);
ATbool SDF_hasAttributeListWsAfterHead(SDF_AttributeList arg);
ATbool SDF_hasAttributeListWsAfterSep(SDF_AttributeList arg);
ATbool SDF_hasAttributeListTail(SDF_AttributeList arg);
SDF_AttributeList SDF_getAttributeListTail(SDF_AttributeList arg);
SDF_Attribute SDF_getAttributeListHead(SDF_AttributeList arg);
SDF_OptLayout SDF_getAttributeListWsAfterHead(SDF_AttributeList arg);
SDF_OptLayout SDF_getAttributeListWsAfterSep(SDF_AttributeList arg);
SDF_AttributeList SDF_setAttributeListHead(SDF_AttributeList arg, SDF_Attribute head);
SDF_AttributeList SDF_setAttributeListWsAfterHead(SDF_AttributeList arg, SDF_OptLayout wsAfterHead);
SDF_AttributeList SDF_setAttributeListWsAfterSep(SDF_AttributeList arg, SDF_OptLayout wsAfterSep);
SDF_AttributeList SDF_setAttributeListTail(SDF_AttributeList arg, SDF_AttributeList tail);
ATbool SDF_isValidProductionList(SDF_ProductionList arg);
ATbool SDF_isProductionListEmpty(SDF_ProductionList arg);
ATbool SDF_isProductionListSingle(SDF_ProductionList arg);
ATbool SDF_isProductionListMany(SDF_ProductionList arg);
ATbool SDF_hasProductionListHead(SDF_ProductionList arg);
ATbool SDF_hasProductionListWsAfterHead(SDF_ProductionList arg);
ATbool SDF_hasProductionListTail(SDF_ProductionList arg);
SDF_ProductionList SDF_getProductionListTail(SDF_ProductionList arg);
SDF_Production SDF_getProductionListHead(SDF_ProductionList arg);
SDF_OptLayout SDF_getProductionListWsAfterHead(SDF_ProductionList arg);
SDF_ProductionList SDF_setProductionListHead(SDF_ProductionList arg, SDF_Production head);
SDF_ProductionList SDF_setProductionListWsAfterHead(SDF_ProductionList arg, SDF_OptLayout wsAfterHead);
SDF_ProductionList SDF_setProductionListTail(SDF_ProductionList arg, SDF_ProductionList tail);
ATbool SDF_isValidLabel(SDF_Label arg);
ATbool SDF_isLabelQuoted(SDF_Label arg);
ATbool SDF_isLabelUnquoted(SDF_Label arg);
ATbool SDF_hasLabelStrCon(SDF_Label arg);
ATbool SDF_hasLabelIdCon(SDF_Label arg);
SDF_StrCon SDF_getLabelStrCon(SDF_Label arg);
SDF_IdCon SDF_getLabelIdCon(SDF_Label arg);
SDF_Label SDF_setLabelStrCon(SDF_Label arg, SDF_StrCon StrCon);
SDF_Label SDF_setLabelIdCon(SDF_Label arg, SDF_IdCon IdCon);
ATbool SDF_isValidLexSingleQuotedStrChar(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_isLexSingleQuotedStrCharNewline(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_isLexSingleQuotedStrCharTab(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_isLexSingleQuotedStrCharQuote(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_isLexSingleQuotedStrCharBackslash(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_isLexSingleQuotedStrCharDecimal(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_isLexSingleQuotedStrCharNormal(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_hasLexSingleQuotedStrCharA(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_hasLexSingleQuotedStrCharB(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_hasLexSingleQuotedStrCharC(SDF_LexSingleQuotedStrChar arg);
ATbool SDF_hasLexSingleQuotedStrCharCh(SDF_LexSingleQuotedStrChar arg);
char SDF_getLexSingleQuotedStrCharA(SDF_LexSingleQuotedStrChar arg);
char SDF_getLexSingleQuotedStrCharB(SDF_LexSingleQuotedStrChar arg);
char SDF_getLexSingleQuotedStrCharC(SDF_LexSingleQuotedStrChar arg);
char SDF_getLexSingleQuotedStrCharCh(SDF_LexSingleQuotedStrChar arg);
SDF_LexSingleQuotedStrChar SDF_setLexSingleQuotedStrCharA(SDF_LexSingleQuotedStrChar arg, char a);
SDF_LexSingleQuotedStrChar SDF_setLexSingleQuotedStrCharB(SDF_LexSingleQuotedStrChar arg, char b);
SDF_LexSingleQuotedStrChar SDF_setLexSingleQuotedStrCharC(SDF_LexSingleQuotedStrChar arg, char c);
SDF_LexSingleQuotedStrChar SDF_setLexSingleQuotedStrCharCh(SDF_LexSingleQuotedStrChar arg, char ch);
ATbool SDF_isValidSingleQuotedStrChar(SDF_SingleQuotedStrChar arg);
ATbool SDF_isSingleQuotedStrCharLexToCf(SDF_SingleQuotedStrChar arg);
ATbool SDF_hasSingleQuotedStrCharSingleQuotedStrChar(SDF_SingleQuotedStrChar arg);
SDF_LexSingleQuotedStrChar SDF_getSingleQuotedStrCharSingleQuotedStrChar(SDF_SingleQuotedStrChar arg);
SDF_SingleQuotedStrChar SDF_setSingleQuotedStrCharSingleQuotedStrChar(SDF_SingleQuotedStrChar arg, SDF_LexSingleQuotedStrChar SingleQuotedStrChar);
ATbool SDF_isValidLexSingleQuotedStrCon(SDF_LexSingleQuotedStrCon arg);
ATbool SDF_isLexSingleQuotedStrConDefault(SDF_LexSingleQuotedStrCon arg);
ATbool SDF_hasLexSingleQuotedStrConChars(SDF_LexSingleQuotedStrCon arg);
SDF_LexSingleQuotedStrCharChars SDF_getLexSingleQuotedStrConChars(SDF_LexSingleQuotedStrCon arg);
SDF_LexSingleQuotedStrCon SDF_setLexSingleQuotedStrConChars(SDF_LexSingleQuotedStrCon arg, SDF_LexSingleQuotedStrCharChars chars);
ATbool SDF_isValidSingleQuotedStrCon(SDF_SingleQuotedStrCon arg);
ATbool SDF_isSingleQuotedStrConLexToCf(SDF_SingleQuotedStrCon arg);
ATbool SDF_hasSingleQuotedStrConSingleQuotedStrCon(SDF_SingleQuotedStrCon arg);
SDF_LexSingleQuotedStrCon SDF_getSingleQuotedStrConSingleQuotedStrCon(SDF_SingleQuotedStrCon arg);
SDF_SingleQuotedStrCon SDF_setSingleQuotedStrConSingleQuotedStrCon(SDF_SingleQuotedStrCon arg, SDF_LexSingleQuotedStrCon SingleQuotedStrCon);
ATbool SDF_isValidFunctionName(SDF_FunctionName arg);
ATbool SDF_isFunctionNameUnquotedFun(SDF_FunctionName arg);
ATbool SDF_isFunctionNameQuotedFun(SDF_FunctionName arg);
ATbool SDF_hasFunctionNameIdCon(SDF_FunctionName arg);
ATbool SDF_hasFunctionNameStrCon(SDF_FunctionName arg);
SDF_IdCon SDF_getFunctionNameIdCon(SDF_FunctionName arg);
SDF_StrCon SDF_getFunctionNameStrCon(SDF_FunctionName arg);
SDF_FunctionName SDF_setFunctionNameIdCon(SDF_FunctionName arg, SDF_IdCon IdCon);
SDF_FunctionName SDF_setFunctionNameStrCon(SDF_FunctionName arg, SDF_StrCon StrCon);
ATbool SDF_isValidLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg);
ATbool SDF_isLexSingleQuotedStrCharCharsEmpty(SDF_LexSingleQuotedStrCharChars arg);
ATbool SDF_isLexSingleQuotedStrCharCharsSingle(SDF_LexSingleQuotedStrCharChars arg);
ATbool SDF_isLexSingleQuotedStrCharCharsMany(SDF_LexSingleQuotedStrCharChars arg);
ATbool SDF_hasLexSingleQuotedStrCharCharsHead(SDF_LexSingleQuotedStrCharChars arg);
ATbool SDF_hasLexSingleQuotedStrCharCharsTail(SDF_LexSingleQuotedStrCharChars arg);
SDF_LexSingleQuotedStrChar SDF_getLexSingleQuotedStrCharCharsHead(SDF_LexSingleQuotedStrCharChars arg);
SDF_LexSingleQuotedStrCharChars SDF_getLexSingleQuotedStrCharCharsTail(SDF_LexSingleQuotedStrCharChars arg);
SDF_LexSingleQuotedStrCharChars SDF_setLexSingleQuotedStrCharCharsHead(SDF_LexSingleQuotedStrCharChars arg, SDF_LexSingleQuotedStrChar head);
SDF_LexSingleQuotedStrCharChars SDF_setLexSingleQuotedStrCharCharsTail(SDF_LexSingleQuotedStrCharChars arg, SDF_LexSingleQuotedStrCharChars tail);
ATbool SDF_isValidSymbolArguments(SDF_SymbolArguments arg);
ATbool SDF_isSymbolArgumentsEmpty(SDF_SymbolArguments arg);
ATbool SDF_isSymbolArgumentsSingle(SDF_SymbolArguments arg);
ATbool SDF_isSymbolArgumentsMany(SDF_SymbolArguments arg);
ATbool SDF_hasSymbolArgumentsHead(SDF_SymbolArguments arg);
ATbool SDF_hasSymbolArgumentsWsAfterHead(SDF_SymbolArguments arg);
ATbool SDF_hasSymbolArgumentsWsAfterSep(SDF_SymbolArguments arg);
ATbool SDF_hasSymbolArgumentsTail(SDF_SymbolArguments arg);
SDF_SymbolArguments SDF_getSymbolArgumentsTail(SDF_SymbolArguments arg);
SDF_Symbol SDF_getSymbolArgumentsHead(SDF_SymbolArguments arg);
SDF_OptLayout SDF_getSymbolArgumentsWsAfterHead(SDF_SymbolArguments arg);
SDF_OptLayout SDF_getSymbolArgumentsWsAfterSep(SDF_SymbolArguments arg);
SDF_SymbolArguments SDF_setSymbolArgumentsHead(SDF_SymbolArguments arg, SDF_Symbol head);
SDF_SymbolArguments SDF_setSymbolArgumentsWsAfterHead(SDF_SymbolArguments arg, SDF_OptLayout wsAfterHead);
SDF_SymbolArguments SDF_setSymbolArgumentsWsAfterSep(SDF_SymbolArguments arg, SDF_OptLayout wsAfterSep);
SDF_SymbolArguments SDF_setSymbolArgumentsTail(SDF_SymbolArguments arg, SDF_SymbolArguments tail);
ATbool SDF_isValidLexModuleWord(SDF_LexModuleWord arg);
ATbool SDF_isLexModuleWordWord(SDF_LexModuleWord arg);
ATbool SDF_hasLexModuleWordLetters(SDF_LexModuleWord arg);
char* SDF_getLexModuleWordLetters(SDF_LexModuleWord arg);
SDF_LexModuleWord SDF_setLexModuleWordLetters(SDF_LexModuleWord arg, const char* letters);
ATbool SDF_isValidModuleWord(SDF_ModuleWord arg);
ATbool SDF_isModuleWordLexToCf(SDF_ModuleWord arg);
ATbool SDF_hasModuleWordModuleWord(SDF_ModuleWord arg);
SDF_LexModuleWord SDF_getModuleWordModuleWord(SDF_ModuleWord arg);
SDF_ModuleWord SDF_setModuleWordModuleWord(SDF_ModuleWord arg, SDF_LexModuleWord ModuleWord);
ATbool SDF_isValidLexModuleId(SDF_LexModuleId arg);
ATbool SDF_isLexModuleIdLeaf(SDF_LexModuleId arg);
ATbool SDF_isLexModuleIdRoot(SDF_LexModuleId arg);
ATbool SDF_isLexModuleIdPath(SDF_LexModuleId arg);
ATbool SDF_hasLexModuleIdModuleWord(SDF_LexModuleId arg);
ATbool SDF_hasLexModuleIdBasename(SDF_LexModuleId arg);
ATbool SDF_hasLexModuleIdDirname(SDF_LexModuleId arg);
SDF_LexModuleWord SDF_getLexModuleIdModuleWord(SDF_LexModuleId arg);
SDF_LexModuleId SDF_getLexModuleIdBasename(SDF_LexModuleId arg);
SDF_LexModuleWord SDF_getLexModuleIdDirname(SDF_LexModuleId arg);
SDF_LexModuleId SDF_setLexModuleIdModuleWord(SDF_LexModuleId arg, SDF_LexModuleWord ModuleWord);
SDF_LexModuleId SDF_setLexModuleIdBasename(SDF_LexModuleId arg, SDF_LexModuleId basename);
SDF_LexModuleId SDF_setLexModuleIdDirname(SDF_LexModuleId arg, SDF_LexModuleWord dirname);
ATbool SDF_isValidModuleId(SDF_ModuleId arg);
ATbool SDF_isModuleIdLexToCf(SDF_ModuleId arg);
ATbool SDF_hasModuleIdModuleId(SDF_ModuleId arg);
SDF_LexModuleId SDF_getModuleIdModuleId(SDF_ModuleId arg);
SDF_ModuleId SDF_setModuleIdModuleId(SDF_ModuleId arg, SDF_LexModuleId ModuleId);
ATbool SDF_isValidDefinition(SDF_Definition arg);
ATbool SDF_isDefinitionDefault(SDF_Definition arg);
ATbool SDF_hasDefinitionList(SDF_Definition arg);
SDF_ModuleList SDF_getDefinitionList(SDF_Definition arg);
SDF_Definition SDF_setDefinitionList(SDF_Definition arg, SDF_ModuleList list);
ATbool SDF_isValidModule(SDF_Module arg);
ATbool SDF_isModuleModule(SDF_Module arg);
ATbool SDF_hasModuleWsAfterModule(SDF_Module arg);
ATbool SDF_hasModuleModuleName(SDF_Module arg);
ATbool SDF_hasModuleWsAfterModuleName(SDF_Module arg);
ATbool SDF_hasModuleList(SDF_Module arg);
ATbool SDF_hasModuleWsAfterList(SDF_Module arg);
ATbool SDF_hasModuleSections(SDF_Module arg);
SDF_OptLayout SDF_getModuleWsAfterModule(SDF_Module arg);
SDF_ModuleName SDF_getModuleModuleName(SDF_Module arg);
SDF_OptLayout SDF_getModuleWsAfterModuleName(SDF_Module arg);
SDF_ImpSectionList SDF_getModuleList(SDF_Module arg);
SDF_OptLayout SDF_getModuleWsAfterList(SDF_Module arg);
SDF_Sections SDF_getModuleSections(SDF_Module arg);
SDF_Module SDF_setModuleWsAfterModule(SDF_Module arg, SDF_OptLayout wsAfterModule);
SDF_Module SDF_setModuleModuleName(SDF_Module arg, SDF_ModuleName ModuleName);
SDF_Module SDF_setModuleWsAfterModuleName(SDF_Module arg, SDF_OptLayout wsAfterModuleName);
SDF_Module SDF_setModuleList(SDF_Module arg, SDF_ImpSectionList list);
SDF_Module SDF_setModuleWsAfterList(SDF_Module arg, SDF_OptLayout wsAfterList);
SDF_Module SDF_setModuleSections(SDF_Module arg, SDF_Sections Sections);
ATbool SDF_isValidSection(SDF_Section arg);
ATbool SDF_isSectionExports(SDF_Section arg);
ATbool SDF_isSectionHiddens(SDF_Section arg);
ATbool SDF_hasSectionWsAfterExports(SDF_Section arg);
ATbool SDF_hasSectionGrammar(SDF_Section arg);
ATbool SDF_hasSectionWsAfterHiddens(SDF_Section arg);
SDF_OptLayout SDF_getSectionWsAfterExports(SDF_Section arg);
SDF_Grammar SDF_getSectionGrammar(SDF_Section arg);
SDF_OptLayout SDF_getSectionWsAfterHiddens(SDF_Section arg);
SDF_Section SDF_setSectionWsAfterExports(SDF_Section arg, SDF_OptLayout wsAfterExports);
SDF_Section SDF_setSectionGrammar(SDF_Section arg, SDF_Grammar Grammar);
SDF_Section SDF_setSectionWsAfterHiddens(SDF_Section arg, SDF_OptLayout wsAfterHiddens);
ATbool SDF_isValidSections(SDF_Sections arg);
ATbool SDF_isSectionsDefault(SDF_Sections arg);
ATbool SDF_hasSectionsList(SDF_Sections arg);
SDF_SectionList SDF_getSectionsList(SDF_Sections arg);
SDF_Sections SDF_setSectionsList(SDF_Sections arg, SDF_SectionList list);
ATbool SDF_isValidModuleName(SDF_ModuleName arg);
ATbool SDF_isModuleNameUnparameterized(SDF_ModuleName arg);
ATbool SDF_isModuleNameParameterized(SDF_ModuleName arg);
ATbool SDF_hasModuleNameModuleId(SDF_ModuleName arg);
ATbool SDF_hasModuleNameWsAfterModuleId(SDF_ModuleName arg);
ATbool SDF_hasModuleNameWsAfterBracketOpen(SDF_ModuleName arg);
ATbool SDF_hasModuleNameParams(SDF_ModuleName arg);
ATbool SDF_hasModuleNameWsAfterParams(SDF_ModuleName arg);
SDF_ModuleId SDF_getModuleNameModuleId(SDF_ModuleName arg);
SDF_OptLayout SDF_getModuleNameWsAfterModuleId(SDF_ModuleName arg);
SDF_OptLayout SDF_getModuleNameWsAfterBracketOpen(SDF_ModuleName arg);
SDF_Symbols SDF_getModuleNameParams(SDF_ModuleName arg);
SDF_OptLayout SDF_getModuleNameWsAfterParams(SDF_ModuleName arg);
SDF_ModuleName SDF_setModuleNameModuleId(SDF_ModuleName arg, SDF_ModuleId ModuleId);
SDF_ModuleName SDF_setModuleNameWsAfterModuleId(SDF_ModuleName arg, SDF_OptLayout wsAfterModuleId);
SDF_ModuleName SDF_setModuleNameWsAfterBracketOpen(SDF_ModuleName arg, SDF_OptLayout wsAfterBracketOpen);
SDF_ModuleName SDF_setModuleNameParams(SDF_ModuleName arg, SDF_Symbols params);
SDF_ModuleName SDF_setModuleNameWsAfterParams(SDF_ModuleName arg, SDF_OptLayout wsAfterParams);
ATbool SDF_isValidImpSection(SDF_ImpSection arg);
ATbool SDF_isImpSectionImports(SDF_ImpSection arg);
ATbool SDF_hasImpSectionWsAfterImports(SDF_ImpSection arg);
ATbool SDF_hasImpSectionList(SDF_ImpSection arg);
SDF_OptLayout SDF_getImpSectionWsAfterImports(SDF_ImpSection arg);
SDF_Imports SDF_getImpSectionList(SDF_ImpSection arg);
SDF_ImpSection SDF_setImpSectionWsAfterImports(SDF_ImpSection arg, SDF_OptLayout wsAfterImports);
SDF_ImpSection SDF_setImpSectionList(SDF_ImpSection arg, SDF_Imports list);
ATbool SDF_isValidImports(SDF_Imports arg);
ATbool SDF_isImportsDefault(SDF_Imports arg);
ATbool SDF_hasImportsList(SDF_Imports arg);
SDF_ImportList SDF_getImportsList(SDF_Imports arg);
SDF_Imports SDF_setImportsList(SDF_Imports arg, SDF_ImportList list);
ATbool SDF_isValidImport(SDF_Import arg);
ATbool SDF_isImportModule(SDF_Import arg);
ATbool SDF_isImportRenamedModule(SDF_Import arg);
ATbool SDF_isImportBracket(SDF_Import arg);
ATbool SDF_hasImportModuleName(SDF_Import arg);
ATbool SDF_hasImportWsAfterModuleName(SDF_Import arg);
ATbool SDF_hasImportRenamings(SDF_Import arg);
ATbool SDF_hasImportWsAfterParenOpen(SDF_Import arg);
ATbool SDF_hasImportImport(SDF_Import arg);
ATbool SDF_hasImportWsAfterImport(SDF_Import arg);
SDF_ModuleName SDF_getImportModuleName(SDF_Import arg);
SDF_OptLayout SDF_getImportWsAfterModuleName(SDF_Import arg);
SDF_Renamings SDF_getImportRenamings(SDF_Import arg);
SDF_OptLayout SDF_getImportWsAfterParenOpen(SDF_Import arg);
SDF_Import SDF_getImportImport(SDF_Import arg);
SDF_OptLayout SDF_getImportWsAfterImport(SDF_Import arg);
SDF_Import SDF_setImportModuleName(SDF_Import arg, SDF_ModuleName ModuleName);
SDF_Import SDF_setImportWsAfterModuleName(SDF_Import arg, SDF_OptLayout wsAfterModuleName);
SDF_Import SDF_setImportRenamings(SDF_Import arg, SDF_Renamings Renamings);
SDF_Import SDF_setImportWsAfterParenOpen(SDF_Import arg, SDF_OptLayout wsAfterParenOpen);
SDF_Import SDF_setImportImport(SDF_Import arg, SDF_Import Import);
SDF_Import SDF_setImportWsAfterImport(SDF_Import arg, SDF_OptLayout wsAfterImport);
ATbool SDF_isValidModuleList(SDF_ModuleList arg);
ATbool SDF_isModuleListEmpty(SDF_ModuleList arg);
ATbool SDF_isModuleListSingle(SDF_ModuleList arg);
ATbool SDF_isModuleListMany(SDF_ModuleList arg);
ATbool SDF_hasModuleListHead(SDF_ModuleList arg);
ATbool SDF_hasModuleListWsAfterHead(SDF_ModuleList arg);
ATbool SDF_hasModuleListTail(SDF_ModuleList arg);
SDF_ModuleList SDF_getModuleListTail(SDF_ModuleList arg);
SDF_Module SDF_getModuleListHead(SDF_ModuleList arg);
SDF_OptLayout SDF_getModuleListWsAfterHead(SDF_ModuleList arg);
SDF_ModuleList SDF_setModuleListHead(SDF_ModuleList arg, SDF_Module head);
SDF_ModuleList SDF_setModuleListWsAfterHead(SDF_ModuleList arg, SDF_OptLayout wsAfterHead);
SDF_ModuleList SDF_setModuleListTail(SDF_ModuleList arg, SDF_ModuleList tail);
ATbool SDF_isValidImpSectionList(SDF_ImpSectionList arg);
ATbool SDF_isImpSectionListEmpty(SDF_ImpSectionList arg);
ATbool SDF_isImpSectionListSingle(SDF_ImpSectionList arg);
ATbool SDF_isImpSectionListMany(SDF_ImpSectionList arg);
ATbool SDF_hasImpSectionListHead(SDF_ImpSectionList arg);
ATbool SDF_hasImpSectionListWsAfterHead(SDF_ImpSectionList arg);
ATbool SDF_hasImpSectionListTail(SDF_ImpSectionList arg);
SDF_ImpSectionList SDF_getImpSectionListTail(SDF_ImpSectionList arg);
SDF_ImpSection SDF_getImpSectionListHead(SDF_ImpSectionList arg);
SDF_OptLayout SDF_getImpSectionListWsAfterHead(SDF_ImpSectionList arg);
SDF_ImpSectionList SDF_setImpSectionListHead(SDF_ImpSectionList arg, SDF_ImpSection head);
SDF_ImpSectionList SDF_setImpSectionListWsAfterHead(SDF_ImpSectionList arg, SDF_OptLayout wsAfterHead);
SDF_ImpSectionList SDF_setImpSectionListTail(SDF_ImpSectionList arg, SDF_ImpSectionList tail);
ATbool SDF_isValidSectionList(SDF_SectionList arg);
ATbool SDF_isSectionListEmpty(SDF_SectionList arg);
ATbool SDF_isSectionListSingle(SDF_SectionList arg);
ATbool SDF_isSectionListMany(SDF_SectionList arg);
ATbool SDF_hasSectionListHead(SDF_SectionList arg);
ATbool SDF_hasSectionListWsAfterHead(SDF_SectionList arg);
ATbool SDF_hasSectionListTail(SDF_SectionList arg);
SDF_SectionList SDF_getSectionListTail(SDF_SectionList arg);
SDF_Section SDF_getSectionListHead(SDF_SectionList arg);
SDF_OptLayout SDF_getSectionListWsAfterHead(SDF_SectionList arg);
SDF_SectionList SDF_setSectionListHead(SDF_SectionList arg, SDF_Section head);
SDF_SectionList SDF_setSectionListWsAfterHead(SDF_SectionList arg, SDF_OptLayout wsAfterHead);
SDF_SectionList SDF_setSectionListTail(SDF_SectionList arg, SDF_SectionList tail);
ATbool SDF_isValidImportList(SDF_ImportList arg);
ATbool SDF_isImportListEmpty(SDF_ImportList arg);
ATbool SDF_isImportListSingle(SDF_ImportList arg);
ATbool SDF_isImportListMany(SDF_ImportList arg);
ATbool SDF_hasImportListHead(SDF_ImportList arg);
ATbool SDF_hasImportListWsAfterHead(SDF_ImportList arg);
ATbool SDF_hasImportListTail(SDF_ImportList arg);
SDF_ImportList SDF_getImportListTail(SDF_ImportList arg);
SDF_Import SDF_getImportListHead(SDF_ImportList arg);
SDF_OptLayout SDF_getImportListWsAfterHead(SDF_ImportList arg);
SDF_ImportList SDF_setImportListHead(SDF_ImportList arg, SDF_Import head);
SDF_ImportList SDF_setImportListWsAfterHead(SDF_ImportList arg, SDF_OptLayout wsAfterHead);
SDF_ImportList SDF_setImportListTail(SDF_ImportList arg, SDF_ImportList tail);
ATbool SDF_isValidAssociativity(SDF_Associativity arg);
ATbool SDF_isAssociativityLeft(SDF_Associativity arg);
ATbool SDF_isAssociativityRight(SDF_Associativity arg);
ATbool SDF_isAssociativityNonAssoc(SDF_Associativity arg);
ATbool SDF_isAssociativityAssoc(SDF_Associativity arg);
ATbool SDF_isValidArgumentIndicator(SDF_ArgumentIndicator arg);
ATbool SDF_isArgumentIndicatorDefault(SDF_ArgumentIndicator arg);
ATbool SDF_hasArgumentIndicatorWsAfterLessThan(SDF_ArgumentIndicator arg);
ATbool SDF_hasArgumentIndicatorArguments(SDF_ArgumentIndicator arg);
ATbool SDF_hasArgumentIndicatorWsAfterArguments(SDF_ArgumentIndicator arg);
SDF_OptLayout SDF_getArgumentIndicatorWsAfterLessThan(SDF_ArgumentIndicator arg);
SDF_NatConArguments SDF_getArgumentIndicatorArguments(SDF_ArgumentIndicator arg);
SDF_OptLayout SDF_getArgumentIndicatorWsAfterArguments(SDF_ArgumentIndicator arg);
SDF_ArgumentIndicator SDF_setArgumentIndicatorWsAfterLessThan(SDF_ArgumentIndicator arg, SDF_OptLayout wsAfterLessThan);
SDF_ArgumentIndicator SDF_setArgumentIndicatorArguments(SDF_ArgumentIndicator arg, SDF_NatConArguments arguments);
SDF_ArgumentIndicator SDF_setArgumentIndicatorWsAfterArguments(SDF_ArgumentIndicator arg, SDF_OptLayout wsAfterArguments);
ATbool SDF_isValidGroup(SDF_Group arg);
ATbool SDF_isGroupWithArguments(SDF_Group arg);
ATbool SDF_isGroupNonTransitive(SDF_Group arg);
ATbool SDF_isGroupSimpleGroup(SDF_Group arg);
ATbool SDF_isGroupProdsGroup(SDF_Group arg);
ATbool SDF_isGroupAssocGroup(SDF_Group arg);
ATbool SDF_hasGroupGroup(SDF_Group arg);
ATbool SDF_hasGroupWsAfterGroup(SDF_Group arg);
ATbool SDF_hasGroupArgumentIndicator(SDF_Group arg);
ATbool SDF_hasGroupProduction(SDF_Group arg);
ATbool SDF_hasGroupWsAfterBraceOpen(SDF_Group arg);
ATbool SDF_hasGroupProductions(SDF_Group arg);
ATbool SDF_hasGroupWsAfterProductions(SDF_Group arg);
ATbool SDF_hasGroupAssociativity(SDF_Group arg);
ATbool SDF_hasGroupWsAfterAssociativity(SDF_Group arg);
ATbool SDF_hasGroupWsAfterColon(SDF_Group arg);
SDF_Group SDF_getGroupGroup(SDF_Group arg);
SDF_OptLayout SDF_getGroupWsAfterGroup(SDF_Group arg);
SDF_ArgumentIndicator SDF_getGroupArgumentIndicator(SDF_Group arg);
SDF_Production SDF_getGroupProduction(SDF_Group arg);
SDF_OptLayout SDF_getGroupWsAfterBraceOpen(SDF_Group arg);
SDF_Productions SDF_getGroupProductions(SDF_Group arg);
SDF_OptLayout SDF_getGroupWsAfterProductions(SDF_Group arg);
SDF_Associativity SDF_getGroupAssociativity(SDF_Group arg);
SDF_OptLayout SDF_getGroupWsAfterAssociativity(SDF_Group arg);
SDF_OptLayout SDF_getGroupWsAfterColon(SDF_Group arg);
SDF_Group SDF_setGroupGroup(SDF_Group arg, SDF_Group Group);
SDF_Group SDF_setGroupWsAfterGroup(SDF_Group arg, SDF_OptLayout wsAfterGroup);
SDF_Group SDF_setGroupArgumentIndicator(SDF_Group arg, SDF_ArgumentIndicator ArgumentIndicator);
SDF_Group SDF_setGroupProduction(SDF_Group arg, SDF_Production Production);
SDF_Group SDF_setGroupWsAfterBraceOpen(SDF_Group arg, SDF_OptLayout wsAfterBraceOpen);
SDF_Group SDF_setGroupProductions(SDF_Group arg, SDF_Productions Productions);
SDF_Group SDF_setGroupWsAfterProductions(SDF_Group arg, SDF_OptLayout wsAfterProductions);
SDF_Group SDF_setGroupAssociativity(SDF_Group arg, SDF_Associativity Associativity);
SDF_Group SDF_setGroupWsAfterAssociativity(SDF_Group arg, SDF_OptLayout wsAfterAssociativity);
SDF_Group SDF_setGroupWsAfterColon(SDF_Group arg, SDF_OptLayout wsAfterColon);
ATbool SDF_isValidPriority(SDF_Priority arg);
ATbool SDF_isPriorityChain(SDF_Priority arg);
ATbool SDF_isPriorityAssoc(SDF_Priority arg);
ATbool SDF_hasPriorityList(SDF_Priority arg);
ATbool SDF_hasPriorityLeft(SDF_Priority arg);
ATbool SDF_hasPriorityWsAfterLeft(SDF_Priority arg);
ATbool SDF_hasPriorityAssociativity(SDF_Priority arg);
ATbool SDF_hasPriorityWsAfterAssociativity(SDF_Priority arg);
ATbool SDF_hasPriorityRight(SDF_Priority arg);
SDF_GroupList SDF_getPriorityList(SDF_Priority arg);
SDF_Group SDF_getPriorityLeft(SDF_Priority arg);
SDF_OptLayout SDF_getPriorityWsAfterLeft(SDF_Priority arg);
SDF_Associativity SDF_getPriorityAssociativity(SDF_Priority arg);
SDF_OptLayout SDF_getPriorityWsAfterAssociativity(SDF_Priority arg);
SDF_Group SDF_getPriorityRight(SDF_Priority arg);
SDF_Priority SDF_setPriorityList(SDF_Priority arg, SDF_GroupList list);
SDF_Priority SDF_setPriorityLeft(SDF_Priority arg, SDF_Group left);
SDF_Priority SDF_setPriorityWsAfterLeft(SDF_Priority arg, SDF_OptLayout wsAfterLeft);
SDF_Priority SDF_setPriorityAssociativity(SDF_Priority arg, SDF_Associativity Associativity);
SDF_Priority SDF_setPriorityWsAfterAssociativity(SDF_Priority arg, SDF_OptLayout wsAfterAssociativity);
SDF_Priority SDF_setPriorityRight(SDF_Priority arg, SDF_Group right);
ATbool SDF_isValidPriorities(SDF_Priorities arg);
ATbool SDF_isPrioritiesDefault(SDF_Priorities arg);
ATbool SDF_hasPrioritiesList(SDF_Priorities arg);
SDF_PriorityList SDF_getPrioritiesList(SDF_Priorities arg);
SDF_Priorities SDF_setPrioritiesList(SDF_Priorities arg, SDF_PriorityList list);
ATbool SDF_isValidNatConArguments(SDF_NatConArguments arg);
ATbool SDF_isNatConArgumentsEmpty(SDF_NatConArguments arg);
ATbool SDF_isNatConArgumentsSingle(SDF_NatConArguments arg);
ATbool SDF_isNatConArgumentsMany(SDF_NatConArguments arg);
ATbool SDF_hasNatConArgumentsHead(SDF_NatConArguments arg);
ATbool SDF_hasNatConArgumentsWsAfterHead(SDF_NatConArguments arg);
ATbool SDF_hasNatConArgumentsWsAfterSep(SDF_NatConArguments arg);
ATbool SDF_hasNatConArgumentsTail(SDF_NatConArguments arg);
SDF_NatConArguments SDF_getNatConArgumentsTail(SDF_NatConArguments arg);
SDF_NatCon SDF_getNatConArgumentsHead(SDF_NatConArguments arg);
SDF_OptLayout SDF_getNatConArgumentsWsAfterHead(SDF_NatConArguments arg);
SDF_OptLayout SDF_getNatConArgumentsWsAfterSep(SDF_NatConArguments arg);
SDF_NatConArguments SDF_setNatConArgumentsHead(SDF_NatConArguments arg, SDF_NatCon head);
SDF_NatConArguments SDF_setNatConArgumentsWsAfterHead(SDF_NatConArguments arg, SDF_OptLayout wsAfterHead);
SDF_NatConArguments SDF_setNatConArgumentsWsAfterSep(SDF_NatConArguments arg, SDF_OptLayout wsAfterSep);
SDF_NatConArguments SDF_setNatConArgumentsTail(SDF_NatConArguments arg, SDF_NatConArguments tail);
ATbool SDF_isValidGroupList(SDF_GroupList arg);
ATbool SDF_isGroupListEmpty(SDF_GroupList arg);
ATbool SDF_isGroupListSingle(SDF_GroupList arg);
ATbool SDF_isGroupListMany(SDF_GroupList arg);
ATbool SDF_hasGroupListHead(SDF_GroupList arg);
ATbool SDF_hasGroupListWsAfterHead(SDF_GroupList arg);
ATbool SDF_hasGroupListWsAfterSep(SDF_GroupList arg);
ATbool SDF_hasGroupListTail(SDF_GroupList arg);
SDF_GroupList SDF_getGroupListTail(SDF_GroupList arg);
SDF_Group SDF_getGroupListHead(SDF_GroupList arg);
SDF_OptLayout SDF_getGroupListWsAfterHead(SDF_GroupList arg);
SDF_OptLayout SDF_getGroupListWsAfterSep(SDF_GroupList arg);
SDF_GroupList SDF_setGroupListHead(SDF_GroupList arg, SDF_Group head);
SDF_GroupList SDF_setGroupListWsAfterHead(SDF_GroupList arg, SDF_OptLayout wsAfterHead);
SDF_GroupList SDF_setGroupListWsAfterSep(SDF_GroupList arg, SDF_OptLayout wsAfterSep);
SDF_GroupList SDF_setGroupListTail(SDF_GroupList arg, SDF_GroupList tail);
ATbool SDF_isValidPriorityList(SDF_PriorityList arg);
ATbool SDF_isPriorityListEmpty(SDF_PriorityList arg);
ATbool SDF_isPriorityListSingle(SDF_PriorityList arg);
ATbool SDF_isPriorityListMany(SDF_PriorityList arg);
ATbool SDF_hasPriorityListHead(SDF_PriorityList arg);
ATbool SDF_hasPriorityListWsAfterHead(SDF_PriorityList arg);
ATbool SDF_hasPriorityListWsAfterSep(SDF_PriorityList arg);
ATbool SDF_hasPriorityListTail(SDF_PriorityList arg);
SDF_PriorityList SDF_getPriorityListTail(SDF_PriorityList arg);
SDF_Priority SDF_getPriorityListHead(SDF_PriorityList arg);
SDF_OptLayout SDF_getPriorityListWsAfterHead(SDF_PriorityList arg);
SDF_OptLayout SDF_getPriorityListWsAfterSep(SDF_PriorityList arg);
SDF_PriorityList SDF_setPriorityListHead(SDF_PriorityList arg, SDF_Priority head);
SDF_PriorityList SDF_setPriorityListWsAfterHead(SDF_PriorityList arg, SDF_OptLayout wsAfterHead);
SDF_PriorityList SDF_setPriorityListWsAfterSep(SDF_PriorityList arg, SDF_OptLayout wsAfterSep);
SDF_PriorityList SDF_setPriorityListTail(SDF_PriorityList arg, SDF_PriorityList tail);
ATbool SDF_isValidSymbolTail(SDF_SymbolTail arg);
ATbool SDF_isSymbolTailEmpty(SDF_SymbolTail arg);
ATbool SDF_isSymbolTailSingle(SDF_SymbolTail arg);
ATbool SDF_isSymbolTailMany(SDF_SymbolTail arg);
ATbool SDF_hasSymbolTailHead(SDF_SymbolTail arg);
ATbool SDF_hasSymbolTailWsAfterHead(SDF_SymbolTail arg);
ATbool SDF_hasSymbolTailTail(SDF_SymbolTail arg);
SDF_SymbolTail SDF_getSymbolTailTail(SDF_SymbolTail arg);
SDF_Symbol SDF_getSymbolTailHead(SDF_SymbolTail arg);
SDF_OptLayout SDF_getSymbolTailWsAfterHead(SDF_SymbolTail arg);
SDF_SymbolTail SDF_setSymbolTailHead(SDF_SymbolTail arg, SDF_Symbol head);
SDF_SymbolTail SDF_setSymbolTailWsAfterHead(SDF_SymbolTail arg, SDF_OptLayout wsAfterHead);
SDF_SymbolTail SDF_setSymbolTailTail(SDF_SymbolTail arg, SDF_SymbolTail tail);
ATbool SDF_isValidSymbolRest(SDF_SymbolRest arg);
ATbool SDF_isSymbolRestEmpty(SDF_SymbolRest arg);
ATbool SDF_isSymbolRestSingle(SDF_SymbolRest arg);
ATbool SDF_isSymbolRestMany(SDF_SymbolRest arg);
ATbool SDF_hasSymbolRestHead(SDF_SymbolRest arg);
ATbool SDF_hasSymbolRestWsAfterHead(SDF_SymbolRest arg);
ATbool SDF_hasSymbolRestWsAfterSep(SDF_SymbolRest arg);
ATbool SDF_hasSymbolRestTail(SDF_SymbolRest arg);
SDF_SymbolRest SDF_getSymbolRestTail(SDF_SymbolRest arg);
SDF_Symbol SDF_getSymbolRestHead(SDF_SymbolRest arg);
SDF_OptLayout SDF_getSymbolRestWsAfterHead(SDF_SymbolRest arg);
SDF_OptLayout SDF_getSymbolRestWsAfterSep(SDF_SymbolRest arg);
SDF_SymbolRest SDF_setSymbolRestHead(SDF_SymbolRest arg, SDF_Symbol head);
SDF_SymbolRest SDF_setSymbolRestWsAfterHead(SDF_SymbolRest arg, SDF_OptLayout wsAfterHead);
SDF_SymbolRest SDF_setSymbolRestWsAfterSep(SDF_SymbolRest arg, SDF_OptLayout wsAfterSep);
SDF_SymbolRest SDF_setSymbolRestTail(SDF_SymbolRest arg, SDF_SymbolRest tail);
ATbool SDF_isValidRenamings(SDF_Renamings arg);
ATbool SDF_isRenamingsRenamings(SDF_Renamings arg);
ATbool SDF_hasRenamingsWsAfterBracketOpen(SDF_Renamings arg);
ATbool SDF_hasRenamingsList(SDF_Renamings arg);
ATbool SDF_hasRenamingsWsAfterList(SDF_Renamings arg);
SDF_OptLayout SDF_getRenamingsWsAfterBracketOpen(SDF_Renamings arg);
SDF_RenamingList SDF_getRenamingsList(SDF_Renamings arg);
SDF_OptLayout SDF_getRenamingsWsAfterList(SDF_Renamings arg);
SDF_Renamings SDF_setRenamingsWsAfterBracketOpen(SDF_Renamings arg, SDF_OptLayout wsAfterBracketOpen);
SDF_Renamings SDF_setRenamingsList(SDF_Renamings arg, SDF_RenamingList list);
SDF_Renamings SDF_setRenamingsWsAfterList(SDF_Renamings arg, SDF_OptLayout wsAfterList);
ATbool SDF_isValidRenaming(SDF_Renaming arg);
ATbool SDF_isRenamingSymbol(SDF_Renaming arg);
ATbool SDF_isRenamingProduction(SDF_Renaming arg);
ATbool SDF_hasRenamingFrom(SDF_Renaming arg);
ATbool SDF_hasRenamingWsAfterFrom(SDF_Renaming arg);
ATbool SDF_hasRenamingWsAfterEqualityGreaterThan(SDF_Renaming arg);
ATbool SDF_hasRenamingTo(SDF_Renaming arg);
ATbool SDF_hasRenamingFromProd(SDF_Renaming arg);
ATbool SDF_hasRenamingWsAfterFromProd(SDF_Renaming arg);
ATbool SDF_hasRenamingToProd(SDF_Renaming arg);
SDF_Symbol SDF_getRenamingFrom(SDF_Renaming arg);
SDF_OptLayout SDF_getRenamingWsAfterFrom(SDF_Renaming arg);
SDF_OptLayout SDF_getRenamingWsAfterEqualityGreaterThan(SDF_Renaming arg);
SDF_Symbol SDF_getRenamingTo(SDF_Renaming arg);
SDF_Production SDF_getRenamingFromProd(SDF_Renaming arg);
SDF_OptLayout SDF_getRenamingWsAfterFromProd(SDF_Renaming arg);
SDF_Production SDF_getRenamingToProd(SDF_Renaming arg);
SDF_Renaming SDF_setRenamingFrom(SDF_Renaming arg, SDF_Symbol from);
SDF_Renaming SDF_setRenamingWsAfterFrom(SDF_Renaming arg, SDF_OptLayout wsAfterFrom);
SDF_Renaming SDF_setRenamingWsAfterEqualityGreaterThan(SDF_Renaming arg, SDF_OptLayout wsAfterEqualityGreaterThan);
SDF_Renaming SDF_setRenamingTo(SDF_Renaming arg, SDF_Symbol to);
SDF_Renaming SDF_setRenamingFromProd(SDF_Renaming arg, SDF_Production fromProd);
SDF_Renaming SDF_setRenamingWsAfterFromProd(SDF_Renaming arg, SDF_OptLayout wsAfterFromProd);
SDF_Renaming SDF_setRenamingToProd(SDF_Renaming arg, SDF_Production toProd);
ATbool SDF_isValidRenamingList(SDF_RenamingList arg);
ATbool SDF_isRenamingListEmpty(SDF_RenamingList arg);
ATbool SDF_isRenamingListSingle(SDF_RenamingList arg);
ATbool SDF_isRenamingListMany(SDF_RenamingList arg);
ATbool SDF_hasRenamingListHead(SDF_RenamingList arg);
ATbool SDF_hasRenamingListWsAfterHead(SDF_RenamingList arg);
ATbool SDF_hasRenamingListTail(SDF_RenamingList arg);
SDF_RenamingList SDF_getRenamingListTail(SDF_RenamingList arg);
SDF_Renaming SDF_getRenamingListHead(SDF_RenamingList arg);
SDF_OptLayout SDF_getRenamingListWsAfterHead(SDF_RenamingList arg);
SDF_RenamingList SDF_setRenamingListHead(SDF_RenamingList arg, SDF_Renaming head);
SDF_RenamingList SDF_setRenamingListWsAfterHead(SDF_RenamingList arg, SDF_OptLayout wsAfterHead);
SDF_RenamingList SDF_setRenamingListTail(SDF_RenamingList arg, SDF_RenamingList tail);
ATbool SDF_isValidLookahead(SDF_Lookahead arg);
ATbool SDF_isLookaheadCharClass(SDF_Lookahead arg);
ATbool SDF_isLookaheadSeq(SDF_Lookahead arg);
ATbool SDF_hasLookaheadCharClass(SDF_Lookahead arg);
ATbool SDF_hasLookaheadHead(SDF_Lookahead arg);
ATbool SDF_hasLookaheadWsAfterHead(SDF_Lookahead arg);
ATbool SDF_hasLookaheadWsAfterPeriod(SDF_Lookahead arg);
ATbool SDF_hasLookaheadTail(SDF_Lookahead arg);
SDF_CharClass SDF_getLookaheadCharClass(SDF_Lookahead arg);
SDF_CharClass SDF_getLookaheadHead(SDF_Lookahead arg);
SDF_OptLayout SDF_getLookaheadWsAfterHead(SDF_Lookahead arg);
SDF_OptLayout SDF_getLookaheadWsAfterPeriod(SDF_Lookahead arg);
SDF_Lookaheads SDF_getLookaheadTail(SDF_Lookahead arg);
SDF_Lookahead SDF_setLookaheadCharClass(SDF_Lookahead arg, SDF_CharClass CharClass);
SDF_Lookahead SDF_setLookaheadHead(SDF_Lookahead arg, SDF_CharClass head);
SDF_Lookahead SDF_setLookaheadWsAfterHead(SDF_Lookahead arg, SDF_OptLayout wsAfterHead);
SDF_Lookahead SDF_setLookaheadWsAfterPeriod(SDF_Lookahead arg, SDF_OptLayout wsAfterPeriod);
SDF_Lookahead SDF_setLookaheadTail(SDF_Lookahead arg, SDF_Lookaheads tail);
ATbool SDF_isValidLookaheads(SDF_Lookaheads arg);
ATbool SDF_isLookaheadsSingle(SDF_Lookaheads arg);
ATbool SDF_isLookaheadsAlt(SDF_Lookaheads arg);
ATbool SDF_isLookaheadsBracket(SDF_Lookaheads arg);
ATbool SDF_isLookaheadsList(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsLookahead(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsLeft(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsWsAfterLeft(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsWsAfterBar(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsRight(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsWsAfterParenOpen(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsLookaheads(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsWsAfterLookaheads(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsWsAfterBracketOpenBracketOpen(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsList(SDF_Lookaheads arg);
ATbool SDF_hasLookaheadsWsAfterList(SDF_Lookaheads arg);
SDF_Lookahead SDF_getLookaheadsLookahead(SDF_Lookaheads arg);
SDF_Lookaheads SDF_getLookaheadsLeft(SDF_Lookaheads arg);
SDF_OptLayout SDF_getLookaheadsWsAfterLeft(SDF_Lookaheads arg);
SDF_OptLayout SDF_getLookaheadsWsAfterBar(SDF_Lookaheads arg);
SDF_Lookaheads SDF_getLookaheadsRight(SDF_Lookaheads arg);
SDF_OptLayout SDF_getLookaheadsWsAfterParenOpen(SDF_Lookaheads arg);
SDF_Lookaheads SDF_getLookaheadsLookaheads(SDF_Lookaheads arg);
SDF_OptLayout SDF_getLookaheadsWsAfterLookaheads(SDF_Lookaheads arg);
SDF_OptLayout SDF_getLookaheadsWsAfterBracketOpenBracketOpen(SDF_Lookaheads arg);
SDF_LookaheadList SDF_getLookaheadsList(SDF_Lookaheads arg);
SDF_OptLayout SDF_getLookaheadsWsAfterList(SDF_Lookaheads arg);
SDF_Lookaheads SDF_setLookaheadsLookahead(SDF_Lookaheads arg, SDF_Lookahead Lookahead);
SDF_Lookaheads SDF_setLookaheadsLeft(SDF_Lookaheads arg, SDF_Lookaheads left);
SDF_Lookaheads SDF_setLookaheadsWsAfterLeft(SDF_Lookaheads arg, SDF_OptLayout wsAfterLeft);
SDF_Lookaheads SDF_setLookaheadsWsAfterBar(SDF_Lookaheads arg, SDF_OptLayout wsAfterBar);
SDF_Lookaheads SDF_setLookaheadsRight(SDF_Lookaheads arg, SDF_Lookaheads right);
SDF_Lookaheads SDF_setLookaheadsWsAfterParenOpen(SDF_Lookaheads arg, SDF_OptLayout wsAfterParenOpen);
SDF_Lookaheads SDF_setLookaheadsLookaheads(SDF_Lookaheads arg, SDF_Lookaheads Lookaheads);
SDF_Lookaheads SDF_setLookaheadsWsAfterLookaheads(SDF_Lookaheads arg, SDF_OptLayout wsAfterLookaheads);
SDF_Lookaheads SDF_setLookaheadsWsAfterBracketOpenBracketOpen(SDF_Lookaheads arg, SDF_OptLayout wsAfterBracketOpenBracketOpen);
SDF_Lookaheads SDF_setLookaheadsList(SDF_Lookaheads arg, SDF_LookaheadList list);
SDF_Lookaheads SDF_setLookaheadsWsAfterList(SDF_Lookaheads arg, SDF_OptLayout wsAfterList);
ATbool SDF_isValidRestriction(SDF_Restriction arg);
ATbool SDF_isRestrictionFollow(SDF_Restriction arg);
ATbool SDF_hasRestrictionSymbols(SDF_Restriction arg);
ATbool SDF_hasRestrictionWsAfterSymbols(SDF_Restriction arg);
ATbool SDF_hasRestrictionWsAfterSlash(SDF_Restriction arg);
ATbool SDF_hasRestrictionLookaheads(SDF_Restriction arg);
SDF_Symbols SDF_getRestrictionSymbols(SDF_Restriction arg);
SDF_OptLayout SDF_getRestrictionWsAfterSymbols(SDF_Restriction arg);
SDF_OptLayout SDF_getRestrictionWsAfterSlash(SDF_Restriction arg);
SDF_Lookaheads SDF_getRestrictionLookaheads(SDF_Restriction arg);
SDF_Restriction SDF_setRestrictionSymbols(SDF_Restriction arg, SDF_Symbols Symbols);
SDF_Restriction SDF_setRestrictionWsAfterSymbols(SDF_Restriction arg, SDF_OptLayout wsAfterSymbols);
SDF_Restriction SDF_setRestrictionWsAfterSlash(SDF_Restriction arg, SDF_OptLayout wsAfterSlash);
SDF_Restriction SDF_setRestrictionLookaheads(SDF_Restriction arg, SDF_Lookaheads Lookaheads);
ATbool SDF_isValidRestrictions(SDF_Restrictions arg);
ATbool SDF_isRestrictionsDefault(SDF_Restrictions arg);
ATbool SDF_hasRestrictionsList(SDF_Restrictions arg);
SDF_RestrictionList SDF_getRestrictionsList(SDF_Restrictions arg);
SDF_Restrictions SDF_setRestrictionsList(SDF_Restrictions arg, SDF_RestrictionList list);
ATbool SDF_isValidLookaheadList(SDF_LookaheadList arg);
ATbool SDF_isLookaheadListEmpty(SDF_LookaheadList arg);
ATbool SDF_isLookaheadListSingle(SDF_LookaheadList arg);
ATbool SDF_isLookaheadListMany(SDF_LookaheadList arg);
ATbool SDF_hasLookaheadListHead(SDF_LookaheadList arg);
ATbool SDF_hasLookaheadListWsAfterHead(SDF_LookaheadList arg);
ATbool SDF_hasLookaheadListWsAfterSep(SDF_LookaheadList arg);
ATbool SDF_hasLookaheadListTail(SDF_LookaheadList arg);
SDF_LookaheadList SDF_getLookaheadListTail(SDF_LookaheadList arg);
SDF_Lookahead SDF_getLookaheadListHead(SDF_LookaheadList arg);
SDF_OptLayout SDF_getLookaheadListWsAfterHead(SDF_LookaheadList arg);
SDF_OptLayout SDF_getLookaheadListWsAfterSep(SDF_LookaheadList arg);
SDF_LookaheadList SDF_setLookaheadListHead(SDF_LookaheadList arg, SDF_Lookahead head);
SDF_LookaheadList SDF_setLookaheadListWsAfterHead(SDF_LookaheadList arg, SDF_OptLayout wsAfterHead);
SDF_LookaheadList SDF_setLookaheadListWsAfterSep(SDF_LookaheadList arg, SDF_OptLayout wsAfterSep);
SDF_LookaheadList SDF_setLookaheadListTail(SDF_LookaheadList arg, SDF_LookaheadList tail);
ATbool SDF_isValidRestrictionList(SDF_RestrictionList arg);
ATbool SDF_isRestrictionListEmpty(SDF_RestrictionList arg);
ATbool SDF_isRestrictionListSingle(SDF_RestrictionList arg);
ATbool SDF_isRestrictionListMany(SDF_RestrictionList arg);
ATbool SDF_hasRestrictionListHead(SDF_RestrictionList arg);
ATbool SDF_hasRestrictionListWsAfterHead(SDF_RestrictionList arg);
ATbool SDF_hasRestrictionListTail(SDF_RestrictionList arg);
SDF_RestrictionList SDF_getRestrictionListTail(SDF_RestrictionList arg);
SDF_Restriction SDF_getRestrictionListHead(SDF_RestrictionList arg);
SDF_OptLayout SDF_getRestrictionListWsAfterHead(SDF_RestrictionList arg);
SDF_RestrictionList SDF_setRestrictionListHead(SDF_RestrictionList arg, SDF_Restriction head);
SDF_RestrictionList SDF_setRestrictionListWsAfterHead(SDF_RestrictionList arg, SDF_OptLayout wsAfterHead);
SDF_RestrictionList SDF_setRestrictionListTail(SDF_RestrictionList arg, SDF_RestrictionList tail);
ATbool SDF_isValidSort(SDF_Sort arg);
ATbool SDF_isSortLexToCf(SDF_Sort arg);
ATbool SDF_hasSortSort(SDF_Sort arg);
SDF_LexSort SDF_getSortSort(SDF_Sort arg);
SDF_Sort SDF_setSortSort(SDF_Sort arg, SDF_LexSort Sort);
ATbool SDF_isValidSDF(SDF_SDF arg);
ATbool SDF_isSDFDefinition(SDF_SDF arg);
ATbool SDF_hasSDFWsAfterDefinition(SDF_SDF arg);
ATbool SDF_hasSDFDefinition(SDF_SDF arg);
SDF_OptLayout SDF_getSDFWsAfterDefinition(SDF_SDF arg);
SDF_Definition SDF_getSDFDefinition(SDF_SDF arg);
SDF_SDF SDF_setSDFWsAfterDefinition(SDF_SDF arg, SDF_OptLayout wsAfterDefinition);
SDF_SDF SDF_setSDFDefinition(SDF_SDF arg, SDF_Definition Definition);
ATbool SDF_isValidLexSort(SDF_LexSort arg);
ATbool SDF_isLexSortOneChar(SDF_LexSort arg);
ATbool SDF_isLexSortMoreChars(SDF_LexSort arg);
ATbool SDF_hasLexSortHead(SDF_LexSort arg);
ATbool SDF_hasLexSortMiddle(SDF_LexSort arg);
ATbool SDF_hasLexSortLast(SDF_LexSort arg);
char SDF_getLexSortHead(SDF_LexSort arg);
char* SDF_getLexSortMiddle(SDF_LexSort arg);
char SDF_getLexSortLast(SDF_LexSort arg);
SDF_LexSort SDF_setLexSortHead(SDF_LexSort arg, char head);
SDF_LexSort SDF_setLexSortMiddle(SDF_LexSort arg, const char* middle);
SDF_LexSort SDF_setLexSortLast(SDF_LexSort arg, char last);
ATbool SDF_isValidSymbolParameters(SDF_SymbolParameters arg);
ATbool SDF_isSymbolParametersEmpty(SDF_SymbolParameters arg);
ATbool SDF_isSymbolParametersSingle(SDF_SymbolParameters arg);
ATbool SDF_isSymbolParametersMany(SDF_SymbolParameters arg);
ATbool SDF_hasSymbolParametersHead(SDF_SymbolParameters arg);
ATbool SDF_hasSymbolParametersWsAfterHead(SDF_SymbolParameters arg);
ATbool SDF_hasSymbolParametersWsAfterSep(SDF_SymbolParameters arg);
ATbool SDF_hasSymbolParametersTail(SDF_SymbolParameters arg);
SDF_SymbolParameters SDF_getSymbolParametersTail(SDF_SymbolParameters arg);
SDF_Symbol SDF_getSymbolParametersHead(SDF_SymbolParameters arg);
SDF_OptLayout SDF_getSymbolParametersWsAfterHead(SDF_SymbolParameters arg);
SDF_OptLayout SDF_getSymbolParametersWsAfterSep(SDF_SymbolParameters arg);
SDF_SymbolParameters SDF_setSymbolParametersHead(SDF_SymbolParameters arg, SDF_Symbol head);
SDF_SymbolParameters SDF_setSymbolParametersWsAfterHead(SDF_SymbolParameters arg, SDF_OptLayout wsAfterHead);
SDF_SymbolParameters SDF_setSymbolParametersWsAfterSep(SDF_SymbolParameters arg, SDF_OptLayout wsAfterSep);
SDF_SymbolParameters SDF_setSymbolParametersTail(SDF_SymbolParameters arg, SDF_SymbolParameters tail);
ATbool SDF_isValidSymbols(SDF_Symbols arg);
ATbool SDF_isSymbolsDefault(SDF_Symbols arg);
ATbool SDF_hasSymbolsList(SDF_Symbols arg);
SDF_SymbolList SDF_getSymbolsList(SDF_Symbols arg);
SDF_Symbols SDF_setSymbolsList(SDF_Symbols arg, SDF_SymbolList list);
ATbool SDF_isValidSymbolList(SDF_SymbolList arg);
ATbool SDF_isSymbolListEmpty(SDF_SymbolList arg);
ATbool SDF_isSymbolListSingle(SDF_SymbolList arg);
ATbool SDF_isSymbolListMany(SDF_SymbolList arg);
ATbool SDF_hasSymbolListHead(SDF_SymbolList arg);
ATbool SDF_hasSymbolListWsAfterHead(SDF_SymbolList arg);
ATbool SDF_hasSymbolListTail(SDF_SymbolList arg);
SDF_SymbolList SDF_getSymbolListTail(SDF_SymbolList arg);
SDF_Symbol SDF_getSymbolListHead(SDF_SymbolList arg);
SDF_OptLayout SDF_getSymbolListWsAfterHead(SDF_SymbolList arg);
SDF_SymbolList SDF_setSymbolListHead(SDF_SymbolList arg, SDF_Symbol head);
SDF_SymbolList SDF_setSymbolListWsAfterHead(SDF_SymbolList arg, SDF_OptLayout wsAfterHead);
SDF_SymbolList SDF_setSymbolListTail(SDF_SymbolList arg, SDF_SymbolList tail);
ATbool SDF_isValidLexLayout(SDF_LexLayout arg);
ATbool SDF_isLexLayoutWhitespace(SDF_LexLayout arg);
ATbool SDF_isLexLayoutLine(SDF_LexLayout arg);
ATbool SDF_isLexLayoutNested(SDF_LexLayout arg);
ATbool SDF_hasLexLayoutCh(SDF_LexLayout arg);
ATbool SDF_hasLexLayoutLine(SDF_LexLayout arg);
ATbool SDF_hasLexLayoutContent(SDF_LexLayout arg);
char SDF_getLexLayoutCh(SDF_LexLayout arg);
char* SDF_getLexLayoutLine(SDF_LexLayout arg);
char* SDF_getLexLayoutContent(SDF_LexLayout arg);
SDF_LexLayout SDF_setLexLayoutCh(SDF_LexLayout arg, char ch);
SDF_LexLayout SDF_setLexLayoutLine(SDF_LexLayout arg, const char* line);
SDF_LexLayout SDF_setLexLayoutContent(SDF_LexLayout arg, const char* content);
ATbool SDF_isValidLexStrChar(SDF_LexStrChar arg);
ATbool SDF_isLexStrCharNewline(SDF_LexStrChar arg);
ATbool SDF_isLexStrCharTab(SDF_LexStrChar arg);
ATbool SDF_isLexStrCharQuote(SDF_LexStrChar arg);
ATbool SDF_isLexStrCharBackslash(SDF_LexStrChar arg);
ATbool SDF_isLexStrCharDecimal(SDF_LexStrChar arg);
ATbool SDF_isLexStrCharNormal(SDF_LexStrChar arg);
ATbool SDF_hasLexStrCharA(SDF_LexStrChar arg);
ATbool SDF_hasLexStrCharB(SDF_LexStrChar arg);
ATbool SDF_hasLexStrCharC(SDF_LexStrChar arg);
ATbool SDF_hasLexStrCharCh(SDF_LexStrChar arg);
char SDF_getLexStrCharA(SDF_LexStrChar arg);
char SDF_getLexStrCharB(SDF_LexStrChar arg);
char SDF_getLexStrCharC(SDF_LexStrChar arg);
char SDF_getLexStrCharCh(SDF_LexStrChar arg);
SDF_LexStrChar SDF_setLexStrCharA(SDF_LexStrChar arg, char a);
SDF_LexStrChar SDF_setLexStrCharB(SDF_LexStrChar arg, char b);
SDF_LexStrChar SDF_setLexStrCharC(SDF_LexStrChar arg, char c);
SDF_LexStrChar SDF_setLexStrCharCh(SDF_LexStrChar arg, char ch);
ATbool SDF_isValidStrChar(SDF_StrChar arg);
ATbool SDF_isStrCharLexToCf(SDF_StrChar arg);
ATbool SDF_hasStrCharStrChar(SDF_StrChar arg);
SDF_LexStrChar SDF_getStrCharStrChar(SDF_StrChar arg);
SDF_StrChar SDF_setStrCharStrChar(SDF_StrChar arg, SDF_LexStrChar StrChar);
ATbool SDF_isValidLexStrCon(SDF_LexStrCon arg);
ATbool SDF_isLexStrConDefault(SDF_LexStrCon arg);
ATbool SDF_hasLexStrConChars(SDF_LexStrCon arg);
SDF_LexStrCharChars SDF_getLexStrConChars(SDF_LexStrCon arg);
SDF_LexStrCon SDF_setLexStrConChars(SDF_LexStrCon arg, SDF_LexStrCharChars chars);
ATbool SDF_isValidStrCon(SDF_StrCon arg);
ATbool SDF_isStrConLexToCf(SDF_StrCon arg);
ATbool SDF_hasStrConStrCon(SDF_StrCon arg);
SDF_LexStrCon SDF_getStrConStrCon(SDF_StrCon arg);
SDF_StrCon SDF_setStrConStrCon(SDF_StrCon arg, SDF_LexStrCon StrCon);
ATbool SDF_isValidLexStrCharChars(SDF_LexStrCharChars arg);
ATbool SDF_isLexStrCharCharsEmpty(SDF_LexStrCharChars arg);
ATbool SDF_isLexStrCharCharsSingle(SDF_LexStrCharChars arg);
ATbool SDF_isLexStrCharCharsMany(SDF_LexStrCharChars arg);
ATbool SDF_hasLexStrCharCharsHead(SDF_LexStrCharChars arg);
ATbool SDF_hasLexStrCharCharsTail(SDF_LexStrCharChars arg);
SDF_LexStrChar SDF_getLexStrCharCharsHead(SDF_LexStrCharChars arg);
SDF_LexStrCharChars SDF_getLexStrCharCharsTail(SDF_LexStrCharChars arg);
SDF_LexStrCharChars SDF_setLexStrCharCharsHead(SDF_LexStrCharChars arg, SDF_LexStrChar head);
SDF_LexStrCharChars SDF_setLexStrCharCharsTail(SDF_LexStrCharChars arg, SDF_LexStrCharChars tail);
ATbool SDF_isValidLexNatCon(SDF_LexNatCon arg);
ATbool SDF_isLexNatConDigits(SDF_LexNatCon arg);
ATbool SDF_hasLexNatConList(SDF_LexNatCon arg);
char* SDF_getLexNatConList(SDF_LexNatCon arg);
SDF_LexNatCon SDF_setLexNatConList(SDF_LexNatCon arg, const char* list);
ATbool SDF_isValidNatCon(SDF_NatCon arg);
ATbool SDF_isNatConLexToCf(SDF_NatCon arg);
ATbool SDF_hasNatConNatCon(SDF_NatCon arg);
SDF_LexNatCon SDF_getNatConNatCon(SDF_NatCon arg);
SDF_NatCon SDF_setNatConNatCon(SDF_NatCon arg, SDF_LexNatCon NatCon);
ATbool SDF_isValidLexIdCon(SDF_LexIdCon arg);
ATbool SDF_isLexIdConDefault(SDF_LexIdCon arg);
ATbool SDF_hasLexIdConHead(SDF_LexIdCon arg);
ATbool SDF_hasLexIdConTail(SDF_LexIdCon arg);
char SDF_getLexIdConHead(SDF_LexIdCon arg);
char* SDF_getLexIdConTail(SDF_LexIdCon arg);
SDF_LexIdCon SDF_setLexIdConHead(SDF_LexIdCon arg, char head);
SDF_LexIdCon SDF_setLexIdConTail(SDF_LexIdCon arg, const char* tail);
ATbool SDF_isValidIdCon(SDF_IdCon arg);
ATbool SDF_isIdConLexToCf(SDF_IdCon arg);
ATbool SDF_hasIdConIdCon(SDF_IdCon arg);
SDF_LexIdCon SDF_getIdConIdCon(SDF_IdCon arg);
SDF_IdCon SDF_setIdConIdCon(SDF_IdCon arg, SDF_LexIdCon IdCon);
SDF_OptLayout SDF_visitOptLayout(SDF_OptLayout arg, SDF_Layout (*acceptLayout)(SDF_Layout));
SDF_Layout SDF_visitLayout(SDF_Layout arg, SDF_LexLayoutList (*acceptList)(SDF_LexLayoutList));
SDF_LexLayoutList SDF_visitLexLayoutList(SDF_LexLayoutList arg, SDF_LexLayout (*acceptHead)(SDF_LexLayout));
SDF_AFun SDF_visitAFun(SDF_AFun arg, SDF_StrCon (*acceptStrCon)(SDF_StrCon), SDF_IdCon (*acceptIdCon)(SDF_IdCon));
SDF_ATerm SDF_visitATerm(SDF_ATerm arg, SDF_IntCon (*acceptIntCon)(SDF_IntCon), SDF_RealCon (*acceptRealCon)(SDF_RealCon), SDF_AFun (*acceptFun)(SDF_AFun), SDF_OptLayout (*acceptWsAfterFun)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_ATermArgs (*acceptArgs)(SDF_ATermArgs), SDF_OptLayout (*acceptWsAfterArgs)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLessThan)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterType)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBracketOpen)(SDF_OptLayout), SDF_ATermElems (*acceptElems)(SDF_ATermElems), SDF_OptLayout (*acceptWsAfterElems)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterTrm)(SDF_OptLayout), SDF_Annotation (*acceptAnnotation)(SDF_Annotation));
SDF_Annotation SDF_visitAnnotation(SDF_Annotation arg, SDF_OptLayout (*acceptWsAfterBraceOpen)(SDF_OptLayout), SDF_ATermAnnos (*acceptAnnos)(SDF_ATermAnnos), SDF_OptLayout (*acceptWsAfterAnnos)(SDF_OptLayout));
SDF_Start SDF_visitStart(SDF_Start arg, SDF_OptLayout (*acceptWsBefore)(SDF_OptLayout), SDF_ATerm (*acceptTopATerm)(SDF_ATerm), SDF_OptLayout (*acceptWsAfter)(SDF_OptLayout), int (*acceptAmbCnt)(int), SDF_IntCon (*acceptTopIntCon)(SDF_IntCon), SDF_RealCon (*acceptTopRealCon)(SDF_RealCon), SDF_Module (*acceptTopModule)(SDF_Module), SDF_SDF (*acceptTopSDF)(SDF_SDF));
SDF_ATermArgs SDF_visitATermArgs(SDF_ATermArgs arg, SDF_ATerm (*acceptHead)(SDF_ATerm), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_ATermElems SDF_visitATermElems(SDF_ATermElems arg, SDF_ATerm (*acceptHead)(SDF_ATerm), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_ATermAnnos SDF_visitATermAnnos(SDF_ATermAnnos arg, SDF_ATerm (*acceptHead)(SDF_ATerm), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_IntCon SDF_visitIntCon(SDF_IntCon arg, SDF_NatCon (*acceptNatCon)(SDF_NatCon), SDF_OptLayout (*acceptWsAfterPos)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterNeg)(SDF_OptLayout));
SDF_OptExp SDF_visitOptExp(SDF_OptExp arg, SDF_OptLayout (*acceptWsAfterE)(SDF_OptLayout), SDF_IntCon (*acceptIntCon)(SDF_IntCon));
SDF_RealCon SDF_visitRealCon(SDF_RealCon arg, SDF_IntCon (*acceptBase)(SDF_IntCon), SDF_OptLayout (*acceptWsAfterBase)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterPeriod)(SDF_OptLayout), SDF_NatCon (*acceptDecimal)(SDF_NatCon), SDF_OptLayout (*acceptWsAfterDecimal)(SDF_OptLayout), SDF_OptExp (*acceptExp)(SDF_OptExp));
SDF_Grammar SDF_visitGrammar(SDF_Grammar arg, SDF_OptLayout (*acceptWsAfterAliases)(SDF_OptLayout), SDF_Aliases (*acceptAliases)(SDF_Aliases), SDF_OptLayout (*acceptWsAfterLexical)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSyntax)(SDF_OptLayout), SDF_Productions (*acceptProductions)(SDF_Productions), SDF_OptLayout (*acceptWsAfterContextFree)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterVariables)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLeft)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterGrammar)(SDF_OptLayout), SDF_ImpSection (*acceptImpSection)(SDF_ImpSection), SDF_OptLayout (*acceptWsAfterPriorities)(SDF_OptLayout), SDF_Priorities (*acceptPriorities)(SDF_Priorities), SDF_OptLayout (*acceptWsAfterRestrictions)(SDF_OptLayout), SDF_Restrictions (*acceptRestrictions)(SDF_Restrictions), SDF_OptLayout (*acceptWsAfterSorts)(SDF_OptLayout), SDF_Symbols (*acceptSymbols)(SDF_Symbols), SDF_OptLayout (*acceptWsAfterStartSymbols)(SDF_OptLayout));
SDF_Alias SDF_visitAlias(SDF_Alias arg, SDF_Symbol (*acceptSymbol)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterSymbol)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterArrow)(SDF_OptLayout), SDF_Symbol (*acceptAlias)(SDF_Symbol));
SDF_Aliases SDF_visitAliases(SDF_Aliases arg, SDF_AliasList (*acceptList)(SDF_AliasList));
SDF_AliasList SDF_visitAliasList(SDF_AliasList arg, SDF_Alias (*acceptHead)(SDF_Alias), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_Symbol SDF_visitSymbol(SDF_Symbol arg, SDF_OptLayout (*acceptWsAfterLessThan)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSymbol)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterCF)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLEX)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterVAR)(SDF_OptLayout), SDF_CharClass (*acceptCharClass)(SDF_CharClass), SDF_Label (*acceptLabel)(SDF_Label), SDF_OptLayout (*acceptWsAfterLabel)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterColon)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLeftQuote)(SDF_OptLayout), SDF_StrCon (*acceptString)(SDF_StrCon), SDF_SingleQuotedStrCon (*acceptCiString)(SDF_SingleQuotedStrCon), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_SymbolTail (*acceptTail)(SDF_SymbolTail), SDF_OptLayout (*acceptWsAfterTail)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBraceOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBraceClose)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterComma)(SDF_OptLayout), SDF_SymbolRest (*acceptRest)(SDF_SymbolRest), SDF_OptLayout (*acceptWsAfterRest)(SDF_OptLayout), SDF_Symbols (*acceptArguments)(SDF_Symbols), SDF_OptLayout (*acceptWsAfterArguments)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterEqualityGreaterThan)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterResults)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLeft)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBar)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterGreaterThan)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterRight)(SDF_OptLayout), SDF_Sort (*acceptSort)(SDF_Sort), SDF_OptLayout (*acceptWsAfterSort)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBracketOpenBracketOpen)(SDF_OptLayout), SDF_SymbolParameters (*acceptParameters)(SDF_SymbolParameters), SDF_OptLayout (*acceptWsAfterParameters)(SDF_OptLayout));
SDF_CharRange SDF_visitCharRange(SDF_CharRange arg, SDF_Character (*acceptCharacter)(SDF_Character), SDF_Character (*acceptStart)(SDF_Character), SDF_OptLayout (*acceptWsAfterStart)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfter)(SDF_OptLayout), SDF_Character (*acceptEnd)(SDF_Character));
SDF_CharRanges SDF_visitCharRanges(SDF_CharRanges arg, SDF_CharRange (*acceptCharRange)(SDF_CharRange), SDF_OptLayout (*acceptWsAfterLeft)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterCharRanges)(SDF_OptLayout));
SDF_OptCharRanges SDF_visitOptCharRanges(SDF_OptCharRanges arg, SDF_CharRanges (*acceptCharRanges)(SDF_CharRanges));
SDF_CharClass SDF_visitCharClass(SDF_CharClass arg, SDF_OptLayout (*acceptWsAfterBracketOpen)(SDF_OptLayout), SDF_OptCharRanges (*acceptOptCharRanges)(SDF_OptCharRanges), SDF_OptLayout (*acceptWsAfterOptCharRanges)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterTilde)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLeft)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSlash)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSlashBackslash)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBackslashSlash)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterCharClass)(SDF_OptLayout));
SDF_LexNumChar SDF_visitLexNumChar(SDF_LexNumChar arg, char* (*acceptNumber)(char*));
SDF_NumChar SDF_visitNumChar(SDF_NumChar arg, SDF_LexNumChar (*acceptNumChar)(SDF_LexNumChar));
SDF_LexShortChar SDF_visitLexShortChar(SDF_LexShortChar arg, char (*acceptCharacter)(char), char (*acceptEscape)(char));
SDF_ShortChar SDF_visitShortChar(SDF_ShortChar arg, SDF_LexShortChar (*acceptShortChar)(SDF_LexShortChar));
SDF_Character SDF_visitCharacter(SDF_Character arg, SDF_NumChar (*acceptNumChar)(SDF_NumChar), SDF_ShortChar (*acceptShortChar)(SDF_ShortChar));
SDF_ATermAttribute SDF_visitATermAttribute(SDF_ATermAttribute arg, SDF_ATerm (*acceptAterm)(SDF_ATerm));
SDF_Attribute SDF_visitAttribute(SDF_Attribute arg, SDF_ATermAttribute (*acceptATermAttribute)(SDF_ATermAttribute), SDF_OptLayout (*acceptWsAfterId)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_ModuleName (*acceptModuleName)(SDF_ModuleName), SDF_OptLayout (*acceptWsAfterModuleName)(SDF_OptLayout), SDF_Associativity (*acceptAssociativity)(SDF_Associativity));
SDF_Attributes SDF_visitAttributes(SDF_Attributes arg, SDF_OptLayout (*acceptWsAfterBraceOpen)(SDF_OptLayout), SDF_AttributeList (*acceptList)(SDF_AttributeList), SDF_OptLayout (*acceptWsAfterList)(SDF_OptLayout));
SDF_Production SDF_visitProduction(SDF_Production arg, SDF_Symbols (*acceptSymbols)(SDF_Symbols), SDF_OptLayout (*acceptWsAfterSymbols)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterGreaterThan)(SDF_OptLayout), SDF_Symbol (*acceptResult)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterResult)(SDF_OptLayout), SDF_Attributes (*acceptAttributes)(SDF_Attributes), SDF_FunctionName (*acceptFun)(SDF_FunctionName), SDF_OptLayout (*acceptWsAfterFun)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_SymbolArguments (*acceptArguments)(SDF_SymbolArguments), SDF_OptLayout (*acceptWsAfterArguments)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenClose)(SDF_OptLayout));
SDF_Productions SDF_visitProductions(SDF_Productions arg, SDF_ProductionList (*acceptList)(SDF_ProductionList));
SDF_AttributeList SDF_visitAttributeList(SDF_AttributeList arg, SDF_Attribute (*acceptHead)(SDF_Attribute), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_ProductionList SDF_visitProductionList(SDF_ProductionList arg, SDF_Production (*acceptHead)(SDF_Production), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_Label SDF_visitLabel(SDF_Label arg, SDF_StrCon (*acceptStrCon)(SDF_StrCon), SDF_IdCon (*acceptIdCon)(SDF_IdCon));
SDF_LexSingleQuotedStrChar SDF_visitLexSingleQuotedStrChar(SDF_LexSingleQuotedStrChar arg, char (*acceptA)(char), char (*acceptB)(char), char (*acceptC)(char), char (*acceptCh)(char));
SDF_SingleQuotedStrChar SDF_visitSingleQuotedStrChar(SDF_SingleQuotedStrChar arg, SDF_LexSingleQuotedStrChar (*acceptSingleQuotedStrChar)(SDF_LexSingleQuotedStrChar));
SDF_LexSingleQuotedStrCon SDF_visitLexSingleQuotedStrCon(SDF_LexSingleQuotedStrCon arg, SDF_LexSingleQuotedStrCharChars (*acceptChars)(SDF_LexSingleQuotedStrCharChars));
SDF_SingleQuotedStrCon SDF_visitSingleQuotedStrCon(SDF_SingleQuotedStrCon arg, SDF_LexSingleQuotedStrCon (*acceptSingleQuotedStrCon)(SDF_LexSingleQuotedStrCon));
SDF_FunctionName SDF_visitFunctionName(SDF_FunctionName arg, SDF_IdCon (*acceptIdCon)(SDF_IdCon), SDF_StrCon (*acceptStrCon)(SDF_StrCon));
SDF_LexSingleQuotedStrCharChars SDF_visitLexSingleQuotedStrCharChars(SDF_LexSingleQuotedStrCharChars arg, SDF_LexSingleQuotedStrChar (*acceptHead)(SDF_LexSingleQuotedStrChar));
SDF_SymbolArguments SDF_visitSymbolArguments(SDF_SymbolArguments arg, SDF_Symbol (*acceptHead)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_LexModuleWord SDF_visitLexModuleWord(SDF_LexModuleWord arg, char* (*acceptLetters)(char*));
SDF_ModuleWord SDF_visitModuleWord(SDF_ModuleWord arg, SDF_LexModuleWord (*acceptModuleWord)(SDF_LexModuleWord));
SDF_LexModuleId SDF_visitLexModuleId(SDF_LexModuleId arg, SDF_LexModuleWord (*acceptModuleWord)(SDF_LexModuleWord), SDF_LexModuleWord (*acceptDirname)(SDF_LexModuleWord));
SDF_ModuleId SDF_visitModuleId(SDF_ModuleId arg, SDF_LexModuleId (*acceptModuleId)(SDF_LexModuleId));
SDF_Definition SDF_visitDefinition(SDF_Definition arg, SDF_ModuleList (*acceptList)(SDF_ModuleList));
SDF_Module SDF_visitModule(SDF_Module arg, SDF_OptLayout (*acceptWsAfterModule)(SDF_OptLayout), SDF_ModuleName (*acceptModuleName)(SDF_ModuleName), SDF_OptLayout (*acceptWsAfterModuleName)(SDF_OptLayout), SDF_ImpSectionList (*acceptList)(SDF_ImpSectionList), SDF_OptLayout (*acceptWsAfterList)(SDF_OptLayout), SDF_Sections (*acceptSections)(SDF_Sections));
SDF_Section SDF_visitSection(SDF_Section arg, SDF_OptLayout (*acceptWsAfterExports)(SDF_OptLayout), SDF_Grammar (*acceptGrammar)(SDF_Grammar), SDF_OptLayout (*acceptWsAfterHiddens)(SDF_OptLayout));
SDF_Sections SDF_visitSections(SDF_Sections arg, SDF_SectionList (*acceptList)(SDF_SectionList));
SDF_ModuleName SDF_visitModuleName(SDF_ModuleName arg, SDF_ModuleId (*acceptModuleId)(SDF_ModuleId), SDF_OptLayout (*acceptWsAfterModuleId)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBracketOpen)(SDF_OptLayout), SDF_Symbols (*acceptParams)(SDF_Symbols), SDF_OptLayout (*acceptWsAfterParams)(SDF_OptLayout));
SDF_ImpSection SDF_visitImpSection(SDF_ImpSection arg, SDF_OptLayout (*acceptWsAfterImports)(SDF_OptLayout), SDF_Imports (*acceptList)(SDF_Imports));
SDF_Imports SDF_visitImports(SDF_Imports arg, SDF_ImportList (*acceptList)(SDF_ImportList));
SDF_Import SDF_visitImport(SDF_Import arg, SDF_ModuleName (*acceptModuleName)(SDF_ModuleName), SDF_OptLayout (*acceptWsAfterModuleName)(SDF_OptLayout), SDF_Renamings (*acceptRenamings)(SDF_Renamings), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterImport)(SDF_OptLayout));
SDF_ModuleList SDF_visitModuleList(SDF_ModuleList arg, SDF_Module (*acceptHead)(SDF_Module), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_ImpSectionList SDF_visitImpSectionList(SDF_ImpSectionList arg, SDF_ImpSection (*acceptHead)(SDF_ImpSection), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_SectionList SDF_visitSectionList(SDF_SectionList arg, SDF_Section (*acceptHead)(SDF_Section), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_ImportList SDF_visitImportList(SDF_ImportList arg, SDF_Import (*acceptHead)(SDF_Import), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_Associativity SDF_visitAssociativity(SDF_Associativity arg);
SDF_ArgumentIndicator SDF_visitArgumentIndicator(SDF_ArgumentIndicator arg, SDF_OptLayout (*acceptWsAfterLessThan)(SDF_OptLayout), SDF_NatConArguments (*acceptArguments)(SDF_NatConArguments), SDF_OptLayout (*acceptWsAfterArguments)(SDF_OptLayout));
SDF_Group SDF_visitGroup(SDF_Group arg, SDF_OptLayout (*acceptWsAfterGroup)(SDF_OptLayout), SDF_ArgumentIndicator (*acceptArgumentIndicator)(SDF_ArgumentIndicator), SDF_Production (*acceptProduction)(SDF_Production), SDF_OptLayout (*acceptWsAfterBraceOpen)(SDF_OptLayout), SDF_Productions (*acceptProductions)(SDF_Productions), SDF_OptLayout (*acceptWsAfterProductions)(SDF_OptLayout), SDF_Associativity (*acceptAssociativity)(SDF_Associativity), SDF_OptLayout (*acceptWsAfterAssociativity)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterColon)(SDF_OptLayout));
SDF_Priority SDF_visitPriority(SDF_Priority arg, SDF_GroupList (*acceptList)(SDF_GroupList), SDF_Group (*acceptLeft)(SDF_Group), SDF_OptLayout (*acceptWsAfterLeft)(SDF_OptLayout), SDF_Associativity (*acceptAssociativity)(SDF_Associativity), SDF_OptLayout (*acceptWsAfterAssociativity)(SDF_OptLayout), SDF_Group (*acceptRight)(SDF_Group));
SDF_Priorities SDF_visitPriorities(SDF_Priorities arg, SDF_PriorityList (*acceptList)(SDF_PriorityList));
SDF_NatConArguments SDF_visitNatConArguments(SDF_NatConArguments arg, SDF_NatCon (*acceptHead)(SDF_NatCon), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_GroupList SDF_visitGroupList(SDF_GroupList arg, SDF_Group (*acceptHead)(SDF_Group), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_PriorityList SDF_visitPriorityList(SDF_PriorityList arg, SDF_Priority (*acceptHead)(SDF_Priority), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_SymbolTail SDF_visitSymbolTail(SDF_SymbolTail arg, SDF_Symbol (*acceptHead)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_SymbolRest SDF_visitSymbolRest(SDF_SymbolRest arg, SDF_Symbol (*acceptHead)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_Renamings SDF_visitRenamings(SDF_Renamings arg, SDF_OptLayout (*acceptWsAfterBracketOpen)(SDF_OptLayout), SDF_RenamingList (*acceptList)(SDF_RenamingList), SDF_OptLayout (*acceptWsAfterList)(SDF_OptLayout));
SDF_Renaming SDF_visitRenaming(SDF_Renaming arg, SDF_Symbol (*acceptFrom)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterFrom)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterEqualityGreaterThan)(SDF_OptLayout), SDF_Symbol (*acceptTo)(SDF_Symbol), SDF_Production (*acceptFromProd)(SDF_Production), SDF_OptLayout (*acceptWsAfterFromProd)(SDF_OptLayout), SDF_Production (*acceptToProd)(SDF_Production));
SDF_RenamingList SDF_visitRenamingList(SDF_RenamingList arg, SDF_Renaming (*acceptHead)(SDF_Renaming), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_Lookahead SDF_visitLookahead(SDF_Lookahead arg, SDF_CharClass (*acceptCharClass)(SDF_CharClass), SDF_CharClass (*acceptHead)(SDF_CharClass), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterPeriod)(SDF_OptLayout), SDF_Lookaheads (*acceptTail)(SDF_Lookaheads));
SDF_Lookaheads SDF_visitLookaheads(SDF_Lookaheads arg, SDF_Lookahead (*acceptLookahead)(SDF_Lookahead), SDF_OptLayout (*acceptWsAfterLeft)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBar)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterParenOpen)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterLookaheads)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterBracketOpenBracketOpen)(SDF_OptLayout), SDF_LookaheadList (*acceptList)(SDF_LookaheadList), SDF_OptLayout (*acceptWsAfterList)(SDF_OptLayout));
SDF_Restriction SDF_visitRestriction(SDF_Restriction arg, SDF_Symbols (*acceptSymbols)(SDF_Symbols), SDF_OptLayout (*acceptWsAfterSymbols)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSlash)(SDF_OptLayout), SDF_Lookaheads (*acceptLookaheads)(SDF_Lookaheads));
SDF_Restrictions SDF_visitRestrictions(SDF_Restrictions arg, SDF_RestrictionList (*acceptList)(SDF_RestrictionList));
SDF_LookaheadList SDF_visitLookaheadList(SDF_LookaheadList arg, SDF_Lookahead (*acceptHead)(SDF_Lookahead), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_RestrictionList SDF_visitRestrictionList(SDF_RestrictionList arg, SDF_Restriction (*acceptHead)(SDF_Restriction), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_Sort SDF_visitSort(SDF_Sort arg, SDF_LexSort (*acceptSort)(SDF_LexSort));
SDF_SDF SDF_visitSDF(SDF_SDF arg, SDF_OptLayout (*acceptWsAfterDefinition)(SDF_OptLayout), SDF_Definition (*acceptDefinition)(SDF_Definition));
SDF_LexSort SDF_visitLexSort(SDF_LexSort arg, char (*acceptHead)(char), char* (*acceptMiddle)(char*), char (*acceptLast)(char));
SDF_SymbolParameters SDF_visitSymbolParameters(SDF_SymbolParameters arg, SDF_Symbol (*acceptHead)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout), SDF_OptLayout (*acceptWsAfterSep)(SDF_OptLayout));
SDF_Symbols SDF_visitSymbols(SDF_Symbols arg, SDF_SymbolList (*acceptList)(SDF_SymbolList));
SDF_SymbolList SDF_visitSymbolList(SDF_SymbolList arg, SDF_Symbol (*acceptHead)(SDF_Symbol), SDF_OptLayout (*acceptWsAfterHead)(SDF_OptLayout));
SDF_LexLayout SDF_visitLexLayout(SDF_LexLayout arg, char (*acceptCh)(char), char* (*acceptLine)(char*), char* (*acceptContent)(char*));
SDF_LexStrChar SDF_visitLexStrChar(SDF_LexStrChar arg, char (*acceptA)(char), char (*acceptB)(char), char (*acceptC)(char), char (*acceptCh)(char));
SDF_StrChar SDF_visitStrChar(SDF_StrChar arg, SDF_LexStrChar (*acceptStrChar)(SDF_LexStrChar));
SDF_LexStrCon SDF_visitLexStrCon(SDF_LexStrCon arg, SDF_LexStrCharChars (*acceptChars)(SDF_LexStrCharChars));
SDF_StrCon SDF_visitStrCon(SDF_StrCon arg, SDF_LexStrCon (*acceptStrCon)(SDF_LexStrCon));
SDF_LexStrCharChars SDF_visitLexStrCharChars(SDF_LexStrCharChars arg, SDF_LexStrChar (*acceptHead)(SDF_LexStrChar));
SDF_LexNatCon SDF_visitLexNatCon(SDF_LexNatCon arg, char* (*acceptList)(char*));
SDF_NatCon SDF_visitNatCon(SDF_NatCon arg, SDF_LexNatCon (*acceptNatCon)(SDF_LexNatCon));
SDF_LexIdCon SDF_visitLexIdCon(SDF_LexIdCon arg, char (*acceptHead)(char), char* (*acceptTail)(char*));
SDF_IdCon SDF_visitIdCon(SDF_IdCon arg, SDF_LexIdCon (*acceptIdCon)(SDF_LexIdCon));

#endif /* _SDFME_H */
