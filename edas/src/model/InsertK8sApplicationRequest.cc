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

#include <alibabacloud/edas/model/InsertK8sApplicationRequest.h>

using AlibabaCloud::Edas::Model::InsertK8sApplicationRequest;

InsertK8sApplicationRequest::InsertK8sApplicationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/create_k8s_app");
	setMethod(HttpRequest::Method::Post);
}

InsertK8sApplicationRequest::~InsertK8sApplicationRequest()
{}

std::string InsertK8sApplicationRequest::getNasId()const
{
	return nasId_;
}

void InsertK8sApplicationRequest::setNasId(const std::string& nasId)
{
	nasId_ = nasId;
	setParameter("NasId", nasId);
}

std::string InsertK8sApplicationRequest::getIntranetSlbId()const
{
	return intranetSlbId_;
}

void InsertK8sApplicationRequest::setIntranetSlbId(const std::string& intranetSlbId)
{
	intranetSlbId_ = intranetSlbId;
	setParameter("IntranetSlbId", intranetSlbId);
}

std::string InsertK8sApplicationRequest::getEnvs()const
{
	return envs_;
}

void InsertK8sApplicationRequest::setEnvs(const std::string& envs)
{
	envs_ = envs;
	setParameter("Envs", envs);
}

int InsertK8sApplicationRequest::getRequestsMem()const
{
	return requestsMem_;
}

void InsertK8sApplicationRequest::setRequestsMem(int requestsMem)
{
	requestsMem_ = requestsMem;
	setParameter("RequestsMem", std::to_string(requestsMem));
}

std::string InsertK8sApplicationRequest::getStorageType()const
{
	return storageType_;
}

void InsertK8sApplicationRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string InsertK8sApplicationRequest::getConfigMountDescs()const
{
	return configMountDescs_;
}

void InsertK8sApplicationRequest::setConfigMountDescs(const std::string& configMountDescs)
{
	configMountDescs_ = configMountDescs;
	setParameter("ConfigMountDescs", configMountDescs);
}

std::string InsertK8sApplicationRequest::getAppName()const
{
	return appName_;
}

void InsertK8sApplicationRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

int InsertK8sApplicationRequest::getRequestsmCpu()const
{
	return requestsmCpu_;
}

void InsertK8sApplicationRequest::setRequestsmCpu(int requestsmCpu)
{
	requestsmCpu_ = requestsmCpu;
	setParameter("RequestsmCpu", std::to_string(requestsmCpu));
}

std::string InsertK8sApplicationRequest::getDeployAcrossZones()const
{
	return deployAcrossZones_;
}

void InsertK8sApplicationRequest::setDeployAcrossZones(const std::string& deployAcrossZones)
{
	deployAcrossZones_ = deployAcrossZones;
	setParameter("DeployAcrossZones", deployAcrossZones);
}

int InsertK8sApplicationRequest::getIntranetSlbPort()const
{
	return intranetSlbPort_;
}

void InsertK8sApplicationRequest::setIntranetSlbPort(int intranetSlbPort)
{
	intranetSlbPort_ = intranetSlbPort;
	setParameter("IntranetSlbPort", std::to_string(intranetSlbPort));
}

std::string InsertK8sApplicationRequest::getDeployAcrossNodes()const
{
	return deployAcrossNodes_;
}

void InsertK8sApplicationRequest::setDeployAcrossNodes(const std::string& deployAcrossNodes)
{
	deployAcrossNodes_ = deployAcrossNodes;
	setParameter("DeployAcrossNodes", deployAcrossNodes);
}

std::string InsertK8sApplicationRequest::getPreStop()const
{
	return preStop_;
}

void InsertK8sApplicationRequest::setPreStop(const std::string& preStop)
{
	preStop_ = preStop;
	setParameter("PreStop", preStop);
}

std::string InsertK8sApplicationRequest::getBuildPackId()const
{
	return buildPackId_;
}

void InsertK8sApplicationRequest::setBuildPackId(const std::string& buildPackId)
{
	buildPackId_ = buildPackId;
	setParameter("BuildPackId", buildPackId);
}

