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

#include <alibabacloud/slb/model/CreateLoadBalancerHTTPSListenerRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateLoadBalancerHTTPSListenerRequest::CreateLoadBalancerHTTPSListenerRequest() :
	SlbRequest("CreateLoadBalancerHTTPSListener")
{}

CreateLoadBalancerHTTPSListenerRequest::~CreateLoadBalancerHTTPSListenerRequest()
{}

std::string CreateLoadBalancerHTTPSListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long CreateLoadBalancerHTTPSListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setParameter("XForwardedFor", xForwardedFor);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

int CreateLoadBalancerHTTPSListenerRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void CreateLoadBalancerHTTPSListenerRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getScheduler()const
{
	return scheduler_;
}

void CreateLoadBalancerHTTPSListenerRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheck()const
{
	return healthCheck_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setParameter("HealthCheck", healthCheck);
}

int CreateLoadBalancerHTTPSListenerRequest::getMaxConnection()const
{
	return maxConnection_;
}

void CreateLoadBalancerHTTPSListenerRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateLoadBalancerHTTPSListenerRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setParameter("StickySessionType", stickySessionType);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

int CreateLoadBalancerHTTPSListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getCookie()const
{
	return cookie_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setParameter("Cookie", cookie);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerHTTPSListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerHTTPSListenerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySession()const
{
	return stickySession_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", stickySession);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerHTTPSListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getGzip()const
{
	return gzip_;
}

void CreateLoadBalancerHTTPSListenerRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setParameter("Gzip", gzip);
}

long CreateLoadBalancerHTTPSListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setParameter("ServerCertificateId", serverCertificateId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setParameter("CACertificateId", cACertificateId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerHTTPSListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setParameter("XForwardedFor_SLBIP", xForwardedFor_SLBIP);
}

int CreateLoadBalancerHTTPSListenerRequest::getBackendServerPort()const
{
	return backendServerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
	setParameter("BackendServerPort", std::to_string(backendServerPort));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setParameter("XForwardedFor_proto", xForwardedFor_proto);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setParameter("XForwardedFor_SLBID", xForwardedFor_SLBID);
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

