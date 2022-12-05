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

#include <alibabacloud/sae/model/UpdateJobRequest.h>

using AlibabaCloud::Sae::Model::UpdateJobRequest;

UpdateJobRequest::UpdateJobRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/job/updateJob"};
  setMethod(HttpRequest::Method::Post);
}

UpdateJobRequest::~UpdateJobRequest() {}

std::string UpdateJobRequest::getNasId() const {
  return nasId_;
}

void UpdateJobRequest::setNasId(const std::string &nasId) {
  nasId_ = nasId;
  setParameter(std::string("NasId"), nasId);
}

std::string UpdateJobRequest::getJarStartArgs() const {
  return jarStartArgs_;
}

void UpdateJobRequest::setJarStartArgs(const std::string &jarStartArgs) {
  jarStartArgs_ = jarStartArgs;
  setParameter(std::string("JarStartArgs"), jarStartArgs);
}

std::string UpdateJobRequest::getConcurrencyPolicy() const {
  return concurrencyPolicy_;
}

void UpdateJobRequest::setConcurrencyPolicy(const std::string &concurrencyPolicy) {
  concurrencyPolicy_ = concurrencyPolicy;
  setParameter(std::string("ConcurrencyPolicy"), concurrencyPolicy);
}

std::string UpdateJobRequest::getTriggerConfig() const {
  return triggerConfig_;
}

void UpdateJobRequest::setTriggerConfig(const std::string &triggerConfig) {
  triggerConfig_ = triggerConfig;
  setParameter(std::string("TriggerConfig"), triggerConfig);
}

std::string UpdateJobRequest::getOssAkSecret() const {
  return ossAkSecret_;
}

void UpdateJobRequest::setOssAkSecret(const std::string &ossAkSecret) {
  ossAkSecret_ = ossAkSecret;
  setBodyParameter(std::string("OssAkSecret"), ossAkSecret);
}

std::string UpdateJobRequest::getMountHost() const {
  return mountHost_;
}

void UpdateJobRequest::setMountHost(const std::string &mountHost) {
  mountHost_ = mountHost;
  setParameter(std::string("MountHost"), mountHost);
}

int UpdateJobRequest::getBatchWaitTime() const {
  return batchWaitTime_;
}

void UpdateJobRequest::setBatchWaitTime(int batchWaitTime) {
  batchWaitTime_ = batchWaitTime;
  setParameter(std::string("BatchWaitTime"), std::to_string(batchWaitTime));
}

std::string UpdateJobRequest::getEnvs() const {
  return envs_;
}

void UpdateJobRequest::setEnvs(const std::string &envs) {
  envs_ = envs;
  setParameter(std::string("Envs"), envs);
}

std::string UpdateJobRequest::getPhpPECLExtensions() const {
  return phpPECLExtensions_;
}

void UpdateJobRequest::setPhpPECLExtensions(const std::string &phpPECLExtensions) {
  phpPECLExtensions_ = phpPECLExtensions;
  setBodyParameter(std::string("PhpPECLExtensions"), phpPECLExtensions);
}

std::string UpdateJobRequest::getPhpArmsConfigLocation() const {
  return phpArmsConfigLocation_;
}

void UpdateJobRequest::setPhpArmsConfigLocation(const std::string &phpArmsConfigLocation) {
  phpArmsConfigLocation_ = phpArmsConfigLocation;
  setParameter(std::string("PhpArmsConfigLocation"), phpArmsConfigLocation);
}

std::string UpdateJobRequest::getProgrammingLanguage() const {
  return programmingLanguage_;
}

void UpdateJobRequest::setProgrammingLanguage(const std::string &programmingLanguage) {
  programmingLanguage_ = programmingLanguage;
  setParameter(std::string("ProgrammingLanguage"), programmingLanguage);
}

std::string UpdateJobRequest::getCustomHostAlias() const {
  return customHostAlias_;
}

void UpdateJobRequest::setCustomHostAlias(const std::string &customHostAlias) {
  customHostAlias_ = customHostAlias;
  setParameter(std::string("CustomHostAlias"), customHostAlias);
}

std::string UpdateJobRequest::getJarStartOptions() const {
  return jarStartOptions_;
}

void UpdateJobRequest::setJarStartOptions(const std::string &jarStartOptions) {
  jarStartOptions_ = jarStartOptions;
  setParameter(std::string("JarStartOptions"), jarStartOptions);
}

