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

using AlibabaCloud::Slb::Model::CreateLoadBalancerHTTPSListenerRequest;

CreateLoadBalancerHTTPSListenerRequest::CreateLoadBalancerHTTPSListenerRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerHTTPSListener")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerHTTPSListenerRequest::~CreateLoadBalancerHTTPSListenerRequest()
{}

long CreateLoadBalancerHTTPSListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckTimeout(int healthCheckTimeout)
{
	healthCheckTimeout_ = healthCheckTimeout;
	setCoreParameter("HealthCheckTimeout", std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor()const
{
	return xForwardedFor_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor(const std::string& xForwardedFor)
{
	xForwardedFor_ = xForwardedFor;
	setCoreParameter("XForwardedFor", xForwardedFor);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setCoreParameter("HealthCheckURI", healthCheckURI);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAclStatus()const
{
	return aclStatus_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setCoreParameter("AclStatus", aclStatus);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAclType()const
{
	return aclType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setCoreParameter("AclType", aclType);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheck()const
{
	return healthCheck_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheck(const std::string& healthCheck)
{
	healthCheck_ = healthCheck;
	setCoreParameter("HealthCheck", healthCheck);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getVpcIds()const
{
	return vpcIds_;
}

void CreateLoadBalancerHTTPSListenerRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setCoreParameter("VpcIds", vpcIds);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setCoreParameter("VServerGroupId", vServerGroupId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAclId()const
{
	return aclId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getCookie()const
{
	return cookie_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCookie(const std::string& cookie)
{
	cookie_ = cookie;
	setCoreParameter("Cookie", cookie);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckMethod(const std::string& healthCheckMethod)
{
	healthCheckMethod_ = healthCheckMethod;
	setCoreParameter("HealthCheckMethod", healthCheckMethod);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setCoreParameter("HealthCheckDomain", healthCheckDomain);
}

int CreateLoadBalancerHTTPSListenerRequest::getRequestTimeout()const
{
	return requestTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setRequestTimeout(int requestTimeout)
{
	requestTimeout_ = requestTimeout;
	setCoreParameter("RequestTimeout", std::to_string(requestTimeout));
}

long CreateLoadBalancerHTTPSListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getCACertificateId()const
{
	return cACertificateId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCACertificateId(const std::string& cACertificateId)
{
	cACertificateId_ = cACertificateId;
	setCoreParameter("CACertificateId", cACertificateId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getBackendProtocol()const
{
	return backendProtocol_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBackendProtocol(const std::string& backendProtocol)
{
	backendProtocol_ = backendProtocol;
	setCoreParameter("BackendProtocol", backendProtocol);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerHTTPSListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP)
{
	xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
	setCoreParameter("XForwardedFor_SLBIP", xForwardedFor_SLBIP);
}

int CreateLoadBalancerHTTPSListenerRequest::getBackendServerPort()const
{
	return backendServerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
	setCoreParameter("BackendServerPort", std::to_string(backendServerPort));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setCoreParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID)
{
	xForwardedFor_SLBID_ = xForwardedFor_SLBID;
	setCoreParameter("XForwardedFor_SLBID", xForwardedFor_SLBID);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckHttpVersion()const
{
	return healthCheckHttpVersion_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckHttpVersion(const std::string& healthCheckHttpVersion)
{
	healthCheckHttpVersion_ = healthCheckHttpVersion;
	setCoreParameter("HealthCheckHttpVersion", healthCheckHttpVersion);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getDescription()const
{
	return description_;
}

void CreateLoadBalancerHTTPSListenerRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

int CreateLoadBalancerHTTPSListenerRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void CreateLoadBalancerHTTPSListenerRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setCoreParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setCoreParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getScheduler()const
{
	return scheduler_;
}

void CreateLoadBalancerHTTPSListenerRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setCoreParameter("Scheduler", scheduler);
}

int CreateLoadBalancerHTTPSListenerRequest::getMaxConnection()const
{
	return maxConnection_;
}

void CreateLoadBalancerHTTPSListenerRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setCoreParameter("MaxConnection", std::to_string(maxConnection));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getEnableHttp2()const
{
	return enableHttp2_;
}

void CreateLoadBalancerHTTPSListenerRequest::setEnableHttp2(const std::string& enableHttp2)
{
	enableHttp2_ = enableHttp2;
	setCoreParameter("EnableHttp2", enableHttp2);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int CreateLoadBalancerHTTPSListenerRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setCoreParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySessionType()const
{
	return stickySessionType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySessionType(const std::string& stickySessionType)
{
	stickySessionType_ = stickySessionType;
	setCoreParameter("StickySessionType", stickySessionType);
}

int CreateLoadBalancerHTTPSListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setCoreParameter("HealthCheckType", healthCheckType);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerHTTPSListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerHTTPSListenerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySession()const
{
	return stickySession_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySession(const std::string& stickySession)
{
	stickySession_ = stickySession;
	setCoreParameter("StickySession", stickySession);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerHTTPSListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getGzip()const
{
	return gzip_;
}

void CreateLoadBalancerHTTPSListenerRequest::setGzip(const std::string& gzip)
{
	gzip_ = gzip;
	setCoreParameter("Gzip", gzip);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getTLSCipherPolicy()const
{
	return tLSCipherPolicy_;
}

void CreateLoadBalancerHTTPSListenerRequest::setTLSCipherPolicy(const std::string& tLSCipherPolicy)
{
	tLSCipherPolicy_ = tLSCipherPolicy;
	setCoreParameter("TLSCipherPolicy", tLSCipherPolicy);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getServerCertificateId()const
{
	return serverCertificateId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setServerCertificateId(const std::string& serverCertificateId)
{
	serverCertificateId_ = serverCertificateId;
	setCoreParameter("ServerCertificateId", serverCertificateId);
}

int CreateLoadBalancerHTTPSListenerRequest::getIdleTimeout()const
{
	return idleTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setIdleTimeout(int idleTimeout)
{
	idleTimeout_ = idleTimeout;
	setCoreParameter("IdleTimeout", std::to_string(idleTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_proto(const std::string& xForwardedFor_proto)
{
	xForwardedFor_proto_ = xForwardedFor_proto;
	setCoreParameter("XForwardedFor_proto", xForwardedFor_proto);
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setCoreParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setCoreParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

