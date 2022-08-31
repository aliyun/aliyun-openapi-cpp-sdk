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

#include <alibabacloud/rds/model/DescribeRegionInfosRequest.h>

using AlibabaCloud::Rds::Model::DescribeRegionInfosRequest;

DescribeRegionInfosRequest::DescribeRegionInfosRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRegionInfos") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRegionInfosRequest::~DescribeRegionInfosRequest() {}

long DescribeRegionInfosRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRegionInfosRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRegionInfosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRegionInfosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRegionInfosRequest::getClientToken() const {
  return clientToken_;
}

void DescribeRegionInfosRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long DescribeRegionInfosRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRegionInfosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRegionInfosRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRegionInfosRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRegionInfosRequest::getRegionId() const {
  return regionId_;
}

void DescribeRegionInfosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

