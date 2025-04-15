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

#include <alibabacloud/ecs/model/ModifyInstanceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAttributeRequest;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAttributeRequest::~ModifyInstanceAttributeRequest() {}

long ModifyInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyInstanceAttributeRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void ModifyInstanceAttributeRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

bool ModifyInstanceAttributeRequest::getEnableNVS() const {
  return enableNVS_;
}

void ModifyInstanceAttributeRequest::setEnableNVS(bool enableNVS) {
  enableNVS_ = enableNVS;
  setParameter(std::string("EnableNVS"), enableNVS ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getPassword() const {
  return password_;
}

void ModifyInstanceAttributeRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifyInstanceAttributeRequest::getHostName() const {
  return hostName_;
}

void ModifyInstanceAttributeRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string ModifyInstanceAttributeRequest::getCpuOptionsTopologyType() const {
  return cpuOptionsTopologyType_;
}

void ModifyInstanceAttributeRequest::setCpuOptionsTopologyType(const std::string &cpuOptionsTopologyType) {
  cpuOptionsTopologyType_ = cpuOptionsTopologyType;
  setParameter(std::string("CpuOptions.TopologyType"), cpuOptionsTopologyType);
}

ModifyInstanceAttributeRequest::ImageOptions ModifyInstanceAttributeRequest::getImageOptions() const {
  return imageOptions_;
}

void ModifyInstanceAttributeRequest::setImageOptions(const ModifyInstanceAttributeRequest::ImageOptions &imageOptions) {
  imageOptions_ = imageOptions;
  setParameter(std::string("ImageOptions") + ".CurrentOSNVMeSupported", imageOptions.currentOSNVMeSupported ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getOSNameEn() const {
  return oSNameEn_;
}

void ModifyInstanceAttributeRequest::setOSNameEn(const std::string &oSNameEn) {
  oSNameEn_ = oSNameEn;
  setParameter(std::string("OSNameEn"), oSNameEn);
}

int ModifyInstanceAttributeRequest::getCpuOptionsCore() const {
  return cpuOptionsCore_;
}

void ModifyInstanceAttributeRequest::setCpuOptionsCore(int cpuOptionsCore) {
  cpuOptionsCore_ = cpuOptionsCore;
  setParameter(std::string("CpuOptions.Core"), std::to_string(cpuOptionsCore));
}

long ModifyInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

ModifyInstanceAttributeRequest::AdditionalInfo ModifyInstanceAttributeRequest::getAdditionalInfo() const {
  return additionalInfo_;
}

void ModifyInstanceAttributeRequest::setAdditionalInfo(const ModifyInstanceAttributeRequest::AdditionalInfo &additionalInfo) {
  additionalInfo_ = additionalInfo;
  setParameter(std::string("AdditionalInfo") + ".PvdConfig", additionalInfo.pvdConfig);
  setParameter(std::string("AdditionalInfo") + ".EnableHighDensityMode", additionalInfo.enableHighDensityMode ? "true" : "false");
}

ModifyInstanceAttributeRequest::CpuOptions ModifyInstanceAttributeRequest::getCpuOptions() const {
  return cpuOptions_;
}

void ModifyInstanceAttributeRequest::setCpuOptions(const ModifyInstanceAttributeRequest::CpuOptions &cpuOptions) {
  cpuOptions_ = cpuOptions;
  setParameter(std::string("CpuOptions") + ".EnableVRDT", cpuOptions.enableVRDT ? "true" : "false");
  setParameter(std::string("CpuOptions") + ".EnableVISST", cpuOptions.enableVISST ? "true" : "false");
  setParameter(std::string("CpuOptions") + ".TurboMode", cpuOptions.turboMode);
}

std::string ModifyInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceAttributeRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyInstanceAttributeRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool ModifyInstanceAttributeRequest::getRecyclable() const {
  return recyclable_;
}

void ModifyInstanceAttributeRequest::setRecyclable(bool recyclable) {
  recyclable_ = recyclable;
  setParameter(std::string("Recyclable"), recyclable ? "true" : "false");
}

int ModifyInstanceAttributeRequest::getNetworkInterfaceQueueNumber() const {
  return networkInterfaceQueueNumber_;
}

void ModifyInstanceAttributeRequest::setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber) {
  networkInterfaceQueueNumber_ = networkInterfaceQueueNumber;
  setParameter(std::string("NetworkInterfaceQueueNumber"), std::to_string(networkInterfaceQueueNumber));
}

bool ModifyInstanceAttributeRequest::getEnableNetworkEncryption() const {
  return enableNetworkEncryption_;
}

void ModifyInstanceAttributeRequest::setEnableNetworkEncryption(bool enableNetworkEncryption) {
  enableNetworkEncryption_ = enableNetworkEncryption;
  setParameter(std::string("EnableNetworkEncryption"), enableNetworkEncryption ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getDescription() const {
  return description_;
}

void ModifyInstanceAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int ModifyInstanceAttributeRequest::getCpuOptionsThreadsPerCore() const {
  return cpuOptionsThreadsPerCore_;
}

void ModifyInstanceAttributeRequest::setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore) {
  cpuOptionsThreadsPerCore_ = cpuOptionsThreadsPerCore;
  setParameter(std::string("CpuOptions.ThreadsPerCore"), std::to_string(cpuOptionsThreadsPerCore));
}

std::string ModifyInstanceAttributeRequest::getUserData() const {
  return userData_;
}

void ModifyInstanceAttributeRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

ModifyInstanceAttributeRequest::PrivateDnsNameOptions ModifyInstanceAttributeRequest::getPrivateDnsNameOptions() const {
  return privateDnsNameOptions_;
}

void ModifyInstanceAttributeRequest::setPrivateDnsNameOptions(const ModifyInstanceAttributeRequest::PrivateDnsNameOptions &privateDnsNameOptions) {
  privateDnsNameOptions_ = privateDnsNameOptions;
  setParameter(std::string("PrivateDnsNameOptions") + ".HostnameType", privateDnsNameOptions.hostnameType);
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableInstanceIdDnsARecord", privateDnsNameOptions.enableInstanceIdDnsARecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableInstanceIdDnsAAAARecord", privateDnsNameOptions.enableInstanceIdDnsAAAARecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableIpDnsARecord", privateDnsNameOptions.enableIpDnsARecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableIpDnsPtrRecord", privateDnsNameOptions.enableIpDnsPtrRecord ? "true" : "false");
}

bool ModifyInstanceAttributeRequest::getEnableJumboFrame() const {
  return enableJumboFrame_;
}

void ModifyInstanceAttributeRequest::setEnableJumboFrame(bool enableJumboFrame) {
  enableJumboFrame_ = enableJumboFrame;
  setParameter(std::string("EnableJumboFrame"), enableJumboFrame ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyInstanceAttributeRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void ModifyInstanceAttributeRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

std::vector<std::string> ModifyInstanceAttributeRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void ModifyInstanceAttributeRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

ModifyInstanceAttributeRequest::RemoteConnectionOptions ModifyInstanceAttributeRequest::getRemoteConnectionOptions() const {
  return remoteConnectionOptions_;
}

void ModifyInstanceAttributeRequest::setRemoteConnectionOptions(const ModifyInstanceAttributeRequest::RemoteConnectionOptions &remoteConnectionOptions) {
  remoteConnectionOptions_ = remoteConnectionOptions;
  setParameter(std::string("RemoteConnectionOptions") + ".Password", remoteConnectionOptions.password);
  setParameter(std::string("RemoteConnectionOptions") + ".Type", remoteConnectionOptions.type);
}

