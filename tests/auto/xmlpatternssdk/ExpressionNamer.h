/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef PatternistSDK_ExpressionNamer_H
#define PatternistSDK_ExpressionNamer_H

#include "Global.h"
#include "qexpressiondispatch_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QPatternistSDK
{
    /**
     * @short Extracts debug information from a QPatternist::Expression tree.
     *
     * This data is the name of the AST node(typically the class name),
     * and additional data such as the value, type of operator, and so forth. The result
     * is returned(from visit()), is an ExpressionInfo instance.
     *
     * @see ExpressionInfo
     * @see ASTItem
     * @ingroup PatternistSDK
     * @author Frans Englich <frans.englich@nokia.com>
     */
    class Q_PATTERNISTSDK_EXPORT ExpressionNamer : public QPatternist::ExpressionVisitor
    {
    public:

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::AndExpression *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ApplyTemplate *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ArgumentReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ArithmeticExpression *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::Atomizer *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::AttributeConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::AttributeNameValidator *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CallTemplate *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CardinalityVerifier *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CastAs *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CastableAs *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CollationChecker *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CombineNodes *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ComputedNamespaceConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CommentConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ContextItem *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CopyOf *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::CurrentItemStore *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::DocumentConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::DynamicContextStore *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::EBVExtractor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ElementConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::EmptySequence *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ExpressionSequence *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ExpressionVariableReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ExternalVariableReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::EvaluationCache<true> *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::EvaluationCache<false> *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::FirstItemPredicate *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ForClause *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::FunctionCall *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::GeneralComparison *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::GenericPredicate *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::IfThenClause *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::InstanceOf *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ItemVerifier *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::LetClause *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::Literal *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::LiteralSequence *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::NCNameConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::NodeComparison *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::NodeSortExpression *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::OrderBy *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::OrExpression *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ParentNodeAxis *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::Path *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::PositionalVariableReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ProcessingInstructionConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::QNameConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::QuantifiedExpression *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::RangeExpression *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::RangeVariableReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ReturnOrderBy *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::SimpleContentConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::StaticBaseURIStore *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::StaticCompatibilityStore *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::AxisStep *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::TemplateParameterReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::TextNodeConstructor *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::TreatAs *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::TruthPredicate *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::UntypedAtomicConverter *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::UnresolvedVariableReference *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ArgumentConverter *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::UserFunctionCallsite *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ValidationError *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::ValueComparison *) const;

        virtual QPatternist::ExpressionVisitorResult::Ptr
        visit(const QPatternist::NamespaceConstructor *) const;
    };
}

QT_END_NAMESPACE

QT_END_HEADER

#endif
// vim: et:ts=4:sw=4:sts=4