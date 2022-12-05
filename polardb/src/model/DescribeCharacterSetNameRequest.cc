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

#include <alibabacloud/polardb/model/DescribeCharacterSetNameRequest.h>

using AlibabaCloud::Polardb::Model::DescribeCharacterSetNameRequest;

DescribeCharacterSetNameRequest::DescribeCharacterSetNameRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeCharacterSetName") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCharacterSetNameRequest::~DescribeCharacterSetNameRequest() {}

long DescribeCharacterSetNameRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCharacterSetNameRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCharacterSetNameRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCharacterSetNameRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCharacterSetNameRequest::getRegionId() const {
  return regionId_;
}

void DescribeCharacterSetNameRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCharacterSetNameRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCharacterSetNameRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCharacterSetNameRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeCharacterSetNameRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeCharacterSetNameRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCharacterSetNameRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCharacterSetNameRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCharacterSetNameRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

