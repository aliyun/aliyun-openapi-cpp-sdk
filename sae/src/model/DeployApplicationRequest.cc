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

#include <alibabacloud/sae/model/DeployApplicationRequest.h>

using AlibabaCloud::Sae::Model::DeployApplicationRequest;

DeployApplicationRequest::DeployApplicationRequest() :
	RoaServiceRequest("sae", "2019-05-06")
{
	setResourcePath("/pop/v1/sam/app/deployApplication");
	setMethod(HttpRequest::Method::Post);
}

DeployApplicationRequest::~DeployApplicationRequest()
{}

std::string DeployApplicationRequest::getNasId()const
{
	return nasId_;
}

void DeployApplicationRequest::setNasId(const std::string& nasId)
{
	nasId_ = nasId;
	setParameter("NasId", nasId);
}

std::string DeployApplicationRequest::getJarStartArgs()const
{
	return jarStartArgs_;
}

void DeployApplicationRequest::setJarStartArgs(const std::string& jarStartArgs)
{
	jarStartArgs_ = jarStartArgs;
	setParameter("JarStartArgs", jarStartArgs);
}

std::string DeployApplicationRequest::getOssAkSecret()const
{
	return ossAkSecret_;
}

void DeployApplicationRequest::setOssAkSecret(const std::string& ossAkSecret)
{
	ossAkSecret_ = ossAkSecret;
	setBodyParameter("OssAkSecret", ossAkSecret);
}

std::string DeployApplicationRequest::getMountHost()const
{
	return mountHost_;
}

void DeployApplicationRequest::setMountHost(const std::string& mountHost)
{
	mountHost_ = mountHost;
	setParameter("MountHost", mountHost);
}

int DeployApplicationRequest::getBatchWaitTime()const
{
	return batchWaitTime_;
}

void DeployApplicationRequest::setBatchWaitTime(int batchWaitTime)
{
	batchWaitTime_ = batchWaitTime;
	setParameter("BatchWaitTime", std::to_string(batchWaitTime));
}

std::string DeployApplicationRequest::getEnvs()const
{
	return envs_;
}

void DeployApplicationRequest::setEnvs(const std::string& envs)
{
	envs_ = envs;
	setParameter("Envs", envs);
}

std::string DeployApplicationRequest::getKafkaInstanceId()const
{
	return kafkaInstanceId_;
}

void DeployApplicationRequest::setKafkaInstanceId(const std::string& kafkaInstanceId)
{
	kafkaInstanceId_ = kafkaInstanceId;
	setParameter("KafkaInstanceId", kafkaInstanceId);
}

std::string DeployApplicationRequest::getPhpPECLExtensions()const
{
	return phpPECLExtensions_;
}

void DeployApplicationRequest::setPhpPECLExtensions(const std::string& phpPECLExtensions)
{
	phpPECLExtensions_ = phpPECLExtensions;
	setBodyParameter("PhpPECLExtensions", phpPECLExtensions);
}

std::string DeployApplicationRequest::getPhpArmsConfigLocation()const
{
	return phpArmsConfigLocation_;
}

void DeployApplicationRequest::setPhpArmsConfigLocation(const std::string& phpArmsConfigLocation)
{
	phpArmsConfigLocation_ = phpArmsConfigLocation;
	setParameter("PhpArmsConfigLocation", phpArmsConfigLocation);
}

std::string DeployApplicationRequest::getCustomHostAlias()const
{
	return customHostAlias_;
}

void DeployApplicationRequest::setCustomHostAlias(const std::string& customHostAlias)
{
	customHostAlias_ = customHostAlias;
	setParameter("CustomHostAlias", customHostAlias);
}

std::string DeployApplicationRequest::getJarStartOptions()const
{
	return jarStartOptions_;
}

void DeployApplicationRequest::setJarStartOptions(const std::string& jarStartOptions)
{
	jarStartOptions_ = jarStartOptions;
	setParameter("JarStartOptions", jarStartOptions);
}

std::string DeployApplicationRequest::getConfigMapMountDesc()const
{
	return configMapMountDesc_;
}

void DeployApplicationRequest::setConfigMapMountDesc(const std::string& configMapMountDesc)
{
	configMapMountDesc_ = configMapMountDesc;
	setBodyParameter("ConfigMapMountDesc", configMapMountDesc);
}

std::string DeployApplicationRequest::getOssMountDescs()const
{
	return ossMountDescs_;
}

void DeployApplicationRequest::setOssMountDescs(const std::string& ossMountDescs)
{
	ossMountDescs_ = ossMountDescs;
	setBodyParameter("OssMountDescs", ossMountDescs);
}

std::string DeployApplicationRequest::getKafkaEndpoint()const
{
	return kafkaEndpoint_;
}

void DeployApplicationRequest::setKafkaEndpoint(const std::string& kafkaEndpoint)
{
	kafkaEndpoint_ = kafkaEndpoint;
	setParameter("KafkaEndpoint", kafkaEndpoint);
}

std::string DeployApplicationRequest::getPreStop()const
{
	return preStop_;
}

