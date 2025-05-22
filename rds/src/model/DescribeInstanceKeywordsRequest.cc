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

#include <alibabacloud/rds/model/DescribeInstanceKeywordsRequest.h>

using AlibabaCloud::Rds::Model::DescribeInstanceKeywordsRequest;

DescribeInstanceKeywordsRequest::DescribeInstanceKeywordsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeInstanceKeywords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceKeywordsRequest::~DescribeInstanceKeywordsRequest() {}

long DescribeInstanceKeywordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceKeywordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceKeywordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceKeywordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceKeywordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceKeywordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceKeywordsRequest::getKey() const {
  return key_;
}

void DescribeInstanceKeywordsRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DescribeInstanceKeywordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceKeywordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceKeywordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceKeywordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceKeywordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceKeywordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

