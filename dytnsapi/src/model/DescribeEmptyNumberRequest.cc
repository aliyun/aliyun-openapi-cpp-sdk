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

#include <alibabacloud/dytnsapi/model/DescribeEmptyNumberRequest.h>

using AlibabaCloud::Dytnsapi::Model::DescribeEmptyNumberRequest;

DescribeEmptyNumberRequest::DescribeEmptyNumberRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "DescribeEmptyNumber") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEmptyNumberRequest::~DescribeEmptyNumberRequest() {}

long DescribeEmptyNumberRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEmptyNumberRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEmptyNumberRequest::getExtendFunction() const {
  return extendFunction_;
}

void DescribeEmptyNumberRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string DescribeEmptyNumberRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEmptyNumberRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEmptyNumberRequest::getRouteName() const {
  return routeName_;
}

void DescribeEmptyNumberRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string DescribeEmptyNumberRequest::getMask() const {
  return mask_;
}

void DescribeEmptyNumberRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string DescribeEmptyNumberRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEmptyNumberRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeEmptyNumberRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEmptyNumberRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEmptyNumberRequest::getAuthCode() const {
  return authCode_;
}

void DescribeEmptyNumberRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string DescribeEmptyNumberRequest::getInputNumber() const {
  return inputNumber_;
}

void DescribeEmptyNumberRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

