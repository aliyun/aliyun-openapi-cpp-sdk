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

#include <alibabacloud/cbn/model/GrantInstanceToTransitRouterRequest.h>

using AlibabaCloud::Cbn::Model::GrantInstanceToTransitRouterRequest;

GrantInstanceToTransitRouterRequest::GrantInstanceToTransitRouterRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "GrantInstanceToTransitRouter") {
  setMethod(HttpRequest::Method::Post);
}

GrantInstanceToTransitRouterRequest::~GrantInstanceToTransitRouterRequest() {}

long GrantInstanceToTransitRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantInstanceToTransitRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GrantInstanceToTransitRouterRequest::getCenId() const {
  return cenId_;
}

void GrantInstanceToTransitRouterRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

long GrantInstanceToTransitRouterRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void GrantInstanceToTransitRouterRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

std::string GrantInstanceToTransitRouterRequest::getRegionId() const {
  return regionId_;
}

void GrantInstanceToTransitRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GrantInstanceToTransitRouterRequest::getInstanceType() const {
  return instanceType_;
}

void GrantInstanceToTransitRouterRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string GrantInstanceToTransitRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantInstanceToTransitRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantInstanceToTransitRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantInstanceToTransitRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantInstanceToTransitRouterRequest::getOwnerId() const {
  return ownerId_;
}

void GrantInstanceToTransitRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantInstanceToTransitRouterRequest::getVersion() const {
  return version_;
}

void GrantInstanceToTransitRouterRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string GrantInstanceToTransitRouterRequest::getInstanceId() const {
  return instanceId_;
}

void GrantInstanceToTransitRouterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GrantInstanceToTransitRouterRequest::getOrderType() const {
  return orderType_;
}

void GrantInstanceToTransitRouterRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