std::string InsertK8sApplicationRequest::getLocalVolume()const
{
	return localVolume_;
}

void InsertK8sApplicationRequest::setLocalVolume(const std::string& localVolume)
{
	localVolume_ = localVolume;
	setParameter("LocalVolume", localVolume);
}

bool InsertK8sApplicationRequest::getUseBodyEncoding()const
{
	return useBodyEncoding_;
}

void InsertK8sApplicationRequest::setUseBodyEncoding(bool useBodyEncoding)
{
	useBodyEncoding_ = useBodyEncoding;
	setParameter("UseBodyEncoding", useBodyEncoding ? "true" : "false");
}

std::string InsertK8sApplicationRequest::getEmptyDirs()const
{
	return emptyDirs_;
}

void InsertK8sApplicationRequest::setEmptyDirs(const std::string& emptyDirs)
{
	emptyDirs_ = emptyDirs;
	setParameter("EmptyDirs", emptyDirs);
}

std::string InsertK8sApplicationRequest::getPackageType()const
{
	return packageType_;
}

void InsertK8sApplicationRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setParameter("PackageType", packageType);
}

std::string InsertK8sApplicationRequest::getRuntimeClassName()const
{
	return runtimeClassName_;
}

void InsertK8sApplicationRequest::setRuntimeClassName(const std::string& runtimeClassName)
{
	runtimeClassName_ = runtimeClassName;
	setParameter("RuntimeClassName", runtimeClassName);
}

std::string InsertK8sApplicationRequest::getPostStart()const
{
	return postStart_;
}

void InsertK8sApplicationRequest::setPostStart(const std::string& postStart)
{
	postStart_ = postStart;
	setParameter("PostStart", postStart);
}

std::string InsertK8sApplicationRequest::getRepoId()const
{
	return repoId_;
}

void InsertK8sApplicationRequest::setRepoId(const std::string& repoId)
{
	repoId_ = repoId;
	setParameter("RepoId", repoId);
}

int InsertK8sApplicationRequest::getInternetTargetPort()const
{
	return internetTargetPort_;
}

void InsertK8sApplicationRequest::setInternetTargetPort(int internetTargetPort)
{
	internetTargetPort_ = internetTargetPort;
	setParameter("InternetTargetPort", std::to_string(internetTargetPort));
}

std::string InsertK8sApplicationRequest::getWebContainer()const
{
	return webContainer_;
}

void InsertK8sApplicationRequest::setWebContainer(const std::string& webContainer)
{
	webContainer_ = webContainer;
	setParameter("WebContainer", webContainer);
}

bool InsertK8sApplicationRequest::getEnableAsm()const
{
	return enableAsm_;
}

void InsertK8sApplicationRequest::setEnableAsm(bool enableAsm)
{
	enableAsm_ = enableAsm;
	setParameter("EnableAsm", enableAsm ? "true" : "false");
}

bool InsertK8sApplicationRequest::getEnableAhas()const
{
	return enableAhas_;
}

void InsertK8sApplicationRequest::setEnableAhas(bool enableAhas)
{
	enableAhas_ = enableAhas;
	setParameter("EnableAhas", enableAhas ? "true" : "false");
}

std::string InsertK8sApplicationRequest::getSlsConfigs()const
{
	return slsConfigs_;
}

void InsertK8sApplicationRequest::setSlsConfigs(const std::string& slsConfigs)
{
	slsConfigs_ = slsConfigs;
	setParameter("SlsConfigs", slsConfigs);
}

std::string InsertK8sApplicationRequest::getCommandArgs()const
{
	return commandArgs_;
}

void InsertK8sApplicationRequest::setCommandArgs(const std::string& commandArgs)
{
	commandArgs_ = commandArgs;
	setParameter("CommandArgs", commandArgs);
}

std::string InsertK8sApplicationRequest::getReadiness()const
{
	return readiness_;
}

void InsertK8sApplicationRequest::setReadiness(const std::string& readiness)
{
	readiness_ = readiness;
	setParameter("Readiness", readiness);
}

std::string InsertK8sApplicationRequest::getLiveness()const
{
	return liveness_;
}

