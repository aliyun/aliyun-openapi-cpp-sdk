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

#include <alibabacloud/ecs/model/AttachInstanceRamRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

AttachInstanceRamRoleResult::AttachInstanceRamRoleResult() :
	ServiceResult()
{}

AttachInstanceRamRoleResult::AttachInstanceRamRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachInstanceRamRoleResult::~AttachInstanceRamRoleResult()
{}

void AttachInstanceRamRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAttachInstanceRamRoleResults = value["AttachInstanceRamRoleResults"]["AttachInstanceRamRoleResult"];
	for (auto value : allAttachInstanceRamRoleResults)
	{
		Result attachInstanceRamRoleResultObject;
		attachInstanceRamRoleResultObject.instanceId = value["InstanceId"].asString();
		attachInstanceRamRoleResultObject.success = std::stoi(value["Success"].asString());
		attachInstanceRamRoleResultObject.code = value["Code"].asString();
		attachInstanceRamRoleResultObject.message = value["Message"].asString();
		attachInstanceRamRoleResults_.push_back(attachInstanceRamRoleResultObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	failCount_ = std::stoi(value["FailCount"].asString());
	ramRoleName_ = value["RamRoleName"].asString();

}

int AttachInstanceRamRoleResult::getTotalCount()const
{
	return totalCount_;
}

void AttachInstanceRamRoleResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string AttachInstanceRamRoleResult::getRamRoleName()const
{
	return ramRoleName_;
}

void AttachInstanceRamRoleResult::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
}

int AttachInstanceRamRoleResult::getFailCount()const
{
	return failCount_;
}

void AttachInstanceRamRoleResult::setFailCount(int failCount)
{
	failCount_ = failCount;
}

