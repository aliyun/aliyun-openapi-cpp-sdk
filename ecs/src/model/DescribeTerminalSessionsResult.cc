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

#include <alibabacloud/ecs/model/DescribeTerminalSessionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTerminalSessionsResult::DescribeTerminalSessionsResult() :
	ServiceResult()
{}

DescribeTerminalSessionsResult::DescribeTerminalSessionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTerminalSessionsResult::~DescribeTerminalSessionsResult()
{}

void DescribeTerminalSessionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSessionsNode = value["Sessions"]["Session"];
	for (auto valueSessionsSession : allSessionsNode)
	{
		Session sessionsObject;
		if(!valueSessionsSession["CreationTime"].isNull())
			sessionsObject.creationTime = valueSessionsSession["CreationTime"].asString();
		if(!valueSessionsSession["TargetServer"].isNull())
			sessionsObject.targetServer = valueSessionsSession["TargetServer"].asString();
		if(!valueSessionsSession["PortNumber"].isNull())
			sessionsObject.portNumber = std::stoi(valueSessionsSession["PortNumber"].asString());
		if(!valueSessionsSession["PrincipalId"].isNull())
			sessionsObject.principalId = valueSessionsSession["PrincipalId"].asString();
		if(!valueSessionsSession["Username"].isNull())
			sessionsObject.username = valueSessionsSession["Username"].asString();
		if(!valueSessionsSession["ClientIP"].isNull())
			sessionsObject.clientIP = valueSessionsSession["ClientIP"].asString();
		if(!valueSessionsSession["IdentityType"].isNull())
			sessionsObject.identityType = valueSessionsSession["IdentityType"].asString();
		if(!valueSessionsSession["SessionId"].isNull())
			sessionsObject.sessionId = valueSessionsSession["SessionId"].asString();
		auto allConnectionsNode = valueSessionsSession["Connections"]["Connection"];
		for (auto valueSessionsSessionConnectionsConnection : allConnectionsNode)
		{
			Session::Connection connectionsObject;
			if(!valueSessionsSessionConnectionsConnection["ClosedReason"].isNull())
				connectionsObject.closedReason = valueSessionsSessionConnectionsConnection["ClosedReason"].asString();
			if(!valueSessionsSessionConnectionsConnection["EndTime"].isNull())
				connectionsObject.endTime = valueSessionsSessionConnectionsConnection["EndTime"].asString();
			if(!valueSessionsSessionConnectionsConnection["Status"].isNull())
				connectionsObject.status = valueSessionsSessionConnectionsConnection["Status"].asString();
			if(!valueSessionsSessionConnectionsConnection["StartTime"].isNull())
				connectionsObject.startTime = valueSessionsSessionConnectionsConnection["StartTime"].asString();
			if(!valueSessionsSessionConnectionsConnection["InstanceId"].isNull())
				connectionsObject.instanceId = valueSessionsSessionConnectionsConnection["InstanceId"].asString();
			sessionsObject.connections.push_back(connectionsObject);
		}
		sessions_.push_back(sessionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeTerminalSessionsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeTerminalSessionsResult::Session> DescribeTerminalSessionsResult::getSessions()const
{
	return sessions_;
}

