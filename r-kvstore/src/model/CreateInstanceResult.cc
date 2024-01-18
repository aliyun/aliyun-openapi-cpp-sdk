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

#include <alibabacloud/r-kvstore/model/CreateInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

CreateInstanceResult::CreateInstanceResult() :
	ServiceResult()
{}

CreateInstanceResult::CreateInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateInstanceResult::~CreateInstanceResult()
{}

void CreateInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["QPS"].isNull())
		qPS_ = std::stol(value["QPS"].asString());
	if(!value["Capacity"].isNull())
		capacity_ = std::stol(value["Capacity"].asString());
	if(!value["ConnectionDomain"].isNull())
		connectionDomain_ = value["ConnectionDomain"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Port"].isNull())
		port_ = std::stoi(value["Port"].asString());
	if(!value["Config"].isNull())
		config_ = value["Config"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["NodeType"].isNull())
		nodeType_ = value["NodeType"].asString();
	if(!value["Connections"].isNull())
		connections_ = std::stol(value["Connections"].asString());
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stol(value["Bandwidth"].asString());
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["PrivateIpAddr"].isNull())
		privateIpAddr_ = value["PrivateIpAddr"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

long CreateInstanceResult::getConnections()const
{
	return connections_;
}

std::string CreateInstanceResult::getUserName()const
{
	return userName_;
}

std::string CreateInstanceResult::getEndTime()const
{
	return endTime_;
}

std::string CreateInstanceResult::getZoneId()const
{
	return zoneId_;
}

std::string CreateInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string CreateInstanceResult::getConfig()const
{
	return config_;
}

int CreateInstanceResult::getPort()const
{
	return port_;
}

std::string CreateInstanceResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string CreateInstanceResult::getPrivateIpAddr()const
{
	return privateIpAddr_;
}

long CreateInstanceResult::getOrderId()const
{
	return orderId_;
}

std::string CreateInstanceResult::getConnectionDomain()const
{
	return connectionDomain_;
}

std::string CreateInstanceResult::getInstanceName()const
{
	return instanceName_;
}

std::string CreateInstanceResult::getVpcId()const
{
	return vpcId_;
}

long CreateInstanceResult::getQPS()const
{
	return qPS_;
}

long CreateInstanceResult::getCapacity()const
{
	return capacity_;
}

std::string CreateInstanceResult::getChargeType()const
{
	return chargeType_;
}

std::string CreateInstanceResult::getNetworkType()const
{
	return networkType_;
}

std::string CreateInstanceResult::getInstanceStatus()const
{
	return instanceStatus_;
}

std::string CreateInstanceResult::getNodeType()const
{
	return nodeType_;
}

long CreateInstanceResult::getBandwidth()const
{
	return bandwidth_;
}

std::string CreateInstanceResult::getRegionId()const
{
	return regionId_;
}

