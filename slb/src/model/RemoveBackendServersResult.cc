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

#include <alibabacloud/slb/model/RemoveBackendServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

RemoveBackendServersResult::RemoveBackendServersResult() :
	ServiceResult()
{}

RemoveBackendServersResult::RemoveBackendServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemoveBackendServersResult::~RemoveBackendServersResult()
{}

void RemoveBackendServersResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServersObject;
		if(!value["ServerId"].isNull())
			backendServersObject.serverId = value["ServerId"].asString();
		if(!value["Weight"].isNull())
			backendServersObject.weight = std::stoi(value["Weight"].asString());
		if(!value["ServerIp"].isNull())
			backendServersObject.serverIp = value["ServerIp"].asString();
		if(!value["VpcId"].isNull())
			backendServersObject.vpcId = value["VpcId"].asString();
		if(!value["Type"].isNull())
			backendServersObject.type = value["Type"].asString();
		if(!value["Description"].isNull())
			backendServersObject.description = value["Description"].asString();
		backendServers_.push_back(backendServersObject);
	}
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();

}

std::string RemoveBackendServersResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::vector<RemoveBackendServersResult::BackendServer> RemoveBackendServersResult::getBackendServers()const
{
	return backendServers_;
}

