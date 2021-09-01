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

#include <alibabacloud/mts/model/DeleteMediaTagRequest.h>

using AlibabaCloud::Mts::Model::DeleteMediaTagRequest;

DeleteMediaTagRequest::DeleteMediaTagRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DeleteMediaTag") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMediaTagRequest::~DeleteMediaTagRequest() {}

long DeleteMediaTagRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteMediaTagRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteMediaTagRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteMediaTagRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteMediaTagRequest::getTag() const {
  return tag_;
}

void DeleteMediaTagRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string DeleteMediaTagRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteMediaTagRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteMediaTagRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteMediaTagRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteMediaTagRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteMediaTagRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteMediaTagRequest::getMediaId() const {
  return mediaId_;
}

void DeleteMediaTagRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

