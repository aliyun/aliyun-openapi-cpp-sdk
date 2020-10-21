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

#include <alibabacloud/sgw/model/DescribeStorageBundlesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeStorageBundlesResult::DescribeStorageBundlesResult() :
	ServiceResult()
{}

DescribeStorageBundlesResult::DescribeStorageBundlesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageBundlesResult::~DescribeStorageBundlesResult()
{}

void DescribeStorageBundlesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageBundlesNode = value["StorageBundles"]["StorageBundle"];
	for (auto valueStorageBundlesStorageBundle : allStorageBundlesNode)
	{
		StorageBundle storageBundlesObject;
		if(!valueStorageBundlesStorageBundle["StorageBundleId"].isNull())
			storageBundlesObject.storageBundleId = valueStorageBundlesStorageBundle["StorageBundleId"].asString();
		if(!valueStorageBundlesStorageBundle["Name"].isNull())
			storageBundlesObject.name = valueStorageBundlesStorageBundle["Name"].asString();
		if(!valueStorageBundlesStorageBundle["Description"].isNull())
			storageBundlesObject.description = valueStorageBundlesStorageBundle["Description"].asString();
		if(!valueStorageBundlesStorageBundle["BackendBucketRegionId"].isNull())
			storageBundlesObject.backendBucketRegionId = valueStorageBundlesStorageBundle["BackendBucketRegionId"].asString();
		if(!valueStorageBundlesStorageBundle["Location"].isNull())
			storageBundlesObject.location = valueStorageBundlesStorageBundle["Location"].asString();
		if(!valueStorageBundlesStorageBundle["CreatedTime"].isNull())
			storageBundlesObject.createdTime = std::stol(valueStorageBundlesStorageBundle["CreatedTime"].asString());
		if(!valueStorageBundlesStorageBundle["ResourceGroupId"].isNull())
			storageBundlesObject.resourceGroupId = valueStorageBundlesStorageBundle["ResourceGroupId"].asString();
		storageBundles_.push_back(storageBundlesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeStorageBundlesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeStorageBundlesResult::getMessage()const
{
	return message_;
}

int DescribeStorageBundlesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStorageBundlesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeStorageBundlesResult::getCode()const
{
	return code_;
}

std::vector<DescribeStorageBundlesResult::StorageBundle> DescribeStorageBundlesResult::getStorageBundles()const
{
	return storageBundles_;
}

bool DescribeStorageBundlesResult::getSuccess()const
{
	return success_;
}

