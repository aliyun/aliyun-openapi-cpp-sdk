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
{}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getSccClusterId()const
{
	return sccClusterId_;
}

void CreateClusterRequest::setSccClusterId(const std::string& sccClusterId)
{
	sccClusterId_ = sccClusterId;
	setCoreParameter("SccClusterId", sccClusterId);
}

std::string CreateClusterRequest::getImageId()const
{
	return imageId_;
}

void CreateClusterRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::vector<CreateClusterRequest::AdditionalVolumes> CreateClusterRequest::getAdditionalVolumes()const
{
	return additionalVolumes_;
}

void CreateClusterRequest::setAdditionalVolumes(const std::vector<AdditionalVolumes>& additionalVolumes)
{
	additionalVolumes_ = additionalVolumes;
	int i = 0;
	for(int i = 0; i!= additionalVolumes.size(); i++)	{
		auto obj = additionalVolumes.at(i);
		std::string str ="AdditionalVolumes."+ std::to_string(i);
		setCoreParameter(str + ".VolumeType", std::to_string(obj.volumeType));
		setCoreParameter(str + ".VolumeProtocol", std::to_string(obj.volumeProtocol));
		setCoreParameter(str + ".LocalDirectory", std::to_string(obj.localDirectory));
		setCoreParameter(str + ".RemoteDirectory", std::to_string(obj.remoteDirectory));
		setCoreParameter(str + ".Roles", obj.roles);
		setCoreParameter(str + ".VolumeId", std::to_string(obj.volumeId));
		setCoreParameter(str + ".VolumeMountpoint", std::to_string(obj.volumeMountpoint));
		setCoreParameter(str + ".Location", std::to_string(obj.location));
		setCoreParameter(str + ".JobQueue", std::to_string(obj.jobQueue));
	}
}

std::string CreateClusterRequest::getEcsOrderManagerInstanceType()const
{
	return ecsOrderManagerInstanceType_;
}

void CreateClusterRequest::setEcsOrderManagerInstanceType(const std::string& ecsOrderManagerInstanceType)
{
	ecsOrderManagerInstanceType_ = ecsOrderManagerInstanceType;
	setCoreParameter("EcsOrderManagerInstanceType", ecsOrderManagerInstanceType);
}

std::string CreateClusterRequest::getEhpcVersion()const
{
	return ehpcVersion_;
}

void CreateClusterRequest::setEhpcVersion(const std::string& ehpcVersion)
{
	ehpcVersion_ = ehpcVersion;
	setCoreParameter("EhpcVersion", ehpcVersion);
}

std::string CreateClusterRequest::getAccountType()const
{
	return accountType_;
}

void CreateClusterRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

std::string CreateClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

std::string CreateClusterRequest::getDescription()const
{
	return description_;
}

void CreateClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateClusterRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateClusterRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string CreateClusterRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateClusterRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", securityGroupName);
}

std::string CreateClusterRequest::getEcsOrderComputeInstanceType()const
{
	return ecsOrderComputeInstanceType_;
}

void CreateClusterRequest::setEcsOrderComputeInstanceType(const std::string& ecsOrderComputeInstanceType)
{
	ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
	setCoreParameter("EcsOrderComputeInstanceType", ecsOrderComputeInstanceType);
}

std::string CreateClusterRequest::getJobQueue()const
{
	return jobQueue_;
}

void CreateClusterRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setCoreParameter("JobQueue", jobQueue);
}

std::string CreateClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateClusterRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void CreateClusterRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setCoreParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string CreateClusterRequest::getVolumeType()const
{
	return volumeType_;
}

void CreateClusterRequest::setVolumeType(const std::string& volumeType)
{
	volumeType_ = volumeType;
	setCoreParameter("VolumeType", volumeType);
}

std::string CreateClusterRequest::getDeployMode()const
{
	return deployMode_;
}

void CreateClusterRequest::setDeployMode(const std::string& deployMode)
{
	deployMode_ = deployMode;
	setCoreParameter("DeployMode", deployMode);
}

std::string CreateClusterRequest::getSystemDiskType()const
{
	return systemDiskType_;
}

void CreateClusterRequest::setSystemDiskType(const std::string& systemDiskType)
{
	systemDiskType_ = systemDiskType;
	setCoreParameter("SystemDiskType", systemDiskType);
}

int CreateClusterRequest::getEcsOrderManagerCount()const
{
	return ecsOrderManagerCount_;
}

void CreateClusterRequest::setEcsOrderManagerCount(int ecsOrderManagerCount)
{
	ecsOrderManagerCount_ = ecsOrderManagerCount;
	setCoreParameter("EcsOrderManagerCount", ecsOrderManagerCount);
}

std::string CreateClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateClusterRequest::getPassword()const
{
	return password_;
}

void CreateClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

int CreateClusterRequest::getEcsOrderLoginCount()const
{
	return ecsOrderLoginCount_;
}

void CreateClusterRequest::setEcsOrderLoginCount(int ecsOrderLoginCount)
{
	ecsOrderLoginCount_ = ecsOrderLoginCount;
	setCoreParameter("EcsOrderLoginCount", ecsOrderLoginCount);
}

std::string CreateClusterRequest::getRemoteVisEnable()const
{
	return remoteVisEnable_;
}

void CreateClusterRequest::setRemoteVisEnable(const std::string& remoteVisEnable)
{
	remoteVisEnable_ = remoteVisEnable;
	setCoreParameter("RemoteVisEnable", remoteVisEnable);
}

int CreateClusterRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateClusterRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", systemDiskSize);
}

std::string CreateClusterRequest::getComputeSpotPriceLimit()const
{
	return computeSpotPriceLimit_;
}

