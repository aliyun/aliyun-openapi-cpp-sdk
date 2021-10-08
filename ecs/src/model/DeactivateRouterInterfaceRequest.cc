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

#include <alibabacloud/ecs/model/DeactivateRouterInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::DeactivateRouterInterfaceRequest;

DeactivateRouterInterfaceRequest::DeactivateRouterInterfaceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeactivateRouterInterface") {
  setMethod(HttpRequest::Method::Post);
}

DeactivateRouterInterfaceRequest::~DeactivateRouterInterfaceRequest() {}

long DeactivateRouterInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeactivateRouterInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeactivateRouterInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeactivateRouterInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeactivateRouterInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void DeactivateRouterInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeactivateRouterInterfaceRequest::getRouterInterfaceId() const {
  return routerInterfaceId_;
}

void DeactivateRouterInterfaceRequest::setRouterInterfaceId(const std::string &routerInterfaceId) {
  routerInterfaceId_ = routerInterfaceId;
  setParameter(std::string("RouterInterfaceId"), routerInterfaceId);
}

std::string DeactivateRouterInterfaceRequest::getRegionId() const {
  return regionId_;
}

void DeactivateRouterInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

