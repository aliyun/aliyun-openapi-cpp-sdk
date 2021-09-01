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

#include <alibabacloud/mts/model/AddMediaTagRequest.h>

using AlibabaCloud::Mts::Model::AddMediaTagRequest;

AddMediaTagRequest::AddMediaTagRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddMediaTag") {
  setMethod(HttpRequest::Method::Post);
}

AddMediaTagRequest::~AddMediaTagRequest() {}

long AddMediaTagRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddMediaTagRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddMediaTagRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddMediaTagRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddMediaTagRequest::getTag() const {
  return tag_;
}

void AddMediaTagRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string AddMediaTagRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddMediaTagRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddMediaTagRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddMediaTagRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddMediaTagRequest::getOwnerId() const {
  return ownerId_;
}

void AddMediaTagRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddMediaTagRequest::getMediaId() const {
  return mediaId_;
}

void AddMediaTagRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

