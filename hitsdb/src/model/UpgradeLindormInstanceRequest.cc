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

#include <alibabacloud/hitsdb/model/UpgradeLindormInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::UpgradeLindormInstanceRequest;

UpgradeLindormInstanceRequest::UpgradeLindormInstanceRequest() :
	RpcServiceRequest("hitsdb", "2020-06-15", "UpgradeLindormInstance")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeLindormInstanceRequest::~UpgradeLindormInstanceRequest()
{}

long UpgradeLindormInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeLindormInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int UpgradeLindormInstanceRequest::getPhoenixCoreNum()const
{
	return phoenixCoreNum_;
}

void UpgradeLindormInstanceRequest::setPhoenixCoreNum(int phoenixCoreNum)
{
	phoenixCoreNum_ = phoenixCoreNum;
	setParameter("PhoenixCoreNum", std::to_string(phoenixCoreNum));
}

std::string UpgradeLindormInstanceRequest::getPhoenixCoreSpec()const
{
	return phoenixCoreSpec_;
}

void UpgradeLindormInstanceRequest::setPhoenixCoreSpec(const std::string& phoenixCoreSpec)
{
	phoenixCoreSpec_ = phoenixCoreSpec;
	setParameter("PhoenixCoreSpec", phoenixCoreSpec);
}

std::string UpgradeLindormInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void UpgradeLindormInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpgradeLindormInstanceRequest::getUpgradeType()const
{
	return upgradeType_;
}

void UpgradeLindormInstanceRequest::setUpgradeType(const std::string& upgradeType)
{
	upgradeType_ = upgradeType;
	setParameter("UpgradeType", upgradeType);
}

std::string UpgradeLindormInstanceRequest::getTsdbSpec()const
{
	return tsdbSpec_;
}

void UpgradeLindormInstanceRequest::setTsdbSpec(const std::string& tsdbSpec)
{
	tsdbSpec_ = tsdbSpec;
	setParameter("TsdbSpec", tsdbSpec);
}

std::string UpgradeLindormInstanceRequest::getFilestoreSpec()const
{
	return filestoreSpec_;
}

void UpgradeLindormInstanceRequest::setFilestoreSpec(const std::string& filestoreSpec)
{
	filestoreSpec_ = filestoreSpec;
	setParameter("FilestoreSpec", filestoreSpec);
}

std::string UpgradeLindormInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeLindormInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpgradeLindormInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpgradeLindormInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpgradeLindormInstanceRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeLindormInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int UpgradeLindormInstanceRequest::getTsdbNum()const
{
	return tsdbNum_;
}

void UpgradeLindormInstanceRequest::setTsdbNum(int tsdbNum)
{
	tsdbNum_ = tsdbNum;
	setParameter("TsdbNum", std::to_string(tsdbNum));
}

std::string UpgradeLindormInstanceRequest::getLindormSpec()const
{
	return lindormSpec_;
}

void UpgradeLindormInstanceRequest::setLindormSpec(const std::string& lindormSpec)
{
	lindormSpec_ = lindormSpec;
	setParameter("LindormSpec", lindormSpec);
}

int UpgradeLindormInstanceRequest::getSolrNum()const
{
	return solrNum_;
}

void UpgradeLindormInstanceRequest::setSolrNum(int solrNum)
{
	solrNum_ = solrNum;
	setParameter("SolrNum", std::to_string(solrNum));
}

int UpgradeLindormInstanceRequest::getColdStorage()const
{
	return coldStorage_;
}

void UpgradeLindormInstanceRequest::setColdStorage(int coldStorage)
{
	coldStorage_ = coldStorage;
	setParameter("ColdStorage", std::to_string(coldStorage));
}

std::string UpgradeLindormInstanceRequest::getSolrSpec()const
{
	return solrSpec_;
}

void UpgradeLindormInstanceRequest::setSolrSpec(const std::string& solrSpec)
{
	solrSpec_ = solrSpec;
	setParameter("SolrSpec", solrSpec);
}

std::string UpgradeLindormInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeLindormInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeLindormInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeLindormInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int UpgradeLindormInstanceRequest::getFilestoreNum()const
{
	return filestoreNum_;
}

void UpgradeLindormInstanceRequest::setFilestoreNum(int filestoreNum)
{
	filestoreNum_ = filestoreNum;
	setParameter("FilestoreNum", std::to_string(filestoreNum));
}

long UpgradeLindormInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeLindormInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int UpgradeLindormInstanceRequest::getLindormNum()const
{
	return lindormNum_;
}

void UpgradeLindormInstanceRequest::setLindormNum(int lindormNum)
{
	lindormNum_ = lindormNum;
	setParameter("LindormNum", std::to_string(lindormNum));
}

std::string UpgradeLindormInstanceRequest::getCoreSpec()const
{
	return coreSpec_;
}

void UpgradeLindormInstanceRequest::setCoreSpec(const std::string& coreSpec)
{
	coreSpec_ = coreSpec;
	setParameter("CoreSpec", coreSpec);
}

int UpgradeLindormInstanceRequest::getCoreNum()const
{
	return coreNum_;
}

void UpgradeLindormInstanceRequest::setCoreNum(int coreNum)
{
	coreNum_ = coreNum;
	setParameter("CoreNum", std::to_string(coreNum));
}

int UpgradeLindormInstanceRequest::getLtsCoreNum()const
{
	return ltsCoreNum_;
}

void UpgradeLindormInstanceRequest::setLtsCoreNum(int ltsCoreNum)
{
	ltsCoreNum_ = ltsCoreNum;
	setParameter("LtsCoreNum", std::to_string(ltsCoreNum));
}

std::string UpgradeLindormInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void UpgradeLindormInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpgradeLindormInstanceRequest::getLtsCoreSpec()const
{
	return ltsCoreSpec_;
}

void UpgradeLindormInstanceRequest::setLtsCoreSpec(const std::string& ltsCoreSpec)
{
	ltsCoreSpec_ = ltsCoreSpec;
	setParameter("LtsCoreSpec", ltsCoreSpec);
}

int UpgradeLindormInstanceRequest::getClusterStorage()const
{
	return clusterStorage_;
}

void UpgradeLindormInstanceRequest::setClusterStorage(int clusterStorage)
{
	clusterStorage_ = clusterStorage;
	setParameter("ClusterStorage", std::to_string(clusterStorage));
}

std::string UpgradeLindormInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void UpgradeLindormInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

