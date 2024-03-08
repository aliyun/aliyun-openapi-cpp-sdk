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

#include <alibabacloud/dds/model/DescribeKmsKeysRequest.h>

using AlibabaCloud::Dds::Model::DescribeKmsKeysRequest;

DescribeKmsKeysRequest::DescribeKmsKeysRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeKmsKeys") {
  setMethod(HttpRequest::Method::Post);
}

DescribeKmsKeysRequest::~DescribeKmsKeysRequest() {}

long DescribeKmsKeysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeKmsKeysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeKmsKeysRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeKmsKeysRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeKmsKeysRequest::getRegionId() const {
  return regionId_;
}

void DescribeKmsKeysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeKmsKeysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeKmsKeysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeKmsKeysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeKmsKeysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

