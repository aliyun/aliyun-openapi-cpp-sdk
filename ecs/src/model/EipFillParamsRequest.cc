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

#include <alibabacloud/ecs/model/EipFillParamsRequest.h>

using AlibabaCloud::Ecs::Model::EipFillParamsRequest;

EipFillParamsRequest::EipFillParamsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "EipFillParams") {
  setMethod(HttpRequest::Method::Post);
}

EipFillParamsRequest::~EipFillParamsRequest() {}

long EipFillParamsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EipFillParamsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EipFillParamsRequest::getData() const {
  return data_;
}

void EipFillParamsRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("data"), data);
}

std::string EipFillParamsRequest::getClientToken() const {
  return clientToken_;
}

void EipFillParamsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EipFillParamsRequest::getUserCidr() const {
  return userCidr_;
}

void EipFillParamsRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string EipFillParamsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EipFillParamsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EipFillParamsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EipFillParamsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EipFillParamsRequest::getOwnerId() const {
  return ownerId_;
}

void EipFillParamsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

