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

#include <alibabacloud/slb/model/DeleteLoadBalancerRequest.h>

using AlibabaCloud::Slb::Model::DeleteLoadBalancerRequest;

DeleteLoadBalancerRequest::DeleteLoadBalancerRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DeleteLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLoadBalancerRequest::~DeleteLoadBalancerRequest() {}

std::string DeleteLoadBalancerRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DeleteLoadBalancerRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DeleteLoadBalancerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteLoadBalancerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteLoadBalancerRequest::getRegionId() const {
  return regionId_;
}

void DeleteLoadBalancerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLoadBalancerRequest::getEnableEipReserve() const {
  return enableEipReserve_;
}

void DeleteLoadBalancerRequest::setEnableEipReserve(const std::string &enableEipReserve) {
  enableEipReserve_ = enableEipReserve;
  setParameter(std::string("EnableEipReserve"), enableEipReserve);
}

std::string DeleteLoadBalancerRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteLoadBalancerRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteLoadBalancerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteLoadBalancerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteLoadBalancerRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLoadBalancerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLoadBalancerRequest::getTags() const {
  return tags_;
}

void DeleteLoadBalancerRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DeleteLoadBalancerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DeleteLoadBalancerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

