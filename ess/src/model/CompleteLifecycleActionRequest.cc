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

#include <alibabacloud/ess/model/CompleteLifecycleActionRequest.h>

using AlibabaCloud::Ess::Model::CompleteLifecycleActionRequest;

CompleteLifecycleActionRequest::CompleteLifecycleActionRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CompleteLifecycleAction") {
  setMethod(HttpRequest::Method::Post);
}

CompleteLifecycleActionRequest::~CompleteLifecycleActionRequest() {}

std::string CompleteLifecycleActionRequest::getLifecycleActionToken() const {
  return lifecycleActionToken_;
}

void CompleteLifecycleActionRequest::setLifecycleActionToken(const std::string &lifecycleActionToken) {
  lifecycleActionToken_ = lifecycleActionToken;
  setParameter(std::string("LifecycleActionToken"), lifecycleActionToken);
}

std::string CompleteLifecycleActionRequest::getClientToken() const {
  return clientToken_;
}

void CompleteLifecycleActionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CompleteLifecycleActionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CompleteLifecycleActionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CompleteLifecycleActionRequest::getRegionId() const {
  return regionId_;
}

void CompleteLifecycleActionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CompleteLifecycleActionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CompleteLifecycleActionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CompleteLifecycleActionRequest::getLifecycleHookId() const {
  return lifecycleHookId_;
}

void CompleteLifecycleActionRequest::setLifecycleHookId(const std::string &lifecycleHookId) {
  lifecycleHookId_ = lifecycleHookId;
  setParameter(std::string("LifecycleHookId"), lifecycleHookId);
}

std::string CompleteLifecycleActionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CompleteLifecycleActionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CompleteLifecycleActionRequest::getOwnerId() const {
  return ownerId_;
}

void CompleteLifecycleActionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CompleteLifecycleActionRequest::getLifecycleActionResult() const {
  return lifecycleActionResult_;
}

void CompleteLifecycleActionRequest::setLifecycleActionResult(const std::string &lifecycleActionResult) {
  lifecycleActionResult_ = lifecycleActionResult;
  setParameter(std::string("LifecycleActionResult"), lifecycleActionResult);
}

