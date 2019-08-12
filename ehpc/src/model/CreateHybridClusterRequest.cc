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

#include <alibabacloud/ehpc/model/CreateHybridClusterRequest.h>

using AlibabaCloud::EHPC::Model::CreateHybridClusterRequest;

CreateHybridClusterRequest::CreateHybridClusterRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "CreateHybridCluster")
{}

CreateHybridClusterRequest::~CreateHybridClusterRequest()
{}

std::string CreateHybridClusterRequest::getEhpcVersion()const
{
	return ehpcVersion_;
}

void CreateHybridClusterRequest::setEhpcVersion(const std::string& ehpcVersion)
{
	ehpcVersion_ = ehpcVersion;
	setCoreParameter("EhpcVersion", std::to_string(ehpcVersion));
}

std::string CreateHybridClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateHybridClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

std::string CreateHybridClusterRequest::getDescription()const
{
	return description_;
}

void CreateHybridClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateHybridClusterRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateHybridClusterRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", std::to_string(keyPairName));
}

std::string CreateHybridClusterRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateHybridClusterRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", std::to_string(securityGroupName));
}

std::string CreateHybridClusterRequest::getEcsOrderComputeInstanceType()const
{
	return ecsOrderComputeInstanceType_;
}

void CreateHybridClusterRequest::setEcsOrderComputeInstanceType(const std::string& ecsOrderComputeInstanceType)
{
	ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
	setCoreParameter("EcsOrderComputeInstanceType", std::to_string(ecsOrderComputeInstanceType));
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeRemotePath()const
{
	return onPremiseVolumeRemotePath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeRemotePath(const std::string& onPremiseVolumeRemotePath)
{
	onPremiseVolumeRemotePath_ = onPremiseVolumeRemotePath;
	setCoreParameter("OnPremiseVolumeRemotePath", std::to_string(onPremiseVolumeRemotePath));
}

std::string CreateHybridClusterRequest::getJobQueue()const
{
	return jobQueue_;
}

void CreateHybridClusterRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setCoreParameter("JobQueue", std::to_string(jobQueue));
}

std::string CreateHybridClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHybridClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateHybridClusterRequest::getVolumeType()const
{
	return volumeType_;
}

void CreateHybridClusterRequest::setVolumeType(const std::string& volumeType)
{
	volumeType_ = volumeType;
	setCoreParameter("VolumeType", std::to_string(volumeType));
}

std::string CreateHybridClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateHybridClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateHybridClusterRequest::getPassword()const
{
	return password_;
}

void CreateHybridClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", std::to_string(password));
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeMountPoint()const
{
	return onPremiseVolumeMountPoint_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeMountPoint(const std::string& onPremiseVolumeMountPoint)
{
	onPremiseVolumeMountPoint_ = onPremiseVolumeMountPoint;
	setCoreParameter("OnPremiseVolumeMountPoint", std::to_string(onPremiseVolumeMountPoint));
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeProtocol()const
{
	return onPremiseVolumeProtocol_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeProtocol(const std::string& onPremiseVolumeProtocol)
{
	onPremiseVolumeProtocol_ = onPremiseVolumeProtocol;
	setCoreParameter("OnPremiseVolumeProtocol", std::to_string(onPremiseVolumeProtocol));
}

std::string CreateHybridClusterRequest::getVolumeProtocol()const
{
	return volumeProtocol_;
}

void CreateHybridClusterRequest::setVolumeProtocol(const std::string& volumeProtocol)
{
	volumeProtocol_ = volumeProtocol;
	setCoreParameter("VolumeProtocol", std::to_string(volumeProtocol));
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeLocalPath()const
{
	return onPremiseVolumeLocalPath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeLocalPath(const std::string& onPremiseVolumeLocalPath)
{
	onPremiseVolumeLocalPath_ = onPremiseVolumeLocalPath;
	setCoreParameter("OnPremiseVolumeLocalPath", std::to_string(onPremiseVolumeLocalPath));
}

std::string CreateHybridClusterRequest::getClientVersion()const
{
	return clientVersion_;
}

void CreateHybridClusterRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setCoreParameter("ClientVersion", std::to_string(clientVersion));
}

std::string CreateHybridClusterRequest::getOsTag()const
{
	return osTag_;
}

void CreateHybridClusterRequest::setOsTag(const std::string& osTag)
{
	osTag_ = osTag;
	setCoreParameter("OsTag", std::to_string(osTag));
}

std::string CreateHybridClusterRequest::getRemoteDirectory()const
{
	return remoteDirectory_;
}

void CreateHybridClusterRequest::setRemoteDirectory(const std::string& remoteDirectory)
{
	remoteDirectory_ = remoteDirectory;
	setCoreParameter("RemoteDirectory", std::to_string(remoteDirectory));
}

std::vector<CreateHybridClusterRequest::PostInstallScript> CreateHybridClusterRequest::getPostInstallScript()const
{
	return postInstallScript_;
}

void CreateHybridClusterRequest::setPostInstallScript(const std::vector<PostInstallScript>& postInstallScript)
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

std::string CreateHybridClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateHybridClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::vector<CreateHybridClusterRequest::Nodes> CreateHybridClusterRequest::getNodes()const
{
	return nodes_;
}

void CreateHybridClusterRequest::setNodes(const std::vector<Nodes>& nodes)
{
	nodes_ = nodes;
	int i = 0;
	for(int i = 0; i!= nodes.size(); i++)	{
		auto obj = nodes.at(i);
		std::string str ="Nodes."+ std::to_string(i);
		setCoreParameter(str + ".IpAddress", std::to_string(obj.ipAddress));
		setCoreParameter(str + ".HostName", std::to_string(obj.hostName));
		setCoreParameter(str + ".Role", std::to_string(obj.role));
		setCoreParameter(str + ".AccountType", std::to_string(obj.accountType));
		setCoreParameter(str + ".SchedulerType", std::to_string(obj.schedulerType));
	}
}

std::vector<CreateHybridClusterRequest::Application> CreateHybridClusterRequest::getApplication()const
{
	return application_;
}

void CreateHybridClusterRequest::setApplication(const std::vector<Application>& application)
{
	application_ = application;
	int i = 0;
	for(int i = 0; i!= application.size(); i++)	{
		auto obj = application.at(i);
		std::string str ="Application."+ std::to_string(i);
		setCoreParameter(str + ".Tag", std::to_string(obj.tag));
	}
}

std::string CreateHybridClusterRequest::getDomain()const
{
	return domain_;
}

void CreateHybridClusterRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", std::to_string(domain));
}

std::string CreateHybridClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateHybridClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateHybridClusterRequest::getName()const
{
	return name_;
}

void CreateHybridClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateHybridClusterRequest::getVolumeId()const
{
	return volumeId_;
}

void CreateHybridClusterRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setCoreParameter("VolumeId", std::to_string(volumeId));
}

std::string CreateHybridClusterRequest::getVolumeMountpoint()const
{
	return volumeMountpoint_;
}

void CreateHybridClusterRequest::setVolumeMountpoint(const std::string& volumeMountpoint)
{
	volumeMountpoint_ = volumeMountpoint;
	setCoreParameter("VolumeMountpoint", std::to_string(volumeMountpoint));
}

std::string CreateHybridClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateHybridClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

bool CreateHybridClusterRequest::getSchedulerPreInstall()const
{
	return schedulerPreInstall_;
}

void CreateHybridClusterRequest::setSchedulerPreInstall(bool schedulerPreInstall)
{
	schedulerPreInstall_ = schedulerPreInstall;
	setCoreParameter("SchedulerPreInstall", schedulerPreInstall ? "true" : "false");
}

std::string CreateHybridClusterRequest::getLocation()const
{
	return location_;
}

void CreateHybridClusterRequest::setLocation(const std::string& location)
{
	location_ = location;
	setCoreParameter("Location", std::to_string(location));
}