void DeployApplicationRequest::setPreStop(const std::string& preStop)
{
	preStop_ = preStop;
	setParameter("PreStop", preStop);
}

std::string DeployApplicationRequest::getUpdateStrategy()const
{
	return updateStrategy_;
}

void DeployApplicationRequest::setUpdateStrategy(const std::string& updateStrategy)
{
	updateStrategy_ = updateStrategy;
	setParameter("UpdateStrategy", updateStrategy);
}

std::string DeployApplicationRequest::getChangeOrderDesc()const
{
	return changeOrderDesc_;
}

void DeployApplicationRequest::setChangeOrderDesc(const std::string& changeOrderDesc)
{
	changeOrderDesc_ = changeOrderDesc;
	setParameter("ChangeOrderDesc", changeOrderDesc);
}

int DeployApplicationRequest::getMinReadyInstanceRatio()const
{
	return minReadyInstanceRatio_;
}

void DeployApplicationRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio)
{
	minReadyInstanceRatio_ = minReadyInstanceRatio;
	setParameter("MinReadyInstanceRatio", std::to_string(minReadyInstanceRatio));
}

bool DeployApplicationRequest::getAutoEnableApplicationScalingRule()const
{
	return autoEnableApplicationScalingRule_;
}

void DeployApplicationRequest::setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule)
{
	autoEnableApplicationScalingRule_ = autoEnableApplicationScalingRule;
	setParameter("AutoEnableApplicationScalingRule", autoEnableApplicationScalingRule ? "true" : "false");
}

std::string DeployApplicationRequest::getPostStart()const
{
	return postStart_;
}

void DeployApplicationRequest::setPostStart(const std::string& postStart)
{
	postStart_ = postStart;
	setParameter("PostStart", postStart);
}

std::string DeployApplicationRequest::getPhpExtensions()const
{
	return phpExtensions_;
}

void DeployApplicationRequest::setPhpExtensions(const std::string& phpExtensions)
{
	phpExtensions_ = phpExtensions;
	setBodyParameter("PhpExtensions", phpExtensions);
}

bool DeployApplicationRequest::getAssociateEip()const
{
	return associateEip_;
}

void DeployApplicationRequest::setAssociateEip(bool associateEip)
{
	associateEip_ = associateEip;
	setBodyParameter("AssociateEip", associateEip ? "true" : "false");
}

std::string DeployApplicationRequest::getWebContainer()const
{
	return webContainer_;
}

void DeployApplicationRequest::setWebContainer(const std::string& webContainer)
{
	webContainer_ = webContainer;
	setParameter("WebContainer", webContainer);
}

std::string DeployApplicationRequest::getEnableAhas()const
{
	return enableAhas_;
}

void DeployApplicationRequest::setEnableAhas(const std::string& enableAhas)
{
	enableAhas_ = enableAhas;
	setParameter("EnableAhas", enableAhas);
}

std::string DeployApplicationRequest::getSlsConfigs()const
{
	return slsConfigs_;
}

void DeployApplicationRequest::setSlsConfigs(const std::string& slsConfigs)
{
	slsConfigs_ = slsConfigs;
	setParameter("SlsConfigs", slsConfigs);
}

bool DeployApplicationRequest::getOpenCollectToKafka()const
{
	return openCollectToKafka_;
}

void DeployApplicationRequest::setOpenCollectToKafka(bool openCollectToKafka)
{
	openCollectToKafka_ = openCollectToKafka;
	setParameter("OpenCollectToKafka", openCollectToKafka ? "true" : "false");
}

std::string DeployApplicationRequest::getCommandArgs()const
{
	return commandArgs_;
}

void DeployApplicationRequest::setCommandArgs(const std::string& commandArgs)
{
	commandArgs_ = commandArgs;
	setParameter("CommandArgs", commandArgs);
}

std::string DeployApplicationRequest::getAcrAssumeRoleArn()const
{
	return acrAssumeRoleArn_;
}

void DeployApplicationRequest::setAcrAssumeRoleArn(const std::string& acrAssumeRoleArn)
{
	acrAssumeRoleArn_ = acrAssumeRoleArn;
	setParameter("AcrAssumeRoleArn", acrAssumeRoleArn);
}

std::string DeployApplicationRequest::getReadiness()const
{
	return readiness_;
}

void DeployApplicationRequest::setReadiness(const std::string& readiness)
{
	readiness_ = readiness;
	setParameter("Readiness", readiness);
}

std::string DeployApplicationRequest::getTimezone()const
{
	return timezone_;
}

void DeployApplicationRequest::setTimezone(const std::string& timezone)
{
	timezone_ = timezone;
	setParameter("Timezone", timezone);
}

std::string DeployApplicationRequest::getOssAkId()const
{
	return ossAkId_;
}

void DeployApplicationRequest::setOssAkId(const std::string& ossAkId)
{
	ossAkId_ = ossAkId;
	setBodyParameter("OssAkId", ossAkId);
}

std::string DeployApplicationRequest::getLiveness()const
{
	return liveness_;
}

