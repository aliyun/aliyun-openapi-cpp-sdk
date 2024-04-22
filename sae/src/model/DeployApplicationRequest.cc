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

DeployApplicationRequest::DeployApplicationRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/deployApplication"};
  setMethod(HttpRequest::Method::Post);
}

DeployApplicationRequest::~DeployApplicationRequest() {}

std::string DeployApplicationRequest::getNasId() const {
  return nasId_;
}

void DeployApplicationRequest::setNasId(const std::string &nasId) {
  nasId_ = nasId;
  setParameter(std::string("NasId"), nasId);
}

std::string DeployApplicationRequest::getJarStartArgs() const {
  return jarStartArgs_;
}

void DeployApplicationRequest::setJarStartArgs(const std::string &jarStartArgs) {
  jarStartArgs_ = jarStartArgs;
  setParameter(std::string("JarStartArgs"), jarStartArgs);
}

std::string DeployApplicationRequest::getOssAkSecret() const {
  return ossAkSecret_;
}

void DeployApplicationRequest::setOssAkSecret(const std::string &ossAkSecret) {
  ossAkSecret_ = ossAkSecret;
  setBodyParameter(std::string("OssAkSecret"), ossAkSecret);
}

std::string DeployApplicationRequest::getNasConfigs() const {
  return nasConfigs_;
}

void DeployApplicationRequest::setNasConfigs(const std::string &nasConfigs) {
  nasConfigs_ = nasConfigs;
  setParameter(std::string("NasConfigs"), nasConfigs);
}

std::string DeployApplicationRequest::getMountHost() const {
  return mountHost_;
}

void DeployApplicationRequest::setMountHost(const std::string &mountHost) {
  mountHost_ = mountHost;
  setParameter(std::string("MountHost"), mountHost);
}

int DeployApplicationRequest::getBatchWaitTime() const {
  return batchWaitTime_;
}

void DeployApplicationRequest::setBatchWaitTime(int batchWaitTime) {
  batchWaitTime_ = batchWaitTime;
  setParameter(std::string("BatchWaitTime"), std::to_string(batchWaitTime));
}

std::string DeployApplicationRequest::getEnvs() const {
  return envs_;
}

void DeployApplicationRequest::setEnvs(const std::string &envs) {
  envs_ = envs;
  setParameter(std::string("Envs"), envs);
}

std::string DeployApplicationRequest::getPhpPECLExtensions() const {
  return phpPECLExtensions_;
}

void DeployApplicationRequest::setPhpPECLExtensions(const std::string &phpPECLExtensions) {
  phpPECLExtensions_ = phpPECLExtensions;
  setBodyParameter(std::string("PhpPECLExtensions"), phpPECLExtensions);
}

std::string DeployApplicationRequest::getPhpArmsConfigLocation() const {
  return phpArmsConfigLocation_;
}

void DeployApplicationRequest::setPhpArmsConfigLocation(const std::string &phpArmsConfigLocation) {
  phpArmsConfigLocation_ = phpArmsConfigLocation;
  setParameter(std::string("PhpArmsConfigLocation"), phpArmsConfigLocation);
}

std::string DeployApplicationRequest::getCustomHostAlias() const {
  return customHostAlias_;
}

void DeployApplicationRequest::setCustomHostAlias(const std::string &customHostAlias) {
  customHostAlias_ = customHostAlias;
  setParameter(std::string("CustomHostAlias"), customHostAlias);
}

std::string DeployApplicationRequest::getDeploy() const {
  return deploy_;
}

void DeployApplicationRequest::setDeploy(const std::string &deploy) {
  deploy_ = deploy;
  setParameter(std::string("Deploy"), deploy);
}

std::string DeployApplicationRequest::getJarStartOptions() const {
  return jarStartOptions_;
}

void DeployApplicationRequest::setJarStartOptions(const std::string &jarStartOptions) {
  jarStartOptions_ = jarStartOptions;
  setParameter(std::string("JarStartOptions"), jarStartOptions);
}

std::string DeployApplicationRequest::getPvtzDiscoverySvc() const {
  return pvtzDiscoverySvc_;
}

void DeployApplicationRequest::setPvtzDiscoverySvc(const std::string &pvtzDiscoverySvc) {
  pvtzDiscoverySvc_ = pvtzDiscoverySvc;
  setParameter(std::string("PvtzDiscoverySvc"), pvtzDiscoverySvc);
}

