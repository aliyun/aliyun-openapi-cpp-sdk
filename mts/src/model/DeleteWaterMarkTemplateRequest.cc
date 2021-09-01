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

#include <alibabacloud/mts/model/DeleteWaterMarkTemplateRequest.h>

using AlibabaCloud::Mts::Model::DeleteWaterMarkTemplateRequest;

DeleteWaterMarkTemplateRequest::DeleteWaterMarkTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DeleteWaterMarkTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteWaterMarkTemplateRequest::~DeleteWaterMarkTemplateRequest() {}

long DeleteWaterMarkTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteWaterMarkTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteWaterMarkTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteWaterMarkTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteWaterMarkTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteWaterMarkTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteWaterMarkTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteWaterMarkTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteWaterMarkTemplateRequest::getWaterMarkTemplateId() const {
  return waterMarkTemplateId_;
}

void DeleteWaterMarkTemplateRequest::setWaterMarkTemplateId(const std::string &waterMarkTemplateId) {
  waterMarkTemplateId_ = waterMarkTemplateId;
  setParameter(std::string("WaterMarkTemplateId"), waterMarkTemplateId);
}

std::string DeleteWaterMarkTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteWaterMarkTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

