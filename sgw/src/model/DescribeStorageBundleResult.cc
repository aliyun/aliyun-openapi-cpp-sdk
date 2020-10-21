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

#include <alibabacloud/sgw/model/DescribeStorageBundleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeStorageBundleResult::DescribeStorageBundleResult() :
	ServiceResult()
{}

DescribeStorageBundleResult::DescribeStorageBundleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageBundleResult::~DescribeStorageBundleResult()
{}

void DescribeStorageBundleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StorageBundleId"].isNull())
		storageBundleId_ = value["StorageBundleId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["BackendBucketRegionId"].isNull())
		backendBucketRegionId_ = value["BackendBucketRegionId"].asString();
	if(!value["Location"].isNull())
		location_ = value["Location"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = std::stol(value["CreatedTime"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeStorageBundleResult::getDescription()const
{
	return description_;
}

long DescribeStorageBundleResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeStorageBundleResult::getMessage()const
{
	return message_;
}

std::string DescribeStorageBundleResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeStorageBundleResult::getStorageBundleId()const
{
	return storageBundleId_;
}

std::string DescribeStorageBundleResult::getCode()const
{
	return code_;
}

std::string DescribeStorageBundleResult::getBackendBucketRegionId()const
{
	return backendBucketRegionId_;
}

bool DescribeStorageBundleResult::getSuccess()const
{
	return success_;
}

std::string DescribeStorageBundleResult::getName()const
{
	return name_;
}

std::string DescribeStorageBundleResult::getLocation()const
{
	return location_;
}

