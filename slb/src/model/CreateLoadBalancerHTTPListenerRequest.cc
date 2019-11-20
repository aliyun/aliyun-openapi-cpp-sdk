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

using AlibabaCloud::Slb::Model::CreateLoadBalancerHTTPListenerRequest;

CreateLoadBalancerHTTPListenerRequest::CreateLoadBalancerHTTPListenerRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerHTTPListener")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerHTTPListenerRequest::~CreateLoadBalancerHTTPListenerRequest()
{}

long CreateLoadBalancerHTTPListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setCoreParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getListenerForward()const
{
	return listenerForward_;
}

void CreateLoadBalancerHTTPListenerRequest::setListenerForward(const std::string& listenerForward)
{
	listenerForward_ = listenerForward;
	setCoreParameter("ListenerForward", listenerForward);
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setCoreParameter("XForwardedFor", xForwardedFor);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setCoreParameter("HealthCheckURI", healthCheckURI);
}

std::string CreateLoadBalancerHTTPListenerRequest::getAclStatus()const
{
	return aclStatus_;
}

void CreateLoadBalancerHTTPListenerRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setCoreParameter("AclStatus", aclStatus);
}

std::string CreateLoadBalancerHTTPListenerRequest::getAclType()const
{
	return aclType_;
}

void CreateLoadBalancerHTTPListenerRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setCoreParameter("AclType", aclType);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheck()const
{
	return healthCheck_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setCoreParameter("HealthCheck", healthCheck);
}

std::string CreateLoadBalancerHTTPListenerRequest::getVpcIds()const
{
	return vpcIds_;
}

void CreateLoadBalancerHTTPListenerRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setCoreParameter("VpcIds", vpcIds);
}

std::string CreateLoadBalancerHTTPListenerRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void CreateLoadBalancerHTTPListenerRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setCoreParameter("VServerGroupId", vServerGroupId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getAclId()const
{
	return aclId_;
}

void CreateLoadBalancerHTTPListenerRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getCookie()const
{
	return cookie_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setCoreParameter("Cookie", cookie);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckMethod(const std::string& healthCheckMethod)
{
	healthCheckMethod_ = healthCheckMethod;
	setCoreParameter("HealthCheckMethod", healthCheckMethod);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setCoreParameter("HealthCheckDomain", healthCheckDomain);
}

int CreateLoadBalancerHTTPListenerRequest::getRequestTimeout()const
{
	return requestTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setRequestTimeout(int requestTimeout)
{
	requestTimeout_ = requestTimeout;
	setCoreParameter("RequestTimeout", std::to_string(requestTimeout));
}

long CreateLoadBalancerHTTPListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerHTTPListenerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerHTTPListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string CreateLoadBalancerHTTPListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setCoreParameter("XForwardedFor_SLBIP", xForwardedFor_SLBIP);
}

int CreateLoadBalancerHTTPListenerRequest::getBackendServerPort()const
{
	return backendServerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
	setCoreParameter("BackendServerPort", std::to_string(backendServerPort));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setCoreParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setCoreParameter("XForwardedFor_SLBID", xForwardedFor_SLBID);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckHttpVersion()const
{
	return healthCheckHttpVersion_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckHttpVersion(const std::string& healthCheckHttpVersion)
{
	healthCheckHttpVersion_ = healthCheckHttpVersion;
	setCoreParameter("HealthCheckHttpVersion", healthCheckHttpVersion);
}

std::string CreateLoadBalancerHTTPListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerHTTPListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string CreateLoadBalancerHTTPListenerRequest::getDescription()const
{
	return description_;
}

void CreateLoadBalancerHTTPListenerRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

int CreateLoadBalancerHTTPListenerRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void CreateLoadBalancerHTTPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setCoreParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setCoreParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerHTTPListenerRequest::getScheduler()const
{
	return scheduler_;
}

void CreateLoadBalancerHTTPListenerRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setCoreParameter("Scheduler", scheduler);
}

int CreateLoadBalancerHTTPListenerRequest::getForwardPort()const
{
	return forwardPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setForwardPort(int forwardPort)
{
	forwardPort_ = forwardPort;
	setCoreParameter("ForwardPort", std::to_string(forwardPort));
}

int CreateLoadBalancerHTTPListenerRequest::getMaxConnection()const
{
	return maxConnection_;
}

void CreateLoadBalancerHTTPListenerRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setCoreParameter("MaxConnection", std::to_string(maxConnection));
}

std::string CreateLoadBalancerHTTPListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerHTTPListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int CreateLoadBalancerHTTPListenerRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setCoreParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setCoreParameter("StickySessionType", stickySessionType);
}

int CreateLoadBalancerHTTPListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setCoreParameter("HealthCheckType", healthCheckType);
}

std::string CreateLoadBalancerHTTPListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerHTTPListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerHTTPListenerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerHTTPListenerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySession()const
{
	return stickySession_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setCoreParameter("StickySession", stickySession);
}

std::string CreateLoadBalancerHTTPListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerHTTPListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateLoadBalancerHTTPListenerRequest::getGzip()const
{
	return gzip_;
}

void CreateLoadBalancerHTTPListenerRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setCoreParameter("Gzip", gzip);
}

int CreateLoadBalancerHTTPListenerRequest::getIdleTimeout()const
{
	return idleTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setIdleTimeout(int idleTimeout)
{
	idleTimeout_ = idleTimeout;
	setCoreParameter("IdleTimeout", std::to_string(idleTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setCoreParameter("XForwardedFor_proto", xForwardedFor_proto);
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setCoreParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setCoreParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

