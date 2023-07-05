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

#include <alibabacloud/privatelink/model/ListVpcEndpointServiceUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointServiceUsersResult::ListVpcEndpointServiceUsersResult() :
	ServiceResult()
{}

ListVpcEndpointServiceUsersResult::ListVpcEndpointServiceUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointServiceUsersResult::~ListVpcEndpointServiceUsersResult()
{}

void ListVpcEndpointServiceUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["UserId"].isNull())
			usersObject.userId = std::stol(valueUsersUser["UserId"].asString());
		users_.push_back(usersObject);
	}
	auto allUserARNsNode = value["UserARNs"]["UserARN"];
	for (auto valueUserARNsUserARN : allUserARNsNode)
	{
		UserARN userARNsObject;
		if(!valueUserARNsUserARN["UserARN"].isNull())
			userARNsObject.userARN = valueUserARNsUserARN["UserARN"].asString();
		userARNs_.push_back(userARNsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListVpcEndpointServiceUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVpcEndpointServiceUsersResult::getNextToken()const
{
	return nextToken_;
}

int ListVpcEndpointServiceUsersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListVpcEndpointServiceUsersResult::User> ListVpcEndpointServiceUsersResult::getUsers()const
{
	return users_;
}

std::vector<ListVpcEndpointServiceUsersResult::UserARN> ListVpcEndpointServiceUsersResult::getUserARNs()const
{
	return userARNs_;
}

