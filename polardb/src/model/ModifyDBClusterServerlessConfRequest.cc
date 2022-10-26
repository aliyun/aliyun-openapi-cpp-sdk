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

#include <alibabacloud/polardb/model/ModifyDBClusterServerlessConfRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterServerlessConfRequest;

ModifyDBClusterServerlessConfRequest::ModifyDBClusterServerlessConfRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterServerlessConf")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterServerlessConfRequest::~ModifyDBClusterServerlessConfRequest()
{}

std::string ModifyDBClusterServerlessConfRequest::getScaleRoNumMax()const
{
	return scaleRoNumMax_;
}

void ModifyDBClusterServerlessConfRequest::setScaleRoNumMax(const std::string& scaleRoNumMax)
{
	scaleRoNumMax_ = scaleRoNumMax;
	setParameter("ScaleRoNumMax", scaleRoNumMax);
}

long ModifyDBClusterServerlessConfRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterServerlessConfRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterServerlessConfRequest::getScaleMax()const
{
	return scaleMax_;
}

void ModifyDBClusterServerlessConfRequest::setScaleMax(const std::string& scaleMax)
{
	scaleMax_ = scaleMax;
	setParameter("ScaleMax", scaleMax);
}

std::string ModifyDBClusterServerlessConfRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterServerlessConfRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterServerlessConfRequest::getSecondsUntilAutoPause()const
{
	return secondsUntilAutoPause_;
}

void ModifyDBClusterServerlessConfRequest::setSecondsUntilAutoPause(const std::string& secondsUntilAutoPause)
{
	secondsUntilAutoPause_ = secondsUntilAutoPause;
	setParameter("SecondsUntilAutoPause", secondsUntilAutoPause);
}

std::string ModifyDBClusterServerlessConfRequest::getScaleMin()const
{
	return scaleMin_;
}

void ModifyDBClusterServerlessConfRequest::setScaleMin(const std::string& scaleMin)
{
	scaleMin_ = scaleMin;
	setParameter("ScaleMin", scaleMin);
}

std::string ModifyDBClusterServerlessConfRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterServerlessConfRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterServerlessConfRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterServerlessConfRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterServerlessConfRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterServerlessConfRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterServerlessConfRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterServerlessConfRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterServerlessConfRequest::getScaleRoNumMin()const
{
	return scaleRoNumMin_;
}

void ModifyDBClusterServerlessConfRequest::setScaleRoNumMin(const std::string& scaleRoNumMin)
{
	scaleRoNumMin_ = scaleRoNumMin;
	setParameter("ScaleRoNumMin", scaleRoNumMin);
}

std::string ModifyDBClusterServerlessConfRequest::getAllowShutDown()const
{
	return allowShutDown_;
}

void ModifyDBClusterServerlessConfRequest::setAllowShutDown(const std::string& allowShutDown)
{
	allowShutDown_ = allowShutDown;
	setParameter("AllowShutDown", allowShutDown);
}

