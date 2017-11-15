
// Generated from Unbreakable.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "UnbreakableVisitor.h"


/**
 * This class provides an empty implementation of UnbreakableVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  UnbreakableBaseVisitor : public UnbreakableVisitor {
public:

  virtual antlrcpp::Any visitProg(UnbreakableParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclar(UnbreakableParser::VarDeclarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveType(UnbreakableParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(UnbreakableParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_stat(UnbreakableParser::Compound_statContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stat(UnbreakableParser::Assignment_statContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stat(UnbreakableParser::If_statContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(UnbreakableParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(UnbreakableParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(UnbreakableParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(UnbreakableParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(UnbreakableParser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(UnbreakableParser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(UnbreakableParser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

