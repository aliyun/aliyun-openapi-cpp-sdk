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

#include <alibabacloud/cbn/model/EnableCenVbrHealthCheckRequest.h>

using AlibabaCloud::Cbn::Model::EnableCenVbrHealthCheckRequest;

EnableCenVbrHealthCheckRequest::EnableCenVbrHealthCheckRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "EnableCenVbrHealthCheck")
{
	setMethod(HttpRequest::Method::Post);
}

EnableCenVbrHealthCheckRequest::~EnableCenVbrHealthCheckRequest()
{}

long EnableCenVbrHealthCheckRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EnableCenVbrHealthCheckRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EnableCenVbrHealthCheckRequest::getCenId()const
{
	return cenId_;
}

void EnableCenVbrHealthCheckRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string EnableCenVbrHealthCheckRequest::getHealthCheckTargetIp()const
{
	return healthCheckTargetIp_;
}

void EnableCenVbrHealthCheckRequest::setHealthCheckTargetIp(const std::string& healthCheckTargetIp)
{
	healthCheckTargetIp_ = healthCheckTargetIp;
	setParameter("HealthCheckTargetIp", healthCheckTargetIp);
}

int EnableCenVbrHealthCheckRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void EnableCenVbrHealthCheckRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

long EnableCenVbrHealthCheckRequest::getVbrInstanceOwnerId()const
{
	return vbrInstanceOwnerId_;
}

void EnableCenVbrHealthCheckRequest::setVbrInstanceOwnerId(long vbrInstanceOwnerId)
{
	vbrInstanceOwnerId_ = vbrInstanceOwnerId;
	setParameter("VbrInstanceOwnerId", std::to_string(vbrInstanceOwnerId));
}

std::string EnableCenVbrHealthCheckRequest::getVbrInstanceRegionId()const
{
	return vbrInstanceRegionId_;
}

void EnableCenVbrHealthCheckRequest::setVbrInstanceRegionId(const std::string& vbrInstanceRegionId)
{
	vbrInstanceRegionId_ = vbrInstanceRegionId;
	setParameter("VbrInstanceRegionId", vbrInstanceRegionId);
}

std::string EnableCenVbrHealthCheckRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EnableCenVbrHealthCheckRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EnableCenVbrHealthCheckRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EnableCenVbrHealthCheckRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long EnableCenVbrHealthCheckRequest::getOwnerId()const
{
	return ownerId_;
}

void EnableCenVbrHealthCheckRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EnableCenVbrHealthCheckRequest::getHealthCheckSourceIp()const
{
	return healthCheckSourceIp_;
}

void EnableCenVbrHealthCheckRequest::setHealthCheckSourceIp(const std::string& healthCheckSourceIp)
{
	healthCheckSourceIp_ = healthCheckSourceIp;
	setParameter("HealthCheckSourceIp", healthCheckSourceIp);
}

int EnableCenVbrHealthCheckRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void EnableCenVbrHealthCheckRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string EnableCenVbrHealthCheckRequest::getVbrInstanceId()const
{
	return vbrInstanceId_;
}

void EnableCenVbrHealthCheckRequest::setVbrInstanceId(const std::string& vbrInstanceId)
{
	vbrInstanceId_ = vbrInstanceId;
	setParameter("VbrInstanceId", vbrInstanceId);
}

