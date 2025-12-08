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

#include <alibabacloud/vod/model/SetAppPlayKeyRequest.h>

using AlibabaCloud::Vod::Model::SetAppPlayKeyRequest;

SetAppPlayKeyRequest::SetAppPlayKeyRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SetAppPlayKey") {
  setMethod(HttpRequest::Method::Post);
}

SetAppPlayKeyRequest::~SetAppPlayKeyRequest() {}

long SetAppPlayKeyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetAppPlayKeyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long SetAppPlayKeyRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void SetAppPlayKeyRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string SetAppPlayKeyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetAppPlayKeyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetAppPlayKeyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetAppPlayKeyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SetAppPlayKeyRequest::getOwnerId() const {
  return ownerId_;
}

void SetAppPlayKeyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetAppPlayKeyRequest::getAppId() const {
  return appId_;
}

void SetAppPlayKeyRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string SetAppPlayKeyRequest::getPlayKey() const {
  return playKey_;
}

void SetAppPlayKeyRequest::setPlayKey(const std::string &playKey) {
  playKey_ = playKey;
  setParameter(std::string("PlayKey"), playKey);
}

