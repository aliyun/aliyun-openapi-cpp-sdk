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

#include <alibabacloud/sae/model/CreateJobRequest.h>

using AlibabaCloud::Sae::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/job/createJob"};
  setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest() {}

std::string CreateJobRequest::getNasId() const {
  return nasId_;
}

void CreateJobRequest::setNasId(const std::string &nasId) {
  nasId_ = nasId;
  setParameter(std::string("NasId"), nasId);
}

std::string CreateJobRequest::getJarStartArgs() const {
  return jarStartArgs_;
}

void CreateJobRequest::setJarStartArgs(const std::string &jarStartArgs) {
  jarStartArgs_ = jarStartArgs;
  setParameter(std::string("JarStartArgs"), jarStartArgs);
}

std::string CreateJobRequest::getConcurrencyPolicy() const {
  return concurrencyPolicy_;
}

void CreateJobRequest::setConcurrencyPolicy(const std::string &concurrencyPolicy) {
  concurrencyPolicy_ = concurrencyPolicy;
  setParameter(std::string("ConcurrencyPolicy"), concurrencyPolicy);
}

std::string CreateJobRequest::getTriggerConfig() const {
  return triggerConfig_;
}

void CreateJobRequest::setTriggerConfig(const std::string &triggerConfig) {
  triggerConfig_ = triggerConfig;
  setParameter(std::string("TriggerConfig"), triggerConfig);
}

std::string CreateJobRequest::getOssAkSecret() const {
  return ossAkSecret_;
}

void CreateJobRequest::setOssAkSecret(const std::string &ossAkSecret) {
  ossAkSecret_ = ossAkSecret;
  setBodyParameter(std::string("OssAkSecret"), ossAkSecret);
}

std::string CreateJobRequest::getMountHost() const {
  return mountHost_;
}

void CreateJobRequest::setMountHost(const std::string &mountHost) {
  mountHost_ = mountHost;
  setParameter(std::string("MountHost"), mountHost);
}

bool CreateJobRequest::getAutoConfig() const {
  return autoConfig_;
}

void CreateJobRequest::setAutoConfig(bool autoConfig) {
  autoConfig_ = autoConfig;
  setParameter(std::string("AutoConfig"), autoConfig ? "true" : "false");
}

std::string CreateJobRequest::getEnvs() const {
  return envs_;
}

void CreateJobRequest::setEnvs(const std::string &envs) {
  envs_ = envs;
  setParameter(std::string("Envs"), envs);
}

std::string CreateJobRequest::getPhpPECLExtensions() const {
  return phpPECLExtensions_;
}

void CreateJobRequest::setPhpPECLExtensions(const std::string &phpPECLExtensions) {
  phpPECLExtensions_ = phpPECLExtensions;
  setBodyParameter(std::string("PhpPECLExtensions"), phpPECLExtensions);
}

std::string CreateJobRequest::getPhpArmsConfigLocation() const {
  return phpArmsConfigLocation_;
}

void CreateJobRequest::setPhpArmsConfigLocation(const std::string &phpArmsConfigLocation) {
  phpArmsConfigLocation_ = phpArmsConfigLocation;
  setParameter(std::string("PhpArmsConfigLocation"), phpArmsConfigLocation);
}

std::string CreateJobRequest::getProgrammingLanguage() const {
  return programmingLanguage_;
}

void CreateJobRequest::setProgrammingLanguage(const std::string &programmingLanguage) {
  programmingLanguage_ = programmingLanguage;
  setParameter(std::string("ProgrammingLanguage"), programmingLanguage);
}

std::string CreateJobRequest::getCustomHostAlias() const {
  return customHostAlias_;
}

void CreateJobRequest::setCustomHostAlias(const std::string &customHostAlias) {
  customHostAlias_ = customHostAlias;
  setParameter(std::string("CustomHostAlias"), customHostAlias);
}

bool CreateJobRequest::getDeploy() const {
  return deploy_;
}

