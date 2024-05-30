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

#include <alibabacloud/slb/model/DescribeLoadBalancerHTTPSListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerHTTPSListenerAttributeRequest;

DescribeLoadBalancerHTTPSListenerAttributeRequest::DescribeLoadBalancerHTTPSListenerAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerHTTPSListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerHTTPSListenerAttributeRequest::~DescribeLoadBalancerHTTPSListenerAttributeRequest() {}

std::string DescribeLoadBalancerHTTPSListenerAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeLoadBalancerHTTPSListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLoadBalancerHTTPSListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DescribeLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLoadBalancerHTTPSListenerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLoadBalancerHTTPSListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLoadBalancerHTTPSListenerAttributeRequest::getTags() const {
  return tags_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeLoadBalancerHTTPSListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeLoadBalancerHTTPSListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

