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

#include <alibabacloud/sae/model/CreateApplicationRequest.h>

using AlibabaCloud::Sae::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/createApplication"};
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest() {}

std::string CreateApplicationRequest::getNasId() const {
  return nasId_;
}

void CreateApplicationRequest::setNasId(const std::string &nasId) {
  nasId_ = nasId;
  setParameter(std::string("NasId"), nasId);
}

std::string CreateApplicationRequest::getJarStartArgs() const {
  return jarStartArgs_;
}

void CreateApplicationRequest::setJarStartArgs(const std::string &jarStartArgs) {
  jarStartArgs_ = jarStartArgs;
  setParameter(std::string("JarStartArgs"), jarStartArgs);
}

std::string CreateApplicationRequest::getOssAkSecret() const {
  return ossAkSecret_;
}

void CreateApplicationRequest::setOssAkSecret(const std::string &ossAkSecret) {
  ossAkSecret_ = ossAkSecret;
  setBodyParameter(std::string("OssAkSecret"), ossAkSecret);
}

std::string CreateApplicationRequest::getNasConfigs() const {
  return nasConfigs_;
}

void CreateApplicationRequest::setNasConfigs(const std::string &nasConfigs) {
  nasConfigs_ = nasConfigs;
  setParameter(std::string("NasConfigs"), nasConfigs);
}

std::string CreateApplicationRequest::getMountHost() const {
  return mountHost_;
}

void CreateApplicationRequest::setMountHost(const std::string &mountHost) {
  mountHost_ = mountHost;
  setParameter(std::string("MountHost"), mountHost);
}

bool CreateApplicationRequest::getAutoConfig() const {
  return autoConfig_;
}

void CreateApplicationRequest::setAutoConfig(bool autoConfig) {
  autoConfig_ = autoConfig;
  setParameter(std::string("AutoConfig"), autoConfig ? "true" : "false");
}

std::string CreateApplicationRequest::getEnvs() const {
  return envs_;
}

void CreateApplicationRequest::setEnvs(const std::string &envs) {
  envs_ = envs;
  setParameter(std::string("Envs"), envs);
}

std::string CreateApplicationRequest::getPhpPECLExtensions() const {
  return phpPECLExtensions_;
}

void CreateApplicationRequest::setPhpPECLExtensions(const std::string &phpPECLExtensions) {
  phpPECLExtensions_ = phpPECLExtensions;
  setBodyParameter(std::string("PhpPECLExtensions"), phpPECLExtensions);
}

std::string CreateApplicationRequest::getPhpArmsConfigLocation() const {
  return phpArmsConfigLocation_;
}

void CreateApplicationRequest::setPhpArmsConfigLocation(const std::string &phpArmsConfigLocation) {
  phpArmsConfigLocation_ = phpArmsConfigLocation;
  setParameter(std::string("PhpArmsConfigLocation"), phpArmsConfigLocation);
}

std::string CreateApplicationRequest::getProgrammingLanguage() const {
  return programmingLanguage_;
}

void CreateApplicationRequest::setProgrammingLanguage(const std::string &programmingLanguage) {
  programmingLanguage_ = programmingLanguage;
  setParameter(std::string("ProgrammingLanguage"), programmingLanguage);
}

std::string CreateApplicationRequest::getCustomHostAlias() const {
  return customHostAlias_;
}

void CreateApplicationRequest::setCustomHostAlias(const std::string &customHostAlias) {
  customHostAlias_ = customHostAlias;
  setParameter(std::string("CustomHostAlias"), customHostAlias);
}

bool CreateApplicationRequest::getDeploy() const {
  return deploy_;
}

void CreateApplicationRequest::setDeploy(bool deploy) {
  deploy_ = deploy;
  setParameter(std::string("Deploy"), deploy ? "true" : "false");
}

std::string CreateApplicationRequest::getJarStartOptions() const {
  return jarStartOptions_;
}

void CreateApplicationRequest::setJarStartOptions(const std::string &jarStartOptions) {
  jarStartOptions_ = jarStartOptions;
  setParameter(std::string("JarStartOptions"), jarStartOptions);
}

std::string CreateApplicationRequest::getAppName() const {
  return appName_;
}

void CreateApplicationRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateApplicationRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateApplicationRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool CreateApplicationRequest::getPurchaseEip() const {
  return purchaseEip_;
}

void CreateApplicationRequest::setPurchaseEip(bool purchaseEip) {
  purchaseEip_ = purchaseEip;
  setParameter(std::string("PurchaseEip"), purchaseEip ? "true" : "false");
}

std::string CreateApplicationRequest::getSaeVersion() const {
  return saeVersion_;
}

void CreateApplicationRequest::setSaeVersion(const std::string &saeVersion) {
  saeVersion_ = saeVersion;
  setParameter(std::string("SaeVersion"), saeVersion);
}

std::string CreateApplicationRequest::getPvtzDiscoverySvc() const {
  return pvtzDiscoverySvc_;
}

void CreateApplicationRequest::setPvtzDiscoverySvc(const std::string &pvtzDiscoverySvc) {
  pvtzDiscoverySvc_ = pvtzDiscoverySvc;
  setParameter(std::string("PvtzDiscoverySvc"), pvtzDiscoverySvc);
}

std::string CreateApplicationRequest::getConfigMapMountDesc() const {
  return configMapMountDesc_;
}

void CreateApplicationRequest::setConfigMapMountDesc(const std::string &configMapMountDesc) {
  configMapMountDesc_ = configMapMountDesc;
  setBodyParameter(std::string("ConfigMapMountDesc"), configMapMountDesc);
}

std::string CreateApplicationRequest::getOssMountDescs() const {
  return ossMountDescs_;
}

void CreateApplicationRequest::setOssMountDescs(const std::string &ossMountDescs) {
  ossMountDescs_ = ossMountDescs;
  setBodyParameter(std::string("OssMountDescs"), ossMountDescs);
}

std::string CreateApplicationRequest::getImagePullSecrets() const {
  return imagePullSecrets_;
}

void CreateApplicationRequest::setImagePullSecrets(const std::string &imagePullSecrets) {
  imagePullSecrets_ = imagePullSecrets;
  setParameter(std::string("ImagePullSecrets"), imagePullSecrets);
}

std::string CreateApplicationRequest::getPreStop() const {
  return preStop_;
}

void CreateApplicationRequest::setPreStop(const std::string &preStop) {
  preStop_ = preStop;
  setParameter(std::string("PreStop"), preStop);
}

std::string CreateApplicationRequest::getPython() const {
  return python_;
}

void CreateApplicationRequest::setPython(const std::string &python) {
  python_ = python;
  setParameter(std::string("Python"), python);
}

int CreateApplicationRequest::getCpu() const {
  return cpu_;
}

void CreateApplicationRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::string CreateApplicationRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateApplicationRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateApplicationRequest::getEnableEbpf() const {
  return enableEbpf_;
}

void CreateApplicationRequest::setEnableEbpf(const std::string &enableEbpf) {
  enableEbpf_ = enableEbpf;
  setParameter(std::string("EnableEbpf"), enableEbpf);
}

std::string CreateApplicationRequest::getPackageType() const {
  return packageType_;
}

void CreateApplicationRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

std::string CreateApplicationRequest::getPostStart() const {
  return postStart_;
}

void CreateApplicationRequest::setPostStart(const std::string &postStart) {
  postStart_ = postStart;
  setParameter(std::string("PostStart"), postStart);
}

std::string CreateApplicationRequest::getPhpExtensions() const {
  return phpExtensions_;
}

void CreateApplicationRequest::setPhpExtensions(const std::string &phpExtensions) {
  phpExtensions_ = phpExtensions;
  setBodyParameter(std::string("PhpExtensions"), phpExtensions);
}

bool CreateApplicationRequest::getAssociateEip() const {
  return associateEip_;
}

void CreateApplicationRequest::setAssociateEip(bool associateEip) {
  associateEip_ = associateEip;
  setBodyParameter(std::string("AssociateEip"), associateEip ? "true" : "false");
}

std::string CreateApplicationRequest::getAppSource() const {
  return appSource_;
}

void CreateApplicationRequest::setAppSource(const std::string &appSource) {
  appSource_ = appSource;
  setParameter(std::string("AppSource"), appSource);
}

std::string CreateApplicationRequest::getWebContainer() const {
  return webContainer_;
}

