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

#include <alibabacloud/sddp/model/DescribeAuthAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeAuthAccountsResult::DescribeAuthAccountsResult() :
	ServiceResult()
{}

DescribeAuthAccountsResult::DescribeAuthAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuthAccountsResult::~DescribeAuthAccountsResult()
{}

void DescribeAuthAccountsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Account"];
	for (auto value : allItems)
	{
		Account itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["LoginName"].isNull())
			itemsObject.loginName = value["LoginName"].asString();
		if(!value["FullName"].isNull())
			itemsObject.fullName = value["FullName"].asString();
		if(!value["AuthLoginName"].isNull())
			itemsObject.authLoginName = value["AuthLoginName"].asString();
		if(!value["AuthFullName"].isNull())
			itemsObject.authFullName = value["AuthFullName"].asString();
		if(!value["AuthTime"].isNull())
			itemsObject.authTime = std::stol(value["AuthTime"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAuthAccountsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAuthAccountsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAuthAccountsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeAuthAccountsResult::Account> DescribeAuthAccountsResult::getItems()const
{
	return items_;
}