bool UpdateJobRequest::getSlice() const {
  return slice_;
}

void UpdateJobRequest::setSlice(bool slice) {
  slice_ = slice;
  setParameter(std::string("Slice"), slice ? "true" : "false");
}

std::string UpdateJobRequest::getConfigMapMountDesc() const {
  return configMapMountDesc_;
}

void UpdateJobRequest::setConfigMapMountDesc(const std::string &configMapMountDesc) {
  configMapMountDesc_ = configMapMountDesc;
  setBodyParameter(std::string("ConfigMapMountDesc"), configMapMountDesc);
}

std::string UpdateJobRequest::getOssMountDescs() const {
  return ossMountDescs_;
}

void UpdateJobRequest::setOssMountDescs(const std::string &ossMountDescs) {
  ossMountDescs_ = ossMountDescs;
  setBodyParameter(std::string("OssMountDescs"), ossMountDescs);
}

std::string UpdateJobRequest::getImagePullSecrets() const {
  return imagePullSecrets_;
}

void UpdateJobRequest::setImagePullSecrets(const std::string &imagePullSecrets) {
  imagePullSecrets_ = imagePullSecrets;
  setParameter(std::string("ImagePullSecrets"), imagePullSecrets);
}

std::string UpdateJobRequest::getPreStop() const {
  return preStop_;
}

void UpdateJobRequest::setPreStop(const std::string &preStop) {
  preStop_ = preStop;
  setParameter(std::string("PreStop"), preStop);
}

std::string UpdateJobRequest::getPython() const {
  return python_;
}

void UpdateJobRequest::setPython(const std::string &python) {
  python_ = python;
  setParameter(std::string("Python"), python);
}

long UpdateJobRequest::getBackoffLimit() const {
  return backoffLimit_;
}

void UpdateJobRequest::setBackoffLimit(long backoffLimit) {
  backoffLimit_ = backoffLimit;
  setParameter(std::string("BackoffLimit"), std::to_string(backoffLimit));
}

std::string UpdateJobRequest::getUpdateStrategy() const {
  return updateStrategy_;
}

void UpdateJobRequest::setUpdateStrategy(const std::string &updateStrategy) {
  updateStrategy_ = updateStrategy;
  setParameter(std::string("UpdateStrategy"), updateStrategy);
}

std::string UpdateJobRequest::getChangeOrderDesc() const {
  return changeOrderDesc_;
}

void UpdateJobRequest::setChangeOrderDesc(const std::string &changeOrderDesc) {
  changeOrderDesc_ = changeOrderDesc;
  setParameter(std::string("ChangeOrderDesc"), changeOrderDesc);
}

bool UpdateJobRequest::getAutoEnableApplicationScalingRule() const {
  return autoEnableApplicationScalingRule_;
}

void UpdateJobRequest::setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) {
  autoEnableApplicationScalingRule_ = autoEnableApplicationScalingRule;
  setParameter(std::string("AutoEnableApplicationScalingRule"), autoEnableApplicationScalingRule ? "true" : "false");
}

std::string UpdateJobRequest::getPostStart() const {
  return postStart_;
}

void UpdateJobRequest::setPostStart(const std::string &postStart) {
  postStart_ = postStart;
  setParameter(std::string("PostStart"), postStart);
}

std::string UpdateJobRequest::getPhpExtensions() const {
  return phpExtensions_;
}

void UpdateJobRequest::setPhpExtensions(const std::string &phpExtensions) {
  phpExtensions_ = phpExtensions;
  setBodyParameter(std::string("PhpExtensions"), phpExtensions);
}

bool UpdateJobRequest::getAssociateEip() const {
  return associateEip_;
}

void UpdateJobRequest::setAssociateEip(bool associateEip) {
  associateEip_ = associateEip;
  setBodyParameter(std::string("AssociateEip"), associateEip ? "true" : "false");
}

std::string UpdateJobRequest::getWebContainer() const {
  return webContainer_;
}

void UpdateJobRequest::setWebContainer(const std::string &webContainer) {
  webContainer_ = webContainer;
  setParameter(std::string("WebContainer"), webContainer);
}

std::string UpdateJobRequest::getEnableAhas() const {
  return enableAhas_;
}

