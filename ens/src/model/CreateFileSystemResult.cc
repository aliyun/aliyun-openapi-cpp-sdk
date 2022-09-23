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

#include <alibabacloud/ens/model/CreateFileSystemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

CreateFileSystemResult::CreateFileSystemResult() :
	ServiceResult()
{}

CreateFileSystemResult::CreateFileSystemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFileSystemResult::~CreateFileSystemResult()
{}

void CreateFileSystemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAllocationId = value["AllocationId"]["AllocationId"];
	for (const auto &item : allAllocationId)
		allocationId_.push_back(item.asString());
	auto allUnAllocationId = value["UnAllocationId"]["UnAllocationId"];
	for (const auto &item : allUnAllocationId)
		unAllocationId_.push_back(item.asString());
	if(!value["BizStatusCode"].isNull())
		bizStatusCode_ = value["BizStatusCode"].asString();

}

std::string CreateFileSystemResult::getBizStatusCode()const
{
	return bizStatusCode_;
}

std::vector<std::string> CreateFileSystemResult::getAllocationId()const
{
	return allocationId_;
}

std::vector<std::string> CreateFileSystemResult::getUnAllocationId()const
{
	return unAllocationId_;
}

