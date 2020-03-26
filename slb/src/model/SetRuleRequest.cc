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

#include <alibabacloud/slb/model/SetRuleRequest.h>

using AlibabaCloud::Slb::Model::SetRuleRequest;

SetRuleRequest::SetRuleRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetRule")
{
	setMethod(HttpRequest::Method::Post);
}

SetRuleRequest::~SetRuleRequest()
{}

std::string SetRuleRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetRuleRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SetRuleRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void SetRuleRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string SetRuleRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void SetRuleRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

std::string SetRuleRequest::getRuleName()const
{
	return ruleName_;
}

void SetRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

int SetRuleRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void SetRuleRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int SetRuleRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void SetRuleRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string SetRuleRequest::getScheduler()const
{
	return scheduler_;
}

void SetRuleRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string SetRuleRequest::getHealthCheck()const
{
	return healthCheck_;
}

void SetRuleRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setParameter("HealthCheck", healthCheck);
}

std::string SetRuleRequest::getRegionId()const
{
	return regionId_;
}

void SetRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetRuleRequest::getListenerSync()const
{
	return listenerSync_;
}

void SetRuleRequest::setListenerSync(const std::string& listenerSync)
{
	listenerSync_ = listenerSync;
	setParameter("ListenerSync", listenerSync);
}

int SetRuleRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void SetRuleRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string SetRuleRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void SetRuleRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setParameter("StickySessionType", stickySessionType);
}

std::string SetRuleRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetRuleRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

std::string SetRuleRequest::getCookie()const
{
	return cookie_;
}

void SetRuleRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setParameter("Cookie", cookie);
}

std::string SetRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetRuleRequest::getStickySession()const
{
	return stickySession_;
}

void SetRuleRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", stickySession);
}

std::string SetRuleRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void SetRuleRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string SetRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRuleRequest::getTags()const
{
	return tags_;
}

void SetRuleRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

int SetRuleRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void SetRuleRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string SetRuleRequest::getRuleId()const
{
	return ruleId_;
}

void SetRuleRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

int SetRuleRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void SetRuleRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string SetRuleRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void SetRuleRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

