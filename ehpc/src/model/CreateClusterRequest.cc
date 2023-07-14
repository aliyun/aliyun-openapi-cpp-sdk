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

#include <alibabacloud/ehpc/model/CreateClusterRequest.h>

using AlibabaCloud::EHPC::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "CreateCluster") {
  setMethod(HttpRequest::Method::Get);
}

CreateClusterRequest::~CreateClusterRequest() {}

std::vector<CreateClusterRequest::AdditionalVolumes> CreateClusterRequest::getAdditionalVolumes() const {
  return additionalVolumes_;
}

void CreateClusterRequest::setAdditionalVolumes(const std::vector<CreateClusterRequest::AdditionalVolumes> &additionalVolumes) {
  additionalVolumes_ = additionalVolumes;
  for(int dep1 = 0; dep1 != additionalVolumes.size(); dep1++) {
  auto additionalVolumesObj = additionalVolumes.at(dep1);
  std::string additionalVolumesObjStr = std::string("AdditionalVolumes") + "." + std::to_string(dep1 + 1);
    setParameter(additionalVolumesObjStr + ".VolumeType", additionalVolumesObj.volumeType);
    setParameter(additionalVolumesObjStr + ".VolumeMountOption", additionalVolumesObj.volumeMountOption);
    setParameter(additionalVolumesObjStr + ".VolumeProtocol", additionalVolumesObj.volumeProtocol);
    setParameter(additionalVolumesObjStr + ".LocalDirectory", additionalVolumesObj.localDirectory);
    setParameter(additionalVolumesObjStr + ".RemoteDirectory", additionalVolumesObj.remoteDirectory);
    for(int dep2 = 0; dep2 != additionalVolumesObj.roles.size(); dep2++) {
    auto rolesObj = additionalVolumesObj.roles.at(dep2);
    std::string rolesObjStr = additionalVolumesObjStr + ".Roles" + "." + std::to_string(dep2 + 1);
      setParameter(rolesObjStr + ".Name", rolesObj.name);
    }
    setParameter(additionalVolumesObjStr + ".VolumeId", additionalVolumesObj.volumeId);
    setParameter(additionalVolumesObjStr + ".VolumeMountpoint", additionalVolumesObj.volumeMountpoint);
    setParameter(additionalVolumesObjStr + ".Location", additionalVolumesObj.location);
    setParameter(additionalVolumesObjStr + ".JobQueue", additionalVolumesObj.jobQueue);
  }
}

std::vector<CreateClusterRequest::AddOns> CreateClusterRequest::getAddOns() const {
  return addOns_;
}

void CreateClusterRequest::setAddOns(const std::vector<CreateClusterRequest::AddOns> &addOns) {
  addOns_ = addOns;
  for(int dep1 = 0; dep1 != addOns.size(); dep1++) {
  auto addOnsObj = addOns.at(dep1);
  std::string addOnsObjStr = std::string("AddOns") + "." + std::to_string(dep1 + 1);
    setParameter(addOnsObjStr + ".DeployMode", addOnsObj.deployMode);
    setParameter(addOnsObjStr + ".Port", std::to_string(addOnsObj.port));
    setParameter(addOnsObjStr + ".ConfigFile", addOnsObj.configFile);
    setParameter(addOnsObjStr + ".DefaultStart", addOnsObj.defaultStart ? "true" : "false");
    setParameter(addOnsObjStr + ".Name", addOnsObj.name);
    setParameter(addOnsObjStr + ".DBType", addOnsObj.dBType);
    setParameter(addOnsObjStr + ".Version", addOnsObj.version);
  }
}

std::string CreateClusterRequest::getEcsOrderManagerInstanceType() const {
  return ecsOrderManagerInstanceType_;
}

void CreateClusterRequest::setEcsOrderManagerInstanceType(const std::string &ecsOrderManagerInstanceType) {
  ecsOrderManagerInstanceType_ = ecsOrderManagerInstanceType;
  setParameter(std::string("EcsOrder.Manager.InstanceType"), ecsOrderManagerInstanceType);
}

std::string CreateClusterRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateClusterRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string CreateClusterRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void CreateClusterRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

bool CreateClusterRequest::getWithoutNas() const {
  return withoutNas_;
}

void CreateClusterRequest::setWithoutNas(bool withoutNas) {
  withoutNas_ = withoutNas;
  setParameter(std::string("WithoutNas"), withoutNas ? "true" : "false");
}

std::string CreateClusterRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void CreateClusterRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

std::string CreateClusterRequest::getDeployMode() const {
  return deployMode_;
}

