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

#include <alibabacloud/polardbx/model/ModifyDBInstanceClassRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyDBInstanceClassRequest;

ModifyDBInstanceClassRequest::ModifyDBInstanceClassRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "ModifyDBInstanceClass")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceClassRequest::~ModifyDBInstanceClassRequest()
{}

std::string ModifyDBInstanceClassRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void ModifyDBInstanceClassRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string ModifyDBInstanceClassRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstanceClassRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDBInstanceClassRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBInstanceClassRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDBInstanceClassRequest::getTargetDBInstanceClass()const
{
	return targetDBInstanceClass_;
}

void ModifyDBInstanceClassRequest::setTargetDBInstanceClass(const std::string& targetDBInstanceClass)
{
	targetDBInstanceClass_ = targetDBInstanceClass;
	setParameter("TargetDBInstanceClass", targetDBInstanceClass);
}

