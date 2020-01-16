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

#include <alibabacloud/r-kvstore/model/CreateDedicatedInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

CreateDedicatedInstanceResult::CreateDedicatedInstanceResult() :
	ServiceResult()
{}

CreateDedicatedInstanceResult::CreateDedicatedInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDedicatedInstanceResult::~CreateDedicatedInstanceResult()
{}

void CreateDedicatedInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["ConnectionDomain"].isNull())
		connectionDomain_ = value["ConnectionDomain"].asString();
	if(!value["Port"].isNull())
		port_ = std::stoi(value["Port"].asString());
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Capacity"].isNull())
		capacity_ = value["Capacity"].asString() == "true";
	if(!value["QPS"].isNull())
		qPS_ = value["QPS"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["Connections"].isNull())
		connections_ = std::stoi(value["Connections"].asString());
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString() == "true";
	if(!value["Config"].isNull())
		config_ = value["Config"].asString();
	if(!value["NodeType"].isNull())
		nodeType_ = value["NodeType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["PrivateIpAddr"].isNull())
		privateIpAddr_ = value["PrivateIpAddr"].asString();

}

int CreateDedicatedInstanceResult::getConnections()const
{
	return connections_;
}

std::string CreateDedicatedInstanceResult::getUserName()const
{
	return userName_;
}

bool CreateDedicatedInstanceResult::getZoneId()const
{
	return zoneId_;
}

std::string CreateDedicatedInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string CreateDedicatedInstanceResult::getConfig()const
{
	return config_;
}

int CreateDedicatedInstanceResult::getPort()const
{
	return port_;
}

std::string CreateDedicatedInstanceResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string CreateDedicatedInstanceResult::getPrivateIpAddr()const
{
	return privateIpAddr_;
}

std::string CreateDedicatedInstanceResult::getInstanceName()const
{
	return instanceName_;
}

std::string CreateDedicatedInstanceResult::getConnectionDomain()const
{
	return connectionDomain_;
}

std::string CreateDedicatedInstanceResult::getVpcId()const
{
	return vpcId_;
}

bool CreateDedicatedInstanceResult::getCapacity()const
{
	return capacity_;
}

std::string CreateDedicatedInstanceResult::getQPS()const
{
	return qPS_;
}

std::string CreateDedicatedInstanceResult::getInstanceStatus()const
{
	return instanceStatus_;
}

std::string CreateDedicatedInstanceResult::getNetworkType()const
{
	return networkType_;
}

int CreateDedicatedInstanceResult::getBandwidth()const
{
	return bandwidth_;
}

std::string CreateDedicatedInstanceResult::getNodeType()const
{
	return nodeType_;
}

std::string CreateDedicatedInstanceResult::getRegionId()const
{
	return regionId_;
}

