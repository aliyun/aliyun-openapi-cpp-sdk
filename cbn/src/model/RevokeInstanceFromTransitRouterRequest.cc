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

#include <alibabacloud/cbn/model/RevokeInstanceFromTransitRouterRequest.h>

using AlibabaCloud::Cbn::Model::RevokeInstanceFromTransitRouterRequest;

RevokeInstanceFromTransitRouterRequest::RevokeInstanceFromTransitRouterRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RevokeInstanceFromTransitRouter") {
  setMethod(HttpRequest::Method::Post);
}

RevokeInstanceFromTransitRouterRequest::~RevokeInstanceFromTransitRouterRequest() {}

long RevokeInstanceFromTransitRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RevokeInstanceFromTransitRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RevokeInstanceFromTransitRouterRequest::getCenId() const {
  return cenId_;
}

void RevokeInstanceFromTransitRouterRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

long RevokeInstanceFromTransitRouterRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void RevokeInstanceFromTransitRouterRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

std::string RevokeInstanceFromTransitRouterRequest::getRegionId() const {
  return regionId_;
}

void RevokeInstanceFromTransitRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RevokeInstanceFromTransitRouterRequest::getInstanceType() const {
  return instanceType_;
}

void RevokeInstanceFromTransitRouterRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string RevokeInstanceFromTransitRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RevokeInstanceFromTransitRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RevokeInstanceFromTransitRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RevokeInstanceFromTransitRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RevokeInstanceFromTransitRouterRequest::getOwnerId() const {
  return ownerId_;
}

void RevokeInstanceFromTransitRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RevokeInstanceFromTransitRouterRequest::getVersion() const {
  return version_;
}

void RevokeInstanceFromTransitRouterRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string RevokeInstanceFromTransitRouterRequest::getInstanceId() const {
  return instanceId_;
}

void RevokeInstanceFromTransitRouterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

