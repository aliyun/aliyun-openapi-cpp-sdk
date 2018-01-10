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

#include <alibabacloud/slb/model/CreateMasterSlaveVServerGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateMasterSlaveVServerGroupResult::CreateMasterSlaveVServerGroupResult() :
	ServiceResult()
{}

CreateMasterSlaveVServerGroupResult::CreateMasterSlaveVServerGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMasterSlaveVServerGroupResult::~CreateMasterSlaveVServerGroupResult()
{}

void CreateMasterSlaveVServerGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMasterSlaveBackendServers = value["MasterSlaveBackendServers"]["MasterSlaveBackendServer"];
	for (auto value : allMasterSlaveBackendServers)
	{
		MasterSlaveBackendServer masterSlaveBackendServerObject;
		masterSlaveBackendServerObject.serverId = value["ServerId"].asString();
		masterSlaveBackendServerObject.port = std::stoi(value["Port"].asString());
		masterSlaveBackendServerObject.weight = std::stoi(value["Weight"].asString());
		masterSlaveBackendServerObject.isBackup = std::stoi(value["IsBackup"].asString());
		masterSlaveBackendServers_.push_back(masterSlaveBackendServerObject);
	}
	masterSlaveVServerGroupId_ = value["MasterSlaveVServerGroupId"].asString();

}

std::string CreateMasterSlaveVServerGroupResult::getMasterSlaveVServerGroupId()const
{
	return masterSlaveVServerGroupId_;
}

void CreateMasterSlaveVServerGroupResult::setMasterSlaveVServerGroupId(const std::string& masterSlaveVServerGroupId)
{
	masterSlaveVServerGroupId_ = masterSlaveVServerGroupId;
}

