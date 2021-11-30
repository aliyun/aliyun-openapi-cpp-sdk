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

#include <alibabacloud/alb/model/ListServerGroupServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

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
	auto allServersNode = value["Servers"]["BackendServer"];
	for (auto valueServersBackendServer : allServersNode)
	{
		BackendServer serversObject;
		if(!valueServersBackendServer["Description"].isNull())
			serversObject.description = valueServersBackendServer["Description"].asString();
		if(!valueServersBackendServer["Port"].isNull())
			serversObject.port = std::stoi(valueServersBackendServer["Port"].asString());
		if(!valueServersBackendServer["ServerId"].isNull())
			serversObject.serverId = valueServersBackendServer["ServerId"].asString();
		if(!valueServersBackendServer["ServerIp"].isNull())
			serversObject.serverIp = valueServersBackendServer["ServerIp"].asString();
		if(!valueServersBackendServer["ServerType"].isNull())
			serversObject.serverType = valueServersBackendServer["ServerType"].asString();
		if(!valueServersBackendServer["Status"].isNull())
			serversObject.status = valueServersBackendServer["Status"].asString();
		if(!valueServersBackendServer["Weight"].isNull())
			serversObject.weight = std::stoi(valueServersBackendServer["Weight"].asString());
		if(!valueServersBackendServer["ServerGroupId"].isNull())
			serversObject.serverGroupId = valueServersBackendServer["ServerGroupId"].asString();
		if(!valueServersBackendServer["RemoteIpEnabled"].isNull())
			serversObject.remoteIpEnabled = valueServersBackendServer["RemoteIpEnabled"].asString() == "true";
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

std::vector<ListServerGroupServersResult::BackendServer> ListServerGroupServersResult::getServers()const
{
	return servers_;
}

