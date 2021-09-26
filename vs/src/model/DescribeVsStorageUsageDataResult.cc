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

#include <alibabacloud/vs/model/DescribeVsStorageUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsStorageUsageDataResult::DescribeVsStorageUsageDataResult() :
	ServiceResult()
{}

DescribeVsStorageUsageDataResult::DescribeVsStorageUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsStorageUsageDataResult::~DescribeVsStorageUsageDataResult()
{}

void DescribeVsStorageUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageUsageNode = value["StorageUsage"]["StorageUsageDataModule"];
	for (auto valueStorageUsageStorageUsageDataModule : allStorageUsageNode)
	{
		StorageUsageDataModule storageUsageObject;
		if(!valueStorageUsageStorageUsageDataModule["TimeStamp"].isNull())
			storageUsageObject.timeStamp = valueStorageUsageStorageUsageDataModule["TimeStamp"].asString();
		if(!valueStorageUsageStorageUsageDataModule["Bucket"].isNull())
			storageUsageObject.bucket = valueStorageUsageStorageUsageDataModule["Bucket"].asString();
		if(!valueStorageUsageStorageUsageDataModule["StorageDataValue"].isNull())
			storageUsageObject.storageDataValue = std::stoi(valueStorageUsageStorageUsageDataModule["StorageDataValue"].asString());
		storageUsage_.push_back(storageUsageObject);
	}

}

std::vector<DescribeVsStorageUsageDataResult::StorageUsageDataModule> DescribeVsStorageUsageDataResult::getStorageUsage()const
{
	return storageUsage_;
}