void CreateApplicationRequest::setWebContainer(const std::string &webContainer) {
  webContainer_ = webContainer;
  setParameter(std::string("WebContainer"), webContainer);
}

int CreateApplicationRequest::getMemory() const {
  return memory_;
}

void CreateApplicationRequest::setMemory(int memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string CreateApplicationRequest::getSlsConfigs() const {
  return slsConfigs_;
}

void CreateApplicationRequest::setSlsConfigs(const std::string &slsConfigs) {
  slsConfigs_ = slsConfigs;
  setParameter(std::string("SlsConfigs"), slsConfigs);
}

std::string CreateApplicationRequest::getKafkaConfigs() const {
  return kafkaConfigs_;
}

void CreateApplicationRequest::setKafkaConfigs(const std::string &kafkaConfigs) {
  kafkaConfigs_ = kafkaConfigs;
  setParameter(std::string("KafkaConfigs"), kafkaConfigs);
}

std::string CreateApplicationRequest::getCommandArgs() const {
  return commandArgs_;
}

void CreateApplicationRequest::setCommandArgs(const std::string &commandArgs) {
  commandArgs_ = commandArgs;
  setParameter(std::string("CommandArgs"), commandArgs);
}

std::string CreateApplicationRequest::getAcrAssumeRoleArn() const {
  return acrAssumeRoleArn_;
}

void CreateApplicationRequest::setAcrAssumeRoleArn(const std::string &acrAssumeRoleArn) {
  acrAssumeRoleArn_ = acrAssumeRoleArn;
  setParameter(std::string("AcrAssumeRoleArn"), acrAssumeRoleArn);
}

std::string CreateApplicationRequest::getReadiness() const {
  return readiness_;
}

void CreateApplicationRequest::setReadiness(const std::string &readiness) {
  readiness_ = readiness;
  setParameter(std::string("Readiness"), readiness);
}

std::string CreateApplicationRequest::getTimezone() const {
  return timezone_;
}

void CreateApplicationRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setParameter(std::string("Timezone"), timezone);
}

std::string CreateApplicationRequest::getOssAkId() const {
  return ossAkId_;
}

void CreateApplicationRequest::setOssAkId(const std::string &ossAkId) {
  ossAkId_ = ossAkId;
  setBodyParameter(std::string("OssAkId"), ossAkId);
}

std::string CreateApplicationRequest::getLiveness() const {
  return liveness_;
}

void CreateApplicationRequest::setLiveness(const std::string &liveness) {
  liveness_ = liveness;
  setParameter(std::string("Liveness"), liveness);
}

std::string CreateApplicationRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateApplicationRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateApplicationRequest::getPackageVersion() const {
  return packageVersion_;
}

void CreateApplicationRequest::setPackageVersion(const std::string &packageVersion) {
  packageVersion_ = packageVersion;
  setParameter(std::string("PackageVersion"), packageVersion);
}

std::string CreateApplicationRequest::getTomcatConfig() const {
  return tomcatConfig_;
}

void CreateApplicationRequest::setTomcatConfig(const std::string &tomcatConfig) {
  tomcatConfig_ = tomcatConfig;
  setParameter(std::string("TomcatConfig"), tomcatConfig);
}

std::string CreateApplicationRequest::getWarStartOptions() const {
  return warStartOptions_;
}

void CreateApplicationRequest::setWarStartOptions(const std::string &warStartOptions) {
  warStartOptions_ = warStartOptions;
  setParameter(std::string("WarStartOptions"), warStartOptions);
}

std::string CreateApplicationRequest::getPackageRuntimeCustomBuild() const {
  return packageRuntimeCustomBuild_;
}

void CreateApplicationRequest::setPackageRuntimeCustomBuild(const std::string &packageRuntimeCustomBuild) {
  packageRuntimeCustomBuild_ = packageRuntimeCustomBuild;
  setBodyParameter(std::string("PackageRuntimeCustomBuild"), packageRuntimeCustomBuild);
}

std::string CreateApplicationRequest::getEdasContainerVersion() const {
  return edasContainerVersion_;
}

void CreateApplicationRequest::setEdasContainerVersion(const std::string &edasContainerVersion) {
  edasContainerVersion_ = edasContainerVersion;
  setParameter(std::string("EdasContainerVersion"), edasContainerVersion);
}

