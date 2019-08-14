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

#include <alibabacloud/slb/model/CreateLoadBalancerUDPListenerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerUDPListenerRequest;

CreateLoadBalancerUDPListenerRequest::CreateLoadBalancerUDPListenerRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerUDPListener")
{}

CreateLoadBalancerUDPListenerRequest::~CreateLoadBalancerUDPListenerRequest()
{}

std::string CreateLoadBalancerUDPListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerUDPListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout)
{
	healthCheckConnectTimeout_ = healthCheckConnectTimeout;
	setCoreParameter("HealthCheckConnectTimeout", std::to_string(healthCheckConnectTimeout));
}

long CreateLoadBalancerUDPListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerUDPListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerUDPListenerRequest::getDescription()const
{
	return description_;
}

void CreateLoadBalancerUDPListenerRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

int CreateLoadBalancerUDPListenerRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setCoreParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerUDPListenerRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setCoreParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerUDPListenerRequest::getAclStatus()const
{
	return aclStatus_;
}

void CreateLoadBalancerUDPListenerRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setCoreParameter("AclStatus", aclStatus);
}

std::string CreateLoadBalancerUDPListenerRequest::getScheduler()const
{
	return scheduler_;
}

void CreateLoadBalancerUDPListenerRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setCoreParameter("Scheduler", scheduler);
}

std::string CreateLoadBalancerUDPListenerRequest::getAclType()const
{
	return aclType_;
}

void CreateLoadBalancerUDPListenerRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setCoreParameter("AclType", aclType);
}

int CreateLoadBalancerUDPListenerRequest::getMaxConnection()const
{
	return maxConnection_;
}

void CreateLoadBalancerUDPListenerRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setCoreParameter("MaxConnection", std::to_string(maxConnection));
}

std::string CreateLoadBalancerUDPListenerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerUDPListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int CreateLoadBalancerUDPListenerRequest::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setPersistenceTimeout(int persistenceTimeout)
{
	persistenceTimeout_ = persistenceTimeout;
	setCoreParameter("PersistenceTimeout", std::to_string(persistenceTimeout));
}

std::string CreateLoadBalancerUDPListenerRequest::getVpcIds()const
{
	return vpcIds_;
}

void CreateLoadBalancerUDPListenerRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setCoreParameter("VpcIds", vpcIds);
}

std::string CreateLoadBalancerUDPListenerRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void CreateLoadBalancerUDPListenerRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setCoreParameter("VServerGroupId", vServerGroupId);
}

std::string CreateLoadBalancerUDPListenerRequest::getAclId()const
{
	return aclId_;
}

void CreateLoadBalancerUDPListenerRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

int CreateLoadBalancerUDPListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateLoadBalancerUDPListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateLoadBalancerUDPListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerUDPListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerUDPListenerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerUDPListenerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerUDPListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerUDPListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateLoadBalancerUDPListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerUDPListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerUDPListenerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerUDPListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string CreateLoadBalancerUDPListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerUDPListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateLoadBalancerUDPListenerRequest::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void CreateLoadBalancerUDPListenerRequest::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
	setCoreParameter("MasterSlaveServerGroupId", masterSlaveServerGroupId);
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckReq()const
{
	return healthCheckReq_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckReq(const std::string& healthCheckReq)
{
	healthCheckReq_ = healthCheckReq;
	setCoreParameter("HealthCheckReq", healthCheckReq);
}

int CreateLoadBalancerUDPListenerRequest::getBackendServerPort()const
{
	return backendServerPort_;
}

void CreateLoadBalancerUDPListenerRequest::setBackendServerPort(int backendServerPort)
{
	backendServerPort_ = backendServerPort;
	setCoreParameter("BackendServerPort", std::to_string(backendServerPort));
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setCoreParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckExp()const
{
	return healthCheckExp_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckExp(const std::string& healthCheckExp)
{
	healthCheckExp_ = healthCheckExp;
	setCoreParameter("HealthCheckExp", healthCheckExp);
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setCoreParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

