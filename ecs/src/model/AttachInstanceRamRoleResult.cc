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
	auto allAttachInstanceRamRoleResultsNode = value["AttachInstanceRamRoleResults"]["AttachInstanceRamRoleResult"];
	for (auto valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult : allAttachInstanceRamRoleResultsNode)
	{
		Result attachInstanceRamRoleResultsObject;
		if(!valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["Code"].isNull())
			attachInstanceRamRoleResultsObject.code = valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["Code"].asString();
		if(!valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["Message"].isNull())
			attachInstanceRamRoleResultsObject.message = valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["Message"].asString();
		if(!valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["InstanceId"].isNull())
			attachInstanceRamRoleResultsObject.instanceId = valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["InstanceId"].asString();
		if(!valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["Success"].isNull())
			attachInstanceRamRoleResultsObject.success = valueAttachInstanceRamRoleResultsAttachInstanceRamRoleResult["Success"].asString() == "true";
		attachInstanceRamRoleResults_.push_back(attachInstanceRamRoleResultsObject);
	}
	if(!value["RamRoleName"].isNull())
		ramRoleName_ = value["RamRoleName"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["FailCount"].isNull())
		failCount_ = std::stoi(value["FailCount"].asString());

}

std::vector<AttachInstanceRamRoleResult::Result> AttachInstanceRamRoleResult::getAttachInstanceRamRoleResults()const
{
	return attachInstanceRamRoleResults_;
}

int AttachInstanceRamRoleResult::getTotalCount()const
{
	return totalCount_;
}

std::string AttachInstanceRamRoleResult::getRamRoleName()const
{
	return ramRoleName_;
}

int AttachInstanceRamRoleResult::getFailCount()const
{
	return failCount_;
}