void UpdateJobRequest::setEnableAhas(const std::string &enableAhas) {
  enableAhas_ = enableAhas;
  setParameter(std::string("EnableAhas"), enableAhas);
}

std::string UpdateJobRequest::getSlsConfigs() const {
  return slsConfigs_;
}

void UpdateJobRequest::setSlsConfigs(const std::string &slsConfigs) {
  slsConfigs_ = slsConfigs;
  setParameter(std::string("SlsConfigs"), slsConfigs);
}

std::string UpdateJobRequest::getCommandArgs() const {
  return commandArgs_;
}

void UpdateJobRequest::setCommandArgs(const std::string &commandArgs) {
  commandArgs_ = commandArgs;
  setParameter(std::string("CommandArgs"), commandArgs);
}

std::string UpdateJobRequest::getAcrAssumeRoleArn() const {
  return acrAssumeRoleArn_;
}

void UpdateJobRequest::setAcrAssumeRoleArn(const std::string &acrAssumeRoleArn) {
  acrAssumeRoleArn_ = acrAssumeRoleArn;
  setParameter(std::string("AcrAssumeRoleArn"), acrAssumeRoleArn);
}

std::string UpdateJobRequest::getReadiness() const {
  return readiness_;
}

void UpdateJobRequest::setReadiness(const std::string &readiness) {
  readiness_ = readiness;
  setParameter(std::string("Readiness"), readiness);
}

std::string UpdateJobRequest::getTimezone() const {
  return timezone_;
}

void UpdateJobRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setParameter(std::string("Timezone"), timezone);
}

std::string UpdateJobRequest::getOssAkId() const {
  return ossAkId_;
}

void UpdateJobRequest::setOssAkId(const std::string &ossAkId) {
  ossAkId_ = ossAkId;
  setBodyParameter(std::string("OssAkId"), ossAkId);
}

std::string UpdateJobRequest::getLiveness() const {
  return liveness_;
}

void UpdateJobRequest::setLiveness(const std::string &liveness) {
  liveness_ = liveness;
  setParameter(std::string("Liveness"), liveness);
}

std::string UpdateJobRequest::getPackageVersion() const {
  return packageVersion_;
}

void UpdateJobRequest::setPackageVersion(const std::string &packageVersion) {
  packageVersion_ = packageVersion;
  setParameter(std::string("PackageVersion"), packageVersion);
}

std::string UpdateJobRequest::getTomcatConfig() const {
  return tomcatConfig_;
}

void UpdateJobRequest::setTomcatConfig(const std::string &tomcatConfig) {
  tomcatConfig_ = tomcatConfig;
  setParameter(std::string("TomcatConfig"), tomcatConfig);
}

long UpdateJobRequest::getTimeout() const {
  return timeout_;
}

void UpdateJobRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string UpdateJobRequest::getWarStartOptions() const {
  return warStartOptions_;
}

void UpdateJobRequest::setWarStartOptions(const std::string &warStartOptions) {
  warStartOptions_ = warStartOptions;
  setParameter(std::string("WarStartOptions"), warStartOptions);
}

std::string UpdateJobRequest::getPackageRuntimeCustomBuild() const {
  return packageRuntimeCustomBuild_;
}

void UpdateJobRequest::setPackageRuntimeCustomBuild(const std::string &packageRuntimeCustomBuild) {
  packageRuntimeCustomBuild_ = packageRuntimeCustomBuild;
  setBodyParameter(std::string("PackageRuntimeCustomBuild"), packageRuntimeCustomBuild);
}

std::string UpdateJobRequest::getEdasContainerVersion() const {
  return edasContainerVersion_;
}

void UpdateJobRequest::setEdasContainerVersion(const std::string &edasContainerVersion) {
  edasContainerVersion_ = edasContainerVersion;
  setParameter(std::string("EdasContainerVersion"), edasContainerVersion);
}

std::string UpdateJobRequest::getPackageUrl() const {
  return packageUrl_;
}

void UpdateJobRequest::setPackageUrl(const std::string &packageUrl) {
  packageUrl_ = packageUrl;
  setParameter(std::string("PackageUrl"), packageUrl);
}

int UpdateJobRequest::getTerminationGracePeriodSeconds() const {
  return terminationGracePeriodSeconds_;
}

