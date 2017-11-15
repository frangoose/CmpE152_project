
// Generated from Unbreakable.g4 by ANTLR 4.7


#include "UnbreakableVisitor.h"

#include "UnbreakableParser.h"


using namespace antlrcpp;
using namespace antlr4;

UnbreakableParser::UnbreakableParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

UnbreakableParser::~UnbreakableParser() {
  delete _interpreter;
}

std::string UnbreakableParser::getGrammarFileName() const {
  return "Unbreakable.g4";
}

const std::vector<std::string>& UnbreakableParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& UnbreakableParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

UnbreakableParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UnbreakableParser::StatContext *> UnbreakableParser::ProgContext::stat() {
  return getRuleContexts<UnbreakableParser::StatContext>();
}

UnbreakableParser::StatContext* UnbreakableParser::ProgContext::stat(size_t i) {
  return getRuleContext<UnbreakableParser::StatContext>(i);
}


size_t UnbreakableParser::ProgContext::getRuleIndex() const {
  return UnbreakableParser::RuleProg;
}

antlrcpp::Any UnbreakableParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::ProgContext* UnbreakableParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, UnbreakableParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      stat();
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << UnbreakableParser::T__8)
      | (1ULL << UnbreakableParser::T__11)
      | (1ULL << UnbreakableParser::IF)
      | (1ULL << UnbreakableParser::ADD_OP)
      | (1ULL << UnbreakableParser::SUB_OP)
      | (1ULL << UnbreakableParser::IDENTIFIER)
      | (1ULL << UnbreakableParser::DIGIT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarContext ------------------------------------------------------------------

UnbreakableParser::VarDeclarContext::VarDeclarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::VarDeclarContext::IDENTIFIER() {
  return getToken(UnbreakableParser::IDENTIFIER, 0);
}

UnbreakableParser::PrimitiveTypeContext* UnbreakableParser::VarDeclarContext::primitiveType() {
  return getRuleContext<UnbreakableParser::PrimitiveTypeContext>(0);
}


size_t UnbreakableParser::VarDeclarContext::getRuleIndex() const {
  return UnbreakableParser::RuleVarDeclar;
}

antlrcpp::Any UnbreakableParser::VarDeclarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitVarDeclar(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::VarDeclarContext* UnbreakableParser::varDeclar() {
  VarDeclarContext *_localctx = _tracker.createInstance<VarDeclarContext>(_ctx, getState());
  enterRule(_localctx, 2, UnbreakableParser::RuleVarDeclar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    match(UnbreakableParser::IDENTIFIER);
    setState(34);
    primitiveType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

UnbreakableParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t UnbreakableParser::PrimitiveTypeContext::getRuleIndex() const {
  return UnbreakableParser::RulePrimitiveType;
}

antlrcpp::Any UnbreakableParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::PrimitiveTypeContext* UnbreakableParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, UnbreakableParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << UnbreakableParser::T__0)
      | (1ULL << UnbreakableParser::T__1)
      | (1ULL << UnbreakableParser::T__2)
      | (1ULL << UnbreakableParser::T__3)
      | (1ULL << UnbreakableParser::T__4)
      | (1ULL << UnbreakableParser::T__5)
      | (1ULL << UnbreakableParser::T__6))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

UnbreakableParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UnbreakableParser::If_statContext* UnbreakableParser::StatContext::if_stat() {
  return getRuleContext<UnbreakableParser::If_statContext>(0);
}

UnbreakableParser::Assignment_statContext* UnbreakableParser::StatContext::assignment_stat() {
  return getRuleContext<UnbreakableParser::Assignment_statContext>(0);
}

UnbreakableParser::ExprContext* UnbreakableParser::StatContext::expr() {
  return getRuleContext<UnbreakableParser::ExprContext>(0);
}

UnbreakableParser::VarDeclarContext* UnbreakableParser::StatContext::varDeclar() {
  return getRuleContext<UnbreakableParser::VarDeclarContext>(0);
}

UnbreakableParser::Compound_statContext* UnbreakableParser::StatContext::compound_stat() {
  return getRuleContext<UnbreakableParser::Compound_statContext>(0);
}


size_t UnbreakableParser::StatContext::getRuleIndex() const {
  return UnbreakableParser::RuleStat;
}

antlrcpp::Any UnbreakableParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::StatContext* UnbreakableParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 6, UnbreakableParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      if_stat();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      assignment_stat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      expr(0);
      setState(44);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(41);
          match(UnbreakableParser::T__7); 
        }
        setState(46);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(47);
      varDeclar();
      setState(51);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(48);
          match(UnbreakableParser::T__7); 
        }
        setState(53);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(54);
      compound_stat();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_statContext ------------------------------------------------------------------

