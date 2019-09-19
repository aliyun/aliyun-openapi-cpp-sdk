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

#include <alibabacloud/yundun-ds/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeAccountsResult::DescribeAccountsResult() :
	ServiceResult()
{}

DescribeAccountsResult::DescribeAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountsResult::~DescribeAccountsResult()
{}

void DescribeAccountsResult::parse(const std::string &payload)
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
		if(!valueItemsAccount["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsAccount["UserId"].asString());
		if(!valueItemsAccount["FirstLevelDepartId"].isNull())
			itemsObject.firstLevelDepartId = std::stol(valueItemsAccount["FirstLevelDepartId"].asString());
		if(!valueItemsAccount["LoginName"].isNull())
			itemsObject.loginName = valueItemsAccount["LoginName"].asString();
		if(!valueItemsAccount["FullName"].isNull())
			itemsObject.fullName = valueItemsAccount["FullName"].asString();
		if(!valueItemsAccount["CellphoneNum"].isNull())
			itemsObject.cellphoneNum = valueItemsAccount["CellphoneNum"].asString();
		if(!valueItemsAccount["TelephoneNum"].isNull())
			itemsObject.telephoneNum = valueItemsAccount["TelephoneNum"].asString();
		if(!valueItemsAccount["Email"].isNull())
			itemsObject.email = valueItemsAccount["Email"].asString();
		if(!valueItemsAccount["ActiveStatus"].isNull())
			itemsObject.activeStatus = valueItemsAccount["ActiveStatus"].asString();
		if(!valueItemsAccount["DeleteStatus"].isNull())
			itemsObject.deleteStatus = valueItemsAccount["DeleteStatus"].asString();
		if(!valueItemsAccount["DataInstance"].isNull())
			itemsObject.dataInstance = valueItemsAccount["DataInstance"].asString();
		if(!valueItemsAccount["CreateTime"].isNull())
			itemsObject.createTime = std::stol(valueItemsAccount["CreateTime"].asString());
		if(!valueItemsAccount["LoginDataTime"].isNull())
			itemsObject.loginDataTime = std::stol(valueItemsAccount["LoginDataTime"].asString());
		if(!valueItemsAccount["LoginPolicyName"].isNull())
			itemsObject.loginPolicyName = valueItemsAccount["LoginPolicyName"].asString();
		if(!valueItemsAccount["FirstLevelDepartName"].isNull())
			itemsObject.firstLevelDepartName = valueItemsAccount["FirstLevelDepartName"].asString();
		if(!valueItemsAccount["RoleNames"].isNull())
			itemsObject.roleNames = valueItemsAccount["RoleNames"].asString();
		if(!valueItemsAccount["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsAccount["InstanceName"].asString();
		if(!valueItemsAccount["AliUid"].isNull())
			itemsObject.aliUid = std::stol(valueItemsAccount["AliUid"].asString());
		if(!valueItemsAccount["AccountTypeId"].isNull())
			itemsObject.accountTypeId = std::stol(valueItemsAccount["AccountTypeId"].asString());
		auto eventCountNode = value["EventCount"];
		auto totalNode = eventCountNode["Total"];
		if(!totalNode["TotalCount"].isNull())
			itemsObject.eventCount.total.totalCount = std::stol(totalNode["TotalCount"].asString());
		if(!totalNode["UndealCount"].isNull())
			itemsObject.eventCount.total.undealCount = std::stol(totalNode["UndealCount"].asString());
		if(!totalNode["ConfirmCount"].isNull())
			itemsObject.eventCount.total.confirmCount = std::stol(totalNode["ConfirmCount"].asString());
		if(!totalNode["ExcludeCount"].isNull())
			itemsObject.eventCount.total.excludeCount = std::stol(totalNode["ExcludeCount"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAccountsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccountsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccountsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeAccountsResult::Account> DescribeAccountsResult::getItems()const
{
	return items_;
}

