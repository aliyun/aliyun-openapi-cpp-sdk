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

#include <alibabacloud/slb/model/DescribeHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeHealthStatusResult::DescribeHealthStatusResult() :
	ServiceResult()
{}

DescribeHealthStatusResult::DescribeHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHealthStatusResult::~DescribeHealthStatusResult()
{}

void DescribeHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackendServersNode = value["BackendServers"]["BackendServer"];
	for (auto valueBackendServersBackendServer : allBackendServersNode)
	{
		BackendServer backendServersObject;
		if(!valueBackendServersBackendServer["Type"].isNull())
			backendServersObject.type = valueBackendServersBackendServer["Type"].asString();
		if(!valueBackendServersBackendServer["EniHost"].isNull())
			backendServersObject.eniHost = valueBackendServersBackendServer["EniHost"].asString();
		if(!valueBackendServersBackendServer["Protocol"].isNull())
			backendServersObject.protocol = valueBackendServersBackendServer["Protocol"].asString();
		if(!valueBackendServersBackendServer["ServerHealthStatus"].isNull())
			backendServersObject.serverHealthStatus = valueBackendServersBackendServer["ServerHealthStatus"].asString();
		if(!valueBackendServersBackendServer["ListenerPort"].isNull())
			backendServersObject.listenerPort = std::stoi(valueBackendServersBackendServer["ListenerPort"].asString());
		if(!valueBackendServersBackendServer["ServerIp"].isNull())
			backendServersObject.serverIp = valueBackendServersBackendServer["ServerIp"].asString();
		if(!valueBackendServersBackendServer["Port"].isNull())
			backendServersObject.port = std::stoi(valueBackendServersBackendServer["Port"].asString());
		if(!valueBackendServersBackendServer["ServerId"].isNull())
			backendServersObject.serverId = valueBackendServersBackendServer["ServerId"].asString();
		backendServers_.push_back(backendServersObject);
	}

}

std::vector<DescribeHealthStatusResult::BackendServer> DescribeHealthStatusResult::getBackendServers()const
{
	return backendServers_;
}

