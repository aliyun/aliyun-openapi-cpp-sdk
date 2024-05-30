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

#include <alibabacloud/slb/model/DescribeLoadBalancerAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerAttributeRequest;

DescribeLoadBalancerAttributeRequest::DescribeLoadBalancerAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerAttributeRequest::~DescribeLoadBalancerAttributeRequest() {}

std::string DescribeLoadBalancerAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeLoadBalancerAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeLoadBalancerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLoadBalancerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeLoadBalancerAttributeRequest::getIncludeReservedData() const {
  return includeReservedData_;
}

void DescribeLoadBalancerAttributeRequest::setIncludeReservedData(bool includeReservedData) {
  includeReservedData_ = includeReservedData;
  setParameter(std::string("IncludeReservedData"), includeReservedData ? "true" : "false");
}

std::string DescribeLoadBalancerAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeLoadBalancerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLoadBalancerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLoadBalancerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLoadBalancerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLoadBalancerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLoadBalancerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLoadBalancerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLoadBalancerAttributeRequest::getTags() const {
  return tags_;
}

void DescribeLoadBalancerAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeLoadBalancerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeLoadBalancerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

