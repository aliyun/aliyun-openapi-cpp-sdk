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

#include <alibabacloud/smartag/model/ModifySagECRouteBackupRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagECRouteBackupRequest;

ModifySagECRouteBackupRequest::ModifySagECRouteBackupRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySagECRouteBackup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySagECRouteBackupRequest::~ModifySagECRouteBackupRequest()
{}

long ModifySagECRouteBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySagECRouteBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySagECRouteBackupRequest::getExpressConnectionInterface()const
{
	return expressConnectionInterface_;
}

void ModifySagECRouteBackupRequest::setExpressConnectionInterface(const std::string& expressConnectionInterface)
{
	expressConnectionInterface_ = expressConnectionInterface;
	setParameter("ExpressConnectionInterface", expressConnectionInterface);
}

std::string ModifySagECRouteBackupRequest::getHcIp()const
{
	return hcIp_;
}

void ModifySagECRouteBackupRequest::setHcIp(const std::string& hcIp)
{
	hcIp_ = hcIp;
	setParameter("HcIp", hcIp);
}

std::string ModifySagECRouteBackupRequest::getRegionId()const
{
	return regionId_;
}

void ModifySagECRouteBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifySagECRouteBackupRequest::getRouteBackup()const
{
	return routeBackup_;
}

void ModifySagECRouteBackupRequest::setRouteBackup(bool routeBackup)
{
	routeBackup_ = routeBackup;
	setParameter("RouteBackup", routeBackup ? "true" : "false");
}

std::string ModifySagECRouteBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySagECRouteBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySagECRouteBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySagECRouteBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifySagECRouteBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySagECRouteBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySagECRouteBackupRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySagECRouteBackupRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string ModifySagECRouteBackupRequest::getExpressConnectionNexthop()const
{
	return expressConnectionNexthop_;
}

void ModifySagECRouteBackupRequest::setExpressConnectionNexthop(const std::string& expressConnectionNexthop)
{
	expressConnectionNexthop_ = expressConnectionNexthop;
	setParameter("ExpressConnectionNexthop", expressConnectionNexthop);
}

