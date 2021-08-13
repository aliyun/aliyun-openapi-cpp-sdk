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

#include <alibabacloud/smartag/model/GetSmartAccessGatewayUseLimitRequest.h>

using AlibabaCloud::Smartag::Model::GetSmartAccessGatewayUseLimitRequest;

GetSmartAccessGatewayUseLimitRequest::GetSmartAccessGatewayUseLimitRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "GetSmartAccessGatewayUseLimit") {
  setMethod(HttpRequest::Method::Post);
}

GetSmartAccessGatewayUseLimitRequest::~GetSmartAccessGatewayUseLimitRequest() {}

long GetSmartAccessGatewayUseLimitRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetSmartAccessGatewayUseLimitRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetSmartAccessGatewayUseLimitRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetSmartAccessGatewayUseLimitRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetSmartAccessGatewayUseLimitRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetSmartAccessGatewayUseLimitRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetSmartAccessGatewayUseLimitRequest::getOwnerId() const {
  return ownerId_;
}

void GetSmartAccessGatewayUseLimitRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetSmartAccessGatewayUseLimitRequest::getRegionId() const {
  return regionId_;
}

void GetSmartAccessGatewayUseLimitRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

