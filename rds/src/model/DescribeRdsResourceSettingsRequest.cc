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

#include <alibabacloud/rds/model/DescribeRdsResourceSettingsRequest.h>

using AlibabaCloud::Rds::Model::DescribeRdsResourceSettingsRequest;

DescribeRdsResourceSettingsRequest::DescribeRdsResourceSettingsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRdsResourceSettings") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRdsResourceSettingsRequest::~DescribeRdsResourceSettingsRequest() {}

long DescribeRdsResourceSettingsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRdsResourceSettingsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRdsResourceSettingsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRdsResourceSettingsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRdsResourceSettingsRequest::getResourceNiche() const {
  return resourceNiche_;
}

void DescribeRdsResourceSettingsRequest::setResourceNiche(const std::string &resourceNiche) {
  resourceNiche_ = resourceNiche;
  setParameter(std::string("ResourceNiche"), resourceNiche);
}

long DescribeRdsResourceSettingsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRdsResourceSettingsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRdsResourceSettingsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRdsResourceSettingsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRdsResourceSettingsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRdsResourceSettingsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

