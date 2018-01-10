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

#include <alibabacloud/slb/model/CreateLoadBalancerHTTPListenerRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateLoadBalancerHTTPListenerRequest::CreateLoadBalancerHTTPListenerRequest() :
	SlbRequest("CreateLoadBalancerHTTPListener")
{}

CreateLoadBalancerHTTPListenerRequest::~CreateLoadBalancerHTTPListenerRequest()
{}

std::string CreateLoadBalancerHTTPListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerHTTPListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long CreateLoadBalancerHTTPListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setParameter("XForwardedFor", xForwardedFor);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

int CreateLoadBalancerHTTPListenerRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void CreateLoadBalancerHTTPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerHTTPListenerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLoadBalancerHTTPListenerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getScheduler()const
{
	return scheduler_;
}

void CreateLoadBalancerHTTPListenerRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheck()const
{
	return healthCheck_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setParameter("HealthCheck", healthCheck);
}

int CreateLoadBalancerHTTPListenerRequest::getMaxConnection()const
{
	return maxConnection_;
}

void CreateLoadBalancerHTTPListenerRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string CreateLoadBalancerHTTPListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerHTTPListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateLoadBalancerHTTPListenerRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setParameter("StickySessionType", stickySessionType);
}

std::string CreateLoadBalancerHTTPListenerRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void CreateLoadBalancerHTTPListenerRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

int CreateLoadBalancerHTTPListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getCookie()const
{
	return cookie_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setParameter("Cookie", cookie);
}

std::string CreateLoadBalancerHTTPListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerHTTPListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerHTTPListenerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerHTTPListenerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySession()const
{
	return stickySession_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", stickySession);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string CreateLoadBalancerHTTPListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerHTTPListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateLoadBalancerHTTPListenerRequest::getGzip()const
{
	return gzip_;
}

void CreateLoadBalancerHTTPListenerRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setParameter("Gzip", gzip);
}

long CreateLoadBalancerHTTPListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerHTTPListenerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerHTTPListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateLoadBalancerHTTPListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setParameter("XForwardedFor_SLBIP", xForwardedFor_SLBIP);
}

int CreateLoadBalancerHTTPListenerRequest::getBackendServerPort()const
{
	return backendServerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
	setParameter("BackendServerPort", std::to_string(backendServerPort));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setParameter("XForwardedFor_proto", xForwardedFor_proto);
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setParameter("XForwardedFor_SLBID", xForwardedFor_SLBID);
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

