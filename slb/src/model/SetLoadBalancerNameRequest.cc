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

#include <alibabacloud/slb/model/SetLoadBalancerNameRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerNameRequest;

SetLoadBalancerNameRequest::SetLoadBalancerNameRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerName") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerNameRequest::~SetLoadBalancerNameRequest() {}

std::string SetLoadBalancerNameRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetLoadBalancerNameRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long SetLoadBalancerNameRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetLoadBalancerNameRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerNameRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void SetLoadBalancerNameRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::string SetLoadBalancerNameRequest::getRegionId() const {
  return regionId_;
}

void SetLoadBalancerNameRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLoadBalancerNameRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetLoadBalancerNameRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetLoadBalancerNameRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerNameRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetLoadBalancerNameRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerNameRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLoadBalancerNameRequest::getTags() const {
  return tags_;
}

void SetLoadBalancerNameRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string SetLoadBalancerNameRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerNameRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

