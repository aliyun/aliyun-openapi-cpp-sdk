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

#include <alibabacloud/edas/model/DeployK8sApplicationRequest.h>

using AlibabaCloud::Edas::Model::DeployK8sApplicationRequest;

DeployK8sApplicationRequest::DeployK8sApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_apps");
	setMethod(HttpRequest::Method::Post);
}

DeployK8sApplicationRequest::~DeployK8sApplicationRequest()
{}

std::string DeployK8sApplicationRequest::getNasId()const
{
	return nasId_;
}

void DeployK8sApplicationRequest::setNasId(const std::string& nasId)
{
	nasId_ = nasId;
	setParameter("NasId", nasId);
}

std::string DeployK8sApplicationRequest::getWebContainer()const
{
	return webContainer_;
}

void DeployK8sApplicationRequest::setWebContainer(const std::string& webContainer)
{
	webContainer_ = webContainer;
	setParameter("WebContainer", webContainer);
}

bool DeployK8sApplicationRequest::getEnableAhas()const
{
	return enableAhas_;
}

void DeployK8sApplicationRequest::setEnableAhas(bool enableAhas)
{
	enableAhas_ = enableAhas;
	setParameter("EnableAhas", enableAhas ? "true" : "false");
}

std::string DeployK8sApplicationRequest::getSlsConfigs()const
{
	return slsConfigs_;
}

void DeployK8sApplicationRequest::setSlsConfigs(const std::string& slsConfigs)
{
	slsConfigs_ = slsConfigs;
	setParameter("SlsConfigs", slsConfigs);
}

std::string DeployK8sApplicationRequest::getReadiness()const
{
	return readiness_;
}

void DeployK8sApplicationRequest::setReadiness(const std::string& readiness)
{
	readiness_ = readiness;
	setParameter("Readiness", readiness);
}

std::string DeployK8sApplicationRequest::getPackageVersionId()const
{
	return packageVersionId_;
}

void DeployK8sApplicationRequest::setPackageVersionId(const std::string& packageVersionId)
{
	packageVersionId_ = packageVersionId;
	setParameter("PackageVersionId", packageVersionId);
}

int DeployK8sApplicationRequest::getBatchWaitTime()const
{
	return batchWaitTime_;
}

void DeployK8sApplicationRequest::setBatchWaitTime(int batchWaitTime)
{
	batchWaitTime_ = batchWaitTime;
	setParameter("BatchWaitTime", std::to_string(batchWaitTime));
}

std::string DeployK8sApplicationRequest::getLiveness()const
{
	return liveness_;
}

void DeployK8sApplicationRequest::setLiveness(const std::string& liveness)
{
	liveness_ = liveness;
	setParameter("Liveness", liveness);
}

std::string DeployK8sApplicationRequest::getEnvs()const
{
	return envs_;
}

void DeployK8sApplicationRequest::setEnvs(const std::string& envs)
{
	envs_ = envs;
	setParameter("Envs", envs);
}

int DeployK8sApplicationRequest::getCpuLimit()const
{
	return cpuLimit_;
}

void DeployK8sApplicationRequest::setCpuLimit(int cpuLimit)
{
	cpuLimit_ = cpuLimit;
	setParameter("CpuLimit", std::to_string(cpuLimit));
}

std::string DeployK8sApplicationRequest::getPackageVersion()const
{
	return packageVersion_;
}

void DeployK8sApplicationRequest::setPackageVersion(const std::string& packageVersion)
{
	packageVersion_ = packageVersion;
	setParameter("PackageVersion", packageVersion);
}

std::string DeployK8sApplicationRequest::getStorageType()const
{
	return storageType_;
}

void DeployK8sApplicationRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string DeployK8sApplicationRequest::getEnvFroms()const
{
	return envFroms_;
}

void DeployK8sApplicationRequest::setEnvFroms(const std::string& envFroms)
{
	envFroms_ = envFroms;
	setParameter("EnvFroms", envFroms);
}

std::string DeployK8sApplicationRequest::getConfigMountDescs()const
{
	return configMountDescs_;
}

void DeployK8sApplicationRequest::setConfigMountDescs(const std::string& configMountDescs)
{
	configMountDescs_ = configMountDescs;
	setParameter("ConfigMountDescs", configMountDescs);
}

std::string DeployK8sApplicationRequest::getEdasContainerVersion()const
{
	return edasContainerVersion_;
}

void DeployK8sApplicationRequest::setEdasContainerVersion(const std::string& edasContainerVersion)
{
	edasContainerVersion_ = edasContainerVersion;
	setParameter("EdasContainerVersion", edasContainerVersion);
}