void CreateClusterRequest::setDeployMode(const std::string &deployMode) {
  deployMode_ = deployMode;
  setParameter(std::string("DeployMode"), deployMode);
}

int CreateClusterRequest::getEcsOrderManagerCount() const {
  return ecsOrderManagerCount_;
}

void CreateClusterRequest::setEcsOrderManagerCount(int ecsOrderManagerCount) {
  ecsOrderManagerCount_ = ecsOrderManagerCount;
  setParameter(std::string("EcsOrder.Manager.Count"), std::to_string(ecsOrderManagerCount));
}

std::string CreateClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateClusterRequest::getPassword() const {
  return password_;
}

void CreateClusterRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

int CreateClusterRequest::getEcsOrderLoginCount() const {
  return ecsOrderLoginCount_;
}

void CreateClusterRequest::setEcsOrderLoginCount(int ecsOrderLoginCount) {
  ecsOrderLoginCount_ = ecsOrderLoginCount;
  setParameter(std::string("EcsOrder.Login.Count"), std::to_string(ecsOrderLoginCount));
}

bool CreateClusterRequest::getWithoutElasticIp() const {
  return withoutElasticIp_;
}

void CreateClusterRequest::setWithoutElasticIp(bool withoutElasticIp) {
  withoutElasticIp_ = withoutElasticIp;
  setParameter(std::string("WithoutElasticIp"), withoutElasticIp ? "true" : "false");
}

std::string CreateClusterRequest::getRemoteVisEnable() const {
  return remoteVisEnable_;
}

void CreateClusterRequest::setRemoteVisEnable(const std::string &remoteVisEnable) {
  remoteVisEnable_ = remoteVisEnable;
  setParameter(std::string("RemoteVisEnable"), remoteVisEnable);
}

int CreateClusterRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateClusterRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDiskSize"), std::to_string(systemDiskSize));
}

std::vector<CreateClusterRequest::Tag> CreateClusterRequest::getTag() const {
  return tag_;
}

