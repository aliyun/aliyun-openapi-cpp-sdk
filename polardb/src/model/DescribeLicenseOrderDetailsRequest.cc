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

#include <alibabacloud/polardb/model/DescribeLicenseOrderDetailsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeLicenseOrderDetailsRequest;

DescribeLicenseOrderDetailsRequest::DescribeLicenseOrderDetailsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeLicenseOrderDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLicenseOrderDetailsRequest::~DescribeLicenseOrderDetailsRequest() {}

long DescribeLicenseOrderDetailsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLicenseOrderDetailsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeLicenseOrderDetailsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLicenseOrderDetailsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeLicenseOrderDetailsRequest::getAliyunOrderId() const {
  return aliyunOrderId_;
}

void DescribeLicenseOrderDetailsRequest::setAliyunOrderId(const std::string &aliyunOrderId) {
  aliyunOrderId_ = aliyunOrderId;
  setParameter(std::string("AliyunOrderId"), aliyunOrderId);
}

std::string DescribeLicenseOrderDetailsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLicenseOrderDetailsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLicenseOrderDetailsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLicenseOrderDetailsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLicenseOrderDetailsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLicenseOrderDetailsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

