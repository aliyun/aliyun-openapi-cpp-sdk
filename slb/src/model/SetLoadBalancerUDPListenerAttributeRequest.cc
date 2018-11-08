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

#include <alibabacloud/slb/model/SetLoadBalancerUDPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerUDPListenerAttributeRequest;

SetLoadBalancerUDPListenerAttributeRequest::SetLoadBalancerUDPListenerAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerUDPListenerAttribute")
{}

SetLoadBalancerUDPListenerAttributeRequest::~SetLoadBalancerUDPListenerAttributeRequest()
{}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout)
{
	healthCheckConnectTimeout_ = healthCheckConnectTimeout;
	setParameter("HealthCheckConnectTimeout", std::to_string(healthCheckConnectTimeout));
}

long SetLoadBalancerUDPListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getDescription()const
{
	return description_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int SetLoadBalancerUDPListenerAttributeRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAclStatus()const
{
	return aclStatus_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setParameter("AclStatus", aclStatus);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getScheduler()const
{
	return scheduler_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAclType()const
{
	return aclType_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setParameter("AclType", aclType);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getMasterSlaveServerGroup()const
{
	return masterSlaveServerGroup_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMasterSlaveServerGroup(const std::string& masterSlaveServerGroup)
{
	masterSlaveServerGroup_ = masterSlaveServerGroup;
	setParameter("MasterSlaveServerGroup", masterSlaveServerGroup);
}

int SetLoadBalancerUDPListenerAttributeRequest::getMaxConnection()const
{
	return maxConnection_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int SetLoadBalancerUDPListenerAttributeRequest::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setPersistenceTimeout(int persistenceTimeout)
{
	persistenceTimeout_ = persistenceTimeout;
	setParameter("PersistenceTimeout", std::to_string(persistenceTimeout));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getVpcIds()const
{
	return vpcIds_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setParameter("VpcIds", vpcIds);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getAclId()const
{
	return aclId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setParameter("AclId", aclId);
}

int SetLoadBalancerUDPListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int SetLoadBalancerUDPListenerAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetLoadBalancerUDPListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
	setParameter("MasterSlaveServerGroupId", masterSlaveServerGroupId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckReq()const
{
	return healthCheckReq_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckReq(const std::string& healthCheckReq)
{
	healthCheckReq_ = healthCheckReq;
	setParameter("HealthCheckReq", healthCheckReq);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckExp()const
{
	return healthCheckExp_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckExp(const std::string& healthCheckExp)
{
	healthCheckExp_ = healthCheckExp;
	setParameter("HealthCheckExp", healthCheckExp);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setVServerGroup(const std::string& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	setParameter("VServerGroup", vServerGroup);
}

