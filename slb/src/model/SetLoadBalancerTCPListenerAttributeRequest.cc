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

#include <alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerTCPListenerAttributeRequest;

SetLoadBalancerTCPListenerAttributeRequest::SetLoadBalancerTCPListenerAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerTCPListenerAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerTCPListenerAttributeRequest::~SetLoadBalancerTCPListenerAttributeRequest()
{}

long SetLoadBalancerTCPListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckURI()const
{
	return healthCheckURI_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckURI(const std::string& healthCheckURI)
{
	healthCheckURI_ = healthCheckURI;
	setParameter("HealthCheckURI", healthCheckURI);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAclStatus()const
{
	return aclStatus_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setParameter("AclStatus", aclStatus);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAclType()const
{
	return aclType_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setParameter("AclType", aclType);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getMasterSlaveServerGroup()const
{
	return masterSlaveServerGroup_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMasterSlaveServerGroup(const std::string& masterSlaveServerGroup)
{
	masterSlaveServerGroup_ = masterSlaveServerGroup;
	setParameter("MasterSlaveServerGroup", masterSlaveServerGroup);
}

int SetLoadBalancerTCPListenerAttributeRequest::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setEstablishedTimeout(int establishedTimeout)
{
	establishedTimeout_ = establishedTimeout;
	setParameter("EstablishedTimeout", std::to_string(establishedTimeout));
}

int SetLoadBalancerTCPListenerAttributeRequest::getPersistenceTimeout()const
{
	return persistenceTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setPersistenceTimeout(int persistenceTimeout)
{
	persistenceTimeout_ = persistenceTimeout;
	setParameter("PersistenceTimeout", std::to_string(persistenceTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getVpcIds()const
{
	return vpcIds_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setVpcIds(const std::string& vpcIds)
{
	vpcIds_ = vpcIds;
	setParameter("VpcIds", vpcIds);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAclId()const
{
	return aclId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setParameter("AclId", aclId);
}

std::vector<SetLoadBalancerTCPListenerAttributeRequest::PortRange> SetLoadBalancerTCPListenerAttributeRequest::getPortRange()const
{
	return portRange_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setPortRange(const std::vector<PortRange>& portRange)
{
	portRange_ = portRange;
	for(int dep1 = 0; dep1!= portRange.size(); dep1++) {
		auto portRangeObj = portRange.at(dep1);
		std::string portRangeObjStr = "PortRange." + std::to_string(dep1 + 1);
		setParameter(portRangeObjStr + ".StartPort", std::to_string(portRangeObj.startPort));
		setParameter(portRangeObjStr + ".EndPort", std::to_string(portRangeObj.endPort));
	}
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckMethod(const std::string& healthCheckMethod)
{
	healthCheckMethod_ = healthCheckMethod;
	setParameter("HealthCheckMethod", healthCheckMethod);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckDomain(const std::string& healthCheckDomain)
{
	healthCheckDomain_ = healthCheckDomain;
	setParameter("HealthCheckDomain", healthCheckDomain);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getSynProxy()const
{
	return synProxy_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setSynProxy(const std::string& synProxy)
{
	synProxy_ = synProxy;
	setParameter("SynProxy", synProxy);
}

long SetLoadBalancerTCPListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
	setParameter("MasterSlaveServerGroupId", masterSlaveServerGroupId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval)
{
	healthCheckInterval_ = healthCheckInterval;
	setParameter("HealthCheckInterval", std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getConnectionDrain()const
{
	return connectionDrain_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setConnectionDrain(const std::string& connectionDrain)
{
	connectionDrain_ = connectionDrain;
	setParameter("ConnectionDrain", connectionDrain);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckConnectTimeout()const
{
	return healthCheckConnectTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout)
{
	healthCheckConnectTimeout_ = healthCheckConnectTimeout;
	setParameter("HealthCheckConnectTimeout", std::to_string(healthCheckConnectTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getDescription()const
{
	return description_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int SetLoadBalancerTCPListenerAttributeRequest::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold)
{
	unhealthyThreshold_ = unhealthyThreshold;
	setParameter("UnhealthyThreshold", std::to_string(unhealthyThreshold));
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthyThreshold()const
{
	return healthyThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold)
{
	healthyThreshold_ = healthyThreshold;
	setParameter("HealthyThreshold", std::to_string(healthyThreshold));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getScheduler()const
{
	return scheduler_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setScheduler(const std::string& scheduler)
{
	scheduler_ = scheduler;
	setParameter("Scheduler", scheduler);
}

int SetLoadBalancerTCPListenerAttributeRequest::getMaxConnection()const
{
	return maxConnection_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setMaxConnection(int maxConnection)
{
	maxConnection_ = maxConnection;
	setParameter("MaxConnection", std::to_string(maxConnection));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setParameter("HealthCheckType", healthCheckType);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int SetLoadBalancerTCPListenerAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int SetLoadBalancerTCPListenerAttributeRequest::getConnectionDrainTimeout()const
{
	return connectionDrainTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setConnectionDrainTimeout(int connectionDrainTimeout)
{
	connectionDrainTimeout_ = connectionDrainTimeout;
	setParameter("ConnectionDrainTimeout", std::to_string(connectionDrainTimeout));
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort)
{
	healthCheckConnectPort_ = healthCheckConnectPort;
	setParameter("HealthCheckConnectPort", std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckHttpCode(const std::string& healthCheckHttpCode)
{
	healthCheckHttpCode_ = healthCheckHttpCode;
	setParameter("HealthCheckHttpCode", healthCheckHttpCode);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setVServerGroup(const std::string& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	setParameter("VServerGroup", vServerGroup);
}

