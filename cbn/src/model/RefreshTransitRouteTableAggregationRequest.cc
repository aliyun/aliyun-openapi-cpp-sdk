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

#include <alibabacloud/cbn/model/RefreshTransitRouteTableAggregationRequest.h>

using AlibabaCloud::Cbn::Model::RefreshTransitRouteTableAggregationRequest;

RefreshTransitRouteTableAggregationRequest::RefreshTransitRouteTableAggregationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RefreshTransitRouteTableAggregation") {
  setMethod(HttpRequest::Method::Post);
}

RefreshTransitRouteTableAggregationRequest::~RefreshTransitRouteTableAggregationRequest() {}

long RefreshTransitRouteTableAggregationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RefreshTransitRouteTableAggregationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RefreshTransitRouteTableAggregationRequest::getClientToken() const {
  return clientToken_;
}

void RefreshTransitRouteTableAggregationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RefreshTransitRouteTableAggregationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RefreshTransitRouteTableAggregationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RefreshTransitRouteTableAggregationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RefreshTransitRouteTableAggregationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RefreshTransitRouteTableAggregationRequest::getOwnerId() const {
  return ownerId_;
}

void RefreshTransitRouteTableAggregationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RefreshTransitRouteTableAggregationRequest::getVersion() const {
  return version_;
}

void RefreshTransitRouteTableAggregationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string RefreshTransitRouteTableAggregationRequest::getTransitRouteTableId() const {
  return transitRouteTableId_;
}

void RefreshTransitRouteTableAggregationRequest::setTransitRouteTableId(const std::string &transitRouteTableId) {
  transitRouteTableId_ = transitRouteTableId;
  setParameter(std::string("TransitRouteTableId"), transitRouteTableId);
}

std::string RefreshTransitRouteTableAggregationRequest::getTransitRouteTableAggregationCidr() const {
  return transitRouteTableAggregationCidr_;
}

void RefreshTransitRouteTableAggregationRequest::setTransitRouteTableAggregationCidr(const std::string &transitRouteTableAggregationCidr) {
  transitRouteTableAggregationCidr_ = transitRouteTableAggregationCidr;
  setParameter(std::string("TransitRouteTableAggregationCidr"), transitRouteTableAggregationCidr);
}

