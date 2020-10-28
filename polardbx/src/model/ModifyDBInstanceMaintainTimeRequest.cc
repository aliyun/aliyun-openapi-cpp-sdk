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

#include <alibabacloud/polardbx/model/ModifyDBInstanceMaintainTimeRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyDBInstanceMaintainTimeRequest;

ModifyDBInstanceMaintainTimeRequest::ModifyDBInstanceMaintainTimeRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "ModifyDBInstanceMaintainTime")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceMaintainTimeRequest::~ModifyDBInstanceMaintainTimeRequest()
{}

std::string ModifyDBInstanceMaintainTimeRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void ModifyDBInstanceMaintainTimeRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string ModifyDBInstanceMaintainTimeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstanceMaintainTimeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDBInstanceMaintainTimeRequest::getMaintainTime()const
{
	return maintainTime_;
}

void ModifyDBInstanceMaintainTimeRequest::setMaintainTime(const std::string& maintainTime)
{
	maintainTime_ = maintainTime;
	setParameter("MaintainTime", maintainTime);
}

std::string ModifyDBInstanceMaintainTimeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBInstanceMaintainTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