UnbreakableParser::Compound_statContext::Compound_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UnbreakableParser::StatContext *> UnbreakableParser::Compound_statContext::stat() {
  return getRuleContexts<UnbreakableParser::StatContext>();
}

UnbreakableParser::StatContext* UnbreakableParser::Compound_statContext::stat(size_t i) {
  return getRuleContext<UnbreakableParser::StatContext>(i);
}


size_t UnbreakableParser::Compound_statContext::getRuleIndex() const {
  return UnbreakableParser::RuleCompound_stat;
}

antlrcpp::Any UnbreakableParser::Compound_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitCompound_stat(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::Compound_statContext* UnbreakableParser::compound_stat() {
  Compound_statContext *_localctx = _tracker.createInstance<Compound_statContext>(_ctx, getState());
  enterRule(_localctx, 8, UnbreakableParser::RuleCompound_stat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(UnbreakableParser::T__8);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << UnbreakableParser::T__8)
      | (1ULL << UnbreakableParser::T__11)
      | (1ULL << UnbreakableParser::IF)
      | (1ULL << UnbreakableParser::ADD_OP)
      | (1ULL << UnbreakableParser::SUB_OP)
      | (1ULL << UnbreakableParser::IDENTIFIER)
      | (1ULL << UnbreakableParser::DIGIT))) != 0)) {
      setState(58);
      stat();
      setState(59);
      match(UnbreakableParser::T__7);
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(UnbreakableParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_statContext ------------------------------------------------------------------

UnbreakableParser::Assignment_statContext::Assignment_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::Assignment_statContext::IDENTIFIER() {
  return getToken(UnbreakableParser::IDENTIFIER, 0);
}

UnbreakableParser::ExprContext* UnbreakableParser::Assignment_statContext::expr() {
  return getRuleContext<UnbreakableParser::ExprContext>(0);
}


size_t UnbreakableParser::Assignment_statContext::getRuleIndex() const {
  return UnbreakableParser::RuleAssignment_stat;
}

antlrcpp::Any UnbreakableParser::Assignment_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitAssignment_stat(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::Assignment_statContext* UnbreakableParser::assignment_stat() {
  Assignment_statContext *_localctx = _tracker.createInstance<Assignment_statContext>(_ctx, getState());
  enterRule(_localctx, 10, UnbreakableParser::RuleAssignment_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(UnbreakableParser::IDENTIFIER);
    setState(69);
    match(UnbreakableParser::T__10);
    setState(70);
    expr(0);
    setState(74);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(71);
        match(UnbreakableParser::T__7); 
      }
      setState(76);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statContext ------------------------------------------------------------------

UnbreakableParser::If_statContext::If_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::If_statContext::IF() {
  return getToken(UnbreakableParser::IF, 0);
}

std::vector<UnbreakableParser::Compound_statContext *> UnbreakableParser::If_statContext::compound_stat() {
  return getRuleContexts<UnbreakableParser::Compound_statContext>();
}

UnbreakableParser::Compound_statContext* UnbreakableParser::If_statContext::compound_stat(size_t i) {
  return getRuleContext<UnbreakableParser::Compound_statContext>(i);
}

UnbreakableParser::ExprContext* UnbreakableParser::If_statContext::expr() {
  return getRuleContext<UnbreakableParser::ExprContext>(0);
}

tree::TerminalNode* UnbreakableParser::If_statContext::ELSE() {
  return getToken(UnbreakableParser::ELSE, 0);
}


size_t UnbreakableParser::If_statContext::getRuleIndex() const {
  return UnbreakableParser::RuleIf_stat;
}

antlrcpp::Any UnbreakableParser::If_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitIf_stat(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::If_statContext* UnbreakableParser::if_stat() {
  If_statContext *_localctx = _tracker.createInstance<If_statContext>(_ctx, getState());
  enterRule(_localctx, 12, UnbreakableParser::RuleIf_stat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(UnbreakableParser::IF);

    setState(78);
    match(UnbreakableParser::T__11);
    setState(79);
    expr(0);
    setState(80);
    match(UnbreakableParser::T__12);
    setState(82);
    compound_stat();
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == UnbreakableParser::ELSE) {
      setState(83);
      match(UnbreakableParser::ELSE);
      setState(84);
      compound_stat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

UnbreakableParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UnbreakableParser::NumberContext* UnbreakableParser::ExprContext::number() {
  return getRuleContext<UnbreakableParser::NumberContext>(0);
}

tree::TerminalNode* UnbreakableParser::ExprContext::IDENTIFIER() {
  return getToken(UnbreakableParser::IDENTIFIER, 0);
}

std::vector<UnbreakableParser::ExprContext *> UnbreakableParser::ExprContext::expr() {
  return getRuleContexts<UnbreakableParser::ExprContext>();
}

UnbreakableParser::ExprContext* UnbreakableParser::ExprContext::expr(size_t i) {
  return getRuleContext<UnbreakableParser::ExprContext>(i);
}

UnbreakableParser::Mul_div_opContext* UnbreakableParser::ExprContext::mul_div_op() {
  return getRuleContext<UnbreakableParser::Mul_div_opContext>(0);
}

UnbreakableParser::Add_sub_opContext* UnbreakableParser::ExprContext::add_sub_op() {
  return getRuleContext<UnbreakableParser::Add_sub_opContext>(0);
}

UnbreakableParser::Rel_opContext* UnbreakableParser::ExprContext::rel_op() {
  return getRuleContext<UnbreakableParser::Rel_opContext>(0);
}


size_t UnbreakableParser::ExprContext::getRuleIndex() const {
  return UnbreakableParser::RuleExpr;
}

antlrcpp::Any UnbreakableParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


UnbreakableParser::ExprContext* UnbreakableParser::expr() {
   return expr(0);
}

UnbreakableParser::ExprContext* UnbreakableParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  UnbreakableParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  UnbreakableParser::ExprContext *previousContext = _localctx;
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, UnbreakableParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UnbreakableParser::ADD_OP:
      case UnbreakableParser::SUB_OP:
      case UnbreakableParser::DIGIT: {
        setState(88);
        number();
        break;
      }

      case UnbreakableParser::IDENTIFIER: {
        setState(89);
        match(UnbreakableParser::IDENTIFIER);
        break;
      }

      case UnbreakableParser::T__11: {
        setState(90);
        match(UnbreakableParser::T__11);
        setState(91);
        expr(0);
        setState(92);
        match(UnbreakableParser::T__12);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(110);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(108);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(96);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(97);
          mul_div_op();
          setState(98);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(100);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(101);
          add_sub_op();
          setState(102);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(104);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(105);
          rel_op();
          setState(106);
          expr(5);
          break;
        }

        } 
      }
      setState(112);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

UnbreakableParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::VariableContext::IDENTIFIER() {
  return getToken(UnbreakableParser::IDENTIFIER, 0);
}


size_t UnbreakableParser::VariableContext::getRuleIndex() const {
  return UnbreakableParser::RuleVariable;
}

antlrcpp::Any UnbreakableParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::VariableContext* UnbreakableParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 16, UnbreakableParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(UnbreakableParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

UnbreakableParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::NumberContext::DIGIT() {
  return getToken(UnbreakableParser::DIGIT, 0);
}

UnbreakableParser::SignContext* UnbreakableParser::NumberContext::sign() {
  return getRuleContext<UnbreakableParser::SignContext>(0);
}


size_t UnbreakableParser::NumberContext::getRuleIndex() const {
  return UnbreakableParser::RuleNumber;
}

antlrcpp::Any UnbreakableParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::NumberContext* UnbreakableParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 18, UnbreakableParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == UnbreakableParser::ADD_OP

    || _la == UnbreakableParser::SUB_OP) {
      setState(115);
      sign();
    }
    setState(118);
    match(UnbreakableParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

UnbreakableParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t UnbreakableParser::SignContext::getRuleIndex() const {
  return UnbreakableParser::RuleSign;
}

antlrcpp::Any UnbreakableParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::SignContext* UnbreakableParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 20, UnbreakableParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    _la = _input->LA(1);
    if (!(_la == UnbreakableParser::ADD_OP

    || _la == UnbreakableParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

UnbreakableParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::Mul_div_opContext::MUL_OP() {
  return getToken(UnbreakableParser::MUL_OP, 0);
}

tree::TerminalNode* UnbreakableParser::Mul_div_opContext::DIV_OP() {
  return getToken(UnbreakableParser::DIV_OP, 0);
}


size_t UnbreakableParser::Mul_div_opContext::getRuleIndex() const {
  return UnbreakableParser::RuleMul_div_op;
}

antlrcpp::Any UnbreakableParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::Mul_div_opContext* UnbreakableParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 22, UnbreakableParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _la = _input->LA(1);
    if (!(_la == UnbreakableParser::MUL_OP

    || _la == UnbreakableParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

UnbreakableParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::Add_sub_opContext::ADD_OP() {
  return getToken(UnbreakableParser::ADD_OP, 0);
}

tree::TerminalNode* UnbreakableParser::Add_sub_opContext::SUB_OP() {
  return getToken(UnbreakableParser::SUB_OP, 0);
}


size_t UnbreakableParser::Add_sub_opContext::getRuleIndex() const {
  return UnbreakableParser::RuleAdd_sub_op;
}

antlrcpp::Any UnbreakableParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::Add_sub_opContext* UnbreakableParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 24, UnbreakableParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _la = _input->LA(1);
    if (!(_la == UnbreakableParser::ADD_OP

    || _la == UnbreakableParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

UnbreakableParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnbreakableParser::Rel_opContext::EQ_OP() {
  return getToken(UnbreakableParser::EQ_OP, 0);
}

tree::TerminalNode* UnbreakableParser::Rel_opContext::NEQ_OP() {
  return getToken(UnbreakableParser::NEQ_OP, 0);
}


size_t UnbreakableParser::Rel_opContext::getRuleIndex() const {
  return UnbreakableParser::RuleRel_op;
}

antlrcpp::Any UnbreakableParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<UnbreakableVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

UnbreakableParser::Rel_opContext* UnbreakableParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 26, UnbreakableParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    _la = _input->LA(1);
    if (!(_la == UnbreakableParser::EQ_OP

    || _la == UnbreakableParser::NEQ_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool UnbreakableParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool UnbreakableParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> UnbreakableParser::_decisionToDFA;
atn::PredictionContextCache UnbreakableParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN UnbreakableParser::_atn;
std::vector<uint16_t> UnbreakableParser::_serializedATN;

std::vector<std::string> UnbreakableParser::_ruleNames = {
  "prog", "varDeclar", "primitiveType", "stat", "compound_stat", "assignment_stat", 
  "if_stat", "expr", "variable", "number", "sign", "mul_div_op", "add_sub_op", 
  "rel_op"
};

std::vector<std::string> UnbreakableParser::_literalNames = {
  "", "'BitVector'", "'String'", "'16Key'", "'32Key'", "'64Key'", "'128Key'", 
  "'Integer'", "';'", "'{'", "'}'", "'='", "'('", "')'", "'if'", "'else'", 
  "'*'", "'/'", "'+'", "'-'", "'=='", "'!='"
};

std::vector<std::string> UnbreakableParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IF", "ELSE", 
  "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NEQ_OP", "IDENTIFIER", 
  "DIGIT", "NEWLINE", "WS"
};

dfa::Vocabulary UnbreakableParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> UnbreakableParser::_tokenNames;

UnbreakableParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1b, 0x83, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x6, 0x2, 0x20, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
    0x21, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x2d, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x30, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x34, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x37, 0xb, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3a, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x40, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x43, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x4b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x4e, 0xb, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x58, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x61, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x6f, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x72, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 
    0x77, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x2, 0x3, 0x10, 
    0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x2, 0x6, 0x3, 0x2, 0x3, 0x9, 0x3, 0x2, 0x14, 0x15, 0x3, 
    0x2, 0x12, 0x13, 0x3, 0x2, 0x16, 0x17, 0x2, 0x84, 0x2, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x23, 0x3, 0x2, 0x2, 0x2, 0x6, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x39, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x73, 0x3, 0x2, 0x2, 0x2, 0x14, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x20, 0x5, 0x8, 0x5, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x3, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 
    0x18, 0x2, 0x2, 0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x27, 0x9, 0x2, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x3a, 0x5, 0xe, 0x8, 0x2, 0x29, 0x3a, 0x5, 0xc, 0x7, 0x2, 
    0x2a, 0x2e, 0x5, 0x10, 0x9, 0x2, 0x2b, 0x2d, 0x7, 0xa, 0x2, 0x2, 0x2c, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x35, 0x5, 0x4, 
    0x3, 0x2, 0x32, 0x34, 0x7, 0xa, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 0x5, 0xa, 0x6, 0x2, 0x39, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x29, 0x3, 0x2, 0x2, 0x2, 0x39, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x31, 0x3, 0x2, 0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x41, 0x7, 0xb, 0x2, 
    0x2, 0x3c, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3e, 0x7, 0xa, 0x2, 0x2, 
    0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0xc, 0x2, 0x2, 0x45, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x47, 0x7, 0x18, 0x2, 0x2, 0x47, 0x48, 0x7, 0xd, 0x2, 
    0x2, 0x48, 0x4c, 0x5, 0x10, 0x9, 0x2, 0x49, 0x4b, 0x7, 0xa, 0x2, 0x2, 
    0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 
    0x10, 0x2, 0x2, 0x50, 0x51, 0x7, 0xe, 0x2, 0x2, 0x51, 0x52, 0x5, 0x10, 
    0x9, 0x2, 0x52, 0x53, 0x7, 0xf, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x57, 0x5, 0xa, 0x6, 0x2, 0x55, 0x56, 0x7, 0x11, 0x2, 0x2, 
    0x56, 0x58, 0x5, 0xa, 0x6, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0xf, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 
    0x8, 0x9, 0x1, 0x2, 0x5a, 0x61, 0x5, 0x14, 0xb, 0x2, 0x5b, 0x61, 0x7, 
    0x18, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0xe, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x10, 
    0x9, 0x2, 0x5e, 0x5f, 0x7, 0xf, 0x2, 0x2, 0x5f, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x59, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x61, 0x70, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x63, 0xc, 0x8, 0x2, 0x2, 0x63, 0x64, 0x5, 0x18, 0xd, 0x2, 0x64, 0x65, 
    0x5, 0x10, 0x9, 0x9, 0x65, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0xc, 
    0x7, 0x2, 0x2, 0x67, 0x68, 0x5, 0x1a, 0xe, 0x2, 0x68, 0x69, 0x5, 0x10, 
    0x9, 0x8, 0x69, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0xc, 0x6, 0x2, 
    0x2, 0x6b, 0x6c, 0x5, 0x1c, 0xf, 0x2, 0x6c, 0x6d, 0x5, 0x10, 0x9, 0x7, 
    0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x11, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x7, 0x18, 0x2, 0x2, 0x74, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x77, 0x5, 0x16, 0xc, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x79, 0x7, 0x19, 0x2, 0x2, 0x79, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x9, 0x3, 0x2, 0x2, 0x7b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x9, 
    0x4, 0x2, 0x2, 0x7d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x9, 0x3, 
    0x2, 0x2, 0x7f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x9, 0x5, 0x2, 
    0x2, 0x81, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd, 0x21, 0x2e, 0x35, 0x39, 0x41, 
    0x4c, 0x57, 0x60, 0x6e, 0x70, 0x76, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

UnbreakableParser::Initializer UnbreakableParser::_init;
