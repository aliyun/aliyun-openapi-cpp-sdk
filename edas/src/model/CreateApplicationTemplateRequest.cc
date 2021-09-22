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

#include <alibabacloud/edas/model/CreateApplicationTemplateRequest.h>

using AlibabaCloud::Edas::Model::CreateApplicationTemplateRequest;

CreateApplicationTemplateRequest::CreateApplicationTemplateRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/cnedas/app_template");
	setMethod(HttpRequest::Method::Post);
}

CreateApplicationTemplateRequest::~CreateApplicationTemplateRequest()
{}

std::string CreateApplicationTemplateRequest::getNasId()const
{
	return nasId_;
}

void CreateApplicationTemplateRequest::setNasId(const std::string& nasId)
{
	nasId_ = nasId;
	setBodyParameter("NasId", nasId);
}

bool CreateApplicationTemplateRequest::getEnableAhas()const
{
	return enableAhas_;
}

void CreateApplicationTemplateRequest::setEnableAhas(bool enableAhas)
{
	enableAhas_ = enableAhas;
	setBodyParameter("EnableAhas", enableAhas ? "true" : "false");
}

std::string CreateApplicationTemplateRequest::getSlsConfigs()const
{
	return slsConfigs_;
}

void CreateApplicationTemplateRequest::setSlsConfigs(const std::string& slsConfigs)
{
	slsConfigs_ = slsConfigs;
	setBodyParameter("SlsConfigs", slsConfigs);
}

std::string CreateApplicationTemplateRequest::getCommandArgs()const
{
	return commandArgs_;
}

void CreateApplicationTemplateRequest::setCommandArgs(const std::string& commandArgs)
{
	commandArgs_ = commandArgs;
	setBodyParameter("CommandArgs", commandArgs);
}

std::string CreateApplicationTemplateRequest::getReadiness()const
{
	return readiness_;
}

void CreateApplicationTemplateRequest::setReadiness(const std::string& readiness)
{
	readiness_ = readiness;
	setBodyParameter("Readiness", readiness);
}

std::string CreateApplicationTemplateRequest::getLiveness()const
{
	return liveness_;
}

void CreateApplicationTemplateRequest::setLiveness(const std::string& liveness)
{
	liveness_ = liveness;
	setBodyParameter("Liveness", liveness);
}

std::string CreateApplicationTemplateRequest::getDescription()const
{
	return description_;
}

void CreateApplicationTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateApplicationTemplateRequest::getEnvs()const
{
	return envs_;
}

void CreateApplicationTemplateRequest::setEnvs(const std::string& envs)
{
	envs_ = envs;
	setBodyParameter("Envs", envs);
}

std::string CreateApplicationTemplateRequest::getEnvFroms()const
{
	return envFroms_;
}

void CreateApplicationTemplateRequest::setEnvFroms(const std::string& envFroms)
{
	envFroms_ = envFroms;
	setBodyParameter("EnvFroms", envFroms);
}

std::string CreateApplicationTemplateRequest::getRequestCpu()const
{
	return requestCpu_;
}

void CreateApplicationTemplateRequest::setRequestCpu(const std::string& requestCpu)
{
	requestCpu_ = requestCpu;
	setBodyParameter("RequestCpu", requestCpu);
}

std::string CreateApplicationTemplateRequest::getRequestMem()const
{
	return requestMem_;
}

void CreateApplicationTemplateRequest::setRequestMem(const std::string& requestMem)
{
	requestMem_ = requestMem;
	setBodyParameter("RequestMem", requestMem);
}

std::string CreateApplicationTemplateRequest::getShowName()const
{
	return showName_;
}

void CreateApplicationTemplateRequest::setShowName(const std::string& showName)
{
	showName_ = showName;
	setBodyParameter("ShowName", showName);
}

std::string CreateApplicationTemplateRequest::getLimitMem()const
{
	return limitMem_;
}

void CreateApplicationTemplateRequest::setLimitMem(const std::string& limitMem)
{
	limitMem_ = limitMem;
	setBodyParameter("LimitMem", limitMem);
}

std::string CreateApplicationTemplateRequest::getConfigMountDescs()const
{
	return configMountDescs_;
}

void CreateApplicationTemplateRequest::setConfigMountDescs(const std::string& configMountDescs)
{
	configMountDescs_ = configMountDescs;
	setBodyParameter("ConfigMountDescs", configMountDescs);
}

bool CreateApplicationTemplateRequest::getDeployAcrossZones()const
{
	return deployAcrossZones_;
}

void CreateApplicationTemplateRequest::setDeployAcrossZones(bool deployAcrossZones)
{
	deployAcrossZones_ = deployAcrossZones;
	setBodyParameter("DeployAcrossZones", deployAcrossZones ? "true" : "false");
}

bool CreateApplicationTemplateRequest::getDeployAcrossNodes()const
{
	return deployAcrossNodes_;
}

void CreateApplicationTemplateRequest::setDeployAcrossNodes(bool deployAcrossNodes)
{
	deployAcrossNodes_ = deployAcrossNodes;
	setBodyParameter("DeployAcrossNodes", deployAcrossNodes ? "true" : "false");
}

std::string CreateApplicationTemplateRequest::getPreStop()const
{
	return preStop_;
}

void CreateApplicationTemplateRequest::setPreStop(const std::string& preStop)
{
	preStop_ = preStop;
	setBodyParameter("PreStop", preStop);
}