void CreateJobRequest::setDeploy(bool deploy) {
  deploy_ = deploy;
  setParameter(std::string("Deploy"), deploy ? "true" : "false");
}

std::string CreateJobRequest::getJarStartOptions() const {
  return jarStartOptions_;
}

void CreateJobRequest::setJarStartOptions(const std::string &jarStartOptions) {
  jarStartOptions_ = jarStartOptions;
  setParameter(std::string("JarStartOptions"), jarStartOptions);
}

std::string CreateJobRequest::getAppName() const {
  return appName_;
}

void CreateJobRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateJobRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateJobRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool CreateJobRequest::getSlice() const {
  return slice_;
}

void CreateJobRequest::setSlice(bool slice) {
  slice_ = slice;
  setParameter(std::string("Slice"), slice ? "true" : "false");
}

std::string CreateJobRequest::getConfigMapMountDesc() const {
  return configMapMountDesc_;
}

void CreateJobRequest::setConfigMapMountDesc(const std::string &configMapMountDesc) {
  configMapMountDesc_ = configMapMountDesc;
  setBodyParameter(std::string("ConfigMapMountDesc"), configMapMountDesc);
}

std::string CreateJobRequest::getOssMountDescs() const {
  return ossMountDescs_;
}

void CreateJobRequest::setOssMountDescs(const std::string &ossMountDescs) {
  ossMountDescs_ = ossMountDescs;
  setBodyParameter(std::string("OssMountDescs"), ossMountDescs);
}

std::string CreateJobRequest::getImagePullSecrets() const {
  return imagePullSecrets_;
}

void CreateJobRequest::setImagePullSecrets(const std::string &imagePullSecrets) {
  imagePullSecrets_ = imagePullSecrets;
  setParameter(std::string("ImagePullSecrets"), imagePullSecrets);
}

std::string CreateJobRequest::getPreStop() const {
  return preStop_;
}

void CreateJobRequest::setPreStop(const std::string &preStop) {
  preStop_ = preStop;
  setParameter(std::string("PreStop"), preStop);
}

std::string CreateJobRequest::getPython() const {
  return python_;
}

void CreateJobRequest::setPython(const std::string &python) {
  python_ = python;
  setParameter(std::string("Python"), python);
}

int CreateJobRequest::getCpu() const {
  return cpu_;
}

void CreateJobRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

long CreateJobRequest::getBackoffLimit() const {
  return backoffLimit_;
}

void CreateJobRequest::setBackoffLimit(long backoffLimit) {
  backoffLimit_ = backoffLimit;
  setParameter(std::string("BackoffLimit"), std::to_string(backoffLimit));
}

std::string CreateJobRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateJobRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateJobRequest::getPackageType() const {
  return packageType_;
}

void CreateJobRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

std::string CreateJobRequest::getPostStart() const {
  return postStart_;
}

void CreateJobRequest::setPostStart(const std::string &postStart) {
  postStart_ = postStart;
  setParameter(std::string("PostStart"), postStart);
}

std::string CreateJobRequest::getPhpExtensions() const {
  return phpExtensions_;
}

void CreateJobRequest::setPhpExtensions(const std::string &phpExtensions) {
  phpExtensions_ = phpExtensions;
  setBodyParameter(std::string("PhpExtensions"), phpExtensions);
}

bool CreateJobRequest::getAssociateEip() const {
  return associateEip_;
}

void CreateJobRequest::setAssociateEip(bool associateEip) {
  associateEip_ = associateEip;
  setBodyParameter(std::string("AssociateEip"), associateEip ? "true" : "false");
}

std::string CreateJobRequest::getWebContainer() const {
  return webContainer_;
}

void CreateJobRequest::setWebContainer(const std::string &webContainer) {
  webContainer_ = webContainer;
  setParameter(std::string("WebContainer"), webContainer);
}

int CreateJobRequest::getMemory() const {
  return memory_;
}

