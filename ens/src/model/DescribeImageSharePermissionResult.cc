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

#include <alibabacloud/ens/model/DescribeImageSharePermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeImageSharePermissionResult::DescribeImageSharePermissionResult() :
	ServiceResult()
{}

DescribeImageSharePermissionResult::DescribeImageSharePermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageSharePermissionResult::~DescribeImageSharePermissionResult()
{}

void DescribeImageSharePermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["Account"];
	for (auto valueAccountsAccount : allAccountsNode)
	{
		Account accountsObject;
		if(!valueAccountsAccount["AliyunUid"].isNull())
			accountsObject.aliyunUid = valueAccountsAccount["AliyunUid"].asString();
		accounts_.push_back(accountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();

}

int DescribeImageSharePermissionResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeImageSharePermissionResult::getPageSize()const
{
	return pageSize_;
}

int DescribeImageSharePermissionResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeImageSharePermissionResult::getImageId()const
{
	return imageId_;
}

std::vector<DescribeImageSharePermissionResult::Account> DescribeImageSharePermissionResult::getAccounts()const
{
	return accounts_;
}

