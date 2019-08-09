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

#include <alibabacloud/yundun-ds/model/DescribeColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeColumnsResult::DescribeColumnsResult() :
	ServiceResult()
{}

DescribeColumnsResult::DescribeColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColumnsResult::~DescribeColumnsResult()
{}

void DescribeColumnsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["Column"];
	for (auto value : allItems)
	{
		Column itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(value["InstanceId"].asString());
		if(!value["TableId"].isNull())
			itemsObject.tableId = std::stol(value["TableId"].asString());
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(value["CreationTime"].asString());
		if(!value["Sensitive"].isNull())
			itemsObject.sensitive = value["Sensitive"].asString() == "true";
		if(!value["ProductCode"].isNull())
			itemsObject.productCode = value["ProductCode"].asString();
		if(!value["DataType"].isNull())
			itemsObject.dataType = value["DataType"].asString();
		if(!value["OdpsRiskLevelValue"].isNull())
			itemsObject.odpsRiskLevelValue = std::stoi(value["OdpsRiskLevelValue"].asString());
		if(!value["OdpsRiskLevelName"].isNull())
			itemsObject.odpsRiskLevelName = value["OdpsRiskLevelName"].asString();
		if(!value["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(value["RiskLevelId"].asString());
		if(!value["RiskLevelName"].isNull())
			itemsObject.riskLevelName = value["RiskLevelName"].asString();
		if(!value["RuleId"].isNull())
			itemsObject.ruleId = std::stol(value["RuleId"].asString());
		if(!value["RuleName"].isNull())
			itemsObject.ruleName = value["RuleName"].asString();
		if(!value["DepartName"].isNull())
			itemsObject.departName = value["DepartName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeColumnsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeColumnsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeColumnsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeColumnsResult::Column> DescribeColumnsResult::getItems()const
{
	return items_;
}

