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

#include <alibabacloud/scsp/model/GetAgentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetAgentResult::GetAgentResult() :
	ServiceResult()
{}

GetAgentResult::GetAgentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAgentResult::~GetAgentResult()
{}

void GetAgentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["DisplayName"].isNull())
		data_.displayName = dataNode["DisplayName"].asString();
	if(!dataNode["AgentId"].isNull())
		data_.agentId = std::stol(dataNode["AgentId"].asString());
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	auto allGroupListNode = dataNode["GroupList"]["GroupListItem"];
	for (auto dataNodeGroupListGroupListItem : allGroupListNode)
	{
		Data::GroupListItem groupListItemObject;
		if(!dataNodeGroupListGroupListItem["DisplayName"].isNull())
			groupListItemObject.displayName = dataNodeGroupListGroupListItem["DisplayName"].asString();
		if(!dataNodeGroupListGroupListItem["Description"].isNull())
			groupListItemObject.description = dataNodeGroupListGroupListItem["Description"].asString();
		if(!dataNodeGroupListGroupListItem["ChannelType"].isNull())
			groupListItemObject.channelType = std::stoi(dataNodeGroupListGroupListItem["ChannelType"].asString());
		if(!dataNodeGroupListGroupListItem["SkillGroupId"].isNull())
			groupListItemObject.skillGroupId = std::stol(dataNodeGroupListGroupListItem["SkillGroupId"].asString());
		if(!dataNodeGroupListGroupListItem["Name"].isNull())
			groupListItemObject.name = dataNodeGroupListGroupListItem["Name"].asString();
		data_.groupList.push_back(groupListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetAgentResult::getMessage()const
{
	return message_;
}

long GetAgentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetAgentResult::Data GetAgentResult::getData()const
{
	return data_;
}

std::string GetAgentResult::getCode()const
{
	return code_;
}

bool GetAgentResult::getSuccess()const
{
	return success_;
}

