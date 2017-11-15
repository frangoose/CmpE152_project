
// Generated from Unbreakable.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "UnbreakableParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by UnbreakableParser.
 */
class  UnbreakableVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by UnbreakableParser.
   */
    virtual antlrcpp::Any visitProg(UnbreakableParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclar(UnbreakableParser::VarDeclarContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveType(UnbreakableParser::PrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitStat(UnbreakableParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stat(UnbreakableParser::Compound_statContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stat(UnbreakableParser::Assignment_statContext *context) = 0;

    virtual antlrcpp::Any visitIf_stat(UnbreakableParser::If_statContext *context) = 0;

    virtual antlrcpp::Any visitExpr(UnbreakableParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitVariable(UnbreakableParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitNumber(UnbreakableParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(UnbreakableParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(UnbreakableParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(UnbreakableParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(UnbreakableParser::Rel_opContext *context) = 0;


};

