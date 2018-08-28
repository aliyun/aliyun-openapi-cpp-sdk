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

#include <alibabacloud/slb/model/CreateLoadBalancerTCPListenerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerTCPListenerRequest;

CreateLoadBalancerTCPListenerRequest::CreateLoadBalancerTCPListenerRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerTCPListener")
{}

CreateLoadBalancerTCPListenerRequest::~CreateLoadBalancerTCPListenerRequest()
{}

std::string CreateLoadBalancerTCPListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerTCPListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout)
{
	healthCheckConnectTimeout_ = healthCheckConnectTimeout;
	setParameter("HealthCheckConnectTimeout", std::to_string(healthCheckConnectTimeout));
}

long CreateLoadBalancerTCPListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerTCPListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

std::string CreateLoadBalancerTCPListenerRequest::getDescription()const
{
	return description_;
}

void CreateLoadBalancerTCPListenerRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int CreateLoadBalancerTCPListenerRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void CreateLoadBalancerTCPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerTCPListenerRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerTCPListenerRequest::getAclStatus()const
{
	return aclStatus_;
}

void CreateLoadBalancerTCPListenerRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setParameter("AclStatus", aclStatus);
}

std::string CreateLoadBalancerTCPListenerRequest::getScheduler()const
{
	return scheduler_;
}

void CreateLoadBalancerTCPListenerRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string CreateLoadBalancerTCPListenerRequest::getAclType()const
{
	return aclType_;
}

void CreateLoadBalancerTCPListenerRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setParameter("AclType", aclType);
}

int CreateLoadBalancerTCPListenerRequest::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setEstablishedTimeout(int establishedTimeout)
{
	establishedTimeout_ = establishedTimeout;
	setParameter("EstablishedTimeout", std::to_string(establishedTimeout));
}

int CreateLoadBalancerTCPListenerRequest::getMaxConnection()const
{
	return maxConnection_;
}

void CreateLoadBalancerTCPListenerRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string CreateLoadBalancerTCPListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerTCPListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateLoadBalancerTCPListenerRequest::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

void CreateLoadBalancerTCPListenerRequest::setPersistenceTimeout(int persistenceTimeout)
{
	persistenceTimeout_ = persistenceTimeout;
	setParameter("PersistenceTimeout", std::to_string(persistenceTimeout));
}

std::string CreateLoadBalancerTCPListenerRequest::getVpcIds()const
{
	return vpcIds_;
}

void CreateLoadBalancerTCPListenerRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setParameter("VpcIds", vpcIds);
}

std::string CreateLoadBalancerTCPListenerRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

std::string CreateLoadBalancerTCPListenerRequest::getAclId()const
{
	return aclId_;
}

void CreateLoadBalancerTCPListenerRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setParameter("AclId", aclId);
}

int CreateLoadBalancerTCPListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateLoadBalancerTCPListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setParameter("HealthCheckType", healthCheckType);
}

std::string CreateLoadBalancerTCPListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerTCPListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerTCPListenerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerTCPListenerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string CreateLoadBalancerTCPListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerTCPListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateLoadBalancerTCPListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerTCPListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerTCPListenerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerTCPListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateLoadBalancerTCPListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerTCPListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateLoadBalancerTCPListenerRequest::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void CreateLoadBalancerTCPListenerRequest::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
	setParameter("MasterSlaveServerGroupId", masterSlaveServerGroupId);
}

int CreateLoadBalancerTCPListenerRequest::getBackendServerPort()const
{
	return backendServerPort_;
}

void CreateLoadBalancerTCPListenerRequest::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
	setParameter("BackendServerPort", std::to_string(backendServerPort));
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

int CreateLoadBalancerTCPListenerRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerTCPListenerRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void CreateLoadBalancerTCPListenerRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

