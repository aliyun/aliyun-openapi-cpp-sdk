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

#include <alibabacloud/dyplsapi/model/QuerySecretNoRemainRequest.h>

using AlibabaCloud::Dyplsapi::Model::QuerySecretNoRemainRequest;

QuerySecretNoRemainRequest::QuerySecretNoRemainRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "QuerySecretNoRemain") {
  setMethod(HttpRequest::Method::Post);
}

QuerySecretNoRemainRequest::~QuerySecretNoRemainRequest() {}

long QuerySecretNoRemainRequest::getSpecId() const {
  return specId_;
}

void QuerySecretNoRemainRequest::setSpecId(long specId) {
  specId_ = specId;
  setParameter(std::string("SpecId"), std::to_string(specId));
}

long QuerySecretNoRemainRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySecretNoRemainRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySecretNoRemainRequest::getCity() const {
  return city_;
}

void QuerySecretNoRemainRequest::setCity(const std::string &city) {
  city_ = city;
  setParameter(std::string("City"), city);
}

std::string QuerySecretNoRemainRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySecretNoRemainRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QuerySecretNoRemainRequest::getSecretNo() const {
  return secretNo_;
}

void QuerySecretNoRemainRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string QuerySecretNoRemainRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySecretNoRemainRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QuerySecretNoRemainRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySecretNoRemainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

