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

#include <alibabacloud/mts/model/GetPackageRequest.h>

using AlibabaCloud::Mts::Model::GetPackageRequest;

GetPackageRequest::GetPackageRequest()
    : RpcServiceRequest("mts", "2014-06-18", "GetPackage") {
  setMethod(HttpRequest::Method::Post);
}

GetPackageRequest::~GetPackageRequest() {}

std::string GetPackageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetPackageRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string GetPackageRequest::getData() const {
  return data_;
}

void GetPackageRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string GetPackageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetPackageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetPackageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetPackageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GetPackageRequest::getOwnerId() const {
  return ownerId_;
}

void GetPackageRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string GetPackageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetPackageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

