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

#include <alibabacloud/emr/model/CreateClusterRequest.h>

using AlibabaCloud::Emr::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getMainVersion()const
{
	return mainVersion_;
}

void CreateClusterRequest::setMainVersion(const std::string& mainVersion)
{
	mainVersion_ = mainVersion;
	setParameter("MainVersion", mainVersion);
}

std::string CreateClusterRequest::getNodeKeyPairName()const
{
	return nodeKeyPairName_;
}

void CreateClusterRequest::setNodeKeyPairName(const std::string& nodeKeyPairName)
{
	nodeKeyPairName_ = nodeKeyPairName;
	setParameter("NodeKeyPairName", nodeKeyPairName);
}

std::string CreateClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateClusterRequest::getMetaStoreType()const
{
	return metaStoreType_;
}

void CreateClusterRequest::setMetaStoreType(const std::string& metaStoreType)
{
	metaStoreType_ = metaStoreType;
	setParameter("MetaStoreType", metaStoreType);
}

std::string CreateClusterRequest::getReleaseVersion()const
{
	return releaseVersion_;
}

void CreateClusterRequest::setReleaseVersion(const std::string& releaseVersion)
{
	releaseVersion_ = releaseVersion;
	setParameter("ReleaseVersion", releaseVersion);
}

std::string CreateClusterRequest::getDeployMode()const
{
	return deployMode_;
}

void CreateClusterRequest::setDeployMode(const std::string& deployMode)
{
	deployMode_ = deployMode;
	setParameter("DeployMode", deployMode);
}

std::string CreateClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

Struct CreateClusterRequest::getClickhouseConf()const
{
	return clickhouseConf_;
}

void CreateClusterRequest::setClickhouseConf(const Struct& clickhouseConf)
{
	clickhouseConf_ = clickhouseConf;
	setParameter("ClickhouseConf", std::to_string(clickhouseConf));
}

Array CreateClusterRequest::getNodeGroups()const
{
	return nodeGroups_;
}

void CreateClusterRequest::setNodeGroups(const Array& nodeGroups)
{
	nodeGroups_ = nodeGroups;
	setParameter("NodeGroups", std::to_string(nodeGroups));
}

Struct CreateClusterRequest::getMetaStoreConf()const
{
	return metaStoreConf_;
}

void CreateClusterRequest::setMetaStoreConf(const Struct& metaStoreConf)
{
	metaStoreConf_ = metaStoreConf;
	setParameter("MetaStoreConf", std::to_string(metaStoreConf));
}

std::string CreateClusterRequest::getNodeRamRole()const
{
	return nodeRamRole_;
}

void CreateClusterRequest::setNodeRamRole(const std::string& nodeRamRole)
{
	nodeRamRole_ = nodeRamRole;
	setParameter("NodeRamRole", nodeRamRole);
}

bool CreateClusterRequest::getMasterWithPublicIp()const
{
	return masterWithPublicIp_;
}

void CreateClusterRequest::setMasterWithPublicIp(bool masterWithPublicIp)
{
	masterWithPublicIp_ = masterWithPublicIp;
	setParameter("MasterWithPublicIp", masterWithPublicIp ? "true" : "false");
}

Array CreateClusterRequest::getUsers()const
{
	return users_;
}

void CreateClusterRequest::setUsers(const Array& users)
{
	users_ = users;
	setParameter("Users", std::to_string(users));
}

Array CreateClusterRequest::getTags()const
{
	return tags_;
}

void CreateClusterRequest::setTags(const Array& tags)
{
	tags_ = tags;
	setParameter("Tags", std::to_string(tags));
}

std::string CreateClusterRequest::getClusterType()const
{
	return clusterType_;
}

void CreateClusterRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string CreateClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

Struct CreateClusterRequest::getNodeAttributes()const
{
	return nodeAttributes_;
}

