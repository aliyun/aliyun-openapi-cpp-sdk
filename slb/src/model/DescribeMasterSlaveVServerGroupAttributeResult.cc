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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
		if(!value["IsBackup"].isNull())
			masterSlaveBackendServersObject.isBackup = std::stoi(value["IsBackup"].asString());
		if(!value["Type"].isNull())
			masterSlaveBackendServersObject.type = value["Type"].asString();
		if(!value["ServerIp"].isNull())
			masterSlaveBackendServersObject.serverIp = value["ServerIp"].asString();
		if(!value["EniHost"].isNull())
			masterSlaveBackendServersObject.eniHost = value["EniHost"].asString();
		if(!value["VpcId"].isNull())
			masterSlaveBackendServersObject.vpcId = value["VpcId"].asString();
		if(!value["Description"].isNull())
			masterSlaveBackendServersObject.description = value["Description"].asString();
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

