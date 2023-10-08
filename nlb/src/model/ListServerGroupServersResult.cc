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

#include <alibabacloud/nlb/model/ListServerGroupServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

ListServerGroupServersResult::ListServerGroupServersResult() :
	ServiceResult()
{}

ListServerGroupServersResult::ListServerGroupServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServerGroupServersResult::~ListServerGroupServersResult()
{}

void ListServerGroupServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServersNode = value["Servers"]["Server"];
	for (auto valueServersServer : allServersNode)
	{
		Server serversObject;
		if(!valueServersServer["ServerId"].isNull())
			serversObject.serverId = valueServersServer["ServerId"].asString();
		if(!valueServersServer["ServerType"].isNull())
			serversObject.serverType = valueServersServer["ServerType"].asString();
		if(!valueServersServer["ServerIp"].isNull())
			serversObject.serverIp = valueServersServer["ServerIp"].asString();
		if(!valueServersServer["Port"].isNull())
			serversObject.port = std::stoi(valueServersServer["Port"].asString());
		if(!valueServersServer["Weight"].isNull())
			serversObject.weight = std::stoi(valueServersServer["Weight"].asString());
		if(!valueServersServer["ServerGroupId"].isNull())
			serversObject.serverGroupId = valueServersServer["ServerGroupId"].asString();
		if(!valueServersServer["Description"].isNull())
			serversObject.description = valueServersServer["Description"].asString();
		if(!valueServersServer["ZoneId"].isNull())
			serversObject.zoneId = valueServersServer["ZoneId"].asString();
		if(!valueServersServer["Status"].isNull())
			serversObject.status = valueServersServer["Status"].asString();
		servers_.push_back(serversObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListServerGroupServersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServerGroupServersResult::getMessage()const
{
	return message_;
}

std::string ListServerGroupServersResult::getNextToken()const
{
	return nextToken_;
}

int ListServerGroupServersResult::getMaxResults()const
{
	return maxResults_;
}

int ListServerGroupServersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListServerGroupServersResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListServerGroupServersResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::vector<ListServerGroupServersResult::Server> ListServerGroupServersResult::getServers()const
{
	return servers_;
}

std::string ListServerGroupServersResult::getCode()const
{
	return code_;
}

bool ListServerGroupServersResult::getSuccess()const
{
	return success_;
}

