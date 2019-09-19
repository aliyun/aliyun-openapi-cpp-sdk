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

#include <alibabacloud/yundun-ds/model/DescribeConditionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeConditionsResult::DescribeConditionsResult() :
	ServiceResult()
{}

DescribeConditionsResult::DescribeConditionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConditionsResult::~DescribeConditionsResult()
{}

void DescribeConditionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto conditionNode = value["Condition"];
	auto allRiskLevelListNode = conditionNode["RiskLevelList"]["RiskLevel"];
	for (auto conditionNodeRiskLevelListRiskLevel : allRiskLevelListNode)
	{
		Condition::RiskLevel riskLevelObject;
		if(!conditionNodeRiskLevelListRiskLevel["Id"].isNull())
			riskLevelObject.id = std::stol(conditionNodeRiskLevelListRiskLevel["Id"].asString());
		if(!conditionNodeRiskLevelListRiskLevel["Name"].isNull())
			riskLevelObject.name = conditionNodeRiskLevelListRiskLevel["Name"].asString();
		if(!conditionNodeRiskLevelListRiskLevel["Defaulted"].isNull())
			riskLevelObject.defaulted = conditionNodeRiskLevelListRiskLevel["Defaulted"].asString() == "true";
		if(!conditionNodeRiskLevelListRiskLevel["Sensitive"].isNull())
			riskLevelObject.sensitive = conditionNodeRiskLevelListRiskLevel["Sensitive"].asString() == "true";
		condition_.riskLevelList.push_back(riskLevelObject);
	}
	auto allRuleListNode = conditionNode["RuleList"]["Rule"];
	for (auto conditionNodeRuleListRule : allRuleListNode)
	{
		Condition::Rule ruleObject;
		if(!conditionNodeRuleListRule["Id"].isNull())
			ruleObject.id = std::stol(conditionNodeRuleListRule["Id"].asString());
		if(!conditionNodeRuleListRule["Name"].isNull())
			ruleObject.name = conditionNodeRuleListRule["Name"].asString();
		condition_.ruleList.push_back(ruleObject);
	}
	auto allRangeListNode = conditionNode["RangeList"]["Range"];
	for (auto conditionNodeRangeListRange : allRangeListNode)
	{
		Condition::Range rangeObject;
		if(!conditionNodeRangeListRange["Id"].isNull())
			rangeObject.id = std::stol(conditionNodeRangeListRange["Id"].asString());
		if(!conditionNodeRangeListRange["Name"].isNull())
			rangeObject.name = conditionNodeRangeListRange["Name"].asString();
		condition_.rangeList.push_back(rangeObject);
	}
	auto allEventTypeListNode = conditionNode["EventTypeList"]["EventType"];
	for (auto conditionNodeEventTypeListEventType : allEventTypeListNode)
	{
		Condition::EventType eventTypeObject;
		if(!conditionNodeEventTypeListEventType["Id"].isNull())
			eventTypeObject.id = std::stol(conditionNodeEventTypeListEventType["Id"].asString());
		if(!conditionNodeEventTypeListEventType["Name"].isNull())
			eventTypeObject.name = conditionNodeEventTypeListEventType["Name"].asString();
		if(!conditionNodeEventTypeListEventType["Code"].isNull())
			eventTypeObject.code = conditionNodeEventTypeListEventType["Code"].asString();
		condition_.eventTypeList.push_back(eventTypeObject);
	}
	auto allStatusListNode = conditionNode["StatusList"]["Status"];
	for (auto conditionNodeStatusListStatus : allStatusListNode)
	{
		Condition::Status statusObject;
		if(!conditionNodeStatusListStatus["Id"].isNull())
			statusObject.id = std::stol(conditionNodeStatusListStatus["Id"].asString());
		if(!conditionNodeStatusListStatus["Name"].isNull())
			statusObject.name = conditionNodeStatusListStatus["Name"].asString();
		condition_.statusList.push_back(statusObject);
	}
	auto allDataTypeListNode = conditionNode["DataTypeList"]["DataType"];
	for (auto conditionNodeDataTypeListDataType : allDataTypeListNode)
	{
		Condition::DataType dataTypeObject;
		if(!conditionNodeDataTypeListDataType["Id"].isNull())
			dataTypeObject.id = std::stol(conditionNodeDataTypeListDataType["Id"].asString());
		if(!conditionNodeDataTypeListDataType["Name"].isNull())
			dataTypeObject.name = conditionNodeDataTypeListDataType["Name"].asString();
		condition_.dataTypeList.push_back(dataTypeObject);
	}
	auto allOperationListNode = conditionNode["OperationList"]["Operation"];
	for (auto conditionNodeOperationListOperation : allOperationListNode)
	{
		Condition::Operation operationObject;
		if(!conditionNodeOperationListOperation["Id"].isNull())
			operationObject.id = std::stol(conditionNodeOperationListOperation["Id"].asString());
		if(!conditionNodeOperationListOperation["Name"].isNull())
			operationObject.name = conditionNodeOperationListOperation["Name"].asString();
		condition_.operationList.push_back(operationObject);
	}
	auto allProductListNode = conditionNode["ProductList"]["Product"];
	for (auto conditionNodeProductListProduct : allProductListNode)
	{
		Condition::Product productObject;
		if(!conditionNodeProductListProduct["Id"].isNull())
			productObject.id = std::stol(conditionNodeProductListProduct["Id"].asString());
		if(!conditionNodeProductListProduct["Name"].isNull())
			productObject.name = conditionNodeProductListProduct["Name"].asString();
		condition_.productList.push_back(productObject);
	}
	auto allTransferProductListNode = conditionNode["TransferProductList"]["TransferProduct"];
	for (auto conditionNodeTransferProductListTransferProduct : allTransferProductListNode)
	{
		Condition::TransferProduct transferProductObject;
		if(!conditionNodeTransferProductListTransferProduct["Code"].isNull())
			transferProductObject.code = conditionNodeTransferProductListTransferProduct["Code"].asString();
		if(!conditionNodeTransferProductListTransferProduct["Status"].isNull())
			transferProductObject.status = std::stoi(conditionNodeTransferProductListTransferProduct["Status"].asString());
		condition_.transferProductList.push_back(transferProductObject);
	}
	auto allRuleCategoryListNode = conditionNode["RuleCategoryList"]["RuleCategory"];
	for (auto conditionNodeRuleCategoryListRuleCategory : allRuleCategoryListNode)
	{
		Condition::RuleCategory ruleCategoryObject;
		if(!conditionNodeRuleCategoryListRuleCategory["Id"].isNull())
			ruleCategoryObject.id = std::stol(conditionNodeRuleCategoryListRuleCategory["Id"].asString());
		if(!conditionNodeRuleCategoryListRuleCategory["Name"].isNull())
			ruleCategoryObject.name = conditionNodeRuleCategoryListRuleCategory["Name"].asString();
		condition_.ruleCategoryList.push_back(ruleCategoryObject);
	}

}

DescribeConditionsResult::Condition DescribeConditionsResult::getCondition()const
{
	return condition_;
}

