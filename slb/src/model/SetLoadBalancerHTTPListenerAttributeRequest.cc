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

#include <alibabacloud/slb/model/SetLoadBalancerHTTPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerHTTPListenerAttributeRequest;

SetLoadBalancerHTTPListenerAttributeRequest::SetLoadBalancerHTTPListenerAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerHTTPListenerAttribute")
{}

SetLoadBalancerHTTPListenerAttributeRequest::~SetLoadBalancerHTTPListenerAttributeRequest()
{}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetLoadBalancerHTTPListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setParameter("XForwardedFor", xForwardedFor);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getScheduler()const
{
	return scheduler_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheck()const
{
	return healthCheck_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setParameter("HealthCheck", healthCheck);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getMaxConnection()const
{
	return maxConnection_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setParameter("StickySessionType", stickySessionType);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getCookie()const
{
	return cookie_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setParameter("Cookie", cookie);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getStickySession()const
{
	return stickySession_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", stickySession);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getGzip()const
{
	return gzip_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setParameter("Gzip", gzip);
}

long SetLoadBalancerHTTPListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setParameter("XForwardedFor_SLBIP", xForwardedFor_SLBIP);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setParameter("XForwardedFor_proto", xForwardedFor_proto);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setParameter("XForwardedFor_SLBID", xForwardedFor_SLBID);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setVServerGroup(const std::string& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	setParameter("VServerGroup", vServerGroup);
}

