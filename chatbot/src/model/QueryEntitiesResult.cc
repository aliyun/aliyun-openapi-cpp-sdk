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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allEntities = value["Entities"]["Entity"];
	for (auto value : allEntities)
	{
		Entity entitiesObject;
		if(!value["EntityId"].isNull())
			entitiesObject.entityId = std::stol(value["EntityId"].asString());
		if(!value["EntityName"].isNull())
			entitiesObject.entityName = value["EntityName"].asString();
		if(!value["EntityType"].isNull())
			entitiesObject.entityType = value["EntityType"].asString();
		if(!value["Regex"].isNull())
			entitiesObject.regex = value["Regex"].asString();
		if(!value["CreateTime"].isNull())
			entitiesObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			entitiesObject.modifyTime = value["ModifyTime"].asString();
		if(!value["CreateUserId"].isNull())
			entitiesObject.createUserId = value["CreateUserId"].asString();
		if(!value["CreateUserName"].isNull())
			entitiesObject.createUserName = value["CreateUserName"].asString();
		if(!value["ModifyUserId"].isNull())
			entitiesObject.modifyUserId = value["ModifyUserId"].asString();
		if(!value["ModifyUserName"].isNull())
			entitiesObject.modifyUserName = value["ModifyUserName"].asString();
		auto allMembers = value["Members"]["MembersItem"];
		for (auto value : allMembers)
		{
			Entity::MembersItem membersObject;
			if(!value["MemberName"].isNull())
				membersObject.memberName = value["MemberName"].asString();
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

