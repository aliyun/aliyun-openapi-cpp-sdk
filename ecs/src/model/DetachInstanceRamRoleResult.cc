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

#include <alibabacloud/ecs/model/DetachInstanceRamRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DetachInstanceRamRoleResult::DetachInstanceRamRoleResult() :
	ServiceResult()
{}

DetachInstanceRamRoleResult::DetachInstanceRamRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetachInstanceRamRoleResult::~DetachInstanceRamRoleResult()
{}

void DetachInstanceRamRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDetachInstanceRamRoleResults = value["DetachInstanceRamRoleResults"]["DetachInstanceRamRoleResult"];
	for (auto value : allDetachInstanceRamRoleResults)
	{
		Result detachInstanceRamRoleResultObject;
		detachInstanceRamRoleResultObject.instanceId = value["InstanceId"].asString();
		detachInstanceRamRoleResultObject.success = std::stoi(value["Success"].asString());
		detachInstanceRamRoleResultObject.code = value["Code"].asString();
		detachInstanceRamRoleResultObject.message = value["Message"].asString();
		auto allInstanceRamRoleSets = value["InstanceRamRoleSets"]["InstanceRamRoleSet"];
		for (auto value : allInstanceRamRoleSets)
		{
			Result::InstanceRamRoleSet instanceRamRoleSetObject;
			instanceRamRoleSetObject.instanceId = value["InstanceId"].asString();
			instanceRamRoleSetObject.ramRoleName = value["RamRoleName"].asString();
			detachInstanceRamRoleResultObject.instanceRamRoleSets.push_back(instanceRamRoleSetObject);
		}
		detachInstanceRamRoleResults_.push_back(detachInstanceRamRoleResultObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	failCount_ = std::stoi(value["FailCount"].asString());
	ramRoleName_ = value["RamRoleName"].asString();

}

int DetachInstanceRamRoleResult::getTotalCount()const
{
	return totalCount_;
}

void DetachInstanceRamRoleResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DetachInstanceRamRoleResult::getRamRoleName()const
{
	return ramRoleName_;
}

void DetachInstanceRamRoleResult::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
}

int DetachInstanceRamRoleResult::getFailCount()const
{
	return failCount_;
}

void DetachInstanceRamRoleResult::setFailCount(int failCount)
{
	failCount_ = failCount;
}

