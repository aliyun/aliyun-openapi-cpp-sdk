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

#include <alibabacloud/cloud-siem/model/DescribeWhiteRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeWhiteRuleListResult::DescribeWhiteRuleListResult() :
	ServiceResult()
{}

DescribeWhiteRuleListResult::DescribeWhiteRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhiteRuleListResult::~DescribeWhiteRuleListResult()
{}

void DescribeWhiteRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResponseDataNode = dataNode["ResponseData"]["ResponseDataItem"];
	for (auto dataNodeResponseDataResponseDataItem : allResponseDataNode)
	{
		Data::ResponseDataItem responseDataItemObject;
		if(!dataNodeResponseDataResponseDataItem["Id"].isNull())
			responseDataItemObject.id = std::stol(dataNodeResponseDataResponseDataItem["Id"].asString());
		if(!dataNodeResponseDataResponseDataItem["GmtCreate"].isNull())
			responseDataItemObject.gmtCreate = dataNodeResponseDataResponseDataItem["GmtCreate"].asString();
		if(!dataNodeResponseDataResponseDataItem["GmtModified"].isNull())
			responseDataItemObject.gmtModified = dataNodeResponseDataResponseDataItem["GmtModified"].asString();
		if(!dataNodeResponseDataResponseDataItem["Aliuid"].isNull())
			responseDataItemObject.aliuid = std::stol(dataNodeResponseDataResponseDataItem["Aliuid"].asString());
		if(!dataNodeResponseDataResponseDataItem["SubAliuid"].isNull())
			responseDataItemObject.subAliuid = std::stol(dataNodeResponseDataResponseDataItem["SubAliuid"].asString());
		if(!dataNodeResponseDataResponseDataItem["AlertType"].isNull())
			responseDataItemObject.alertType = dataNodeResponseDataResponseDataItem["AlertType"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertTypeId"].isNull())
			responseDataItemObject.alertTypeId = dataNodeResponseDataResponseDataItem["AlertTypeId"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertName"].isNull())
			responseDataItemObject.alertName = dataNodeResponseDataResponseDataItem["AlertName"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertNameId"].isNull())
			responseDataItemObject.alertNameId = dataNodeResponseDataResponseDataItem["AlertNameId"].asString();
		if(!dataNodeResponseDataResponseDataItem["Status"].isNull())
			responseDataItemObject.status = std::stoi(dataNodeResponseDataResponseDataItem["Status"].asString());
		if(!dataNodeResponseDataResponseDataItem["IncidentUuid"].isNull())
			responseDataItemObject.incidentUuid = dataNodeResponseDataResponseDataItem["IncidentUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertUuid"].isNull())
			responseDataItemObject.alertUuid = dataNodeResponseDataResponseDataItem["AlertUuid"].asString();
		auto expressionNode = value["Expression"];
		if(!expressionNode["Logic"].isNull())
			responseDataItemObject.expression.logic = expressionNode["Logic"].asString();
		auto allConditionsNode = expressionNode["Conditions"]["Condition"];
		for (auto expressionNodeConditionsCondition : allConditionsNode)
		{
			Data::ResponseDataItem::Expression::Condition conditionObject;
			if(!expressionNodeConditionsCondition["ItemId"].isNull())
				conditionObject.itemId = std::stoi(expressionNodeConditionsCondition["ItemId"].asString());
			if(!expressionNodeConditionsCondition["Operator"].isNull())
				conditionObject._operator = expressionNodeConditionsCondition["Operator"].asString();
			if(!expressionNodeConditionsCondition["IsNot"].isNull())
				conditionObject.isNot = expressionNodeConditionsCondition["IsNot"].asString() == "true";
			auto leftNode = value["Left"];
			if(!leftNode["Value"].isNull())
				conditionObject.left.value = leftNode["Value"].asString();
			if(!leftNode["IsVar"].isNull())
				conditionObject.left.isVar = leftNode["IsVar"].asString() == "true";
			if(!leftNode["Type"].isNull())
				conditionObject.left.type = leftNode["Type"].asString();
			if(!leftNode["Modifier"].isNull())
				conditionObject.left.modifier = leftNode["Modifier"].asString();
			if(!leftNode["ModifierParam"].isNull())
				conditionObject.left.modifierParam = leftNode["ModifierParam"].asString();
			auto rightNode = value["Right"];
			if(!rightNode["Value"].isNull())
				conditionObject.right.value = rightNode["Value"].asString();
			if(!rightNode["IsVar"].isNull())
				conditionObject.right.isVar = rightNode["IsVar"].asString() == "true";
			if(!rightNode["Type"].isNull())
				conditionObject.right.type = rightNode["Type"].asString();
			if(!rightNode["Modifier"].isNull())
				conditionObject.right.modifier = rightNode["Modifier"].asString();
			if(!rightNode["ModifierParam"].isNull())
				conditionObject.right.modifierParam = rightNode["ModifierParam"].asString();
			responseDataItemObject.expression.conditions.push_back(conditionObject);
		}
		data_.responseData.push_back(responseDataItemObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeWhiteRuleListResult::getMessage()const
{
	return message_;
}

DescribeWhiteRuleListResult::Data DescribeWhiteRuleListResult::getData()const
{
	return data_;
}

int DescribeWhiteRuleListResult::getCode()const
{
	return code_;
}

bool DescribeWhiteRuleListResult::getSuccess()const
{
	return success_;
}

