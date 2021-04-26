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

#include <alibabacloud/smc/model/CreateReplicationJobRequest.h>

using AlibabaCloud::Smc::Model::CreateReplicationJobRequest;

CreateReplicationJobRequest::CreateReplicationJobRequest() :
	RpcServiceRequest("smc", "2019-06-01", "CreateReplicationJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateReplicationJobRequest::~CreateReplicationJobRequest()
{}

int CreateReplicationJobRequest::getFrequency()const
{
	return frequency_;
}

void CreateReplicationJobRequest::setFrequency(int frequency)
{
	frequency_ = frequency;
	setParameter("Frequency", std::to_string(frequency));
}

std::string CreateReplicationJobRequest::getReplicationParameters()const
{
	return replicationParameters_;
}

void CreateReplicationJobRequest::setReplicationParameters(const std::string& replicationParameters)
{
	replicationParameters_ = replicationParameters;
	setParameter("ReplicationParameters", replicationParameters);
}

int CreateReplicationJobRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateReplicationJobRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::vector<CreateReplicationJobRequest::Tag> CreateReplicationJobRequest::getTag()const
{
	return tag_;
}

void CreateReplicationJobRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

int CreateReplicationJobRequest::getNetMode()const
{
	return netMode_;
}

void CreateReplicationJobRequest::setNetMode(int netMode)
{
	netMode_ = netMode;
	setParameter("NetMode", std::to_string(netMode));
}

std::string CreateReplicationJobRequest::getLicenseType()const
{
	return licenseType_;
}

void CreateReplicationJobRequest::setLicenseType(const std::string& licenseType)
{
	licenseType_ = licenseType;
	setParameter("LicenseType", licenseType);
}

std::string CreateReplicationJobRequest::getContainerNamespace()const
{
	return containerNamespace_;
}

void CreateReplicationJobRequest::setContainerNamespace(const std::string& containerNamespace)
{
	containerNamespace_ = containerNamespace;
	setParameter("ContainerNamespace", containerNamespace);
}

std::string CreateReplicationJobRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateReplicationJobRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

std::string CreateReplicationJobRequest::getValidTime()const
{
	return validTime_;
}

void CreateReplicationJobRequest::setValidTime(const std::string& validTime)
{
	validTime_ = validTime;
	setParameter("ValidTime", validTime);
}

long CreateReplicationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateReplicationJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateReplicationJobRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateReplicationJobRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateReplicationJobRequest::getScheduledStartTime()const
{
	return scheduledStartTime_;
}

void CreateReplicationJobRequest::setScheduledStartTime(const std::string& scheduledStartTime)
{
	scheduledStartTime_ = scheduledStartTime;
	setParameter("ScheduledStartTime", scheduledStartTime);
}

std::string CreateReplicationJobRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateReplicationJobRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateReplicationJobRequest::getInstanceRamRole()const
{
	return instanceRamRole_;
}

void CreateReplicationJobRequest::setInstanceRamRole(const std::string& instanceRamRole)
{
	instanceRamRole_ = instanceRamRole;
	setParameter("InstanceRamRole", instanceRamRole);
}

std::string CreateReplicationJobRequest::getName()const
{
	return name_;
}

void CreateReplicationJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreateReplicationJobRequest::getMaxNumberOfImageToKeep()const
{
	return maxNumberOfImageToKeep_;
}

void CreateReplicationJobRequest::setMaxNumberOfImageToKeep(int maxNumberOfImageToKeep)
{
	maxNumberOfImageToKeep_ = maxNumberOfImageToKeep;
	setParameter("MaxNumberOfImageToKeep", std::to_string(maxNumberOfImageToKeep));
}

std::string CreateReplicationJobRequest::getTargetType()const
{
	return targetType_;
}

void CreateReplicationJobRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

std::string CreateReplicationJobRequest::getClientToken()const
{
	return clientToken_;
}

void CreateReplicationJobRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateReplicationJobRequest::getDescription()const
{
	return description_;
}

void CreateReplicationJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateReplicationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateReplicationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateReplicationJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateReplicationJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateReplicationJobRequest::getImageName()const
{
	return imageName_;
}

void CreateReplicationJobRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string CreateReplicationJobRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateReplicationJobRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateReplicationJobRequest::getContainerRepository()const
{
	return containerRepository_;
}

void CreateReplicationJobRequest::setContainerRepository(const std::string& containerRepository)
{
	containerRepository_ = containerRepository;
	setParameter("ContainerRepository", containerRepository);
}

std::string CreateReplicationJobRequest::getContainerTag()const
{
	return containerTag_;
}

void CreateReplicationJobRequest::setContainerTag(const std::string& containerTag)
{
	containerTag_ = containerTag;
	setParameter("ContainerTag", containerTag);
}

std::string CreateReplicationJobRequest::getSourceId()const
{
	return sourceId_;
}

void CreateReplicationJobRequest::setSourceId(const std::string& sourceId)
{
	sourceId_ = sourceId;
	setParameter("SourceId", sourceId);
}

bool CreateReplicationJobRequest::getRunOnce()const
{
	return runOnce_;
}

void CreateReplicationJobRequest::setRunOnce(bool runOnce)
{
	runOnce_ = runOnce;
	setParameter("RunOnce", runOnce ? "true" : "false");
}

std::string CreateReplicationJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateReplicationJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::vector<CreateReplicationJobRequest::SystemDiskPart> CreateReplicationJobRequest::getSystemDiskPart()const
{
	return systemDiskPart_;
}

void CreateReplicationJobRequest::setSystemDiskPart(const std::vector<SystemDiskPart>& systemDiskPart)
{
	systemDiskPart_ = systemDiskPart;
	for(int dep1 = 0; dep1!= systemDiskPart.size(); dep1++) {
		auto systemDiskPartObj = systemDiskPart.at(dep1);
		std::string systemDiskPartObjStr = "SystemDiskPart." + std::to_string(dep1 + 1);
		setParameter(systemDiskPartObjStr + ".SizeBytes", std::to_string(systemDiskPartObj.sizeBytes));
		setParameter(systemDiskPartObjStr + ".Block", systemDiskPartObj.block ? "true" : "false");
		setParameter(systemDiskPartObjStr + ".Device", systemDiskPartObj.device);
	}
}

std::vector<CreateReplicationJobRequest::DataDisk> CreateReplicationJobRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateReplicationJobRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	for(int dep1 = 0; dep1!= dataDisk.size(); dep1++) {
		auto dataDiskObj = dataDisk.at(dep1);
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1 + 1);
		setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		for(int dep2 = 0; dep2!= dataDiskObj.part.size(); dep2++) {
			auto partObj = dataDiskObj.part.at(dep2);
			std::string partObjStr = dataDiskObjStr + "Part." + std::to_string(dep2 + 1);
			setParameter(partObjStr + ".SizeBytes", std::to_string(partObj.sizeBytes));
			setParameter(partObjStr + ".Block", partObj.block ? "true" : "false");
			setParameter(partObjStr + ".Device", partObj.device);
		}
		setParameter(dataDiskObjStr + ".Index", std::to_string(dataDiskObj.index));
	}
}

std::string CreateReplicationJobRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void CreateReplicationJobRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setParameter("LaunchTemplateVersion", launchTemplateVersion);
}

std::string CreateReplicationJobRequest::getVpcId()const
{
	return vpcId_;
}

void CreateReplicationJobRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

