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

#include <alibabacloud/ens/model/CreateStorageGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

CreateStorageGatewayResult::CreateStorageGatewayResult() :
	ServiceResult()
{}

CreateStorageGatewayResult::CreateStorageGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateStorageGatewayResult::~CreateStorageGatewayResult()
{}

void CreateStorageGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAllocationIdNode = value["AllocationId"]["AllocationIdItem"];
	for (auto valueAllocationIdAllocationIdItem : allAllocationIdNode)
	{
		AllocationIdItem allocationIdObject;
		if(!valueAllocationIdAllocationIdItem["InstanceId"].isNull())
			allocationIdObject.instanceId = valueAllocationIdAllocationIdItem["InstanceId"].asString();
		if(!valueAllocationIdAllocationIdItem["EnsRegionId"].isNull())
			allocationIdObject.ensRegionId = valueAllocationIdAllocationIdItem["EnsRegionId"].asString();
		allocationId_.push_back(allocationIdObject);
	}
	auto allUnAllocationIdNode = value["UnAllocationId"]["UnAllocationIdItem"];
	for (auto valueUnAllocationIdUnAllocationIdItem : allUnAllocationIdNode)
	{
		UnAllocationIdItem unAllocationIdObject;
		if(!valueUnAllocationIdUnAllocationIdItem["InstanceId"].isNull())
			unAllocationIdObject.instanceId = valueUnAllocationIdUnAllocationIdItem["InstanceId"].asString();
		if(!valueUnAllocationIdUnAllocationIdItem["EnsRegionId"].isNull())
			unAllocationIdObject.ensRegionId = valueUnAllocationIdUnAllocationIdItem["EnsRegionId"].asString();
		unAllocationId_.push_back(unAllocationIdObject);
	}
	if(!value["BizStatusCode"].isNull())
		bizStatusCode_ = value["BizStatusCode"].asString();

}

std::string CreateStorageGatewayResult::getBizStatusCode()const
{
	return bizStatusCode_;
}

std::vector<CreateStorageGatewayResult::AllocationIdItem> CreateStorageGatewayResult::getAllocationId()const
{
	return allocationId_;
}

std::vector<CreateStorageGatewayResult::UnAllocationIdItem> CreateStorageGatewayResult::getUnAllocationId()const
{
	return unAllocationId_;
}

