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

#include <alibabacloud/dypnsapi/model/VerifyWithFusionAuthTokenRequest.h>

using AlibabaCloud::Dypnsapi::Model::VerifyWithFusionAuthTokenRequest;

VerifyWithFusionAuthTokenRequest::VerifyWithFusionAuthTokenRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "VerifyWithFusionAuthToken") {
  setMethod(HttpRequest::Method::Post);
}

VerifyWithFusionAuthTokenRequest::~VerifyWithFusionAuthTokenRequest() {}

long VerifyWithFusionAuthTokenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void VerifyWithFusionAuthTokenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string VerifyWithFusionAuthTokenRequest::getExtendFunction() const {
  return extendFunction_;
}

void VerifyWithFusionAuthTokenRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string VerifyWithFusionAuthTokenRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void VerifyWithFusionAuthTokenRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string VerifyWithFusionAuthTokenRequest::getRouteName() const {
  return routeName_;
}

void VerifyWithFusionAuthTokenRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string VerifyWithFusionAuthTokenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void VerifyWithFusionAuthTokenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string VerifyWithFusionAuthTokenRequest::getVerifyToken() const {
  return verifyToken_;
}

void VerifyWithFusionAuthTokenRequest::setVerifyToken(const std::string &verifyToken) {
  verifyToken_ = verifyToken;
  setParameter(std::string("VerifyToken"), verifyToken);
}

long VerifyWithFusionAuthTokenRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyWithFusionAuthTokenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

