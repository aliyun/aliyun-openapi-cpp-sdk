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

#include <alibabacloud/mts/model/UpdateMediaCategoryRequest.h>

using AlibabaCloud::Mts::Model::UpdateMediaCategoryRequest;

UpdateMediaCategoryRequest::UpdateMediaCategoryRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateMediaCategory") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaCategoryRequest::~UpdateMediaCategoryRequest() {}

long UpdateMediaCategoryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateMediaCategoryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateMediaCategoryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateMediaCategoryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long UpdateMediaCategoryRequest::getCateId() const {
  return cateId_;
}

void UpdateMediaCategoryRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string UpdateMediaCategoryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateMediaCategoryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateMediaCategoryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateMediaCategoryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateMediaCategoryRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMediaCategoryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateMediaCategoryRequest::getMediaId() const {
  return mediaId_;
}

void UpdateMediaCategoryRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

