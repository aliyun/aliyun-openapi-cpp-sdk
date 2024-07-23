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

#include <alibabacloud/mts/model/ImAuditRequest.h>

using AlibabaCloud::Mts::Model::ImAuditRequest;

ImAuditRequest::ImAuditRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ImAudit") {
  setMethod(HttpRequest::Method::Post);
}

ImAuditRequest::~ImAuditRequest() {}

long ImAuditRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImAuditRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImAuditRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ImAuditRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ImAuditRequest::getImages() const {
  return images_;
}

void ImAuditRequest::setImages(const std::string &images) {
  images_ = images;
  setParameter(std::string("Images"), images);
}

std::string ImAuditRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImAuditRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ImAuditRequest::getOwnerId() const {
  return ownerId_;
}

void ImAuditRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ImAuditRequest::getBizType() const {
  return bizType_;
}

void ImAuditRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string ImAuditRequest::getContents() const {
  return contents_;
}

void ImAuditRequest::setContents(const std::string &contents) {
  contents_ = contents;
  setParameter(std::string("Contents"), contents);
}

std::string ImAuditRequest::getScenes() const {
  return scenes_;
}

void ImAuditRequest::setScenes(const std::string &scenes) {
  scenes_ = scenes;
  setParameter(std::string("Scenes"), scenes);
}