std::string CreateApplicationRequest::getPackageUrl() const {
  return packageUrl_;
}

void CreateApplicationRequest::setPackageUrl(const std::string &packageUrl) {
  packageUrl_ = packageUrl;
  setParameter(std::string("PackageUrl"), packageUrl);
}

int CreateApplicationRequest::getTerminationGracePeriodSeconds() const {
  return terminationGracePeriodSeconds_;
}

void CreateApplicationRequest::setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds) {
  terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
  setParameter(std::string("TerminationGracePeriodSeconds"), std::to_string(terminationGracePeriodSeconds));
}

std::string CreateApplicationRequest::getPhpConfig() const {
  return phpConfig_;
}

void CreateApplicationRequest::setPhpConfig(const std::string &phpConfig) {
  phpConfig_ = phpConfig;
  setBodyParameter(std::string("PhpConfig"), phpConfig);
}

bool CreateApplicationRequest::getEnableImageAccl() const {
  return enableImageAccl_;
}

void CreateApplicationRequest::setEnableImageAccl(bool enableImageAccl) {
  enableImageAccl_ = enableImageAccl;
  setBodyParameter(std::string("EnableImageAccl"), enableImageAccl ? "true" : "false");
}

std::string CreateApplicationRequest::getMicroRegistration() const {
  return microRegistration_;
}

void CreateApplicationRequest::setMicroRegistration(const std::string &microRegistration) {
  microRegistration_ = microRegistration;
  setParameter(std::string("MicroRegistration"), microRegistration);
}

int CreateApplicationRequest::getReplicas() const {
  return replicas_;
}

void CreateApplicationRequest::setReplicas(int replicas) {
  replicas_ = replicas;
  setParameter(std::string("Replicas"), std::to_string(replicas));
}

std::string CreateApplicationRequest::getCommand() const {
  return command_;
}

void CreateApplicationRequest::setCommand(const std::string &command) {
  command_ = command;
  setParameter(std::string("Command"), command);
}

std::string CreateApplicationRequest::getMountDesc() const {
  return mountDesc_;
}

void CreateApplicationRequest::setMountDesc(const std::string &mountDesc) {
  mountDesc_ = mountDesc;
  setParameter(std::string("MountDesc"), mountDesc);
}

std::string CreateApplicationRequest::getJdk() const {
  return jdk_;
}

void CreateApplicationRequest::setJdk(const std::string &jdk) {
  jdk_ = jdk;
  setParameter(std::string("Jdk"), jdk);
}

std::string CreateApplicationRequest::getAppDescription() const {
  return appDescription_;
}

void CreateApplicationRequest::setAppDescription(const std::string &appDescription) {
  appDescription_ = appDescription;
  setParameter(std::string("AppDescription"), appDescription);
}

std::string CreateApplicationRequest::getAcrInstanceId() const {
  return acrInstanceId_;
}

void CreateApplicationRequest::setAcrInstanceId(const std::string &acrInstanceId) {
  acrInstanceId_ = acrInstanceId;
  setBodyParameter(std::string("AcrInstanceId"), acrInstanceId);
}

std::string CreateApplicationRequest::getVpcId() const {
  return vpcId_;
}

void CreateApplicationRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateApplicationRequest::getImageUrl() const {
  return imageUrl_;
}

void CreateApplicationRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

std::string CreateApplicationRequest::getPhp() const {
  return php_;
}

void CreateApplicationRequest::setPhp(const std::string &php) {
  php_ = php;
  setBodyParameter(std::string("Php"), php);
}

std::string CreateApplicationRequest::getPythonModules() const {
  return pythonModules_;
}

void CreateApplicationRequest::setPythonModules(const std::string &pythonModules) {
  pythonModules_ = pythonModules;
  setParameter(std::string("PythonModules"), pythonModules);
}

std::string CreateApplicationRequest::getPhpConfigLocation() const {
  return phpConfigLocation_;
}

void CreateApplicationRequest::setPhpConfigLocation(const std::string &phpConfigLocation) {
  phpConfigLocation_ = phpConfigLocation;
  setParameter(std::string("PhpConfigLocation"), phpConfigLocation);
}

