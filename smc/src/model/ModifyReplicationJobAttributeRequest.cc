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

#include <alibabacloud/smc/model/ModifyReplicationJobAttributeRequest.h>

using AlibabaCloud::Smc::Model::ModifyReplicationJobAttributeRequest;

ModifyReplicationJobAttributeRequest::ModifyReplicationJobAttributeRequest() :
	RpcServiceRequest("smc", "2019-06-01", "ModifyReplicationJobAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyReplicationJobAttributeRequest::~ModifyReplicationJobAttributeRequest()
{}

std::string ModifyReplicationJobAttributeRequest::getTargetType()const
{
	return targetType_;
}

void ModifyReplicationJobAttributeRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

std::string ModifyReplicationJobAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyReplicationJobAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyReplicationJobAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicationJobAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ModifyReplicationJobAttributeRequest::getFrequency()const
{
	return frequency_;
}

void ModifyReplicationJobAttributeRequest::setFrequency(int frequency)
{
	frequency_ = frequency;
	setParameter("Frequency", std::to_string(frequency));
}

std::string ModifyReplicationJobAttributeRequest::getJobId()const
{
	return jobId_;
}

void ModifyReplicationJobAttributeRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ModifyReplicationJobAttributeRequest::getImageName()const
{
	return imageName_;
}

void ModifyReplicationJobAttributeRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

int ModifyReplicationJobAttributeRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void ModifyReplicationJobAttributeRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string ModifyReplicationJobAttributeRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyReplicationJobAttributeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string ModifyReplicationJobAttributeRequest::getContainerRepository()const
{
	return containerRepository_;
}

void ModifyReplicationJobAttributeRequest::setContainerRepository(const std::string& containerRepository)
{
	containerRepository_ = containerRepository;
	setParameter("ContainerRepository", containerRepository);
}

std::string ModifyReplicationJobAttributeRequest::getContainerTag()const
{
	return containerTag_;
}

void ModifyReplicationJobAttributeRequest::setContainerTag(const std::string& containerTag)
{
	containerTag_ = containerTag;
	setParameter("ContainerTag", containerTag);
}

std::string ModifyReplicationJobAttributeRequest::getContainerNamespace()const
{
	return containerNamespace_;
}

void ModifyReplicationJobAttributeRequest::setContainerNamespace(const std::string& containerNamespace)
{
	containerNamespace_ = containerNamespace;
	setParameter("ContainerNamespace", containerNamespace);
}

std::string ModifyReplicationJobAttributeRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void ModifyReplicationJobAttributeRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

std::string ModifyReplicationJobAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicationJobAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::vector<ModifyReplicationJobAttributeRequest::SystemDiskPart> ModifyReplicationJobAttributeRequest::getSystemDiskPart()const
{
	return systemDiskPart_;
}

void ModifyReplicationJobAttributeRequest::setSystemDiskPart(const std::vector<SystemDiskPart>& systemDiskPart)
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

std::string ModifyReplicationJobAttributeRequest::getValidTime()const
{
	return validTime_;
}

void ModifyReplicationJobAttributeRequest::setValidTime(const std::string& validTime)
{
	validTime_ = validTime;
	setParameter("ValidTime", validTime);
}

long ModifyReplicationJobAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicationJobAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<ModifyReplicationJobAttributeRequest::DataDisk> ModifyReplicationJobAttributeRequest::getDataDisk()const
{
	return dataDisk_;
}

void ModifyReplicationJobAttributeRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
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

std::string ModifyReplicationJobAttributeRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void ModifyReplicationJobAttributeRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setParameter("LaunchTemplateVersion", launchTemplateVersion);
}

std::string ModifyReplicationJobAttributeRequest::getScheduledStartTime()const
{
	return scheduledStartTime_;
}

void ModifyReplicationJobAttributeRequest::setScheduledStartTime(const std::string& scheduledStartTime)
{
	scheduledStartTime_ = scheduledStartTime;
	setParameter("ScheduledStartTime", scheduledStartTime);
}

std::string ModifyReplicationJobAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyReplicationJobAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyReplicationJobAttributeRequest::getInstanceRamRole()const
{
	return instanceRamRole_;
}

void ModifyReplicationJobAttributeRequest::setInstanceRamRole(const std::string& instanceRamRole)
{
	instanceRamRole_ = instanceRamRole;
	setParameter("InstanceRamRole", instanceRamRole);
}

std::string ModifyReplicationJobAttributeRequest::getName()const
{
	return name_;
}

void ModifyReplicationJobAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ModifyReplicationJobAttributeRequest::getMaxNumberOfImageToKeep()const
{
	return maxNumberOfImageToKeep_;
}

void ModifyReplicationJobAttributeRequest::setMaxNumberOfImageToKeep(int maxNumberOfImageToKeep)
{
	maxNumberOfImageToKeep_ = maxNumberOfImageToKeep;
	setParameter("MaxNumberOfImageToKeep", std::to_string(maxNumberOfImageToKeep));
}

