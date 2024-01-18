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

#include <alibabacloud/r-kvstore/model/CreateTairInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

CreateTairInstanceResult::CreateTairInstanceResult() :
	ServiceResult()
{}

CreateTairInstanceResult::CreateTairInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTairInstanceResult::~CreateTairInstanceResult()
{}

void CreateTairInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["QPS"].isNull())
		qPS_ = std::stol(value["QPS"].asString());
	if(!value["ConnectionDomain"].isNull())
		connectionDomain_ = value["ConnectionDomain"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Port"].isNull())
		port_ = std::stoi(value["Port"].asString());
	if(!value["Config"].isNull())
		config_ = value["Config"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stol(value["Bandwidth"].asString());
	if(!value["Connections"].isNull())
		connections_ = std::stol(value["Connections"].asString());
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

long CreateTairInstanceResult::getConnections()const
{
	return connections_;
}

std::string CreateTairInstanceResult::getTaskId()const
{
	return taskId_;
}

std::string CreateTairInstanceResult::getZoneId()const
{
	return zoneId_;
}

std::string CreateTairInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string CreateTairInstanceResult::getConfig()const
{
	return config_;
}

int CreateTairInstanceResult::getPort()const
{
	return port_;
}

long CreateTairInstanceResult::getOrderId()const
{
	return orderId_;
}

std::string CreateTairInstanceResult::getConnectionDomain()const
{
	return connectionDomain_;
}

std::string CreateTairInstanceResult::getInstanceName()const
{
	return instanceName_;
}

long CreateTairInstanceResult::getQPS()const
{
	return qPS_;
}

std::string CreateTairInstanceResult::getChargeType()const
{
	return chargeType_;
}

std::string CreateTairInstanceResult::getInstanceStatus()const
{
	return instanceStatus_;
}

long CreateTairInstanceResult::getBandwidth()const
{
	return bandwidth_;
}

std::string CreateTairInstanceResult::getRegionId()const
{
	return regionId_;
}