void CreateClusterRequest::setNodeAttributes(const Struct& nodeAttributes)
{
	nodeAttributes_ = nodeAttributes;
	setParameter("NodeAttributes", std::to_string(nodeAttributes));
}

std::string CreateClusterRequest::getNodeRootPassword()const
{
	return nodeRootPassword_;
}

void CreateClusterRequest::setNodeRootPassword(const std::string& nodeRootPassword)
{
	nodeRootPassword_ = nodeRootPassword;
	setParameter("NodeRootPassword", nodeRootPassword);
}

Array CreateClusterRequest::getBootstrapScripts()const
{
	return bootstrapScripts_;
}

void CreateClusterRequest::setBootstrapScripts(const Array& bootstrapScripts)
{
	bootstrapScripts_ = bootstrapScripts;
	setParameter("BootstrapScripts", std::to_string(bootstrapScripts));
}

std::string CreateClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string CreateClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateClusterRequest::getDescription()const
{
	return description_;
}

void CreateClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateClusterRequest::getSecurityMode()const
{
	return securityMode_;
}

void CreateClusterRequest::setSecurityMode(const std::string& securityMode)
{
	securityMode_ = securityMode;
	setParameter("SecurityMode", securityMode);
}

Struct CreateClusterRequest::getSubscriptionConfig()const
{
	return subscriptionConfig_;
}

void CreateClusterRequest::setSubscriptionConfig(const Struct& subscriptionConfig)
{
	subscriptionConfig_ = subscriptionConfig;
	setParameter("SubscriptionConfig", std::to_string(subscriptionConfig));
}

Array CreateClusterRequest::getEmrStudioConfigs()const
{
	return emrStudioConfigs_;
}

void CreateClusterRequest::setEmrStudioConfigs(const Array& emrStudioConfigs)
{
	emrStudioConfigs_ = emrStudioConfigs;
	setParameter("EmrStudioConfigs", std::to_string(emrStudioConfigs));
}

std::string CreateClusterRequest::getSlaveSecurityGroupId()const
{
	return slaveSecurityGroupId_;
}

void CreateClusterRequest::setSlaveSecurityGroupId(const std::string& slaveSecurityGroupId)
{
	slaveSecurityGroupId_ = slaveSecurityGroupId;
	setParameter("SlaveSecurityGroupId", slaveSecurityGroupId);
}

Array CreateClusterRequest::getOptionApplications()const
{
	return optionApplications_;
}

void CreateClusterRequest::setOptionApplications(const Array& optionApplications)
{
	optionApplications_ = optionApplications;
	setParameter("OptionApplications", std::to_string(optionApplications));
}

Array CreateClusterRequest::getApplicationConfigs()const
{
	return applicationConfigs_;
}

void CreateClusterRequest::setApplicationConfigs(const Array& applicationConfigs)
{
	applicationConfigs_ = applicationConfigs;
	setParameter("ApplicationConfigs", std::to_string(applicationConfigs));
}

Array CreateClusterRequest::getComponentLayouts()const
{
	return componentLayouts_;
}

void CreateClusterRequest::setComponentLayouts(const Array& componentLayouts)
{
	componentLayouts_ = componentLayouts;
	setParameter("ComponentLayouts", std::to_string(componentLayouts));
}

Array CreateClusterRequest::getPromotions()const
{
	return promotions_;
}

void CreateClusterRequest::setPromotions(const Array& promotions)
{
	promotions_ = promotions;
	setParameter("Promotions", std::to_string(promotions));
}

std::string CreateClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateClusterRequest::getPaymentType()const
{
	return paymentType_;
}

void CreateClusterRequest::setPaymentType(const std::string& paymentType)
{
	paymentType_ = paymentType;
	setParameter("PaymentType", paymentType);
}

Array CreateClusterRequest::getApplications()const
{
	return applications_;
}

void CreateClusterRequest::setApplications(const Array& applications)
{
	applications_ = applications;
	setParameter("Applications", std::to_string(applications));
}

