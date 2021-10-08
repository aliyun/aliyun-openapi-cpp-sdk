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

#include <alibabacloud/ecs/model/DescribeAccountAttributesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAccountAttributesRequest;

DescribeAccountAttributesRequest::DescribeAccountAttributesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeAccountAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccountAttributesRequest::~DescribeAccountAttributesRequest() {}

long DescribeAccountAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAccountAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeAccountAttributesRequest::getAttributeName() const {
  return attributeName_;
}

void DescribeAccountAttributesRequest::setAttributeName(const std::vector<std::string> &attributeName) {
  attributeName_ = attributeName;
}

std::string DescribeAccountAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribeAccountAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAccountAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAccountAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeAccountAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAccountAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAccountAttributesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAccountAttributesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

