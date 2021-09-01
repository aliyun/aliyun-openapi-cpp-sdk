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

#include <alibabacloud/mts/model/UpdateMediaPublishStateRequest.h>

using AlibabaCloud::Mts::Model::UpdateMediaPublishStateRequest;

UpdateMediaPublishStateRequest::UpdateMediaPublishStateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateMediaPublishState") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaPublishStateRequest::~UpdateMediaPublishStateRequest() {}

long UpdateMediaPublishStateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateMediaPublishStateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateMediaPublishStateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateMediaPublishStateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateMediaPublishStateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateMediaPublishStateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateMediaPublishStateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateMediaPublishStateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateMediaPublishStateRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMediaPublishStateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateMediaPublishStateRequest::getMediaId() const {
  return mediaId_;
}

void UpdateMediaPublishStateRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

bool UpdateMediaPublishStateRequest::getPublish() const {
  return publish_;
}

void UpdateMediaPublishStateRequest::setPublish(bool publish) {
  publish_ = publish;
  setParameter(std::string("Publish"), publish ? "true" : "false");
}

