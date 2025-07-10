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

#include <alibabacloud/vpc/model/CreateHighReliablePhysicalConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateHighReliablePhysicalConnectionResult::CreateHighReliablePhysicalConnectionResult() :
	ServiceResult()
{}

CreateHighReliablePhysicalConnectionResult::CreateHighReliablePhysicalConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateHighReliablePhysicalConnectionResult::~CreateHighReliablePhysicalConnectionResult()
{}

void CreateHighReliablePhysicalConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPhysicalConnectionListNode = value["PhysicalConnectionList"]["physicalConnectionListItem"];
	for (auto valuePhysicalConnectionListphysicalConnectionListItem : allPhysicalConnectionListNode)
	{
		PhysicalConnectionListItem physicalConnectionListObject;
		if(!valuePhysicalConnectionListphysicalConnectionListItem["InstanceId"].isNull())
			physicalConnectionListObject.instanceId = valuePhysicalConnectionListphysicalConnectionListItem["InstanceId"].asString();
		if(!valuePhysicalConnectionListphysicalConnectionListItem["RegionNo"].isNull())
			physicalConnectionListObject.regionNo = valuePhysicalConnectionListphysicalConnectionListItem["RegionNo"].asString();
		physicalConnectionList_.push_back(physicalConnectionListObject);
	}
	auto allErrorInfoListNode = value["ErrorInfoList"]["errorInfoListItem"];
	for (auto valueErrorInfoListerrorInfoListItem : allErrorInfoListNode)
	{
		ErrorInfoListItem errorInfoListObject;
		if(!valueErrorInfoListerrorInfoListItem["ErrorCode"].isNull())
			errorInfoListObject.errorCode = valueErrorInfoListerrorInfoListItem["ErrorCode"].asString();
		if(!valueErrorInfoListerrorInfoListItem["ErrorMessage"].isNull())
			errorInfoListObject.errorMessage = valueErrorInfoListerrorInfoListItem["ErrorMessage"].asString();
		if(!valueErrorInfoListerrorInfoListItem["InstanceId"].isNull())
			errorInfoListObject.instanceId = valueErrorInfoListerrorInfoListItem["InstanceId"].asString();
		errorInfoList_.push_back(errorInfoListObject);
	}

}

std::vector<CreateHighReliablePhysicalConnectionResult::ErrorInfoListItem> CreateHighReliablePhysicalConnectionResult::getErrorInfoList()const
{
	return errorInfoList_;
}

std::vector<CreateHighReliablePhysicalConnectionResult::PhysicalConnectionListItem> CreateHighReliablePhysicalConnectionResult::getPhysicalConnectionList()const
{
	return physicalConnectionList_;
}