void CreateJobRequest::setMemory(int memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string CreateJobRequest::getSlsConfigs() const {
  return slsConfigs_;
}

void CreateJobRequest::setSlsConfigs(const std::string &slsConfigs) {
  slsConfigs_ = slsConfigs;
  setParameter(std::string("SlsConfigs"), slsConfigs);
}

std::string CreateJobRequest::getCommandArgs() const {
  return commandArgs_;
}

void CreateJobRequest::setCommandArgs(const std::string &commandArgs) {
  commandArgs_ = commandArgs;
  setParameter(std::string("CommandArgs"), commandArgs);
}

std::string CreateJobRequest::getAcrAssumeRoleArn() const {
  return acrAssumeRoleArn_;
}

void CreateJobRequest::setAcrAssumeRoleArn(const std::string &acrAssumeRoleArn) {
  acrAssumeRoleArn_ = acrAssumeRoleArn;
  setParameter(std::string("AcrAssumeRoleArn"), acrAssumeRoleArn);
}

std::string CreateJobRequest::getReadiness() const {
  return readiness_;
}

void CreateJobRequest::setReadiness(const std::string &readiness) {
  readiness_ = readiness;
  setParameter(std::string("Readiness"), readiness);
}

std::string CreateJobRequest::getTimezone() const {
  return timezone_;
}

void CreateJobRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setParameter(std::string("Timezone"), timezone);
}

std::string CreateJobRequest::getOssAkId() const {
  return ossAkId_;
}

void CreateJobRequest::setOssAkId(const std::string &ossAkId) {
  ossAkId_ = ossAkId;
  setBodyParameter(std::string("OssAkId"), ossAkId);
}

std::string CreateJobRequest::getLiveness() const {
  return liveness_;
}

void CreateJobRequest::setLiveness(const std::string &liveness) {
  liveness_ = liveness;
  setParameter(std::string("Liveness"), liveness);
}

std::string CreateJobRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateJobRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateJobRequest::getPackageVersion() const {
  return packageVersion_;
}

void CreateJobRequest::setPackageVersion(const std::string &packageVersion) {
  packageVersion_ = packageVersion;
  setParameter(std::string("PackageVersion"), packageVersion);
}

std::string CreateJobRequest::getTomcatConfig() const {
  return tomcatConfig_;
}

void CreateJobRequest::setTomcatConfig(const std::string &tomcatConfig) {
  tomcatConfig_ = tomcatConfig;
  setParameter(std::string("TomcatConfig"), tomcatConfig);
}

long CreateJobRequest::getTimeout() const {
  return timeout_;
}

void CreateJobRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string CreateJobRequest::getWarStartOptions() const {
  return warStartOptions_;
}

void CreateJobRequest::setWarStartOptions(const std::string &warStartOptions) {
  warStartOptions_ = warStartOptions;
  setParameter(std::string("WarStartOptions"), warStartOptions);
}

std::string CreateJobRequest::getPackageRuntimeCustomBuild() const {
  return packageRuntimeCustomBuild_;
}

void CreateJobRequest::setPackageRuntimeCustomBuild(const std::string &packageRuntimeCustomBuild) {
  packageRuntimeCustomBuild_ = packageRuntimeCustomBuild;
  setBodyParameter(std::string("PackageRuntimeCustomBuild"), packageRuntimeCustomBuild);
}

std::string CreateJobRequest::getEdasContainerVersion() const {
  return edasContainerVersion_;
}

void CreateJobRequest::setEdasContainerVersion(const std::string &edasContainerVersion) {
  edasContainerVersion_ = edasContainerVersion;
  setParameter(std::string("EdasContainerVersion"), edasContainerVersion);
}

std::string CreateJobRequest::getPackageUrl() const {
  return packageUrl_;
}

void CreateJobRequest::setPackageUrl(const std::string &packageUrl) {
  packageUrl_ = packageUrl;
  setParameter(std::string("PackageUrl"), packageUrl);
}

int CreateJobRequest::getTerminationGracePeriodSeconds() const {
  return terminationGracePeriodSeconds_;
}

