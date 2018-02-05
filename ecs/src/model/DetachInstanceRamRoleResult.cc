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
		Result detachInstanceRamRoleResultsObject;
		if(!value["InstanceId"].isNull())
			detachInstanceRamRoleResultsObject.instanceId = value["InstanceId"].asString();
		if(!value["Success"].isNull())
			detachInstanceRamRoleResultsObject.success = value["Success"].asString() == "true";
		if(!value["Code"].isNull())
			detachInstanceRamRoleResultsObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			detachInstanceRamRoleResultsObject.message = value["Message"].asString();
		auto allInstanceRamRoleSets = value["InstanceRamRoleSets"]["InstanceRamRoleSet"];
		for (auto value : allInstanceRamRoleSets)
		{
			Result::InstanceRamRoleSet instanceRamRoleSetsObject;
			if(!value["InstanceId"].isNull())
				instanceRamRoleSetsObject.instanceId = value["InstanceId"].asString();
			if(!value["RamRoleName"].isNull())
				instanceRamRoleSetsObject.ramRoleName = value["RamRoleName"].asString();
			detachInstanceRamRoleResultsObject.instanceRamRoleSets.push_back(instanceRamRoleSetsObject);
		}
		detachInstanceRamRoleResults_.push_back(detachInstanceRamRoleResultsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["FailCount"].isNull())
		failCount_ = std::stoi(value["FailCount"].asString());
	if(!value["RamRoleName"].isNull())
		ramRoleName_ = value["RamRoleName"].asString();

}

int DetachInstanceRamRoleResult::getTotalCount()const
{
	return totalCount_;
}

std::string DetachInstanceRamRoleResult::getRamRoleName()const
{
	return ramRoleName_;
}

int DetachInstanceRamRoleResult::getFailCount()const
{
	return failCount_;
}

std::vector<DetachInstanceRamRoleResult::Result> DetachInstanceRamRoleResult::getDetachInstanceRamRoleResults()const
{
	return detachInstanceRamRoleResults_;
}

