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

#include <alibabacloud/chatbot/model/DescribeEntitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeEntitiesResult::DescribeEntitiesResult() :
	ServiceResult()
{}

DescribeEntitiesResult::DescribeEntitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEntitiesResult::~DescribeEntitiesResult()
{}

void DescribeEntitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMembersNode = value["Members"]["MembersItem"];
	for (auto valueMembersMembersItem : allMembersNode)
	{
		MembersItem membersObject;
		if(!valueMembersMembersItem["MemberName"].isNull())
			membersObject.memberName = valueMembersMembersItem["MemberName"].asString();
		auto allSynonyms = value["Synonyms"]["Synonyms"];
		for (auto value : allSynonyms)
			membersObject.synonyms.push_back(value.asString());
		members_.push_back(membersObject);
	}
	if(!value["EntityId"].isNull())
		entityId_ = std::stol(value["EntityId"].asString());
	if(!value["EntityName"].isNull())
		entityName_ = value["EntityName"].asString();
	if(!value["EntityType"].isNull())
		entityType_ = value["EntityType"].asString();
	if(!value["Regex"].isNull())
		regex_ = value["Regex"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateUserId"].isNull())
		createUserId_ = value["CreateUserId"].asString();
	if(!value["CreateUserName"].isNull())
		createUserName_ = value["CreateUserName"].asString();
	if(!value["ModifyUserId"].isNull())
		modifyUserId_ = value["ModifyUserId"].asString();
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();

}

long DescribeEntitiesResult::getEntityId()const
{
	return entityId_;
}

std::string DescribeEntitiesResult::getEntityType()const
{
	return entityType_;
}

std::string DescribeEntitiesResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeEntitiesResult::getModifyUserId()const
{
	return modifyUserId_;
}

std::string DescribeEntitiesResult::getEntityName()const
{
	return entityName_;
}

std::string DescribeEntitiesResult::getRegex()const
{
	return regex_;
}

std::string DescribeEntitiesResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeEntitiesResult::getModifyUserName()const
{
	return modifyUserName_;
}

std::string DescribeEntitiesResult::getCreateUserId()const
{
	return createUserId_;
}

std::string DescribeEntitiesResult::getCreateUserName()const
{
	return createUserName_;
}

std::vector<DescribeEntitiesResult::MembersItem> DescribeEntitiesResult::getMembers()const
{
	return members_;
}

