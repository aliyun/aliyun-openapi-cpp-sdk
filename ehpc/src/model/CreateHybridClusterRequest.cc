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
{
	setMethod(HttpRequest::Method::Get);
}

CreateHybridClusterRequest::~CreateHybridClusterRequest()
{}

std::string CreateHybridClusterRequest::getEhpcVersion()const
{
	return ehpcVersion_;
}

void CreateHybridClusterRequest::setEhpcVersion(const std::string& ehpcVersion)
{
	ehpcVersion_ = ehpcVersion;
	setCoreParameter("EhpcVersion", ehpcVersion);
}

std::string CreateHybridClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateHybridClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

std::string CreateHybridClusterRequest::getDescription()const
{
	return description_;
}

void CreateHybridClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateHybridClusterRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateHybridClusterRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string CreateHybridClusterRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateHybridClusterRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", securityGroupName);
}

std::string CreateHybridClusterRequest::getEcsOrderComputeInstanceType()const
{
	return ecsOrderComputeInstanceType_;
}

void CreateHybridClusterRequest::setEcsOrderComputeInstanceType(const std::string& ecsOrderComputeInstanceType)
{
	ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
	setCoreParameter("EcsOrderComputeInstanceType", ecsOrderComputeInstanceType);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeRemotePath()const
{
	return onPremiseVolumeRemotePath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeRemotePath(const std::string& onPremiseVolumeRemotePath)
{
	onPremiseVolumeRemotePath_ = onPremiseVolumeRemotePath;
	setCoreParameter("OnPremiseVolumeRemotePath", onPremiseVolumeRemotePath);
}

std::string CreateHybridClusterRequest::getJobQueue()const
{
	return jobQueue_;
}

void CreateHybridClusterRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setCoreParameter("JobQueue", jobQueue);
}

std::string CreateHybridClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHybridClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateHybridClusterRequest::getVolumeType()const
{
	return volumeType_;
}

void CreateHybridClusterRequest::setVolumeType(const std::string& volumeType)
{
	volumeType_ = volumeType;
	setCoreParameter("VolumeType", volumeType);
}

std::string CreateHybridClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateHybridClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateHybridClusterRequest::getPassword()const
{
	return password_;
}

void CreateHybridClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeMountPoint()const
{
	return onPremiseVolumeMountPoint_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeMountPoint(const std::string& onPremiseVolumeMountPoint)
{
	onPremiseVolumeMountPoint_ = onPremiseVolumeMountPoint;
	setCoreParameter("OnPremiseVolumeMountPoint", onPremiseVolumeMountPoint);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeProtocol()const
{
	return onPremiseVolumeProtocol_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeProtocol(const std::string& onPremiseVolumeProtocol)
{
	onPremiseVolumeProtocol_ = onPremiseVolumeProtocol;
	setCoreParameter("OnPremiseVolumeProtocol", onPremiseVolumeProtocol);
}

std::string CreateHybridClusterRequest::getVolumeProtocol()const
{
	return volumeProtocol_;
}

void CreateHybridClusterRequest::setVolumeProtocol(const std::string& volumeProtocol)
{
	volumeProtocol_ = volumeProtocol;
	setCoreParameter("VolumeProtocol", volumeProtocol);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeLocalPath()const
{
	return onPremiseVolumeLocalPath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeLocalPath(const std::string& onPremiseVolumeLocalPath)
{
	onPremiseVolumeLocalPath_ = onPremiseVolumeLocalPath;
	setCoreParameter("OnPremiseVolumeLocalPath", onPremiseVolumeLocalPath);
}

std::string CreateHybridClusterRequest::getClientVersion()const
{
	return clientVersion_;
}

void CreateHybridClusterRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setCoreParameter("ClientVersion", clientVersion);
}

std::string CreateHybridClusterRequest::getOsTag()const
{
	return osTag_;
}

void CreateHybridClusterRequest::setOsTag(const std::string& osTag)
{
	osTag_ = osTag;
	setCoreParameter("OsTag", osTag);
}

std::string CreateHybridClusterRequest::getRemoteDirectory()const
{
	return remoteDirectory_;
}

void CreateHybridClusterRequest::setRemoteDirectory(const std::string& remoteDirectory)
{
	remoteDirectory_ = remoteDirectory;
	setCoreParameter("RemoteDirectory", remoteDirectory);
}

std::vector<CreateHybridClusterRequest::PostInstallScript> CreateHybridClusterRequest::getPostInstallScript()const
{
	return postInstallScript_;
}

void CreateHybridClusterRequest::setPostInstallScript(const std::vector<PostInstallScript>& postInstallScript)
{
	postInstallScript_ = postInstallScript;
	for(int dep1 = 0; dep1!= postInstallScript.size(); dep1++) {
		auto postInstallScriptObj = postInstallScript.at(dep1);
		std::string postInstallScriptObjStr = "PostInstallScript." + std::to_string(dep1);
		setCoreParameter(postInstallScriptObjStr + ".Args", postInstallScriptObj.args);
		setCoreParameter(postInstallScriptObjStr + ".Url", postInstallScriptObj.url);
	}
}

std::string CreateHybridClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateHybridClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::vector<CreateHybridClusterRequest::Nodes> CreateHybridClusterRequest::getNodes()const
{
	return nodes_;
}

void CreateHybridClusterRequest::setNodes(const std::vector<Nodes>& nodes)
{
	nodes_ = nodes;
	for(int dep1 = 0; dep1!= nodes.size(); dep1++) {
		auto nodesObj = nodes.at(dep1);
		std::string nodesObjStr = "Nodes." + std::to_string(dep1);
		setCoreParameter(nodesObjStr + ".IpAddress", nodesObj.ipAddress);
		setCoreParameter(nodesObjStr + ".HostName", nodesObj.hostName);
		setCoreParameter(nodesObjStr + ".Role", nodesObj.role);
		setCoreParameter(nodesObjStr + ".AccountType", nodesObj.accountType);
		setCoreParameter(nodesObjStr + ".SchedulerType", nodesObj.schedulerType);
	}
}

std::vector<CreateHybridClusterRequest::Application> CreateHybridClusterRequest::getApplication()const
{
	return application_;
}

void CreateHybridClusterRequest::setApplication(const std::vector<Application>& application)
{
	application_ = application;
	for(int dep1 = 0; dep1!= application.size(); dep1++) {
		auto applicationObj = application.at(dep1);
		std::string applicationObjStr = "Application." + std::to_string(dep1);
		setCoreParameter(applicationObjStr + ".Tag", applicationObj.tag);
	}
}

std::string CreateHybridClusterRequest::getDomain()const
{
	return domain_;
}

void CreateHybridClusterRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

std::string CreateHybridClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateHybridClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateHybridClusterRequest::getName()const
{
	return name_;
}

void CreateHybridClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateHybridClusterRequest::getVolumeId()const
{
	return volumeId_;
}

void CreateHybridClusterRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setCoreParameter("VolumeId", volumeId);
}

std::string CreateHybridClusterRequest::getVolumeMountpoint()const
{
	return volumeMountpoint_;
}

void CreateHybridClusterRequest::setVolumeMountpoint(const std::string& volumeMountpoint)
{
	volumeMountpoint_ = volumeMountpoint;
	setCoreParameter("VolumeMountpoint", volumeMountpoint);
}

std::string CreateHybridClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateHybridClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
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
	setCoreParameter("Location", location);
}

