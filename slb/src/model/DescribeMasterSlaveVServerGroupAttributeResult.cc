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

#include <alibabacloud/slb/model/DescribeMasterSlaveVServerGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeMasterSlaveVServerGroupAttributeResult::DescribeMasterSlaveVServerGroupAttributeResult() :
	ServiceResult()
{}

DescribeMasterSlaveVServerGroupAttributeResult::DescribeMasterSlaveVServerGroupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMasterSlaveVServerGroupAttributeResult::~DescribeMasterSlaveVServerGroupAttributeResult()
{}

void DescribeMasterSlaveVServerGroupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMasterSlaveBackendServersNode = value["MasterSlaveBackendServers"]["MasterSlaveBackendServer"];
	for (auto valueMasterSlaveBackendServersMasterSlaveBackendServer : allMasterSlaveBackendServersNode)
	{
		MasterSlaveBackendServer masterSlaveBackendServersObject;
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["ServerId"].isNull())
			masterSlaveBackendServersObject.serverId = valueMasterSlaveBackendServersMasterSlaveBackendServer["ServerId"].asString();
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["Port"].isNull())
			masterSlaveBackendServersObject.port = std::stoi(valueMasterSlaveBackendServersMasterSlaveBackendServer["Port"].asString());
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["Weight"].isNull())
			masterSlaveBackendServersObject.weight = std::stoi(valueMasterSlaveBackendServersMasterSlaveBackendServer["Weight"].asString());
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["IsBackup"].isNull())
			masterSlaveBackendServersObject.isBackup = std::stoi(valueMasterSlaveBackendServersMasterSlaveBackendServer["IsBackup"].asString());
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["Type"].isNull())
			masterSlaveBackendServersObject.type = valueMasterSlaveBackendServersMasterSlaveBackendServer["Type"].asString();
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["ServerIp"].isNull())
			masterSlaveBackendServersObject.serverIp = valueMasterSlaveBackendServersMasterSlaveBackendServer["ServerIp"].asString();
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["EniHost"].isNull())
			masterSlaveBackendServersObject.eniHost = valueMasterSlaveBackendServersMasterSlaveBackendServer["EniHost"].asString();
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["VpcId"].isNull())
			masterSlaveBackendServersObject.vpcId = valueMasterSlaveBackendServersMasterSlaveBackendServer["VpcId"].asString();
		if(!valueMasterSlaveBackendServersMasterSlaveBackendServer["Description"].isNull())
			masterSlaveBackendServersObject.description = valueMasterSlaveBackendServersMasterSlaveBackendServer["Description"].asString();
		masterSlaveBackendServers_.push_back(masterSlaveBackendServersObject);
	}
	if(!value["MasterSlaveVServerGroupId"].isNull())
		masterSlaveVServerGroupId_ = value["MasterSlaveVServerGroupId"].asString();
	if(!value["MasterSlaveVServerGroupName"].isNull())
		masterSlaveVServerGroupName_ = value["MasterSlaveVServerGroupName"].asString();

}

std::string DescribeMasterSlaveVServerGroupAttributeResult::getMasterSlaveVServerGroupId()const
{
	return masterSlaveVServerGroupId_;
}

std::vector<DescribeMasterSlaveVServerGroupAttributeResult::MasterSlaveBackendServer> DescribeMasterSlaveVServerGroupAttributeResult::getMasterSlaveBackendServers()const
{
	return masterSlaveBackendServers_;
}

std::string DescribeMasterSlaveVServerGroupAttributeResult::getMasterSlaveVServerGroupName()const
{
	return masterSlaveVServerGroupName_;
}

