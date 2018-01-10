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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allShareGroups = value["ShareGroups"]["ShareGroup"];
	for (auto value : allShareGroups)
	{
		ShareGroup shareGroupObject;
		shareGroupObject.group = value["Group"].asString();
		shareGroups_.push_back(shareGroupObject);
	}
	auto allAccounts = value["Accounts"]["Account"];
	for (auto value : allAccounts)
	{
		Account accountObject;
		accountObject.aliyunId = value["AliyunId"].asString();
		accounts_.push_back(accountObject);
	}
	regionId_ = value["RegionId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	imageId_ = value["ImageId"].asString();

}

int DescribeImageSharePermissionResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeImageSharePermissionResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeImageSharePermissionResult::getPageSize()const
{
	return pageSize_;
}

void DescribeImageSharePermissionResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeImageSharePermissionResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeImageSharePermissionResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeImageSharePermissionResult::getImageId()const
{
	return imageId_;
}

void DescribeImageSharePermissionResult::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
}

std::string DescribeImageSharePermissionResult::getRegionId()const
{
	return regionId_;
}

void DescribeImageSharePermissionResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

