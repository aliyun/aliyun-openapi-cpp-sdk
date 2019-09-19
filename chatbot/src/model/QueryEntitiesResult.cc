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

#include <alibabacloud/chatbot/model/QueryEntitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryEntitiesResult::QueryEntitiesResult() :
	ServiceResult()
{}

QueryEntitiesResult::QueryEntitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEntitiesResult::~QueryEntitiesResult()
{}

void QueryEntitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntitiesNode = value["Entities"]["Entity"];
	for (auto valueEntitiesEntity : allEntitiesNode)
	{
		Entity entitiesObject;
		if(!valueEntitiesEntity["EntityId"].isNull())
			entitiesObject.entityId = std::stol(valueEntitiesEntity["EntityId"].asString());
		if(!valueEntitiesEntity["EntityName"].isNull())
			entitiesObject.entityName = valueEntitiesEntity["EntityName"].asString();
		if(!valueEntitiesEntity["EntityType"].isNull())
			entitiesObject.entityType = valueEntitiesEntity["EntityType"].asString();
		if(!valueEntitiesEntity["Regex"].isNull())
			entitiesObject.regex = valueEntitiesEntity["Regex"].asString();
		if(!valueEntitiesEntity["CreateTime"].isNull())
			entitiesObject.createTime = valueEntitiesEntity["CreateTime"].asString();
		if(!valueEntitiesEntity["ModifyTime"].isNull())
			entitiesObject.modifyTime = valueEntitiesEntity["ModifyTime"].asString();
		if(!valueEntitiesEntity["CreateUserId"].isNull())
			entitiesObject.createUserId = valueEntitiesEntity["CreateUserId"].asString();
		if(!valueEntitiesEntity["CreateUserName"].isNull())
			entitiesObject.createUserName = valueEntitiesEntity["CreateUserName"].asString();
		if(!valueEntitiesEntity["ModifyUserId"].isNull())
			entitiesObject.modifyUserId = valueEntitiesEntity["ModifyUserId"].asString();
		if(!valueEntitiesEntity["ModifyUserName"].isNull())
			entitiesObject.modifyUserName = valueEntitiesEntity["ModifyUserName"].asString();
		auto allMembersNode = allEntitiesNode["Members"]["MembersItem"];
		for (auto allEntitiesNodeMembersMembersItem : allMembersNode)
		{
			Entity::MembersItem membersObject;
			if(!allEntitiesNodeMembersMembersItem["MemberName"].isNull())
				membersObject.memberName = allEntitiesNodeMembersMembersItem["MemberName"].asString();
			auto allSynonyms = value["Synonyms"]["Synonyms"];
			for (auto value : allSynonyms)
				membersObject.synonyms.push_back(value.asString());
			entitiesObject.members.push_back(membersObject);
		}
		entities_.push_back(entitiesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryEntitiesResult::getTotalCount()const
{
	return totalCount_;
}

int QueryEntitiesResult::getPageSize()const
{
	return pageSize_;
}

int QueryEntitiesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryEntitiesResult::Entity> QueryEntitiesResult::getEntities()const
{
	return entities_;
}

