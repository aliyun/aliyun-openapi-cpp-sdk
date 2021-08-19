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

#include <alibabacloud/ehpc/model/CreateClusterRequest.h>

using AlibabaCloud::EHPC::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "CreateCluster")
{
	setMethod(HttpRequest::Method::Get);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::vector<CreateClusterRequest::AdditionalVolumes> CreateClusterRequest::getAdditionalVolumes()const
{
	return additionalVolumes_;
}

void CreateClusterRequest::setAdditionalVolumes(const std::vector<AdditionalVolumes>& additionalVolumes)
{
	additionalVolumes_ = additionalVolumes;
	for(int dep1 = 0; dep1!= additionalVolumes.size(); dep1++) {
		auto additionalVolumesObj = additionalVolumes.at(dep1);
		std::string additionalVolumesObjStr = "AdditionalVolumes." + std::to_string(dep1 + 1);
		setParameter(additionalVolumesObjStr + ".VolumeType", additionalVolumesObj.volumeType);
		setParameter(additionalVolumesObjStr + ".VolumeProtocol", additionalVolumesObj.volumeProtocol);
		setParameter(additionalVolumesObjStr + ".LocalDirectory", additionalVolumesObj.localDirectory);
		setParameter(additionalVolumesObjStr + ".RemoteDirectory", additionalVolumesObj.remoteDirectory);
		for(int dep2 = 0; dep2!= additionalVolumesObj.roles.size(); dep2++) {
			auto rolesObj = additionalVolumesObj.roles.at(dep2);
			std::string rolesObjStr = additionalVolumesObjStr + "Roles." + std::to_string(dep2 + 1);
			setParameter(rolesObjStr + ".Name", rolesObj.name);
		}
		setParameter(additionalVolumesObjStr + ".VolumeId", additionalVolumesObj.volumeId);
		setParameter(additionalVolumesObjStr + ".VolumeMountpoint", additionalVolumesObj.volumeMountpoint);
		setParameter(additionalVolumesObjStr + ".Location", additionalVolumesObj.location);
		setParameter(additionalVolumesObjStr + ".JobQueue", additionalVolumesObj.jobQueue);
	}
}

std::string CreateClusterRequest::getEcsOrderManagerInstanceType()const
{
	return ecsOrderManagerInstanceType_;
}

void CreateClusterRequest::setEcsOrderManagerInstanceType(const std::string& ecsOrderManagerInstanceType)
{
	ecsOrderManagerInstanceType_ = ecsOrderManagerInstanceType;
	setParameter("EcsOrderManagerInstanceType", ecsOrderManagerInstanceType);
}

std::string CreateClusterRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateClusterRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string CreateClusterRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string CreateClusterRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void CreateClusterRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setParameter("ImageOwnerAlias", imageOwnerAlias);
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

int CreateClusterRequest::getEcsOrderManagerCount()const
{
	return ecsOrderManagerCount_;
}

void CreateClusterRequest::setEcsOrderManagerCount(int ecsOrderManagerCount)
{
	ecsOrderManagerCount_ = ecsOrderManagerCount;
	setParameter("EcsOrderManagerCount", std::to_string(ecsOrderManagerCount));
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

std::string CreateClusterRequest::getPassword()const
{
	return password_;
}

void CreateClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

int CreateClusterRequest::getEcsOrderLoginCount()const
{
	return ecsOrderLoginCount_;
}

void CreateClusterRequest::setEcsOrderLoginCount(int ecsOrderLoginCount)
{
	ecsOrderLoginCount_ = ecsOrderLoginCount;
	setParameter("EcsOrderLoginCount", std::to_string(ecsOrderLoginCount));
}

bool CreateClusterRequest::getWithoutElasticIp()const
{
	return withoutElasticIp_;
}

void CreateClusterRequest::setWithoutElasticIp(bool withoutElasticIp)
{
	withoutElasticIp_ = withoutElasticIp;
	setParameter("WithoutElasticIp", withoutElasticIp ? "true" : "false");
}

std::string CreateClusterRequest::getRemoteVisEnable()const
{
	return remoteVisEnable_;
}

void CreateClusterRequest::setRemoteVisEnable(const std::string& remoteVisEnable)
{
	remoteVisEnable_ = remoteVisEnable;
	setParameter("RemoteVisEnable", remoteVisEnable);
}

int CreateClusterRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateClusterRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateClusterRequest::getComputeSpotPriceLimit()const
{
	return computeSpotPriceLimit_;
}

void CreateClusterRequest::setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit)
{
	computeSpotPriceLimit_ = computeSpotPriceLimit;
	setParameter("ComputeSpotPriceLimit", computeSpotPriceLimit);
}

int CreateClusterRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateClusterRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateClusterRequest::getPeriod()const
{
	return period_;
}

void CreateClusterRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateClusterRequest::getRemoteDirectory()const
{
	return remoteDirectory_;
}

void CreateClusterRequest::setRemoteDirectory(const std::string& remoteDirectory)
{
	remoteDirectory_ = remoteDirectory;
	setParameter("RemoteDirectory", remoteDirectory);
}

int CreateClusterRequest::getEcsOrderComputeCount()const
{
	return ecsOrderComputeCount_;
}

void CreateClusterRequest::setEcsOrderComputeCount(int ecsOrderComputeCount)
{
	ecsOrderComputeCount_ = ecsOrderComputeCount;
	setParameter("EcsOrderComputeCount", std::to_string(ecsOrderComputeCount));
}

std::string CreateClusterRequest::getComputeSpotStrategy()const
{
	return computeSpotStrategy_;
}

void CreateClusterRequest::setComputeSpotStrategy(const std::string& computeSpotStrategy)
{
	computeSpotStrategy_ = computeSpotStrategy;
	setParameter("ComputeSpotStrategy", computeSpotStrategy);
}

std::vector<CreateClusterRequest::PostInstallScript> CreateClusterRequest::getPostInstallScript()const
{
	return postInstallScript_;
}

void CreateClusterRequest::setPostInstallScript(const std::vector<PostInstallScript>& postInstallScript)
{
	postInstallScript_ = postInstallScript;
	for(int dep1 = 0; dep1!= postInstallScript.size(); dep1++) {
		auto postInstallScriptObj = postInstallScript.at(dep1);
		std::string postInstallScriptObjStr = "PostInstallScript." + std::to_string(dep1 + 1);
		setParameter(postInstallScriptObjStr + ".Args", postInstallScriptObj.args);
		setParameter(postInstallScriptObjStr + ".Url", postInstallScriptObj.url);
	}
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

std::string CreateClusterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateClusterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool CreateClusterRequest::getComputeEnableHt()const
{
	return computeEnableHt_;
}

void CreateClusterRequest::setComputeEnableHt(bool computeEnableHt)
{
	computeEnableHt_ = computeEnableHt;
	setParameter("ComputeEnableHt", computeEnableHt ? "true" : "false");
}

std::string CreateClusterRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

std::string CreateClusterRequest::getName()const
{
	return name_;
}

void CreateClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateClusterRequest::getVolumeId()const
{
	return volumeId_;
}

void CreateClusterRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
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

std::string CreateClusterRequest::getSccClusterId()const
{
	return sccClusterId_;
}

void CreateClusterRequest::setSccClusterId(const std::string& sccClusterId)
{
	sccClusterId_ = sccClusterId;
	setParameter("SccClusterId", sccClusterId);
}

std::string CreateClusterRequest::getImageId()const
{
	return imageId_;
}

void CreateClusterRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CreateClusterRequest::getSystemDiskLevel()const
{
	return systemDiskLevel_;
}

void CreateClusterRequest::setSystemDiskLevel(const std::string& systemDiskLevel)
{
	systemDiskLevel_ = systemDiskLevel;
	setParameter("SystemDiskLevel", systemDiskLevel);
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

std::string CreateClusterRequest::getEhpcVersion()const
{
	return ehpcVersion_;
}

void CreateClusterRequest::setEhpcVersion(const std::string& ehpcVersion)
{
	ehpcVersion_ = ehpcVersion;
	setParameter("EhpcVersion", ehpcVersion);
}

std::string CreateClusterRequest::getAccountType()const
{
	return accountType_;
}

void CreateClusterRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", accountType);
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

std::string CreateClusterRequest::getEcsOrderComputeInstanceType()const
{
	return ecsOrderComputeInstanceType_;
}

void CreateClusterRequest::setEcsOrderComputeInstanceType(const std::string& ecsOrderComputeInstanceType)
{
	ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
	setParameter("EcsOrderComputeInstanceType", ecsOrderComputeInstanceType);
}

std::string CreateClusterRequest::getJobQueue()const
{
	return jobQueue_;
}

void CreateClusterRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setParameter("JobQueue", jobQueue);
}

std::string CreateClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterRequest::getVolumeType()const
{
	return volumeType_;
}

void CreateClusterRequest::setVolumeType(const std::string& volumeType)
{
	volumeType_ = volumeType;
	setParameter("VolumeType", volumeType);
}

std::string CreateClusterRequest::getSystemDiskType()const
{
	return systemDiskType_;
}

void CreateClusterRequest::setSystemDiskType(const std::string& systemDiskType)
{
	systemDiskType_ = systemDiskType;
	setParameter("SystemDiskType", systemDiskType);
}

std::string CreateClusterRequest::getVolumeProtocol()const
{
	return volumeProtocol_;
}

void CreateClusterRequest::setVolumeProtocol(const std::string& volumeProtocol)
{
	volumeProtocol_ = volumeProtocol;
	setParameter("VolumeProtocol", volumeProtocol);
}

std::string CreateClusterRequest::getClientVersion()const
{
	return clientVersion_;
}

void CreateClusterRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setParameter("ClientVersion", clientVersion);
}

std::string CreateClusterRequest::getOsTag()const
{
	return osTag_;
}

void CreateClusterRequest::setOsTag(const std::string& osTag)
{
	osTag_ = osTag;
	setParameter("OsTag", osTag);
}

std::string CreateClusterRequest::getClusterVersion()const
{
	return clusterVersion_;
}

void CreateClusterRequest::setClusterVersion(const std::string& clusterVersion)
{
	clusterVersion_ = clusterVersion;
	setParameter("ClusterVersion", clusterVersion);
}

bool CreateClusterRequest::getIsComputeEss()const
{
	return isComputeEss_;
}

void CreateClusterRequest::setIsComputeEss(bool isComputeEss)
{
	isComputeEss_ = isComputeEss;
	setParameter("IsComputeEss", isComputeEss ? "true" : "false");
}

std::vector<CreateClusterRequest::Application> CreateClusterRequest::getApplication()const
{
	return application_;
}

void CreateClusterRequest::setApplication(const std::vector<Application>& application)
{
	application_ = application;
	for(int dep1 = 0; dep1!= application.size(); dep1++) {
		auto applicationObj = application.at(dep1);
		std::string applicationObjStr = "Application." + std::to_string(dep1 + 1);
		setParameter(applicationObjStr + ".Tag", applicationObj.tag);
	}
}

std::string CreateClusterRequest::getEcsChargeType()const
{
	return ecsChargeType_;
}

void CreateClusterRequest::setEcsChargeType(const std::string& ecsChargeType)
{
	ecsChargeType_ = ecsChargeType;
	setParameter("EcsChargeType", ecsChargeType);
}

std::string CreateClusterRequest::getInputFileUrl()const
{
	return inputFileUrl_;
}

void CreateClusterRequest::setInputFileUrl(const std::string& inputFileUrl)
{
	inputFileUrl_ = inputFileUrl;
	setParameter("InputFileUrl", inputFileUrl);
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

bool CreateClusterRequest::getHaEnable()const
{
	return haEnable_;
}

void CreateClusterRequest::setHaEnable(bool haEnable)
{
	haEnable_ = haEnable;
	setParameter("HaEnable", haEnable ? "true" : "false");
}

std::string CreateClusterRequest::getSchedulerType()const
{
	return schedulerType_;
}

void CreateClusterRequest::setSchedulerType(const std::string& schedulerType)
{
	schedulerType_ = schedulerType;
	setParameter("SchedulerType", schedulerType);
}

std::string CreateClusterRequest::getVolumeMountpoint()const
{
	return volumeMountpoint_;
}

void CreateClusterRequest::setVolumeMountpoint(const std::string& volumeMountpoint)
{
	volumeMountpoint_ = volumeMountpoint;
	setParameter("VolumeMountpoint", volumeMountpoint);
}

std::string CreateClusterRequest::getEcsOrderLoginInstanceType()const
{
	return ecsOrderLoginInstanceType_;
}

void CreateClusterRequest::setEcsOrderLoginInstanceType(const std::string& ecsOrderLoginInstanceType)
{
	ecsOrderLoginInstanceType_ = ecsOrderLoginInstanceType;
	setParameter("EcsOrderLoginInstanceType", ecsOrderLoginInstanceType);
}

