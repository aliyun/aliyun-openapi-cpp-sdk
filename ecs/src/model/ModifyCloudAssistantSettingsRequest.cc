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

#include <alibabacloud/ecs/model/ModifyCloudAssistantSettingsRequest.h>

using AlibabaCloud::Ecs::Model::ModifyCloudAssistantSettingsRequest;

ModifyCloudAssistantSettingsRequest::ModifyCloudAssistantSettingsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyCloudAssistantSettings") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCloudAssistantSettingsRequest::~ModifyCloudAssistantSettingsRequest() {}

long ModifyCloudAssistantSettingsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCloudAssistantSettingsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig ModifyCloudAssistantSettingsRequest::getAgentUpgradeConfig() const {
  return agentUpgradeConfig_;
}

void ModifyCloudAssistantSettingsRequest::setAgentUpgradeConfig(const ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig &agentUpgradeConfig) {
  agentUpgradeConfig_ = agentUpgradeConfig;
  setParameter(std::string("AgentUpgradeConfig") + ".Enabled", agentUpgradeConfig.enabled ? "true" : "false");
  for(int dep1 = 0; dep1 != agentUpgradeConfig.allowedUpgradeWindow.size(); dep1++) {
    setParameter(std::string("AgentUpgradeConfig") + ".AllowedUpgradeWindow." + std::to_string(dep1 + 1), agentUpgradeConfig.allowedUpgradeWindow[dep1]);
  }
  setParameter(std::string("AgentUpgradeConfig") + ".TimeZone", agentUpgradeConfig.timeZone);
}

ModifyCloudAssistantSettingsRequest::OssDeliveryConfig ModifyCloudAssistantSettingsRequest::getOssDeliveryConfig() const {
  return ossDeliveryConfig_;
}

void ModifyCloudAssistantSettingsRequest::setOssDeliveryConfig(const ModifyCloudAssistantSettingsRequest::OssDeliveryConfig &ossDeliveryConfig) {
  ossDeliveryConfig_ = ossDeliveryConfig;
  setParameter(std::string("OssDeliveryConfig") + ".Enabled", ossDeliveryConfig.enabled ? "true" : "false");
  setParameter(std::string("OssDeliveryConfig") + ".BucketName", ossDeliveryConfig.bucketName);
  setParameter(std::string("OssDeliveryConfig") + ".Prefix", ossDeliveryConfig.prefix);
  setParameter(std::string("OssDeliveryConfig") + ".EncryptionType", ossDeliveryConfig.encryptionType);
  setParameter(std::string("OssDeliveryConfig") + ".EncryptionAlgorithm", ossDeliveryConfig.encryptionAlgorithm);
  setParameter(std::string("OssDeliveryConfig") + ".EncryptionKeyId", ossDeliveryConfig.encryptionKeyId);
}

std::string ModifyCloudAssistantSettingsRequest::getSettingType() const {
  return settingType_;
}

void ModifyCloudAssistantSettingsRequest::setSettingType(const std::string &settingType) {
  settingType_ = settingType;
  setParameter(std::string("SettingType"), settingType);
}

std::string ModifyCloudAssistantSettingsRequest::getRegionId() const {
  return regionId_;
}

void ModifyCloudAssistantSettingsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig ModifyCloudAssistantSettingsRequest::getSlsDeliveryConfig() const {
  return slsDeliveryConfig_;
}

void ModifyCloudAssistantSettingsRequest::setSlsDeliveryConfig(const ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig &slsDeliveryConfig) {
  slsDeliveryConfig_ = slsDeliveryConfig;
  setParameter(std::string("SlsDeliveryConfig") + ".Enabled", slsDeliveryConfig.enabled ? "true" : "false");
  setParameter(std::string("SlsDeliveryConfig") + ".ProjectName", slsDeliveryConfig.projectName);
  setParameter(std::string("SlsDeliveryConfig") + ".LogstoreName", slsDeliveryConfig.logstoreName);
}

std::string ModifyCloudAssistantSettingsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCloudAssistantSettingsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCloudAssistantSettingsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCloudAssistantSettingsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCloudAssistantSettingsRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCloudAssistantSettingsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

