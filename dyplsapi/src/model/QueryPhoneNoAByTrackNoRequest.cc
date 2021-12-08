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

#include <alibabacloud/dyplsapi/model/QueryPhoneNoAByTrackNoRequest.h>

using AlibabaCloud::Dyplsapi::Model::QueryPhoneNoAByTrackNoRequest;

QueryPhoneNoAByTrackNoRequest::QueryPhoneNoAByTrackNoRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "QueryPhoneNoAByTrackNo") {
  setMethod(HttpRequest::Method::Post);
}

QueryPhoneNoAByTrackNoRequest::~QueryPhoneNoAByTrackNoRequest() {}

long QueryPhoneNoAByTrackNoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryPhoneNoAByTrackNoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryPhoneNoAByTrackNoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryPhoneNoAByTrackNoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryPhoneNoAByTrackNoRequest::getCabinetNo() const {
  return cabinetNo_;
}

void QueryPhoneNoAByTrackNoRequest::setCabinetNo(const std::string &cabinetNo) {
  cabinetNo_ = cabinetNo;
  setParameter(std::string("CabinetNo"), cabinetNo);
}

std::string QueryPhoneNoAByTrackNoRequest::getPhoneNoX() const {
  return phoneNoX_;
}

void QueryPhoneNoAByTrackNoRequest::setPhoneNoX(const std::string &phoneNoX) {
  phoneNoX_ = phoneNoX;
  setParameter(std::string("PhoneNoX"), phoneNoX);
}

std::string QueryPhoneNoAByTrackNoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryPhoneNoAByTrackNoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QueryPhoneNoAByTrackNoRequest::getOwnerId() const {
  return ownerId_;
}

void QueryPhoneNoAByTrackNoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryPhoneNoAByTrackNoRequest::getTrackNo() const {
  return trackNo_;
}

void QueryPhoneNoAByTrackNoRequest::setTrackNo(const std::string &trackNo) {
  trackNo_ = trackNo;
  setParameter(std::string("trackNo"), trackNo);
}

