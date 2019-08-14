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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto conditionNode = value["Condition"];
	auto allRiskLevelList = value["RiskLevelList"]["RiskLevel"];
	for (auto value : allRiskLevelList)
	{
		Condition::RiskLevel riskLevelObject;
		if(!value["Id"].isNull())
			riskLevelObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			riskLevelObject.name = value["Name"].asString();
		if(!value["Defaulted"].isNull())
			riskLevelObject.defaulted = value["Defaulted"].asString() == "true";
		if(!value["Sensitive"].isNull())
			riskLevelObject.sensitive = value["Sensitive"].asString() == "true";
		condition_.riskLevelList.push_back(riskLevelObject);
	}
	auto allRuleList = value["RuleList"]["Rule"];
	for (auto value : allRuleList)
	{
		Condition::Rule ruleObject;
		if(!value["Id"].isNull())
			ruleObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			ruleObject.name = value["Name"].asString();
		condition_.ruleList.push_back(ruleObject);
	}
	auto allRangeList = value["RangeList"]["Range"];
	for (auto value : allRangeList)
	{
		Condition::Range rangeObject;
		if(!value["Id"].isNull())
			rangeObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			rangeObject.name = value["Name"].asString();
		condition_.rangeList.push_back(rangeObject);
	}
	auto allEventTypeList = value["EventTypeList"]["EventType"];
	for (auto value : allEventTypeList)
	{
		Condition::EventType eventTypeObject;
		if(!value["Id"].isNull())
			eventTypeObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			eventTypeObject.name = value["Name"].asString();
		if(!value["Code"].isNull())
			eventTypeObject.code = value["Code"].asString();
		condition_.eventTypeList.push_back(eventTypeObject);
	}
	auto allStatusList = value["StatusList"]["Status"];
	for (auto value : allStatusList)
	{
		Condition::Status statusObject;
		if(!value["Id"].isNull())
			statusObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			statusObject.name = value["Name"].asString();
		condition_.statusList.push_back(statusObject);
	}
	auto allDataTypeList = value["DataTypeList"]["DataType"];
	for (auto value : allDataTypeList)
	{
		Condition::DataType dataTypeObject;
		if(!value["Id"].isNull())
			dataTypeObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			dataTypeObject.name = value["Name"].asString();
		condition_.dataTypeList.push_back(dataTypeObject);
	}
	auto allOperationList = value["OperationList"]["Operation"];
	for (auto value : allOperationList)
	{
		Condition::Operation operationObject;
		if(!value["Id"].isNull())
			operationObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			operationObject.name = value["Name"].asString();
		condition_.operationList.push_back(operationObject);
	}
	auto allProductList = value["ProductList"]["Product"];
	for (auto value : allProductList)
	{
		Condition::Product productObject;
		if(!value["Id"].isNull())
			productObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			productObject.name = value["Name"].asString();
		condition_.productList.push_back(productObject);
	}
	auto allTransferProductList = value["TransferProductList"]["TransferProduct"];
	for (auto value : allTransferProductList)
	{
		Condition::TransferProduct transferProductObject;
		if(!value["Code"].isNull())
			transferProductObject.code = value["Code"].asString();
		if(!value["Status"].isNull())
			transferProductObject.status = std::stoi(value["Status"].asString());
		condition_.transferProductList.push_back(transferProductObject);
	}
	auto allRuleCategoryList = value["RuleCategoryList"]["RuleCategory"];
	for (auto value : allRuleCategoryList)
	{
		Condition::RuleCategory ruleCategoryObject;
		if(!value["Id"].isNull())
			ruleCategoryObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			ruleCategoryObject.name = value["Name"].asString();
		condition_.ruleCategoryList.push_back(ruleCategoryObject);
	}

}

DescribeConditionsResult::Condition DescribeConditionsResult::getCondition()const
{
	return condition_;
}