std::string DeployK8sApplicationRequest::getPackageUrl()const
{
	return packageUrl_;
}

void DeployK8sApplicationRequest::setPackageUrl(const std::string& packageUrl)
{
	packageUrl_ = packageUrl;
	setParameter("PackageUrl", packageUrl);
}

int DeployK8sApplicationRequest::getMemoryLimit()const
{
	return memoryLimit_;
}

void DeployK8sApplicationRequest::setMemoryLimit(int memoryLimit)
{
	memoryLimit_ = memoryLimit;
	setParameter("MemoryLimit", std::to_string(memoryLimit));
}

std::string DeployK8sApplicationRequest::getImageTag()const
{
	return imageTag_;
}

void DeployK8sApplicationRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setParameter("ImageTag", imageTag);
}

std::string DeployK8sApplicationRequest::getDeployAcrossZones()const
{
	return deployAcrossZones_;
}

void DeployK8sApplicationRequest::setDeployAcrossZones(const std::string& deployAcrossZones)
{
	deployAcrossZones_ = deployAcrossZones;
	setParameter("DeployAcrossZones", deployAcrossZones);
}

std::string DeployK8sApplicationRequest::getDeployAcrossNodes()const
{
	return deployAcrossNodes_;
}

void DeployK8sApplicationRequest::setDeployAcrossNodes(const std::string& deployAcrossNodes)
{
	deployAcrossNodes_ = deployAcrossNodes;
	setParameter("DeployAcrossNodes", deployAcrossNodes);
}

int DeployK8sApplicationRequest::getMemoryRequest()const
{
	return memoryRequest_;
}

void DeployK8sApplicationRequest::setMemoryRequest(int memoryRequest)
{
	memoryRequest_ = memoryRequest;
	setParameter("MemoryRequest", std::to_string(memoryRequest));
}

std::string DeployK8sApplicationRequest::getImage()const
{
	return image_;
}

void DeployK8sApplicationRequest::setImage(const std::string& image)
{
	image_ = image;
	setParameter("Image", image);
}

std::string DeployK8sApplicationRequest::getPreStop()const
{
	return preStop_;
}

void DeployK8sApplicationRequest::setPreStop(const std::string& preStop)
{
	preStop_ = preStop;
	setParameter("PreStop", preStop);
}

std::string DeployK8sApplicationRequest::getMountDescs()const
{
	return mountDescs_;
}

void DeployK8sApplicationRequest::setMountDescs(const std::string& mountDescs)
{
	mountDescs_ = mountDescs;
	setParameter("MountDescs", mountDescs);
}

int DeployK8sApplicationRequest::getReplicas()const
{
	return replicas_;
}

void DeployK8sApplicationRequest::setReplicas(int replicas)
{
	replicas_ = replicas;
	setParameter("Replicas", std::to_string(replicas));
}

int DeployK8sApplicationRequest::getCpuRequest()const
{
	return cpuRequest_;
}

void DeployK8sApplicationRequest::setCpuRequest(int cpuRequest)
{
	cpuRequest_ = cpuRequest;
	setParameter("CpuRequest", std::to_string(cpuRequest));
}

std::string DeployK8sApplicationRequest::getWebContainerConfig()const
{
	return webContainerConfig_;
}

void DeployK8sApplicationRequest::setWebContainerConfig(const std::string& webContainerConfig)
{
	webContainerConfig_ = webContainerConfig;
	setParameter("WebContainerConfig", webContainerConfig);
}

std::string DeployK8sApplicationRequest::getLocalVolume()const
{
	return localVolume_;
}

void DeployK8sApplicationRequest::setLocalVolume(const std::string& localVolume)
{
	localVolume_ = localVolume;
	setParameter("LocalVolume", localVolume);
}

std::string DeployK8sApplicationRequest::getCommand()const
{
	return command_;
}

void DeployK8sApplicationRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

std::string DeployK8sApplicationRequest::getUpdateStrategy()const
{
	return updateStrategy_;
}

void DeployK8sApplicationRequest::setUpdateStrategy(const std::string& updateStrategy)
{
	updateStrategy_ = updateStrategy;
	setParameter("UpdateStrategy", updateStrategy);
}

std::string DeployK8sApplicationRequest::getArgs()const
{
	return args_;
}

void DeployK8sApplicationRequest::setArgs(const std::string& args)
{
	args_ = args;
	setParameter("Args", args);
}

std::string DeployK8sApplicationRequest::getJDK()const
{
	return jDK_;
}

