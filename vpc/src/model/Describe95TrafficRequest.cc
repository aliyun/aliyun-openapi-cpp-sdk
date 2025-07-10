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

#include <alibabacloud/vpc/model/Describe95TrafficRequest.h>

using AlibabaCloud::Vpc::Model::Describe95TrafficRequest;

Describe95TrafficRequest::Describe95TrafficRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "Describe95Traffic") {
  setMethod(HttpRequest::Method::Post);
}

Describe95TrafficRequest::~Describe95TrafficRequest() {}

long Describe95TrafficRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void Describe95TrafficRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string Describe95TrafficRequest::getRegionId() const {
  return regionId_;
}

void Describe95TrafficRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string Describe95TrafficRequest::getDay() const {
  return day_;
}

void Describe95TrafficRequest::setDay(const std::string &day) {
  day_ = day;
  setParameter(std::string("Day"), day);
}

std::string Describe95TrafficRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void Describe95TrafficRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string Describe95TrafficRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void Describe95TrafficRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long Describe95TrafficRequest::getOwnerId() const {
  return ownerId_;
}

void Describe95TrafficRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string Describe95TrafficRequest::getResourceType() const {
  return resourceType_;
}

void Describe95TrafficRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string Describe95TrafficRequest::getInstanceId() const {
  return instanceId_;
}

void Describe95TrafficRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

