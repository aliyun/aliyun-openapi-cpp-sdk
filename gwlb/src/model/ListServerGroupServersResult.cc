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

#include <alibabacloud/gwlb/model/ListServerGroupServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

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
		if(!valueServersServer["Port"].isNull())
			serversObject.port = std::stoi(valueServersServer["Port"].asString());
		if(!valueServersServer["ServerGroupId"].isNull())
			serversObject.serverGroupId = valueServersServer["ServerGroupId"].asString();
		if(!valueServersServer["ServerId"].isNull())
			serversObject.serverId = valueServersServer["ServerId"].asString();
		if(!valueServersServer["ServerIp"].isNull())
			serversObject.serverIp = valueServersServer["ServerIp"].asString();
		if(!valueServersServer["ServerType"].isNull())
			serversObject.serverType = valueServersServer["ServerType"].asString();
		if(!valueServersServer["Status"].isNull())
			serversObject.status = valueServersServer["Status"].asString();
		servers_.push_back(serversObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListServerGroupServersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServerGroupServersResult::getNextToken()const
{
	return nextToken_;
}

int ListServerGroupServersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListServerGroupServersResult::Server> ListServerGroupServersResult::getServers()const
{
	return servers_;
}

