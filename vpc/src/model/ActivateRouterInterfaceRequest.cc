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

#include <alibabacloud/vpc/model/ActivateRouterInterfaceRequest.h>

using AlibabaCloud::Vpc::Model::ActivateRouterInterfaceRequest;

ActivateRouterInterfaceRequest::ActivateRouterInterfaceRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ActivateRouterInterface") {
  setMethod(HttpRequest::Method::Post);
}

ActivateRouterInterfaceRequest::~ActivateRouterInterfaceRequest() {}

long ActivateRouterInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ActivateRouterInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ActivateRouterInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ActivateRouterInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ActivateRouterInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void ActivateRouterInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ActivateRouterInterfaceRequest::getRouterInterfaceId() const {
  return routerInterfaceId_;
}

void ActivateRouterInterfaceRequest::setRouterInterfaceId(const std::string &routerInterfaceId) {
  routerInterfaceId_ = routerInterfaceId;
  setParameter(std::string("RouterInterfaceId"), routerInterfaceId);
}

std::string ActivateRouterInterfaceRequest::getRegionId() const {
  return regionId_;
}

void ActivateRouterInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

