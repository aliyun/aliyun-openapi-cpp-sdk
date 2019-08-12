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

#include <alibabacloud/yundun-ds/model/DescribeRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeRulesResult::DescribeRulesResult() :
	ServiceResult()
{}

DescribeRulesResult::DescribeRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRulesResult::~DescribeRulesResult()
{}

void DescribeRulesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Rule"];
	for (auto value : allItems)
	{
		Rule itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			itemsObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["CustomType"].isNull())
			itemsObject.customType = std::stoi(value["CustomType"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["UserId"].isNull())
			itemsObject.userId = std::stol(value["UserId"].asString());
		if(!value["LoginName"].isNull())
			itemsObject.loginName = value["LoginName"].asString();
		if(!value["DisplayName"].isNull())
			itemsObject.displayName = value["DisplayName"].asString();
		if(!value["Category"].isNull())
			itemsObject.category = std::stoi(value["Category"].asString());
		if(!value["CategoryName"].isNull())
			itemsObject.categoryName = value["CategoryName"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = std::stoi(value["Status"].asString());
		if(!value["RiskLevelName"].isNull())
			itemsObject.riskLevelName = value["RiskLevelName"].asString();
		if(!value["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(value["RiskLevelId"].asString());
		if(!value["Content"].isNull())
			itemsObject.content = value["Content"].asString();
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

int DescribeRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRulesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeRulesResult::Rule> DescribeRulesResult::getItems()const
{
	return items_;
}

