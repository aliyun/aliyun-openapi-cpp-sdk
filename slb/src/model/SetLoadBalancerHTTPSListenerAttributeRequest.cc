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
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long SetLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setCoreParameter("HealthCheckTimeout", healthCheckTimeout);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setCoreParameter("XForwardedFor", std::to_string(xForwardedFor));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setCoreParameter("HealthCheckURI", std::to_string(healthCheckURI));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getDescription()const
{
	return description_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setCoreParameter("UnhealthyThreshold", unhealthyThreshold);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setCoreParameter("HealthyThreshold", healthyThreshold);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAclStatus()const
{
	return aclStatus_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setCoreParameter("AclStatus", std::to_string(aclStatus));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getScheduler()const
{
	return scheduler_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setCoreParameter("Scheduler", std::to_string(scheduler));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAclType()const
{
	return aclType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setCoreParameter("AclType", std::to_string(aclType));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheck()const
{
	return healthCheck_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setCoreParameter("HealthCheck", std::to_string(healthCheck));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getMaxConnection()const
{
	return maxConnection_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setCoreParameter("MaxConnection", maxConnection);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getEnableHttp2()const
{
	return enableHttp2_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setEnableHttp2(const std::string& enableHttp2)
{
	enableHttp2_ = enableHttp2;
	setCoreParameter("EnableHttp2", std::to_string(enableHttp2));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setCoreParameter("CookieTimeout", cookieTimeout);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setCoreParameter("StickySessionType", std::to_string(stickySessionType));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVpcIds()const
{
	return vpcIds_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setCoreParameter("VpcIds", std::to_string(vpcIds));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setCoreParameter("VServerGroupId", std::to_string(vServerGroupId));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAclId()const
{
	return aclId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", std::to_string(aclId));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", listenerPort);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getCookie()const
{
	return cookie_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setCoreParameter("Cookie", std::to_string(cookie));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setCoreParameter("HealthCheckType", std::to_string(healthCheckType));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySession()const
{
	return stickySession_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setCoreParameter("StickySession", std::to_string(stickySession));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckMethod(const std::string& healthCheckMethod)
{
	healthCheckMethod_ = healthCheckMethod;
	setCoreParameter("HealthCheckMethod", std::to_string(healthCheckMethod));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setCoreParameter("HealthCheckDomain", std::to_string(healthCheckDomain));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getRequestTimeout()const
{
	return requestTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setRequestTimeout(int requestTimeout)
{
	requestTimeout_ = requestTimeout;
	setCoreParameter("RequestTimeout", requestTimeout);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getGzip()const
{
	return gzip_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setCoreParameter("Gzip", std::to_string(gzip));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getTLSCipherPolicy()const
{
	return tLSCipherPolicy_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setTLSCipherPolicy(const std::string& tLSCipherPolicy)
{
	tLSCipherPolicy_ = tLSCipherPolicy;
	setCoreParameter("TLSCipherPolicy", std::to_string(tLSCipherPolicy));
}

long SetLoadBalancerHTTPSListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setCoreParameter("ServerCertificateId", std::to_string(serverCertificateId));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setCoreParameter("CACertificateId", std::to_string(cACertificateId));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getBackendProtocol()const
{
	return backendProtocol_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setBackendProtocol(const std::string& backendProtocol)
{
	backendProtocol_ = backendProtocol;
	setCoreParameter("BackendProtocol", std::to_string(backendProtocol));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getIdleTimeout()const
{
	return idleTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setIdleTimeout(int idleTimeout)
{
	idleTimeout_ = idleTimeout;
	setCoreParameter("IdleTimeout", idleTimeout);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", std::to_string(loadBalancerId));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setCoreParameter("XForwardedFor_SLBIP", std::to_string(xForwardedFor_SLBIP));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setCoreParameter("HealthCheckInterval", healthCheckInterval);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setCoreParameter("XForwardedFor_proto", std::to_string(xForwardedFor_proto));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setCoreParameter("XForwardedFor_SLBID", std::to_string(xForwardedFor_SLBID));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setCoreParameter("HealthCheckConnectPort", healthCheckConnectPort);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setCoreParameter("HealthCheckHttpCode", std::to_string(healthCheckHttpCode));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVServerGroup(const std::string& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	setCoreParameter("VServerGroup", std::to_string(vServerGroup));
}

