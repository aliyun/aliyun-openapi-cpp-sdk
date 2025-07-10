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

#include <alibabacloud/vpc/model/ListEnhanhcedNatGatewayAvailableZonesRequest.h>

using AlibabaCloud::Vpc::Model::ListEnhanhcedNatGatewayAvailableZonesRequest;

ListEnhanhcedNatGatewayAvailableZonesRequest::ListEnhanhcedNatGatewayAvailableZonesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListEnhanhcedNatGatewayAvailableZones") {
  setMethod(HttpRequest::Method::Post);
}

ListEnhanhcedNatGatewayAvailableZonesRequest::~ListEnhanhcedNatGatewayAvailableZonesRequest() {}

long ListEnhanhcedNatGatewayAvailableZonesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListEnhanhcedNatGatewayAvailableZonesRequest::getRegionId() const {
  return regionId_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEnhanhcedNatGatewayAvailableZonesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListEnhanhcedNatGatewayAvailableZonesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListEnhanhcedNatGatewayAvailableZonesRequest::getOwnerId() const {
  return ownerId_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListEnhanhcedNatGatewayAvailableZonesRequest::Filter> ListEnhanhcedNatGatewayAvailableZonesRequest::getFilter() const {
  return filter_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setFilter(const std::vector<ListEnhanhcedNatGatewayAvailableZonesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Key", filter[dep1].key);
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Value", filter[dep1].value);
  }
}

std::string ListEnhanhcedNatGatewayAvailableZonesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListEnhanhcedNatGatewayAvailableZonesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

