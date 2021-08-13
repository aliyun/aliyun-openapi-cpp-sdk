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

#include <alibabacloud/smartag/model/ClearSagRouteableAddressRequest.h>

using AlibabaCloud::Smartag::Model::ClearSagRouteableAddressRequest;

ClearSagRouteableAddressRequest::ClearSagRouteableAddressRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ClearSagRouteableAddress") {
  setMethod(HttpRequest::Method::Post);
}

ClearSagRouteableAddressRequest::~ClearSagRouteableAddressRequest() {}

std::string ClearSagRouteableAddressRequest::getAccess_key_id() const {
  return access_key_id_;
}

void ClearSagRouteableAddressRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long ClearSagRouteableAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ClearSagRouteableAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ClearSagRouteableAddressRequest::getRegionId() const {
  return regionId_;
}

void ClearSagRouteableAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ClearSagRouteableAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ClearSagRouteableAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ClearSagRouteableAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ClearSagRouteableAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ClearSagRouteableAddressRequest::getOwnerId() const {
  return ownerId_;
}

void ClearSagRouteableAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ClearSagRouteableAddressRequest::getSagId() const {
  return sagId_;
}

void ClearSagRouteableAddressRequest::setSagId(const std::string &sagId) {
  sagId_ = sagId;
  setParameter(std::string("SagId"), sagId);
}