long CreateApplicationTemplateRequest::getReplicas()const
{
	return replicas_;
}

void CreateApplicationTemplateRequest::setReplicas(long replicas)
{
	replicas_ = replicas;
	setBodyParameter("Replicas", std::to_string(replicas));
}

std::string CreateApplicationTemplateRequest::getLimitCpu()const
{
	return limitCpu_;
}

void CreateApplicationTemplateRequest::setLimitCpu(const std::string& limitCpu)
{
	limitCpu_ = limitCpu;
	setBodyParameter("LimitCpu", limitCpu);
}

std::string CreateApplicationTemplateRequest::getWebContainerConfig()const
{
	return webContainerConfig_;
}

void CreateApplicationTemplateRequest::setWebContainerConfig(const std::string& webContainerConfig)
{
	webContainerConfig_ = webContainerConfig;
	setBodyParameter("WebContainerConfig", webContainerConfig);
}

std::string CreateApplicationTemplateRequest::getPackageConfig()const
{
	return packageConfig_;
}

void CreateApplicationTemplateRequest::setPackageConfig(const std::string& packageConfig)
{
	packageConfig_ = packageConfig;
	setBodyParameter("PackageConfig", packageConfig);
}

bool CreateApplicationTemplateRequest::getIsMultilingualApp()const
{
	return isMultilingualApp_;
}

void CreateApplicationTemplateRequest::setIsMultilingualApp(bool isMultilingualApp)
{
	isMultilingualApp_ = isMultilingualApp;
	setBodyParameter("IsMultilingualApp", isMultilingualApp ? "true" : "false");
}

std::string CreateApplicationTemplateRequest::getNasMountDescs()const
{
	return nasMountDescs_;
}

void CreateApplicationTemplateRequest::setNasMountDescs(const std::string& nasMountDescs)
{
	nasMountDescs_ = nasMountDescs;
	setBodyParameter("NasMountDescs", nasMountDescs);
}

std::string CreateApplicationTemplateRequest::getLocalVolumes()const
{
	return localVolumes_;
}

void CreateApplicationTemplateRequest::setLocalVolumes(const std::string& localVolumes)
{
	localVolumes_ = localVolumes;
	setBodyParameter("LocalVolumes", localVolumes);
}

std::string CreateApplicationTemplateRequest::getCommand()const
{
	return command_;
}

void CreateApplicationTemplateRequest::setCommand(const std::string& command)
{
	command_ = command;
	setBodyParameter("Command", command);
}

std::string CreateApplicationTemplateRequest::getNasStorageType()const
{
	return nasStorageType_;
}

void CreateApplicationTemplateRequest::setNasStorageType(const std::string& nasStorageType)
{
	nasStorageType_ = nasStorageType;
	setBodyParameter("NasStorageType", nasStorageType);
}

std::string CreateApplicationTemplateRequest::getImageConfig()const
{
	return imageConfig_;
}

void CreateApplicationTemplateRequest::setImageConfig(const std::string& imageConfig)
{
	imageConfig_ = imageConfig;
	setBodyParameter("ImageConfig", imageConfig);
}

std::string CreateApplicationTemplateRequest::getSourceConfig()const
{
	return sourceConfig_;
}

void CreateApplicationTemplateRequest::setSourceConfig(const std::string& sourceConfig)
{
	sourceConfig_ = sourceConfig;
	setBodyParameter("SourceConfig", sourceConfig);
}

std::string CreateApplicationTemplateRequest::getEmptyDirs()const
{
	return emptyDirs_;
}

void CreateApplicationTemplateRequest::setEmptyDirs(const std::string& emptyDirs)
{
	emptyDirs_ = emptyDirs;
	setBodyParameter("EmptyDirs", emptyDirs);
}

std::string CreateApplicationTemplateRequest::getPvcMountDescs()const
{
	return pvcMountDescs_;
}

void CreateApplicationTemplateRequest::setPvcMountDescs(const std::string& pvcMountDescs)
{
	pvcMountDescs_ = pvcMountDescs;
	setBodyParameter("PvcMountDescs", pvcMountDescs);
}

std::string CreateApplicationTemplateRequest::getName()const
{
	return name_;
}

void CreateApplicationTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateApplicationTemplateRequest::getAttributes()const
{
	return attributes_;
}

void CreateApplicationTemplateRequest::setAttributes(const std::string& attributes)
{
	attributes_ = attributes;
	setBodyParameter("Attributes", attributes);
}

std::string CreateApplicationTemplateRequest::getRuntimeClassName()const
{
	return runtimeClassName_;
}

void CreateApplicationTemplateRequest::setRuntimeClassName(const std::string& runtimeClassName)
{
	runtimeClassName_ = runtimeClassName;
	setBodyParameter("RuntimeClassName", runtimeClassName);
}

std::string CreateApplicationTemplateRequest::getJavaStartUpConfig()const
{
	return javaStartUpConfig_;
}

void CreateApplicationTemplateRequest::setJavaStartUpConfig(const std::string& javaStartUpConfig)
{
	javaStartUpConfig_ = javaStartUpConfig;
	setBodyParameter("JavaStartUpConfig", javaStartUpConfig);
}

std::string CreateApplicationTemplateRequest::getPostStart()const
{
	return postStart_;
}

void CreateApplicationTemplateRequest::setPostStart(const std::string& postStart)
{
	postStart_ = postStart;
	setBodyParameter("PostStart", postStart);
}

