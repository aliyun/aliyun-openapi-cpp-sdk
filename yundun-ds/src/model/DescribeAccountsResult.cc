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
		if(!value["UserId"].isNull())
			itemsObject.userId = std::stol(value["UserId"].asString());
		if(!value["FirstLevelDepartId"].isNull())
			itemsObject.firstLevelDepartId = std::stol(value["FirstLevelDepartId"].asString());
		if(!value["LoginName"].isNull())
			itemsObject.loginName = value["LoginName"].asString();
		if(!value["FullName"].isNull())
			itemsObject.fullName = value["FullName"].asString();
		if(!value["CellphoneNum"].isNull())
			itemsObject.cellphoneNum = value["CellphoneNum"].asString();
		if(!value["TelephoneNum"].isNull())
			itemsObject.telephoneNum = value["TelephoneNum"].asString();
		if(!value["Email"].isNull())
			itemsObject.email = value["Email"].asString();
		if(!value["ActiveStatus"].isNull())
			itemsObject.activeStatus = value["ActiveStatus"].asString();
		if(!value["DeleteStatus"].isNull())
			itemsObject.deleteStatus = value["DeleteStatus"].asString();
		if(!value["DataInstance"].isNull())
			itemsObject.dataInstance = value["DataInstance"].asString();
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["LoginDataTime"].isNull())
			itemsObject.loginDataTime = std::stol(value["LoginDataTime"].asString());
		if(!value["LoginPolicyName"].isNull())
			itemsObject.loginPolicyName = value["LoginPolicyName"].asString();
		if(!value["FirstLevelDepartName"].isNull())
			itemsObject.firstLevelDepartName = value["FirstLevelDepartName"].asString();
		if(!value["RoleNames"].isNull())
			itemsObject.roleNames = value["RoleNames"].asString();
		if(!value["InstanceName"].isNull())
			itemsObject.instanceName = value["InstanceName"].asString();
		if(!value["AliUid"].isNull())
			itemsObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["AccountTypeId"].isNull())
			itemsObject.accountTypeId = std::stol(value["AccountTypeId"].asString());
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

