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

#include <alibabacloud/polardb/model/RefreshProxyLevelRequest.h>

using AlibabaCloud::Polardb::Model::RefreshProxyLevelRequest;

RefreshProxyLevelRequest::RefreshProxyLevelRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "RefreshProxyLevel")
{
	setMethod(HttpRequest::Method::Post);
}

RefreshProxyLevelRequest::~RefreshProxyLevelRequest()
{}

long RefreshProxyLevelRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RefreshProxyLevelRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RefreshProxyLevelRequest::getPlannedEndTime()const
{
	return plannedEndTime_;
}

void RefreshProxyLevelRequest::setPlannedEndTime(const std::string& plannedEndTime)
{
	plannedEndTime_ = plannedEndTime;
	setParameter("PlannedEndTime", plannedEndTime);
}

std::string RefreshProxyLevelRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshProxyLevelRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RefreshProxyLevelRequest::getProxyTargetClass()const
{
	return proxyTargetClass_;
}

void RefreshProxyLevelRequest::setProxyTargetClass(const std::string& proxyTargetClass)
{
	proxyTargetClass_ = proxyTargetClass;
	setParameter("ProxyTargetClass", proxyTargetClass);
}

std::string RefreshProxyLevelRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RefreshProxyLevelRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RefreshProxyLevelRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void RefreshProxyLevelRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string RefreshProxyLevelRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RefreshProxyLevelRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RefreshProxyLevelRequest::getOwnerId()const
{
	return ownerId_;
}

void RefreshProxyLevelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RefreshProxyLevelRequest::getPlannedStartTime()const
{
	return plannedStartTime_;
}

void RefreshProxyLevelRequest::setPlannedStartTime(const std::string& plannedStartTime)
{
	plannedStartTime_ = plannedStartTime;
	setParameter("PlannedStartTime", plannedStartTime);
}

bool RefreshProxyLevelRequest::getFromTimeService()const
{
	return fromTimeService_;
}

void RefreshProxyLevelRequest::setFromTimeService(bool fromTimeService)
{
	fromTimeService_ = fromTimeService;
	setParameter("FromTimeService", fromTimeService ? "true" : "false");
}