std::string DeployApplicationRequest::getConfigMapMountDesc() const {
  return configMapMountDesc_;
}

void DeployApplicationRequest::setConfigMapMountDesc(const std::string &configMapMountDesc) {
  configMapMountDesc_ = configMapMountDesc;
  setBodyParameter(std::string("ConfigMapMountDesc"), configMapMountDesc);
}

std::string DeployApplicationRequest::getOssMountDescs() const {
  return ossMountDescs_;
}

void DeployApplicationRequest::setOssMountDescs(const std::string &ossMountDescs) {
  ossMountDescs_ = ossMountDescs;
  setBodyParameter(std::string("OssMountDescs"), ossMountDescs);
}

std::string DeployApplicationRequest::getImagePullSecrets() const {
  return imagePullSecrets_;
}

void DeployApplicationRequest::setImagePullSecrets(const std::string &imagePullSecrets) {
  imagePullSecrets_ = imagePullSecrets;
  setParameter(std::string("ImagePullSecrets"), imagePullSecrets);
}

std::string DeployApplicationRequest::getPreStop() const {
  return preStop_;
}

void DeployApplicationRequest::setPreStop(const std::string &preStop) {
  preStop_ = preStop;
  setParameter(std::string("PreStop"), preStop);
}

std::string DeployApplicationRequest::getPython() const {
  return python_;
}

void DeployApplicationRequest::setPython(const std::string &python) {
  python_ = python;
  setParameter(std::string("Python"), python);
}

int DeployApplicationRequest::getCpu() const {
  return cpu_;
}

void DeployApplicationRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::string DeployApplicationRequest::getUpdateStrategy() const {
  return updateStrategy_;
}

void DeployApplicationRequest::setUpdateStrategy(const std::string &updateStrategy) {
  updateStrategy_ = updateStrategy;
  setParameter(std::string("UpdateStrategy"), updateStrategy);
}

std::string DeployApplicationRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DeployApplicationRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DeployApplicationRequest::getChangeOrderDesc() const {
  return changeOrderDesc_;
}

void DeployApplicationRequest::setChangeOrderDesc(const std::string &changeOrderDesc) {
  changeOrderDesc_ = changeOrderDesc;
  setParameter(std::string("ChangeOrderDesc"), changeOrderDesc);
}

int DeployApplicationRequest::getMinReadyInstanceRatio() const {
  return minReadyInstanceRatio_;
}

void DeployApplicationRequest::setMinReadyInstanceRatio(int minReadyInstanceRatio) {
  minReadyInstanceRatio_ = minReadyInstanceRatio;
  setParameter(std::string("MinReadyInstanceRatio"), std::to_string(minReadyInstanceRatio));
}

bool DeployApplicationRequest::getAutoEnableApplicationScalingRule() const {
  return autoEnableApplicationScalingRule_;
}

void DeployApplicationRequest::setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) {
  autoEnableApplicationScalingRule_ = autoEnableApplicationScalingRule;
  setParameter(std::string("AutoEnableApplicationScalingRule"), autoEnableApplicationScalingRule ? "true" : "false");
}

std::string DeployApplicationRequest::getPackageType() const {
  return packageType_;
}

void DeployApplicationRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

std::string DeployApplicationRequest::getPostStart() const {
  return postStart_;
}

void DeployApplicationRequest::setPostStart(const std::string &postStart) {
  postStart_ = postStart;
  setParameter(std::string("PostStart"), postStart);
}

std::string DeployApplicationRequest::getPhpExtensions() const {
  return phpExtensions_;
}

void DeployApplicationRequest::setPhpExtensions(const std::string &phpExtensions) {
  phpExtensions_ = phpExtensions;
  setBodyParameter(std::string("PhpExtensions"), phpExtensions);
}

bool DeployApplicationRequest::getAssociateEip() const {
  return associateEip_;
}

void DeployApplicationRequest::setAssociateEip(bool associateEip) {
  associateEip_ = associateEip;
  setBodyParameter(std::string("AssociateEip"), associateEip ? "true" : "false");
}

std::string DeployApplicationRequest::getWebContainer() const {
  return webContainer_;
}

void DeployApplicationRequest::setWebContainer(const std::string &webContainer) {
  webContainer_ = webContainer;
  setParameter(std::string("WebContainer"), webContainer);
}