void DeployK8sApplicationRequest::setJDK(const std::string& jDK)
{
	jDK_ = jDK;
	setParameter("JDK", jDK);
}

bool DeployK8sApplicationRequest::getUseBodyEncoding()const
{
	return useBodyEncoding_;
}

void DeployK8sApplicationRequest::setUseBodyEncoding(bool useBodyEncoding)
{
	useBodyEncoding_ = useBodyEncoding;
	setParameter("UseBodyEncoding", useBodyEncoding ? "true" : "false");
}

std::string DeployK8sApplicationRequest::getChangeOrderDesc()const
{
	return changeOrderDesc_;
}

void DeployK8sApplicationRequest::setChangeOrderDesc(const std::string& changeOrderDesc)
{
	changeOrderDesc_ = changeOrderDesc;
	setParameter("ChangeOrderDesc", changeOrderDesc);
}

std::string DeployK8sApplicationRequest::getUriEncoding()const
{
	return uriEncoding_;
}

void DeployK8sApplicationRequest::setUriEncoding(const std::string& uriEncoding)
{
	uriEncoding_ = uriEncoding;
	setParameter("UriEncoding", uriEncoding);
}

std::string DeployK8sApplicationRequest::getAppId()const
{
	return appId_;
}

void DeployK8sApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

int DeployK8sApplicationRequest::getBatchTimeout()const
{
	return batchTimeout_;
}

void DeployK8sApplicationRequest::setBatchTimeout(int batchTimeout)
{
	batchTimeout_ = batchTimeout;
	setParameter("BatchTimeout", std::to_string(batchTimeout));
}

std::string DeployK8sApplicationRequest::getPvcMountDescs()const
{
	return pvcMountDescs_;
}

void DeployK8sApplicationRequest::setPvcMountDescs(const std::string& pvcMountDescs)
{
	pvcMountDescs_ = pvcMountDescs;
	setParameter("PvcMountDescs", pvcMountDescs);
}

std::string DeployK8sApplicationRequest::getEmptyDirs()const
{
	return emptyDirs_;
}

void DeployK8sApplicationRequest::setEmptyDirs(const std::string& emptyDirs)
{
	emptyDirs_ = emptyDirs;
	setParameter("EmptyDirs", emptyDirs);
}

int DeployK8sApplicationRequest::getMcpuRequest()const
{
	return mcpuRequest_;
}

void DeployK8sApplicationRequest::setMcpuRequest(int mcpuRequest)
{
	mcpuRequest_ = mcpuRequest;
	setParameter("McpuRequest", std::to_string(mcpuRequest));
}

int DeployK8sApplicationRequest::getMcpuLimit()const
{
	return mcpuLimit_;
}

void DeployK8sApplicationRequest::setMcpuLimit(int mcpuLimit)
{
	mcpuLimit_ = mcpuLimit;
	setParameter("McpuLimit", std::to_string(mcpuLimit));
}

std::string DeployK8sApplicationRequest::getVolumesStr()const
{
	return volumesStr_;
}

void DeployK8sApplicationRequest::setVolumesStr(const std::string& volumesStr)
{
	volumesStr_ = volumesStr;
	setParameter("VolumesStr", volumesStr);
}

std::string DeployK8sApplicationRequest::getRuntimeClassName()const
{
	return runtimeClassName_;
}

void DeployK8sApplicationRequest::setRuntimeClassName(const std::string& runtimeClassName)
{
	runtimeClassName_ = runtimeClassName;
	setParameter("RuntimeClassName", runtimeClassName);
}

std::string DeployK8sApplicationRequest::getTrafficControlStrategy()const
{
	return trafficControlStrategy_;
}

void DeployK8sApplicationRequest::setTrafficControlStrategy(const std::string& trafficControlStrategy)
{
	trafficControlStrategy_ = trafficControlStrategy;
	setParameter("TrafficControlStrategy", trafficControlStrategy);
}

std::string DeployK8sApplicationRequest::getPostStart()const
{
	return postStart_;
}

void DeployK8sApplicationRequest::setPostStart(const std::string& postStart)
{
	postStart_ = postStart;
	setParameter("PostStart", postStart);
}

std::string DeployK8sApplicationRequest::getJavaStartUpConfig()const
{
	return javaStartUpConfig_;
}

void DeployK8sApplicationRequest::setJavaStartUpConfig(const std::string& javaStartUpConfig)
{
	javaStartUpConfig_ = javaStartUpConfig;
	setParameter("JavaStartUpConfig", javaStartUpConfig);
}

