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

#include <alibabacloud/ecs/model/DescribeImageSharePermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allShareGroups = value["ShareGroups"]["ShareGroup"];
	for (auto value : allShareGroups)
	{
		ShareGroup shareGroupsObject;
		if(!value["Group"].isNull())
			shareGroupsObject.group = value["Group"].asString();
		shareGroups_.push_back(shareGroupsObject);
	}
	auto allAccounts = value["Accounts"]["Account"];
	for (auto value : allAccounts)
	{
		Account accountsObject;
		if(!value["AliyunId"].isNull())
			accountsObject.aliyunId = value["AliyunId"].asString();
		accounts_.push_back(accountsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
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

std::vector<DescribeImageSharePermissionResult::ShareGroup> DescribeImageSharePermissionResult::getShareGroups()const
{
	return shareGroups_;
}

std::string DescribeImageSharePermissionResult::getRegionId()const
{
	return regionId_;
}

std::vector<DescribeImageSharePermissionResult::Account> DescribeImageSharePermissionResult::getAccounts()const
{
	return accounts_;
}