std::string DeployApplicationRequest::getEnableAhas() const {
  return enableAhas_;
}

void DeployApplicationRequest::setEnableAhas(const std::string &enableAhas) {
  enableAhas_ = enableAhas;
  setParameter(std::string("EnableAhas"), enableAhas);
}

std::string DeployApplicationRequest::getSlsConfigs() const {
  return slsConfigs_;
}

void DeployApplicationRequest::setSlsConfigs(const std::string &slsConfigs) {
  slsConfigs_ = slsConfigs;
  setParameter(std::string("SlsConfigs"), slsConfigs);
}

std::string DeployApplicationRequest::getKafkaConfigs() const {
  return kafkaConfigs_;
}

void DeployApplicationRequest::setKafkaConfigs(const std::string &kafkaConfigs) {
  kafkaConfigs_ = kafkaConfigs;
  setParameter(std::string("KafkaConfigs"), kafkaConfigs);
}

int DeployApplicationRequest::getMemory() const {
  return memory_;
}

void DeployApplicationRequest::setMemory(int memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string DeployApplicationRequest::getCommandArgs() const {
  return commandArgs_;
}

void DeployApplicationRequest::setCommandArgs(const std::string &commandArgs) {
  commandArgs_ = commandArgs;
  setParameter(std::string("CommandArgs"), commandArgs);
}

std::string DeployApplicationRequest::getAcrAssumeRoleArn() const {
  return acrAssumeRoleArn_;
}

void DeployApplicationRequest::setAcrAssumeRoleArn(const std::string &acrAssumeRoleArn) {
  acrAssumeRoleArn_ = acrAssumeRoleArn;
  setParameter(std::string("AcrAssumeRoleArn"), acrAssumeRoleArn);
}

std::string DeployApplicationRequest::getReadiness() const {
  return readiness_;
}

void DeployApplicationRequest::setReadiness(const std::string &readiness) {
  readiness_ = readiness;
  setParameter(std::string("Readiness"), readiness);
}

std::string DeployApplicationRequest::getTimezone() const {
  return timezone_;
}

void DeployApplicationRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setParameter(std::string("Timezone"), timezone);
}

std::string DeployApplicationRequest::getOssAkId() const {
  return ossAkId_;
}

void DeployApplicationRequest::setOssAkId(const std::string &ossAkId) {
  ossAkId_ = ossAkId;
  setBodyParameter(std::string("OssAkId"), ossAkId);
}

std::string DeployApplicationRequest::getLiveness() const {
  return liveness_;
}

void DeployApplicationRequest::setLiveness(const std::string &liveness) {
  liveness_ = liveness;
  setParameter(std::string("Liveness"), liveness);
}

std::string DeployApplicationRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DeployApplicationRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DeployApplicationRequest::getPackageVersion() const {
  return packageVersion_;
}

void DeployApplicationRequest::setPackageVersion(const std::string &packageVersion) {
  packageVersion_ = packageVersion;
  setParameter(std::string("PackageVersion"), packageVersion);
}

std::string DeployApplicationRequest::getTomcatConfig() const {
  return tomcatConfig_;
}

void DeployApplicationRequest::setTomcatConfig(const std::string &tomcatConfig) {
  tomcatConfig_ = tomcatConfig;
  setParameter(std::string("TomcatConfig"), tomcatConfig);
}

std::string DeployApplicationRequest::getWarStartOptions() const {
  return warStartOptions_;
}

void DeployApplicationRequest::setWarStartOptions(const std::string &warStartOptions) {
  warStartOptions_ = warStartOptions;
  setParameter(std::string("WarStartOptions"), warStartOptions);
}

std::string DeployApplicationRequest::getPackageRuntimeCustomBuild() const {
  return packageRuntimeCustomBuild_;
}

void DeployApplicationRequest::setPackageRuntimeCustomBuild(const std::string &packageRuntimeCustomBuild) {
  packageRuntimeCustomBuild_ = packageRuntimeCustomBuild;
  setBodyParameter(std::string("PackageRuntimeCustomBuild"), packageRuntimeCustomBuild);
}

std::string DeployApplicationRequest::getEdasContainerVersion() const {
  return edasContainerVersion_;
}

void DeployApplicationRequest::setEdasContainerVersion(const std::string &edasContainerVersion) {
  edasContainerVersion_ = edasContainerVersion;
  setParameter(std::string("EdasContainerVersion"), edasContainerVersion);
}

