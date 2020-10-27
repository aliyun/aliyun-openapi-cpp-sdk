/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/dataworks-public/model/ListQualityResultsByEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListQualityResultsByEntityResult::ListQualityResultsByEntityResult() :
	ServiceResult()
{}

ListQualityResultsByEntityResult::ListQualityResultsByEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQualityResultsByEntityResult::~ListQualityResultsByEntityResult()
{}

void ListQualityResultsByEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto qualityResultsNode = value["QualityResults"];
	if(!qualityResultsNode["TotalCount"].isNull())
		qualityResults_.totalCount = std::stol(qualityResultsNode["TotalCount"].asString());
	if(!qualityResultsNode["PageNumber"].isNull())
		qualityResults_.pageNumber = std::stoi(qualityResultsNode["PageNumber"].asString());
	if(!qualityResultsNode["PageSize"].isNull())
		qualityResults_.pageSize = std::stoi(qualityResultsNode["PageSize"].asString());
	auto allRuleChecksNode = qualityResultsNode["RuleChecks"]["RuleChecksItem"];
	for (auto qualityResultsNodeRuleChecksRuleChecksItem : allRuleChecksNode)
	{
		QualityResults::RuleChecksItem ruleChecksItemObject;
		if(!qualityResultsNodeRuleChecksRuleChecksItem["Id"].isNull())
			ruleChecksItemObject.id = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["Id"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["TaskId"].isNull())
			ruleChecksItemObject.taskId = qualityResultsNodeRuleChecksRuleChecksItem["TaskId"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["EntityId"].isNull())
			ruleChecksItemObject.entityId = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["EntityId"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["RuleId"].isNull())
			ruleChecksItemObject.ruleId = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["RuleId"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["Property"].isNull())
			ruleChecksItemObject.property = qualityResultsNodeRuleChecksRuleChecksItem["Property"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["BizDate"].isNull())
			ruleChecksItemObject.bizDate = std::stol(qualityResultsNodeRuleChecksRuleChecksItem["BizDate"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["DateType"].isNull())
			ruleChecksItemObject.dateType = qualityResultsNodeRuleChecksRuleChecksItem["DateType"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["ActualExpression"].isNull())
			ruleChecksItemObject.actualExpression = qualityResultsNodeRuleChecksRuleChecksItem["ActualExpression"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["MatchExpression"].isNull())
			ruleChecksItemObject.matchExpression = qualityResultsNodeRuleChecksRuleChecksItem["MatchExpression"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["BlockType"].isNull())
			ruleChecksItemObject.blockType = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["BlockType"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["CheckResult"].isNull())
			ruleChecksItemObject.checkResult = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["CheckResult"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["CheckResultStatus"].isNull())
			ruleChecksItemObject.checkResultStatus = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["CheckResultStatus"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["MethodName"].isNull())
			ruleChecksItemObject.methodName = qualityResultsNodeRuleChecksRuleChecksItem["MethodName"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["Comment"].isNull())
			ruleChecksItemObject.comment = qualityResultsNodeRuleChecksRuleChecksItem["Comment"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["WhereCondition"].isNull())
			ruleChecksItemObject.whereCondition = qualityResultsNodeRuleChecksRuleChecksItem["WhereCondition"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["BeginTime"].isNull())
			ruleChecksItemObject.beginTime = std::stol(qualityResultsNodeRuleChecksRuleChecksItem["BeginTime"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["EndTime"].isNull())
			ruleChecksItemObject.endTime = std::stol(qualityResultsNodeRuleChecksRuleChecksItem["EndTime"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["TimeCost"].isNull())
			ruleChecksItemObject.timeCost = qualityResultsNodeRuleChecksRuleChecksItem["TimeCost"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["ExternalType"].isNull())
			ruleChecksItemObject.externalType = qualityResultsNodeRuleChecksRuleChecksItem["ExternalType"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["ExternalId"].isNull())
			ruleChecksItemObject.externalId = qualityResultsNodeRuleChecksRuleChecksItem["ExternalId"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["DiscreteCheck"].isNull())
			ruleChecksItemObject.discreteCheck = qualityResultsNodeRuleChecksRuleChecksItem["DiscreteCheck"].asString() == "true";
		if(!qualityResultsNodeRuleChecksRuleChecksItem["FixedCheck"].isNull())
			ruleChecksItemObject.fixedCheck = qualityResultsNodeRuleChecksRuleChecksItem["FixedCheck"].asString() == "true";
		if(!qualityResultsNodeRuleChecksRuleChecksItem["Trend"].isNull())
			ruleChecksItemObject.trend = qualityResultsNodeRuleChecksRuleChecksItem["Trend"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["WarningThreshold"].isNull())
			ruleChecksItemObject.warningThreshold = std::stof(qualityResultsNodeRuleChecksRuleChecksItem["WarningThreshold"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["CriticalThreshold"].isNull())
			ruleChecksItemObject.criticalThreshold = std::stof(qualityResultsNodeRuleChecksRuleChecksItem["CriticalThreshold"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["ExpectValue"].isNull())
			ruleChecksItemObject.expectValue = std::stof(qualityResultsNodeRuleChecksRuleChecksItem["ExpectValue"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["Op"].isNull())
			ruleChecksItemObject.op = qualityResultsNodeRuleChecksRuleChecksItem["Op"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["ProjectName"].isNull())
			ruleChecksItemObject.projectName = qualityResultsNodeRuleChecksRuleChecksItem["ProjectName"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["TableName"].isNull())
			ruleChecksItemObject.tableName = qualityResultsNodeRuleChecksRuleChecksItem["TableName"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["TemplateId"].isNull())
			ruleChecksItemObject.templateId = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["TemplateId"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["TemplateName"].isNull())
			ruleChecksItemObject.templateName = qualityResultsNodeRuleChecksRuleChecksItem["TemplateName"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["ResultString"].isNull())
			ruleChecksItemObject.resultString = qualityResultsNodeRuleChecksRuleChecksItem["ResultString"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["CheckerId"].isNull())
			ruleChecksItemObject.checkerId = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["CheckerId"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["CheckerType"].isNull())
			ruleChecksItemObject.checkerType = std::stoi(qualityResultsNodeRuleChecksRuleChecksItem["CheckerType"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["RuleName"].isNull())
			ruleChecksItemObject.ruleName = qualityResultsNodeRuleChecksRuleChecksItem["RuleName"].asString();
		if(!qualityResultsNodeRuleChecksRuleChecksItem["IsPrediction"].isNull())
			ruleChecksItemObject.isPrediction = qualityResultsNodeRuleChecksRuleChecksItem["IsPrediction"].asString() == "true";
		if(!qualityResultsNodeRuleChecksRuleChecksItem["UpperValue"].isNull())
			ruleChecksItemObject.upperValue = std::stof(qualityResultsNodeRuleChecksRuleChecksItem["UpperValue"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["LowerValue"].isNull())
			ruleChecksItemObject.lowerValue = std::stof(qualityResultsNodeRuleChecksRuleChecksItem["LowerValue"].asString());
		if(!qualityResultsNodeRuleChecksRuleChecksItem["CheckerName"].isNull())
			ruleChecksItemObject.checkerName = qualityResultsNodeRuleChecksRuleChecksItem["CheckerName"].asString();
		auto allReferenceValueNode = allRuleChecksNode["ReferenceValue"]["ReferenceValueItem"];
		for (auto allRuleChecksNodeReferenceValueReferenceValueItem : allReferenceValueNode)
		{
			QualityResults::RuleChecksItem::ReferenceValueItem referenceValueObject;
			if(!allRuleChecksNodeReferenceValueReferenceValueItem["BizDate"].isNull())
				referenceValueObject.bizDate = std::stol(allRuleChecksNodeReferenceValueReferenceValueItem["BizDate"].asString());
			if(!allRuleChecksNodeReferenceValueReferenceValueItem["DiscreteProperty"].isNull())
				referenceValueObject.discreteProperty = allRuleChecksNodeReferenceValueReferenceValueItem["DiscreteProperty"].asString();
			if(!allRuleChecksNodeReferenceValueReferenceValueItem["Value"].isNull())
				referenceValueObject.value = std::stof(allRuleChecksNodeReferenceValueReferenceValueItem["Value"].asString());
			if(!allRuleChecksNodeReferenceValueReferenceValueItem["Threshold"].isNull())
				referenceValueObject.threshold = std::stof(allRuleChecksNodeReferenceValueReferenceValueItem["Threshold"].asString());
			if(!allRuleChecksNodeReferenceValueReferenceValueItem["SingleCheckResult"].isNull())
				referenceValueObject.singleCheckResult = std::stoi(allRuleChecksNodeReferenceValueReferenceValueItem["SingleCheckResult"].asString());
			ruleChecksItemObject.referenceValue.push_back(referenceValueObject);
		}
		auto allSampleValueNode = allRuleChecksNode["SampleValue"]["SampleValueItem"];
		for (auto allRuleChecksNodeSampleValueSampleValueItem : allSampleValueNode)
		{
			QualityResults::RuleChecksItem::SampleValueItem sampleValueObject;
			if(!allRuleChecksNodeSampleValueSampleValueItem["BizDate"].isNull())
				sampleValueObject.bizDate = std::stol(allRuleChecksNodeSampleValueSampleValueItem["BizDate"].asString());
			if(!allRuleChecksNodeSampleValueSampleValueItem["DiscreteProperty"].isNull())
				sampleValueObject.discreteProperty = allRuleChecksNodeSampleValueSampleValueItem["DiscreteProperty"].asString();
			if(!allRuleChecksNodeSampleValueSampleValueItem["Value"].isNull())
				sampleValueObject.value = std::stof(allRuleChecksNodeSampleValueSampleValueItem["Value"].asString());
			ruleChecksItemObject.sampleValue.push_back(sampleValueObject);
		}
		qualityResults_.ruleChecks.push_back(ruleChecksItemObject);
	}

}

ListQualityResultsByEntityResult::QualityResults ListQualityResultsByEntityResult::getQualityResults()const
{
	return qualityResults_;
}

