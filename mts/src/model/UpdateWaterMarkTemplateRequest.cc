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

#include <alibabacloud/mts/model/UpdateWaterMarkTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateWaterMarkTemplateRequest;

UpdateWaterMarkTemplateRequest::UpdateWaterMarkTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateWaterMarkTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWaterMarkTemplateRequest::~UpdateWaterMarkTemplateRequest() {}

long UpdateWaterMarkTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateWaterMarkTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateWaterMarkTemplateRequest::getWaterMarkTemplateId() const {
  return waterMarkTemplateId_;
}

void UpdateWaterMarkTemplateRequest::setWaterMarkTemplateId(const std::string &waterMarkTemplateId) {
  waterMarkTemplateId_ = waterMarkTemplateId;
  setParameter(std::string("WaterMarkTemplateId"), waterMarkTemplateId);
}

std::string UpdateWaterMarkTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateWaterMarkTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateWaterMarkTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateWaterMarkTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateWaterMarkTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateWaterMarkTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateWaterMarkTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateWaterMarkTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateWaterMarkTemplateRequest::getName() const {
  return name_;
}

void UpdateWaterMarkTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateWaterMarkTemplateRequest::getConfig() const {
  return config_;
}

void UpdateWaterMarkTemplateRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

