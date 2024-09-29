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
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allRuleChecksNode = dataNode["RuleChecks"]["RuleChecksItem"];
	for (auto dataNodeRuleChecksRuleChecksItem : allRuleChecksNode)
	{
		Data::RuleChecksItem ruleChecksItemObject;
		if(!dataNodeRuleChecksRuleChecksItem["BlockType"].isNull())
			ruleChecksItemObject.blockType = std::stoi(dataNodeRuleChecksRuleChecksItem["BlockType"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["WarningThreshold"].isNull())
			ruleChecksItemObject.warningThreshold = std::stof(dataNodeRuleChecksRuleChecksItem["WarningThreshold"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["Property"].isNull())
			ruleChecksItemObject.property = dataNodeRuleChecksRuleChecksItem["Property"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["TableName"].isNull())
			ruleChecksItemObject.tableName = dataNodeRuleChecksRuleChecksItem["TableName"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["Comment"].isNull())
			ruleChecksItemObject.comment = dataNodeRuleChecksRuleChecksItem["Comment"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["CheckResultStatus"].isNull())
			ruleChecksItemObject.checkResultStatus = std::stoi(dataNodeRuleChecksRuleChecksItem["CheckResultStatus"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["TemplateName"].isNull())
			ruleChecksItemObject.templateName = dataNodeRuleChecksRuleChecksItem["TemplateName"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["CheckerName"].isNull())
			ruleChecksItemObject.checkerName = dataNodeRuleChecksRuleChecksItem["CheckerName"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["RuleId"].isNull())
			ruleChecksItemObject.ruleId = std::stol(dataNodeRuleChecksRuleChecksItem["RuleId"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["FixedCheck"].isNull())
			ruleChecksItemObject.fixedCheck = dataNodeRuleChecksRuleChecksItem["FixedCheck"].asString() == "true";
		if(!dataNodeRuleChecksRuleChecksItem["Op"].isNull())
			ruleChecksItemObject.op = dataNodeRuleChecksRuleChecksItem["Op"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["UpperValue"].isNull())
			ruleChecksItemObject.upperValue = std::stof(dataNodeRuleChecksRuleChecksItem["UpperValue"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["ActualExpression"].isNull())
			ruleChecksItemObject.actualExpression = dataNodeRuleChecksRuleChecksItem["ActualExpression"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["ExternalId"].isNull())
			ruleChecksItemObject.externalId = dataNodeRuleChecksRuleChecksItem["ExternalId"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["TimeCost"].isNull())
			ruleChecksItemObject.timeCost = dataNodeRuleChecksRuleChecksItem["TimeCost"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["Trend"].isNull())
			ruleChecksItemObject.trend = dataNodeRuleChecksRuleChecksItem["Trend"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["ExternalType"].isNull())
			ruleChecksItemObject.externalType = dataNodeRuleChecksRuleChecksItem["ExternalType"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["BizDate"].isNull())
			ruleChecksItemObject.bizDate = std::stol(dataNodeRuleChecksRuleChecksItem["BizDate"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["CheckResult"].isNull())
			ruleChecksItemObject.checkResult = std::stoi(dataNodeRuleChecksRuleChecksItem["CheckResult"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["ResultString"].isNull())
			ruleChecksItemObject.resultString = dataNodeRuleChecksRuleChecksItem["ResultString"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["MatchExpression"].isNull())
			ruleChecksItemObject.matchExpression = dataNodeRuleChecksRuleChecksItem["MatchExpression"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["CheckerType"].isNull())
			ruleChecksItemObject.checkerType = std::stoi(dataNodeRuleChecksRuleChecksItem["CheckerType"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["ProjectName"].isNull())
			ruleChecksItemObject.projectName = dataNodeRuleChecksRuleChecksItem["ProjectName"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["BeginTime"].isNull())
			ruleChecksItemObject.beginTime = std::stol(dataNodeRuleChecksRuleChecksItem["BeginTime"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["DateType"].isNull())
			ruleChecksItemObject.dateType = dataNodeRuleChecksRuleChecksItem["DateType"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["CriticalThreshold"].isNull())
			ruleChecksItemObject.criticalThreshold = std::stof(dataNodeRuleChecksRuleChecksItem["CriticalThreshold"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["IsPrediction"].isNull())
			ruleChecksItemObject.isPrediction = dataNodeRuleChecksRuleChecksItem["IsPrediction"].asString() == "true";
		if(!dataNodeRuleChecksRuleChecksItem["RuleName"].isNull())
			ruleChecksItemObject.ruleName = dataNodeRuleChecksRuleChecksItem["RuleName"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["CheckerId"].isNull())
			ruleChecksItemObject.checkerId = std::stoi(dataNodeRuleChecksRuleChecksItem["CheckerId"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["DiscreteCheck"].isNull())
			ruleChecksItemObject.discreteCheck = dataNodeRuleChecksRuleChecksItem["DiscreteCheck"].asString() == "true";
		if(!dataNodeRuleChecksRuleChecksItem["EndTime"].isNull())
			ruleChecksItemObject.endTime = std::stol(dataNodeRuleChecksRuleChecksItem["EndTime"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["MethodName"].isNull())
			ruleChecksItemObject.methodName = dataNodeRuleChecksRuleChecksItem["MethodName"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["LowerValue"].isNull())
			ruleChecksItemObject.lowerValue = std::stof(dataNodeRuleChecksRuleChecksItem["LowerValue"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["EntityId"].isNull())
			ruleChecksItemObject.entityId = std::stol(dataNodeRuleChecksRuleChecksItem["EntityId"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["WhereCondition"].isNull())
			ruleChecksItemObject.whereCondition = dataNodeRuleChecksRuleChecksItem["WhereCondition"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["ExpectValue"].isNull())
			ruleChecksItemObject.expectValue = std::stof(dataNodeRuleChecksRuleChecksItem["ExpectValue"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["TemplateId"].isNull())
			ruleChecksItemObject.templateId = std::stoi(dataNodeRuleChecksRuleChecksItem["TemplateId"].asString());
		if(!dataNodeRuleChecksRuleChecksItem["TaskId"].isNull())
			ruleChecksItemObject.taskId = dataNodeRuleChecksRuleChecksItem["TaskId"].asString();
		if(!dataNodeRuleChecksRuleChecksItem["Id"].isNull())
			ruleChecksItemObject.id = std::stol(dataNodeRuleChecksRuleChecksItem["Id"].asString());
		auto allReferenceValueNode = dataNodeRuleChecksRuleChecksItem["ReferenceValue"]["ReferenceValueItem"];
		for (auto dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem : allReferenceValueNode)
		{
			Data::RuleChecksItem::ReferenceValueItem referenceValueObject;
			if(!dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["DiscreteProperty"].isNull())
				referenceValueObject.discreteProperty = dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["DiscreteProperty"].asString();
			if(!dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["Value"].isNull())
				referenceValueObject.value = std::stof(dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["Value"].asString());
			if(!dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["BizDate"].isNull())
				referenceValueObject.bizDate = dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["BizDate"].asString();
			if(!dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["SingleCheckResult"].isNull())
				referenceValueObject.singleCheckResult = std::stoi(dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["SingleCheckResult"].asString());
			if(!dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["Threshold"].isNull())
				referenceValueObject.threshold = std::stof(dataNodeRuleChecksRuleChecksItemReferenceValueReferenceValueItem["Threshold"].asString());
			ruleChecksItemObject.referenceValue.push_back(referenceValueObject);
		}
		auto allSampleValueNode = dataNodeRuleChecksRuleChecksItem["SampleValue"]["SampleValueItem"];
		for (auto dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem : allSampleValueNode)
		{
			Data::RuleChecksItem::SampleValueItem sampleValueObject;
			if(!dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem["DiscreteProperty"].isNull())
				sampleValueObject.discreteProperty = dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem["DiscreteProperty"].asString();
			if(!dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem["BizDate"].isNull())
				sampleValueObject.bizDate = dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem["BizDate"].asString();
			if(!dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem["Value"].isNull())
				sampleValueObject.value = std::stof(dataNodeRuleChecksRuleChecksItemSampleValueSampleValueItem["Value"].asString());
			ruleChecksItemObject.sampleValue.push_back(sampleValueObject);
		}
		data_.ruleChecks.push_back(ruleChecksItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int ListQualityResultsByEntityResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListQualityResultsByEntityResult::Data ListQualityResultsByEntityResult::getData()const
{
	return data_;
}

std::string ListQualityResultsByEntityResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListQualityResultsByEntityResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListQualityResultsByEntityResult::getSuccess()const
{
	return success_;
}