void DeployApplicationRequest::setLiveness(const std::string& liveness)
{
	liveness_ = liveness;
	setParameter("Liveness", liveness);
}

std::string DeployApplicationRequest::getPackageVersion()const
{
	return packageVersion_;
}

void DeployApplicationRequest::setPackageVersion(const std::string& packageVersion)
{
	packageVersion_ = packageVersion;
	setParameter("PackageVersion", packageVersion);
}

std::string DeployApplicationRequest::getTomcatConfig()const
{
	return tomcatConfig_;
}

void DeployApplicationRequest::setTomcatConfig(const std::string& tomcatConfig)
{
	tomcatConfig_ = tomcatConfig;
	setParameter("TomcatConfig", tomcatConfig);
}

std::string DeployApplicationRequest::getWarStartOptions()const
{
	return warStartOptions_;
}

void DeployApplicationRequest::setWarStartOptions(const std::string& warStartOptions)
{
	warStartOptions_ = warStartOptions;
	setParameter("WarStartOptions", warStartOptions);
}

std::string DeployApplicationRequest::getEdasContainerVersion()const
{
	return edasContainerVersion_;
}

void DeployApplicationRequest::setEdasContainerVersion(const std::string& edasContainerVersion)
{
	edasContainerVersion_ = edasContainerVersion;
	setParameter("EdasContainerVersion", edasContainerVersion);
}

std::string DeployApplicationRequest::getPackageUrl()const
{
	return packageUrl_;
}

void DeployApplicationRequest::setPackageUrl(const std::string& packageUrl)
{
	packageUrl_ = packageUrl;
	setParameter("PackageUrl", packageUrl);
}

int DeployApplicationRequest::getTerminationGracePeriodSeconds()const
{
	return terminationGracePeriodSeconds_;
}

void DeployApplicationRequest::setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds)
{
	terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
	setParameter("TerminationGracePeriodSeconds", std::to_string(terminationGracePeriodSeconds));
}

std::string DeployApplicationRequest::getPhpConfig()const
{
	return phpConfig_;
}

void DeployApplicationRequest::setPhpConfig(const std::string& phpConfig)
{
	phpConfig_ = phpConfig;
	setBodyParameter("PhpConfig", phpConfig);
}

bool DeployApplicationRequest::getEnableGreyTagRoute()const
{
	return enableGreyTagRoute_;
}

void DeployApplicationRequest::setEnableGreyTagRoute(bool enableGreyTagRoute)
{
	enableGreyTagRoute_ = enableGreyTagRoute;
	setParameter("EnableGreyTagRoute", enableGreyTagRoute ? "true" : "false");
}

std::string DeployApplicationRequest::getCommand()const
{
	return command_;
}

void DeployApplicationRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

std::string DeployApplicationRequest::getMountDesc()const
{
	return mountDesc_;
}

void DeployApplicationRequest::setMountDesc(const std::string& mountDesc)
{
	mountDesc_ = mountDesc;
	setParameter("MountDesc", mountDesc);
}

std::string DeployApplicationRequest::getJdk()const
{
	return jdk_;
}

void DeployApplicationRequest::setJdk(const std::string& jdk)
{
	jdk_ = jdk;
	setParameter("Jdk", jdk);
}

int DeployApplicationRequest::getMinReadyInstances()const
{
	return minReadyInstances_;
}

void DeployApplicationRequest::setMinReadyInstances(int minReadyInstances)
{
	minReadyInstances_ = minReadyInstances;
	setParameter("MinReadyInstances", std::to_string(minReadyInstances));
}

std::string DeployApplicationRequest::getKafkaLogfileConfig()const
{
	return kafkaLogfileConfig_;
}

void DeployApplicationRequest::setKafkaLogfileConfig(const std::string& kafkaLogfileConfig)
{
	kafkaLogfileConfig_ = kafkaLogfileConfig;
	setParameter("KafkaLogfileConfig", kafkaLogfileConfig);
}

std::string DeployApplicationRequest::getAcrInstanceId()const
{
	return acrInstanceId_;
}

void DeployApplicationRequest::setAcrInstanceId(const std::string& acrInstanceId)
{
	acrInstanceId_ = acrInstanceId;
	setBodyParameter("AcrInstanceId", acrInstanceId);
}

std::string DeployApplicationRequest::getAppId()const
{
	return appId_;
}

void DeployApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DeployApplicationRequest::getImageUrl()const
{
	return imageUrl_;
}

void DeployApplicationRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setParameter("ImageUrl", imageUrl);
}

std::string DeployApplicationRequest::getPhp()const
{
	return php_;
}

void DeployApplicationRequest::setPhp(const std::string& php)
{
	php_ = php;
	setBodyParameter("Php", php);
}

std::string DeployApplicationRequest::getPhpConfigLocation()const
{
	return phpConfigLocation_;
}

void DeployApplicationRequest::setPhpConfigLocation(const std::string& phpConfigLocation)
{
	phpConfigLocation_ = phpConfigLocation;
	setParameter("PhpConfigLocation", phpConfigLocation);
}

