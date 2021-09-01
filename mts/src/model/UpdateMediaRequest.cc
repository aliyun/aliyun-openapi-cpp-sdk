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

#include <alibabacloud/mts/model/UpdateMediaRequest.h>

using AlibabaCloud::Mts::Model::UpdateMediaRequest;

UpdateMediaRequest::UpdateMediaRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateMedia") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaRequest::~UpdateMediaRequest() {}

long UpdateMediaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateMediaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateMediaRequest::getDescription() const {
  return description_;
}

void UpdateMediaRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateMediaRequest::getTitle() const {
  return title_;
}

void UpdateMediaRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateMediaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateMediaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateMediaRequest::getCoverURL() const {
  return coverURL_;
}

void UpdateMediaRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

long UpdateMediaRequest::getCateId() const {
  return cateId_;
}

void UpdateMediaRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string UpdateMediaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateMediaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateMediaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateMediaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateMediaRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMediaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateMediaRequest::getMediaId() const {
  return mediaId_;
}

void UpdateMediaRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string UpdateMediaRequest::getTags() const {
  return tags_;
}

void UpdateMediaRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