void CreateJobRequest::setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds) {
  terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
  setParameter(std::string("TerminationGracePeriodSeconds"), std::to_string(terminationGracePeriodSeconds));
}

std::string CreateJobRequest::getPhpConfig() const {
  return phpConfig_;
}

void CreateJobRequest::setPhpConfig(const std::string &phpConfig) {
  phpConfig_ = phpConfig;
  setBodyParameter(std::string("PhpConfig"), phpConfig);
}

std::string CreateJobRequest::getSliceEnvs() const {
  return sliceEnvs_;
}

void CreateJobRequest::setSliceEnvs(const std::string &sliceEnvs) {
  sliceEnvs_ = sliceEnvs;
  setParameter(std::string("SliceEnvs"), sliceEnvs);
}

bool CreateJobRequest::getEnableImageAccl() const {
  return enableImageAccl_;
}

void CreateJobRequest::setEnableImageAccl(bool enableImageAccl) {
  enableImageAccl_ = enableImageAccl;
  setBodyParameter(std::string("EnableImageAccl"), enableImageAccl ? "true" : "false");
}

int CreateJobRequest::getReplicas() const {
  return replicas_;
}

void CreateJobRequest::setReplicas(int replicas) {
  replicas_ = replicas;
  setParameter(std::string("Replicas"), std::to_string(replicas));
}

std::string CreateJobRequest::getWorkload() const {
  return workload_;
}

void CreateJobRequest::setWorkload(const std::string &workload) {
  workload_ = workload;
  setParameter(std::string("Workload"), workload);
}

std::string CreateJobRequest::getCommand() const {
  return command_;
}

void CreateJobRequest::setCommand(const std::string &command) {
  command_ = command;
  setParameter(std::string("Command"), command);
}

std::string CreateJobRequest::getMountDesc() const {
  return mountDesc_;
}

void CreateJobRequest::setMountDesc(const std::string &mountDesc) {
  mountDesc_ = mountDesc;
  setParameter(std::string("MountDesc"), mountDesc);
}

std::string CreateJobRequest::getJdk() const {
  return jdk_;
}

void CreateJobRequest::setJdk(const std::string &jdk) {
  jdk_ = jdk;
  setParameter(std::string("Jdk"), jdk);
}

std::string CreateJobRequest::getAppDescription() const {
  return appDescription_;
}

void CreateJobRequest::setAppDescription(const std::string &appDescription) {
  appDescription_ = appDescription;
  setParameter(std::string("AppDescription"), appDescription);
}

std::string CreateJobRequest::getAcrInstanceId() const {
  return acrInstanceId_;
}

void CreateJobRequest::setAcrInstanceId(const std::string &acrInstanceId) {
  acrInstanceId_ = acrInstanceId;
  setBodyParameter(std::string("AcrInstanceId"), acrInstanceId);
}

std::string CreateJobRequest::getVpcId() const {
  return vpcId_;
}

void CreateJobRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateJobRequest::getImageUrl() const {
  return imageUrl_;
}

void CreateJobRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

std::string CreateJobRequest::getPhp() const {
  return php_;
}

void CreateJobRequest::setPhp(const std::string &php) {
  php_ = php;
  setBodyParameter(std::string("Php"), php);
}

std::string CreateJobRequest::getRefAppId() const {
  return refAppId_;
}

void CreateJobRequest::setRefAppId(const std::string &refAppId) {
  refAppId_ = refAppId;
  setParameter(std::string("RefAppId"), refAppId);
}

std::string CreateJobRequest::getPythonModules() const {
  return pythonModules_;
}

void CreateJobRequest::setPythonModules(const std::string &pythonModules) {
  pythonModules_ = pythonModules;
  setParameter(std::string("PythonModules"), pythonModules);
}

std::string CreateJobRequest::getPhpConfigLocation() const {
  return phpConfigLocation_;
}

void CreateJobRequest::setPhpConfigLocation(const std::string &phpConfigLocation) {
  phpConfigLocation_ = phpConfigLocation;
  setParameter(std::string("PhpConfigLocation"), phpConfigLocation);
}

