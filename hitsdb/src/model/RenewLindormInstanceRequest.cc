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

#include <alibabacloud/hitsdb/model/RenewLindormInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::RenewLindormInstanceRequest;

RenewLindormInstanceRequest::RenewLindormInstanceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "RenewLindormInstance") {
  setMethod(HttpRequest::Method::Post);
}

RenewLindormInstanceRequest::~RenewLindormInstanceRequest() {}

long RenewLindormInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewLindormInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewLindormInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RenewLindormInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int RenewLindormInstanceRequest::getDuration() const {
  return duration_;
}

void RenewLindormInstanceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string RenewLindormInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void RenewLindormInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RenewLindormInstanceRequest::getRegionId() const {
  return regionId_;
}

void RenewLindormInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RenewLindormInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewLindormInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewLindormInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewLindormInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewLindormInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RenewLindormInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewLindormInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RenewLindormInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RenewLindormInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void RenewLindormInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