std::string DeployApplicationRequest::getPackageUrl() const {
  return packageUrl_;
}

void DeployApplicationRequest::setPackageUrl(const std::string &packageUrl) {
  packageUrl_ = packageUrl;
  setParameter(std::string("PackageUrl"), packageUrl);
}

int DeployApplicationRequest::getTerminationGracePeriodSeconds() const {
  return terminationGracePeriodSeconds_;
}

void DeployApplicationRequest::setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds) {
  terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
  setParameter(std::string("TerminationGracePeriodSeconds"), std::to_string(terminationGracePeriodSeconds));
}

std::string DeployApplicationRequest::getPhpConfig() const {
  return phpConfig_;
}

void DeployApplicationRequest::setPhpConfig(const std::string &phpConfig) {
  phpConfig_ = phpConfig;
  setBodyParameter(std::string("PhpConfig"), phpConfig);
}

bool DeployApplicationRequest::getEnableImageAccl() const {
  return enableImageAccl_;
}

void DeployApplicationRequest::setEnableImageAccl(bool enableImageAccl) {
  enableImageAccl_ = enableImageAccl;
  setBodyParameter(std::string("EnableImageAccl"), enableImageAccl ? "true" : "false");
}

std::string DeployApplicationRequest::getMicroRegistration() const {
  return microRegistration_;
}

void DeployApplicationRequest::setMicroRegistration(const std::string &microRegistration) {
  microRegistration_ = microRegistration;
  setParameter(std::string("MicroRegistration"), microRegistration);
}

bool DeployApplicationRequest::getEnableGreyTagRoute() const {
  return enableGreyTagRoute_;
}

void DeployApplicationRequest::setEnableGreyTagRoute(bool enableGreyTagRoute) {
  enableGreyTagRoute_ = enableGreyTagRoute;
  setParameter(std::string("EnableGreyTagRoute"), enableGreyTagRoute ? "true" : "false");
}

int DeployApplicationRequest::getReplicas() const {
  return replicas_;
}

void DeployApplicationRequest::setReplicas(int replicas) {
  replicas_ = replicas;
  setParameter(std::string("Replicas"), std::to_string(replicas));
}

std::string DeployApplicationRequest::getCommand() const {
  return command_;
}

void DeployApplicationRequest::setCommand(const std::string &command) {
  command_ = command;
  setParameter(std::string("Command"), command);
}

std::string DeployApplicationRequest::getMountDesc() const {
  return mountDesc_;
}

void DeployApplicationRequest::setMountDesc(const std::string &mountDesc) {
  mountDesc_ = mountDesc;
  setParameter(std::string("MountDesc"), mountDesc);
}

std::string DeployApplicationRequest::getJdk() const {
  return jdk_;
}

void DeployApplicationRequest::setJdk(const std::string &jdk) {
  jdk_ = jdk;
  setParameter(std::string("Jdk"), jdk);
}

int DeployApplicationRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void DeployApplicationRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

std::string DeployApplicationRequest::getAcrInstanceId() const {
  return acrInstanceId_;
}

void DeployApplicationRequest::setAcrInstanceId(const std::string &acrInstanceId) {
  acrInstanceId_ = acrInstanceId;
  setBodyParameter(std::string("AcrInstanceId"), acrInstanceId);
}

std::string DeployApplicationRequest::getAppId() const {
  return appId_;
}

void DeployApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DeployApplicationRequest::getImageUrl() const {
  return imageUrl_;
}

void DeployApplicationRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

std::string DeployApplicationRequest::getPhp() const {
  return php_;
}

void DeployApplicationRequest::setPhp(const std::string &php) {
  php_ = php;
  setBodyParameter(std::string("Php"), php);
}

std::string DeployApplicationRequest::getPythonModules() const {
  return pythonModules_;
}

void DeployApplicationRequest::setPythonModules(const std::string &pythonModules) {
  pythonModules_ = pythonModules;
  setParameter(std::string("PythonModules"), pythonModules);
}

std::string DeployApplicationRequest::getPhpConfigLocation() const {
  return phpConfigLocation_;
}

void DeployApplicationRequest::setPhpConfigLocation(const std::string &phpConfigLocation) {
  phpConfigLocation_ = phpConfigLocation;
  setParameter(std::string("PhpConfigLocation"), phpConfigLocation);
}

