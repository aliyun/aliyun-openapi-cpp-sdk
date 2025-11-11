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

#include <alibabacloud/eiam/model/ListUserAuthnSourceMappingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListUserAuthnSourceMappingsResult::ListUserAuthnSourceMappingsResult() :
	ServiceResult()
{}

ListUserAuthnSourceMappingsResult::ListUserAuthnSourceMappingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserAuthnSourceMappingsResult::~ListUserAuthnSourceMappingsResult()
{}

void ListUserAuthnSourceMappingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserAuthnSourceMappingsNode = value["UserAuthnSourceMappings"]["UserAuthnSourceMapping"];
	for (auto valueUserAuthnSourceMappingsUserAuthnSourceMapping : allUserAuthnSourceMappingsNode)
	{
		UserAuthnSourceMapping userAuthnSourceMappingsObject;
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["InstanceId"].isNull())
			userAuthnSourceMappingsObject.instanceId = valueUserAuthnSourceMappingsUserAuthnSourceMapping["InstanceId"].asString();
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["UserId"].isNull())
			userAuthnSourceMappingsObject.userId = valueUserAuthnSourceMappingsUserAuthnSourceMapping["UserId"].asString();
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["UserExternalId"].isNull())
			userAuthnSourceMappingsObject.userExternalId = valueUserAuthnSourceMappingsUserAuthnSourceMapping["UserExternalId"].asString();
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["AuthnSourceType"].isNull())
			userAuthnSourceMappingsObject.authnSourceType = valueUserAuthnSourceMappingsUserAuthnSourceMapping["AuthnSourceType"].asString();
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["IdentityProviderId"].isNull())
			userAuthnSourceMappingsObject.identityProviderId = valueUserAuthnSourceMappingsUserAuthnSourceMapping["IdentityProviderId"].asString();
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["CreateTime"].isNull())
			userAuthnSourceMappingsObject.createTime = std::stol(valueUserAuthnSourceMappingsUserAuthnSourceMapping["CreateTime"].asString());
		if(!valueUserAuthnSourceMappingsUserAuthnSourceMapping["UpdateTime"].isNull())
			userAuthnSourceMappingsObject.updateTime = std::stol(valueUserAuthnSourceMappingsUserAuthnSourceMapping["UpdateTime"].asString());
		userAuthnSourceMappings_.push_back(userAuthnSourceMappingsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListUserAuthnSourceMappingsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListUserAuthnSourceMappingsResult::getPreviousToken()const
{
	return previousToken_;
}

std::string ListUserAuthnSourceMappingsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListUserAuthnSourceMappingsResult::UserAuthnSourceMapping> ListUserAuthnSourceMappingsResult::getUserAuthnSourceMappings()const
{
	return userAuthnSourceMappings_;
}

int ListUserAuthnSourceMappingsResult::getMaxResults()const
{
	return maxResults_;
}

