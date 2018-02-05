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

#include <alibabacloud/slb/model/CreateMasterSlaveServerGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateMasterSlaveServerGroupResult::CreateMasterSlaveServerGroupResult() :
	ServiceResult()
{}

CreateMasterSlaveServerGroupResult::CreateMasterSlaveServerGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMasterSlaveServerGroupResult::~CreateMasterSlaveServerGroupResult()
{}

void CreateMasterSlaveServerGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMasterSlaveBackendServers = value["MasterSlaveBackendServers"]["MasterSlaveBackendServer"];
	for (auto value : allMasterSlaveBackendServers)
	{
		MasterSlaveBackendServer masterSlaveBackendServersObject;
		if(!value["ServerId"].isNull())
			masterSlaveBackendServersObject.serverId = value["ServerId"].asString();
		if(!value["Port"].isNull())
			masterSlaveBackendServersObject.port = std::stoi(value["Port"].asString());
		if(!value["Weight"].isNull())
			masterSlaveBackendServersObject.weight = std::stoi(value["Weight"].asString());
		if(!value["ServerType"].isNull())
			masterSlaveBackendServersObject.serverType = value["ServerType"].asString();
		masterSlaveBackendServers_.push_back(masterSlaveBackendServersObject);
	}
	if(!value["MasterSlaveServerGroupId"].isNull())
		masterSlaveServerGroupId_ = value["MasterSlaveServerGroupId"].asString();

}

std::string CreateMasterSlaveServerGroupResult::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

std::vector<CreateMasterSlaveServerGroupResult::MasterSlaveBackendServer> CreateMasterSlaveServerGroupResult::getMasterSlaveBackendServers()const
{
	return masterSlaveBackendServers_;
}