void UpdateJobRequest::setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds) {
  terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
  setParameter(std::string("TerminationGracePeriodSeconds"), std::to_string(terminationGracePeriodSeconds));
}

std::string UpdateJobRequest::getPhpConfig() const {
  return phpConfig_;
}

void UpdateJobRequest::setPhpConfig(const std::string &phpConfig) {
  phpConfig_ = phpConfig;
  setBodyParameter(std::string("PhpConfig"), phpConfig);
}

std::string UpdateJobRequest::getSliceEnvs() const {
  return sliceEnvs_;
}

void UpdateJobRequest::setSliceEnvs(const std::string &sliceEnvs) {
  sliceEnvs_ = sliceEnvs;
  setParameter(std::string("SliceEnvs"), sliceEnvs);
}

bool UpdateJobRequest::getEnableImageAccl() const {
  return enableImageAccl_;
}

void UpdateJobRequest::setEnableImageAccl(bool enableImageAccl) {
  enableImageAccl_ = enableImageAccl;
  setBodyParameter(std::string("EnableImageAccl"), enableImageAccl ? "true" : "false");
}

bool UpdateJobRequest::getEnableGreyTagRoute() const {
  return enableGreyTagRoute_;
}

void UpdateJobRequest::setEnableGreyTagRoute(bool enableGreyTagRoute) {
  enableGreyTagRoute_ = enableGreyTagRoute;
  setParameter(std::string("EnableGreyTagRoute"), enableGreyTagRoute ? "true" : "false");
}

std::string UpdateJobRequest::getReplicas() const {
  return replicas_;
}

void UpdateJobRequest::setReplicas(const std::string &replicas) {
  replicas_ = replicas;
  setParameter(std::string("Replicas"), replicas);
}

std::string UpdateJobRequest::getCommand() const {
  return command_;
}

void UpdateJobRequest::setCommand(const std::string &command) {
  command_ = command;
  setParameter(std::string("Command"), command);
}

std::string UpdateJobRequest::getMountDesc() const {
  return mountDesc_;
}

void UpdateJobRequest::setMountDesc(const std::string &mountDesc) {
  mountDesc_ = mountDesc;
  setParameter(std::string("MountDesc"), mountDesc);
}

std::string UpdateJobRequest::getJdk() const {
  return jdk_;
}

void UpdateJobRequest::setJdk(const std::string &jdk) {
  jdk_ = jdk;
  setParameter(std::string("Jdk"), jdk);
}

int UpdateJobRequest::getMinReadyInstances() const {
  return minReadyInstances_;
}

void UpdateJobRequest::setMinReadyInstances(int minReadyInstances) {
  minReadyInstances_ = minReadyInstances;
  setParameter(std::string("MinReadyInstances"), std::to_string(minReadyInstances));
}

std::string UpdateJobRequest::getAcrInstanceId() const {
  return acrInstanceId_;
}

void UpdateJobRequest::setAcrInstanceId(const std::string &acrInstanceId) {
  acrInstanceId_ = acrInstanceId;
  setBodyParameter(std::string("AcrInstanceId"), acrInstanceId);
}

std::string UpdateJobRequest::getAppId() const {
  return appId_;
}

void UpdateJobRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateJobRequest::getImageUrl() const {
  return imageUrl_;
}

void UpdateJobRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

std::string UpdateJobRequest::getPhp() const {
  return php_;
}

void UpdateJobRequest::setPhp(const std::string &php) {
  php_ = php;
  setBodyParameter(std::string("Php"), php);
}

std::string UpdateJobRequest::getRefAppId() const {
  return refAppId_;
}

void UpdateJobRequest::setRefAppId(const std::string &refAppId) {
  refAppId_ = refAppId;
  setParameter(std::string("RefAppId"), refAppId);
}

std::string UpdateJobRequest::getPythonModules() const {
  return pythonModules_;
}

void UpdateJobRequest::setPythonModules(const std::string &pythonModules) {
  pythonModules_ = pythonModules;
  setParameter(std::string("PythonModules"), pythonModules);
}

std::string UpdateJobRequest::getPhpConfigLocation() const {
  return phpConfigLocation_;
}

void UpdateJobRequest::setPhpConfigLocation(const std::string &phpConfigLocation) {
  phpConfigLocation_ = phpConfigLocation;
  setParameter(std::string("PhpConfigLocation"), phpConfigLocation);
}

