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

#include <alibabacloud/dyplsapi/model/AddAxnTrackNoRequest.h>

using AlibabaCloud::Dyplsapi::Model::AddAxnTrackNoRequest;

AddAxnTrackNoRequest::AddAxnTrackNoRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "AddAxnTrackNo") {
  setMethod(HttpRequest::Method::Post);
}

AddAxnTrackNoRequest::~AddAxnTrackNoRequest() {}

long AddAxnTrackNoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddAxnTrackNoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddAxnTrackNoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddAxnTrackNoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddAxnTrackNoRequest::getSubsId() const {
  return subsId_;
}

void AddAxnTrackNoRequest::setSubsId(const std::string &subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), subsId);
}

std::string AddAxnTrackNoRequest::getPhoneNoX() const {
  return phoneNoX_;
}

void AddAxnTrackNoRequest::setPhoneNoX(const std::string &phoneNoX) {
  phoneNoX_ = phoneNoX;
  setParameter(std::string("PhoneNoX"), phoneNoX);
}

std::string AddAxnTrackNoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddAxnTrackNoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AddAxnTrackNoRequest::getOwnerId() const {
  return ownerId_;
}

void AddAxnTrackNoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddAxnTrackNoRequest::getTrackNo() const {
  return trackNo_;
}

void AddAxnTrackNoRequest::setTrackNo(const std::string &trackNo) {
  trackNo_ = trackNo;
  setParameter(std::string("trackNo"), trackNo);
}

std::string AddAxnTrackNoRequest::getPoolKey() const {
  return poolKey_;
}

void AddAxnTrackNoRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