void CreateClusterRequest::setTag(const std::vector<CreateClusterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateClusterRequest::getComputeSpotPriceLimit() const {
  return computeSpotPriceLimit_;
}

void CreateClusterRequest::setComputeSpotPriceLimit(const std::string &computeSpotPriceLimit) {
  computeSpotPriceLimit_ = computeSpotPriceLimit;
  setParameter(std::string("ComputeSpotPriceLimit"), computeSpotPriceLimit);
}

int CreateClusterRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateClusterRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateClusterRequest::getPeriod() const {
  return period_;
}

void CreateClusterRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateClusterRequest::getRemoteDirectory() const {
  return remoteDirectory_;
}

void CreateClusterRequest::setRemoteDirectory(const std::string &remoteDirectory) {
  remoteDirectory_ = remoteDirectory;
  setParameter(std::string("RemoteDirectory"), remoteDirectory);
}

int CreateClusterRequest::getEcsOrderComputeCount() const {
  return ecsOrderComputeCount_;
}

void CreateClusterRequest::setEcsOrderComputeCount(int ecsOrderComputeCount) {
  ecsOrderComputeCount_ = ecsOrderComputeCount;
  setParameter(std::string("EcsOrder.Compute.Count"), std::to_string(ecsOrderComputeCount));
}

std::string CreateClusterRequest::getComputeSpotStrategy() const {
  return computeSpotStrategy_;
}

void CreateClusterRequest::setComputeSpotStrategy(const std::string &computeSpotStrategy) {
  computeSpotStrategy_ = computeSpotStrategy;
  setParameter(std::string("ComputeSpotStrategy"), computeSpotStrategy);
}

std::vector<CreateClusterRequest::PostInstallScript> CreateClusterRequest::getPostInstallScript() const {
  return postInstallScript_;
}

void CreateClusterRequest::setPostInstallScript(const std::vector<CreateClusterRequest::PostInstallScript> &postInstallScript) {
  postInstallScript_ = postInstallScript;
  for(int dep1 = 0; dep1 != postInstallScript.size(); dep1++) {
  auto postInstallScriptObj = postInstallScript.at(dep1);
  std::string postInstallScriptObjStr = std::string("PostInstallScript") + "." + std::to_string(dep1 + 1);
    setParameter(postInstallScriptObjStr + ".Args", postInstallScriptObj.args);
    setParameter(postInstallScriptObjStr + ".Url", postInstallScriptObj.url);
  }
}

std::vector<std::string> CreateClusterRequest::getRamNodeTypes() const {
  return ramNodeTypes_;
}

void CreateClusterRequest::setRamNodeTypes(const std::vector<std::string> &ramNodeTypes) {
  ramNodeTypes_ = ramNodeTypes;
}

std::string CreateClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateClusterRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateClusterRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool CreateClusterRequest::getComputeEnableHt() const {
  return computeEnableHt_;
}

void CreateClusterRequest::setComputeEnableHt(bool computeEnableHt) {
  computeEnableHt_ = computeEnableHt;
  setParameter(std::string("ComputeEnableHt"), computeEnableHt ? "true" : "false");
}

std::string CreateClusterRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateClusterRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateClusterRequest::getDomain() const {
  return domain_;
}

void CreateClusterRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string CreateClusterRequest::getName() const {
  return name_;
}

void CreateClusterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateClusterRequest::getVolumeId() const {
  return volumeId_;
}

void CreateClusterRequest::setVolumeId(const std::string &volumeId) {
  volumeId_ = volumeId;
  setParameter(std::string("VolumeId"), volumeId);
}

std::string CreateClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateClusterRequest::getSccClusterId() const {
  return sccClusterId_;
}

void CreateClusterRequest::setSccClusterId(const std::string &sccClusterId) {
  sccClusterId_ = sccClusterId;
  setParameter(std::string("SccClusterId"), sccClusterId);
}

std::string CreateClusterRequest::getVolumeMountOption() const {
  return volumeMountOption_;
}

void CreateClusterRequest::setVolumeMountOption(const std::string &volumeMountOption) {
  volumeMountOption_ = volumeMountOption;
  setParameter(std::string("VolumeMountOption"), volumeMountOption);
}

std::string CreateClusterRequest::getImageId() const {
  return imageId_;
}

void CreateClusterRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateClusterRequest::getSystemDiskLevel() const {
  return systemDiskLevel_;
}

void CreateClusterRequest::setSystemDiskLevel(const std::string &systemDiskLevel) {
  systemDiskLevel_ = systemDiskLevel;
  setParameter(std::string("SystemDiskLevel"), systemDiskLevel);
}

std::string CreateClusterRequest::getClientToken() const {
  return clientToken_;
}

void CreateClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateClusterRequest::getEhpcVersion() const {
  return ehpcVersion_;
}

void CreateClusterRequest::setEhpcVersion(const std::string &ehpcVersion) {
  ehpcVersion_ = ehpcVersion;
  setParameter(std::string("EhpcVersion"), ehpcVersion);
}

std::string CreateClusterRequest::getAccountType() const {
  return accountType_;
}

void CreateClusterRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string CreateClusterRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateClusterRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateClusterRequest::getDescription() const {
  return description_;
}

void CreateClusterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateClusterRequest::getEcsOrderComputeInstanceType() const {
  return ecsOrderComputeInstanceType_;
}

void CreateClusterRequest::setEcsOrderComputeInstanceType(const std::string &ecsOrderComputeInstanceType) {
  ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
  setParameter(std::string("EcsOrder.Compute.InstanceType"), ecsOrderComputeInstanceType);
}

std::string CreateClusterRequest::getJobQueue() const {
  return jobQueue_;
}

void CreateClusterRequest::setJobQueue(const std::string &jobQueue) {
  jobQueue_ = jobQueue;
  setParameter(std::string("JobQueue"), jobQueue);
}

std::string CreateClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateClusterRequest::getVolumeType() const {
  return volumeType_;
}

void CreateClusterRequest::setVolumeType(const std::string &volumeType) {
  volumeType_ = volumeType;
  setParameter(std::string("VolumeType"), volumeType);
}

std::string CreateClusterRequest::getSystemDiskType() const {
  return systemDiskType_;
}

void CreateClusterRequest::setSystemDiskType(const std::string &systemDiskType) {
  systemDiskType_ = systemDiskType;
  setParameter(std::string("SystemDiskType"), systemDiskType);
}

std::string CreateClusterRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateClusterRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string CreateClusterRequest::getVolumeProtocol() const {
  return volumeProtocol_;
}

void CreateClusterRequest::setVolumeProtocol(const std::string &volumeProtocol) {
  volumeProtocol_ = volumeProtocol;
  setParameter(std::string("VolumeProtocol"), volumeProtocol);
}

std::string CreateClusterRequest::getClientVersion() const {
  return clientVersion_;
}

void CreateClusterRequest::setClientVersion(const std::string &clientVersion) {
  clientVersion_ = clientVersion;
  setParameter(std::string("ClientVersion"), clientVersion);
}

std::string CreateClusterRequest::getOsTag() const {
  return osTag_;
}

void CreateClusterRequest::setOsTag(const std::string &osTag) {
  osTag_ = osTag;
  setParameter(std::string("OsTag"), osTag);
}

std::string CreateClusterRequest::getClusterVersion() const {
  return clusterVersion_;
}

void CreateClusterRequest::setClusterVersion(const std::string &clusterVersion) {
  clusterVersion_ = clusterVersion;
  setParameter(std::string("ClusterVersion"), clusterVersion);
}

bool CreateClusterRequest::getIsComputeEss() const {
  return isComputeEss_;
}

void CreateClusterRequest::setIsComputeEss(bool isComputeEss) {
  isComputeEss_ = isComputeEss;
  setParameter(std::string("IsComputeEss"), isComputeEss ? "true" : "false");
}

std::string CreateClusterRequest::getRamRoleName() const {
  return ramRoleName_;
}

void CreateClusterRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string CreateClusterRequest::getNetworkInterfaceTrafficMode() const {
  return networkInterfaceTrafficMode_;
}

void CreateClusterRequest::setNetworkInterfaceTrafficMode(const std::string &networkInterfaceTrafficMode) {
  networkInterfaceTrafficMode_ = networkInterfaceTrafficMode;
  setParameter(std::string("NetworkInterfaceTrafficMode"), networkInterfaceTrafficMode);
}

std::string CreateClusterRequest::getPlugin() const {
  return plugin_;
}

void CreateClusterRequest::setPlugin(const std::string &plugin) {
  plugin_ = plugin;
  setParameter(std::string("Plugin"), plugin);
}

std::vector<CreateClusterRequest::Application> CreateClusterRequest::getApplication() const {
  return application_;
}

void CreateClusterRequest::setApplication(const std::vector<CreateClusterRequest::Application> &application) {
  application_ = application;
  for(int dep1 = 0; dep1 != application.size(); dep1++) {
  auto applicationObj = application.at(dep1);
  std::string applicationObjStr = std::string("Application") + "." + std::to_string(dep1 + 1);
    setParameter(applicationObjStr + ".Tag", applicationObj.tag);
  }
}

std::string CreateClusterRequest::getEcsChargeType() const {
  return ecsChargeType_;
}

void CreateClusterRequest::setEcsChargeType(const std::string &ecsChargeType) {
  ecsChargeType_ = ecsChargeType;
  setParameter(std::string("EcsChargeType"), ecsChargeType);
}

std::string CreateClusterRequest::getInputFileUrl() const {
  return inputFileUrl_;
}

void CreateClusterRequest::setInputFileUrl(const std::string &inputFileUrl) {
  inputFileUrl_ = inputFileUrl;
  setParameter(std::string("InputFileUrl"), inputFileUrl);
}

std::string CreateClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

bool CreateClusterRequest::getHaEnable() const {
  return haEnable_;
}

void CreateClusterRequest::setHaEnable(bool haEnable) {
  haEnable_ = haEnable;
  setParameter(std::string("HaEnable"), haEnable ? "true" : "false");
}

bool CreateClusterRequest::getWithoutAgent() const {
  return withoutAgent_;
}

void CreateClusterRequest::setWithoutAgent(bool withoutAgent) {
  withoutAgent_ = withoutAgent;
  setParameter(std::string("WithoutAgent"), withoutAgent ? "true" : "false");
}

std::string CreateClusterRequest::getSchedulerType() const {
  return schedulerType_;
}

void CreateClusterRequest::setSchedulerType(const std::string &schedulerType) {
  schedulerType_ = schedulerType;
  setParameter(std::string("SchedulerType"), schedulerType);
}

std::string CreateClusterRequest::getVolumeMountpoint() const {
  return volumeMountpoint_;
}

void CreateClusterRequest::setVolumeMountpoint(const std::string &volumeMountpoint) {
  volumeMountpoint_ = volumeMountpoint;
  setParameter(std::string("VolumeMountpoint"), volumeMountpoint);
}

std::string CreateClusterRequest::getEcsOrderLoginInstanceType() const {
  return ecsOrderLoginInstanceType_;
}

void CreateClusterRequest::setEcsOrderLoginInstanceType(const std::string &ecsOrderLoginInstanceType) {
  ecsOrderLoginInstanceType_ = ecsOrderLoginInstanceType;
  setParameter(std::string("EcsOrder.Login.InstanceType"), ecsOrderLoginInstanceType);
}

