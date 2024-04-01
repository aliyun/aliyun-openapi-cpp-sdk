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

#include <alibabacloud/slb/model/DescribeBackendServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeBackendServersResult::DescribeBackendServersResult() :
	ServiceResult()
{}

DescribeBackendServersResult::DescribeBackendServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackendServersResult::~DescribeBackendServersResult()
{}

void DescribeBackendServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["ListenerPort"].isNull())
			listenersObject.listenerPort = std::stoi(valueListenersListener["ListenerPort"].asString());
		auto allBackendServersNode = valueListenersListener["BackendServers"]["BackendServer"];
		for (auto valueListenersListenerBackendServersBackendServer : allBackendServersNode)
		{
			Listener::BackendServer backendServersObject;
			if(!valueListenersListenerBackendServersBackendServer["ServerHealthStatus"].isNull())
				backendServersObject.serverHealthStatus = valueListenersListenerBackendServersBackendServer["ServerHealthStatus"].asString();
			if(!valueListenersListenerBackendServersBackendServer["ServerId"].isNull())
				backendServersObject.serverId = valueListenersListenerBackendServersBackendServer["ServerId"].asString();
			listenersObject.backendServers.push_back(backendServersObject);
		}
		listeners_.push_back(listenersObject);
	}

}

std::vector<DescribeBackendServersResult::Listener> DescribeBackendServersResult::getListeners()const
{
	return listeners_;
}

