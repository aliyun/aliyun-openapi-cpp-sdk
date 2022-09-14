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
    : RpcServiceRequest("ehpc", "2017-07-14", "CreateCluster") {
  setMethod(HttpRequest::Method::Get);
}

CreateClusterRequest::~CreateClusterRequest() {}

std::string CreateClusterRequest::getSccClusterId() const {
  return sccClusterId_;
}

void CreateClusterRequest::setSccClusterId(const std::string &sccClusterId) {
  sccClusterId_ = sccClusterId;
  setParameter(std::string("SccClusterId"), sccClusterId);
}

std::string CreateClusterRequest::getImageId() const {
  return imageId_;
}

void CreateClusterRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateClusterRequest::getEcsOrderManagerInstanceType() const {
  return ecsOrderManagerInstanceType_;
}

void CreateClusterRequest::setEcsOrderManagerInstanceType(const std::string &ecsOrderManagerInstanceType) {
  ecsOrderManagerInstanceType_ = ecsOrderManagerInstanceType;
  setParameter(std::string("EcsOrder.Manager.InstanceType"), ecsOrderManagerInstanceType);
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

std::string CreateClusterRequest::getEcsOrderComputeInstanceType() const {
  return ecsOrderComputeInstanceType_;
}

void CreateClusterRequest::setEcsOrderComputeInstanceType(const std::string &ecsOrderComputeInstanceType) {
  ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
  setParameter(std::string("EcsOrder.Compute.InstanceType"), ecsOrderComputeInstanceType);
}

std::string CreateClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateClusterRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void CreateClusterRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

std::string CreateClusterRequest::getVolumeType() const {
  return volumeType_;
}

void CreateClusterRequest::setVolumeType(const std::string &volumeType) {
  volumeType_ = volumeType;
  setParameter(std::string("VolumeType"), volumeType);
}

int CreateClusterRequest::getEcsOrderManagerCount() const {
  return ecsOrderManagerCount_;
}

void CreateClusterRequest::setEcsOrderManagerCount(int ecsOrderManagerCount) {
  ecsOrderManagerCount_ = ecsOrderManagerCount;
  setParameter(std::string("EcsOrder.Manager.Count"), std::to_string(ecsOrderManagerCount));
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

std::string CreateClusterRequest::getComputeSpotPriceLimit() const {
  return computeSpotPriceLimit_;
}

void CreateClusterRequest::setComputeSpotPriceLimit(const std::string &computeSpotPriceLimit) {
  computeSpotPriceLimit_ = computeSpotPriceLimit;
  setParameter(std::string("ComputeSpotPriceLimit"), computeSpotPriceLimit);
}

std::string CreateClusterRequest::getVolumeProtocol() const {
  return volumeProtocol_;
}

void CreateClusterRequest::setVolumeProtocol(const std::string &volumeProtocol) {
  volumeProtocol_ = volumeProtocol;
  setParameter(std::string("VolumeProtocol"), volumeProtocol);
}

std::string CreateClusterRequest::getOsTag() const {
  return osTag_;
}

void CreateClusterRequest::setOsTag(const std::string &osTag) {
  osTag_ = osTag;
  setParameter(std::string("OsTag"), osTag);
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

std::string CreateClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
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

std::string CreateClusterRequest::getName() const {
  return name_;
}

void CreateClusterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateClusterRequest::getSchedulerType() const {
  return schedulerType_;
}

void CreateClusterRequest::setSchedulerType(const std::string &schedulerType) {
  schedulerType_ = schedulerType;
  setParameter(std::string("SchedulerType"), schedulerType);
}

std::string CreateClusterRequest::getVolumeId() const {
  return volumeId_;
}

void CreateClusterRequest::setVolumeId(const std::string &volumeId) {
  volumeId_ = volumeId;
  setParameter(std::string("VolumeId"), volumeId);
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

std::string CreateClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

