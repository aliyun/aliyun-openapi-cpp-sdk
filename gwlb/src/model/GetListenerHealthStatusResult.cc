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

#include <alibabacloud/gwlb/model/GetListenerHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

GetListenerHealthStatusResult::GetListenerHealthStatusResult() :
	ServiceResult()
{}

GetListenerHealthStatusResult::GetListenerHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetListenerHealthStatusResult::~GetListenerHealthStatusResult()
{}

void GetListenerHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenerHealthStatusNode = value["ListenerHealthStatus"]["listenerHealthStatusItem"];
	for (auto valueListenerHealthStatuslistenerHealthStatusItem : allListenerHealthStatusNode)
	{
		ListenerHealthStatusItem listenerHealthStatusObject;
		if(!valueListenerHealthStatuslistenerHealthStatusItem["ListenerId"].isNull())
			listenerHealthStatusObject.listenerId = valueListenerHealthStatuslistenerHealthStatusItem["ListenerId"].asString();
		auto allServerGroupInfosNode = valueListenerHealthStatuslistenerHealthStatusItem["ServerGroupInfos"]["ServerGroupInfo"];
		for (auto valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfo : allServerGroupInfosNode)
		{
			ListenerHealthStatusItem::ServerGroupInfo serverGroupInfosObject;
			if(!valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfo["HealthCheckEnabled"].isNull())
				serverGroupInfosObject.healthCheckEnabled = valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfo["HealthCheckEnabled"].asString() == "true";
			if(!valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfo["ServerGroupId"].isNull())
				serverGroupInfosObject.serverGroupId = valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfo["ServerGroupId"].asString();
			auto allServersNode = valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfo["Servers"]["server"];
			for (auto valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver : allServersNode)
			{
				ListenerHealthStatusItem::ServerGroupInfo::Server serversObject;
				if(!valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["Port"].isNull())
					serversObject.port = std::stoi(valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["Port"].asString());
				if(!valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["ServerId"].isNull())
					serversObject.serverId = valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["ServerId"].asString();
				if(!valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["ServerIp"].isNull())
					serversObject.serverIp = valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["ServerIp"].asString();
				if(!valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["Status"].isNull())
					serversObject.status = valueListenerHealthStatuslistenerHealthStatusItemServerGroupInfosServerGroupInfoServersserver["Status"].asString();
				auto reasonNode = value["Reason"];
				if(!reasonNode["ReasonCode"].isNull())
					serversObject.reason.reasonCode = reasonNode["ReasonCode"].asString();
				serverGroupInfosObject.servers.push_back(serversObject);
			}
			listenerHealthStatusObject.serverGroupInfos.push_back(serverGroupInfosObject);
		}
		listenerHealthStatus_.push_back(listenerHealthStatusObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<GetListenerHealthStatusResult::ListenerHealthStatusItem> GetListenerHealthStatusResult::getListenerHealthStatus()const
{
	return listenerHealthStatus_;
}

int GetListenerHealthStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetListenerHealthStatusResult::getNextToken()const
{
	return nextToken_;
}

int GetListenerHealthStatusResult::getMaxResults()const
{
	return maxResults_;
}

