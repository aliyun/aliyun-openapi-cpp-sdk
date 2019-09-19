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

#include <alibabacloud/yundun-ds/model/DescribeAuthAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Account"];
	for (auto valueItemsAccount : allItemsNode)
	{
		Account itemsObject;
		if(!valueItemsAccount["Id"].isNull())
			itemsObject.id = std::stol(valueItemsAccount["Id"].asString());
		if(!valueItemsAccount["LoginName"].isNull())
			itemsObject.loginName = valueItemsAccount["LoginName"].asString();
		if(!valueItemsAccount["FullName"].isNull())
			itemsObject.fullName = valueItemsAccount["FullName"].asString();
		if(!valueItemsAccount["AuthLoginName"].isNull())
			itemsObject.authLoginName = valueItemsAccount["AuthLoginName"].asString();
		if(!valueItemsAccount["AuthFullName"].isNull())
			itemsObject.authFullName = valueItemsAccount["AuthFullName"].asString();
		if(!valueItemsAccount["AuthTime"].isNull())
			itemsObject.authTime = std::stol(valueItemsAccount["AuthTime"].asString());
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

