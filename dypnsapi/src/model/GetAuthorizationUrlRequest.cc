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

#include <alibabacloud/dypnsapi/model/GetAuthorizationUrlRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetAuthorizationUrlRequest;

GetAuthorizationUrlRequest::GetAuthorizationUrlRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "GetAuthorizationUrl") {
  setMethod(HttpRequest::Method::Post);
}

GetAuthorizationUrlRequest::~GetAuthorizationUrlRequest() {}

long GetAuthorizationUrlRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAuthorizationUrlRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetAuthorizationUrlRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetAuthorizationUrlRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetAuthorizationUrlRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetAuthorizationUrlRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetAuthorizationUrlRequest::getSchemeId() const {
  return schemeId_;
}

void GetAuthorizationUrlRequest::setSchemeId(long schemeId) {
  schemeId_ = schemeId;
  setParameter(std::string("SchemeId"), std::to_string(schemeId));
}

long GetAuthorizationUrlRequest::getOwnerId() const {
  return ownerId_;
}

void GetAuthorizationUrlRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetAuthorizationUrlRequest::getPhoneNo() const {
  return phoneNo_;
}

void GetAuthorizationUrlRequest::setPhoneNo(const std::string &phoneNo) {
  phoneNo_ = phoneNo;
  setParameter(std::string("PhoneNo"), phoneNo);
}

std::string GetAuthorizationUrlRequest::getEndDate() const {
  return endDate_;
}

void GetAuthorizationUrlRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

