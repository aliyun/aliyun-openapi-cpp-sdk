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

#include <alibabacloud/ccc/model/ListTransferableSkillGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListTransferableSkillGroupsResult::ListTransferableSkillGroupsResult() :
	ServiceResult()
{}

ListTransferableSkillGroupsResult::ListTransferableSkillGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransferableSkillGroupsResult::~ListTransferableSkillGroupsResult()
{}

void ListTransferableSkillGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSkillGroupsNode = value["SkillGroups"]["SkillGroup"];
	for (auto valueSkillGroupsSkillGroup : allSkillGroupsNode)
	{
		SkillGroup skillGroupsObject;
		if(!valueSkillGroupsSkillGroup["SkillGroupId"].isNull())
			skillGroupsObject.skillGroupId = valueSkillGroupsSkillGroup["SkillGroupId"].asString();
		if(!valueSkillGroupsSkillGroup["InstanceId"].isNull())
			skillGroupsObject.instanceId = valueSkillGroupsSkillGroup["InstanceId"].asString();
		if(!valueSkillGroupsSkillGroup["SkillGroupName"].isNull())
			skillGroupsObject.skillGroupName = valueSkillGroupsSkillGroup["SkillGroupName"].asString();
		if(!valueSkillGroupsSkillGroup["AccSkillGroupName"].isNull())
			skillGroupsObject.accSkillGroupName = valueSkillGroupsSkillGroup["AccSkillGroupName"].asString();
		if(!valueSkillGroupsSkillGroup["AccQueueName"].isNull())
			skillGroupsObject.accQueueName = valueSkillGroupsSkillGroup["AccQueueName"].asString();
		if(!valueSkillGroupsSkillGroup["SkillGroupDescription"].isNull())
			skillGroupsObject.skillGroupDescription = valueSkillGroupsSkillGroup["SkillGroupDescription"].asString();
		if(!valueSkillGroupsSkillGroup["RoutingStrategy"].isNull())
			skillGroupsObject.routingStrategy = valueSkillGroupsSkillGroup["RoutingStrategy"].asString();
		if(!valueSkillGroupsSkillGroup["AllowPrivateOutboundNumber"].isNull())
			skillGroupsObject.allowPrivateOutboundNumber = valueSkillGroupsSkillGroup["AllowPrivateOutboundNumber"].asString() == "true";
		if(!valueSkillGroupsSkillGroup["UserCount"].isNull())
			skillGroupsObject.userCount = std::stoi(valueSkillGroupsSkillGroup["UserCount"].asString());
		skillGroups_.push_back(skillGroupsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListTransferableSkillGroupsResult::getMessage()const
{
	return message_;
}

int ListTransferableSkillGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListTransferableSkillGroupsResult::SkillGroup> ListTransferableSkillGroupsResult::getSkillGroups()const
{
	return skillGroups_;
}

std::string ListTransferableSkillGroupsResult::getCode()const
{
	return code_;
}

bool ListTransferableSkillGroupsResult::getSuccess()const
{
	return success_;
}

