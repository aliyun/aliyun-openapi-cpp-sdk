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

#include <alibabacloud/polardb/model/DescribeActivationCodeDetailsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeActivationCodeDetailsRequest;

DescribeActivationCodeDetailsRequest::DescribeActivationCodeDetailsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeActivationCodeDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActivationCodeDetailsRequest::~DescribeActivationCodeDetailsRequest() {}

long DescribeActivationCodeDetailsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActivationCodeDetailsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeActivationCodeDetailsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActivationCodeDetailsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeActivationCodeDetailsRequest::getActivationCodeId() const {
  return activationCodeId_;
}

void DescribeActivationCodeDetailsRequest::setActivationCodeId(int activationCodeId) {
  activationCodeId_ = activationCodeId;
  setParameter(std::string("ActivationCodeId"), std::to_string(activationCodeId));
}

std::string DescribeActivationCodeDetailsRequest::getAliyunOrderId() const {
  return aliyunOrderId_;
}

void DescribeActivationCodeDetailsRequest::setAliyunOrderId(const std::string &aliyunOrderId) {
  aliyunOrderId_ = aliyunOrderId;
  setParameter(std::string("AliyunOrderId"), aliyunOrderId);
}

std::string DescribeActivationCodeDetailsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActivationCodeDetailsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActivationCodeDetailsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActivationCodeDetailsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeActivationCodeDetailsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActivationCodeDetailsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