void InsertK8sApplicationRequest::setLiveness(const std::string& liveness)
{
	liveness_ = liveness;
	setParameter("Liveness", liveness);
}

std::string InsertK8sApplicationRequest::getCsClusterId()const
{
	return csClusterId_;
}

void InsertK8sApplicationRequest::setCsClusterId(const std::string& csClusterId)
{
	csClusterId_ = csClusterId;
	setParameter("CsClusterId", csClusterId);
}

int InsertK8sApplicationRequest::getInternetSlbPort()const
{
	return internetSlbPort_;
}

void InsertK8sApplicationRequest::setInternetSlbPort(int internetSlbPort)
{
	internetSlbPort_ = internetSlbPort;
	setParameter("InternetSlbPort", std::to_string(internetSlbPort));
}

std::string InsertK8sApplicationRequest::getPackageVersion()const
{
	return packageVersion_;
}

void InsertK8sApplicationRequest::setPackageVersion(const std::string& packageVersion)
{
	packageVersion_ = packageVersion;
	setParameter("PackageVersion", packageVersion);
}

int InsertK8sApplicationRequest::getTimeout()const
{
	return timeout_;
}

void InsertK8sApplicationRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

std::string InsertK8sApplicationRequest::getEnvFroms()const
{
	return envFroms_;
}

void InsertK8sApplicationRequest::setEnvFroms(const std::string& envFroms)
{
	envFroms_ = envFroms;
	setParameter("EnvFroms", envFroms);
}

int InsertK8sApplicationRequest::getLimitMem()const
{
	return limitMem_;
}

void InsertK8sApplicationRequest::setLimitMem(int limitMem)
{
	limitMem_ = limitMem;
	setParameter("LimitMem", std::to_string(limitMem));
}

int InsertK8sApplicationRequest::getLimitmCpu()const
{
	return limitmCpu_;
}

void InsertK8sApplicationRequest::setLimitmCpu(int limitmCpu)
{
	limitmCpu_ = limitmCpu;
	setParameter("LimitmCpu", std::to_string(limitmCpu));
}

std::string InsertK8sApplicationRequest::getEdasContainerVersion()const
{
	return edasContainerVersion_;
}

void InsertK8sApplicationRequest::setEdasContainerVersion(const std::string& edasContainerVersion)
{
	edasContainerVersion_ = edasContainerVersion;
	setParameter("EdasContainerVersion", edasContainerVersion);
}

std::string InsertK8sApplicationRequest::getInternetSlbId()const
{
	return internetSlbId_;
}

void InsertK8sApplicationRequest::setInternetSlbId(const std::string& internetSlbId)
{
	internetSlbId_ = internetSlbId;
	setParameter("InternetSlbId", internetSlbId);
}

std::string InsertK8sApplicationRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void InsertK8sApplicationRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string InsertK8sApplicationRequest::getPackageUrl()const
{
	return packageUrl_;
}

void InsertK8sApplicationRequest::setPackageUrl(const std::string& packageUrl)
{
	packageUrl_ = packageUrl;
	setParameter("PackageUrl", packageUrl);
}

std::string InsertK8sApplicationRequest::getInternetSlbProtocol()const
{
	return internetSlbProtocol_;
}

void InsertK8sApplicationRequest::setInternetSlbProtocol(const std::string& internetSlbProtocol)
{
	internetSlbProtocol_ = internetSlbProtocol;
	setParameter("InternetSlbProtocol", internetSlbProtocol);
}

std::string InsertK8sApplicationRequest::getMountDescs()const
{
	return mountDescs_;
}

void InsertK8sApplicationRequest::setMountDescs(const std::string& mountDescs)
{
	mountDescs_ = mountDescs;
	setParameter("MountDescs", mountDescs);
}

int InsertK8sApplicationRequest::getReplicas()const
{
	return replicas_;
}

void InsertK8sApplicationRequest::setReplicas(int replicas)
{
	replicas_ = replicas;
	setParameter("Replicas", std::to_string(replicas));
}

int InsertK8sApplicationRequest::getLimitCpu()const
{
	return limitCpu_;
}