void CreateClusterRequest::setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit)
{
	computeSpotPriceLimit_ = computeSpotPriceLimit;
	setCoreParameter("ComputeSpotPriceLimit", computeSpotPriceLimit);
}

int CreateClusterRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateClusterRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", autoRenewPeriod);
}

int CreateClusterRequest::getPeriod()const
{
	return period_;
}

void CreateClusterRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateClusterRequest::getVolumeProtocol()const
{
	return volumeProtocol_;
}

void CreateClusterRequest::setVolumeProtocol(const std::string& volumeProtocol)
{
	volumeProtocol_ = volumeProtocol;
	setCoreParameter("VolumeProtocol", volumeProtocol);
}

std::string CreateClusterRequest::getClientVersion()const
{
	return clientVersion_;
}

void CreateClusterRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setCoreParameter("ClientVersion", clientVersion);
}

std::string CreateClusterRequest::getOsTag()const
{
	return osTag_;
}

void CreateClusterRequest::setOsTag(const std::string& osTag)
{
	osTag_ = osTag;
	setCoreParameter("OsTag", osTag);
}

std::string CreateClusterRequest::getRemoteDirectory()const
{
	return remoteDirectory_;
}

void CreateClusterRequest::setRemoteDirectory(const std::string& remoteDirectory)
{
	remoteDirectory_ = remoteDirectory;
	setCoreParameter("RemoteDirectory", remoteDirectory);
}

int CreateClusterRequest::getEcsOrderComputeCount()const
{
	return ecsOrderComputeCount_;
}

void CreateClusterRequest::setEcsOrderComputeCount(int ecsOrderComputeCount)
{
	ecsOrderComputeCount_ = ecsOrderComputeCount;
	setCoreParameter("EcsOrderComputeCount", ecsOrderComputeCount);
}

std::string CreateClusterRequest::getComputeSpotStrategy()const
{
	return computeSpotStrategy_;
}

void CreateClusterRequest::setComputeSpotStrategy(const std::string& computeSpotStrategy)
{
	computeSpotStrategy_ = computeSpotStrategy;
	setCoreParameter("ComputeSpotStrategy", computeSpotStrategy);
}

std::vector<CreateClusterRequest::PostInstallScript> CreateClusterRequest::getPostInstallScript()const
{
	return postInstallScript_;
}

void CreateClusterRequest::setPostInstallScript(const std::vector<PostInstallScript>& postInstallScript)
{
	postInstallScript_ = postInstallScript;
	int i = 0;
	for(int i = 0; i!= postInstallScript.size(); i++)	{
		auto obj = postInstallScript.at(i);
		std::string str ="PostInstallScript."+ std::to_string(i);
		setCoreParameter(str + ".Args", std::to_string(obj.args));
		setCoreParameter(str + ".Url", std::to_string(obj.url));
	}
}

std::string CreateClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateClusterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateClusterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::vector<CreateClusterRequest::Application> CreateClusterRequest::getApplication()const
{
	return application_;
}

void CreateClusterRequest::setApplication(const std::vector<Application>& application)
{
	application_ = application;
	int i = 0;
	for(int i = 0; i!= application.size(); i++)	{
		auto obj = application.at(i);
		std::string str ="Application."+ std::to_string(i);
		setCoreParameter(str + ".Tag", std::to_string(obj.tag));
	}
}

std::string CreateClusterRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateClusterRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string CreateClusterRequest::getEcsChargeType()const
{
	return ecsChargeType_;
}

void CreateClusterRequest::setEcsChargeType(const std::string& ecsChargeType)
{
	ecsChargeType_ = ecsChargeType;
	setCoreParameter("EcsChargeType", ecsChargeType);
}

std::string CreateClusterRequest::getInputFileUrl()const
{
	return inputFileUrl_;
}

void CreateClusterRequest::setInputFileUrl(const std::string& inputFileUrl)
{
	inputFileUrl_ = inputFileUrl;
	setCoreParameter("InputFileUrl", inputFileUrl);
}

std::string CreateClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

bool CreateClusterRequest::getHaEnable()const
{
	return haEnable_;
}

void CreateClusterRequest::setHaEnable(bool haEnable)
{
	haEnable_ = haEnable;
	setCoreParameter("HaEnable", haEnable);
}

std::string CreateClusterRequest::getName()const
{
	return name_;
}

void CreateClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateClusterRequest::getSchedulerType()const
{
	return schedulerType_;
}

void CreateClusterRequest::setSchedulerType(const std::string& schedulerType)
{
	schedulerType_ = schedulerType;
	setCoreParameter("SchedulerType", schedulerType);
}

std::string CreateClusterRequest::getVolumeId()const
{
	return volumeId_;
}

void CreateClusterRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setCoreParameter("VolumeId", volumeId);
}

std::string CreateClusterRequest::getVolumeMountpoint()const
{
	return volumeMountpoint_;
}

void CreateClusterRequest::setVolumeMountpoint(const std::string& volumeMountpoint)
{
	volumeMountpoint_ = volumeMountpoint;
	setCoreParameter("VolumeMountpoint", volumeMountpoint);
}

std::string CreateClusterRequest::getEcsOrderLoginInstanceType()const
{
	return ecsOrderLoginInstanceType_;
}

void CreateClusterRequest::setEcsOrderLoginInstanceType(const std::string& ecsOrderLoginInstanceType)
{
	ecsOrderLoginInstanceType_ = ecsOrderLoginInstanceType;
	setCoreParameter("EcsOrderLoginInstanceType", ecsOrderLoginInstanceType);
}

std::string CreateClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

