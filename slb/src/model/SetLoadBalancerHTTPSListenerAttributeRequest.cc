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

#include <alibabacloud/slb/model/SetLoadBalancerHTTPSListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerHTTPSListenerAttributeRequest;

SetLoadBalancerHTTPSListenerAttributeRequest::SetLoadBalancerHTTPSListenerAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerHTTPSListenerAttribute")
{}

SetLoadBalancerHTTPSListenerAttributeRequest::~SetLoadBalancerHTTPSListenerAttributeRequest()
{}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setParameter("XForwardedFor", xForwardedFor);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getScheduler()const
{
	return scheduler_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheck()const
{
	return healthCheck_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setParameter("HealthCheck", healthCheck);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getMaxConnection()const
{
	return maxConnection_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setParameter("StickySessionType", stickySessionType);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getCookie()const
{
	return cookie_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setParameter("Cookie", cookie);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySession()const
{
	return stickySession_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", stickySession);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getGzip()const
{
	return gzip_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setParameter("Gzip", gzip);
}

long SetLoadBalancerHTTPSListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setParameter("ServerCertificateId", serverCertificateId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setParameter("CACertificateId", cACertificateId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setParameter("XForwardedFor_SLBIP", xForwardedFor_SLBIP);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setParameter("XForwardedFor_proto", xForwardedFor_proto);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setParameter("XForwardedFor_SLBID", xForwardedFor_SLBID);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVServerGroup(const std::string& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	setParameter("VServerGroup", vServerGroup);
}