void InsertK8sApplicationRequest::setLimitCpu(int limitCpu)
{
	limitCpu_ = limitCpu;
	setParameter("LimitCpu", std::to_string(limitCpu));
}

std::string InsertK8sApplicationRequest::getWebContainerConfig()const
{
	return webContainerConfig_;
}

void InsertK8sApplicationRequest::setWebContainerConfig(const std::string& webContainerConfig)
{
	webContainerConfig_ = webContainerConfig;
	setParameter("WebContainerConfig", webContainerConfig);
}

bool InsertK8sApplicationRequest::getIsMultilingualApp()const
{
	return isMultilingualApp_;
}

void InsertK8sApplicationRequest::setIsMultilingualApp(bool isMultilingualApp)
{
	isMultilingualApp_ = isMultilingualApp;
	setParameter("IsMultilingualApp", isMultilingualApp ? "true" : "false");
}

std::string InsertK8sApplicationRequest::getClusterId()const
{
	return clusterId_;
}

void InsertK8sApplicationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int InsertK8sApplicationRequest::getIntranetTargetPort()const
{
	return intranetTargetPort_;
}

void InsertK8sApplicationRequest::setIntranetTargetPort(int intranetTargetPort)
{
	intranetTargetPort_ = intranetTargetPort;
	setParameter("IntranetTargetPort", std::to_string(intranetTargetPort));
}

std::string InsertK8sApplicationRequest::getCommand()const
{
	return command_;
}

void InsertK8sApplicationRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

std::string InsertK8sApplicationRequest::getJDK()const
{
	return jDK_;
}

void InsertK8sApplicationRequest::setJDK(const std::string& jDK)
{
	jDK_ = jDK;
	setParameter("JDK", jDK);
}

std::string InsertK8sApplicationRequest::getUriEncoding()const
{
	return uriEncoding_;
}

void InsertK8sApplicationRequest::setUriEncoding(const std::string& uriEncoding)
{
	uriEncoding_ = uriEncoding;
	setParameter("UriEncoding", uriEncoding);
}

std::string InsertK8sApplicationRequest::getIntranetSlbProtocol()const
{
	return intranetSlbProtocol_;
}

void InsertK8sApplicationRequest::setIntranetSlbProtocol(const std::string& intranetSlbProtocol)
{
	intranetSlbProtocol_ = intranetSlbProtocol;
	setParameter("IntranetSlbProtocol", intranetSlbProtocol);
}

std::string InsertK8sApplicationRequest::getImageUrl()const
{
	return imageUrl_;
}

void InsertK8sApplicationRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setParameter("ImageUrl", imageUrl);
}

std::string InsertK8sApplicationRequest::getPvcMountDescs()const
{
	return pvcMountDescs_;
}

void InsertK8sApplicationRequest::setPvcMountDescs(const std::string& pvcMountDescs)
{
	pvcMountDescs_ = pvcMountDescs;
	setParameter("PvcMountDescs", pvcMountDescs);
}

std::string InsertK8sApplicationRequest::get_Namespace()const
{
	return _namespace_;
}

void InsertK8sApplicationRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string InsertK8sApplicationRequest::getApplicationDescription()const
{
	return applicationDescription_;
}

void InsertK8sApplicationRequest::setApplicationDescription(const std::string& applicationDescription)
{
	applicationDescription_ = applicationDescription;
	setParameter("ApplicationDescription", applicationDescription);
}

int InsertK8sApplicationRequest::getRequestsCpu()const
{
	return requestsCpu_;
}

void InsertK8sApplicationRequest::setRequestsCpu(int requestsCpu)
{
	requestsCpu_ = requestsCpu;
	setParameter("RequestsCpu", std::to_string(requestsCpu));
}

std::string InsertK8sApplicationRequest::getJavaStartUpConfig()const
{
	return javaStartUpConfig_;
}

void InsertK8sApplicationRequest::setJavaStartUpConfig(const std::string& javaStartUpConfig)
{
	javaStartUpConfig_ = javaStartUpConfig;
	setParameter("JavaStartUpConfig", javaStartUpConfig);
}

