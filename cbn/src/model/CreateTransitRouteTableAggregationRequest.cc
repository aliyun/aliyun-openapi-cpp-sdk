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

#include <alibabacloud/cbn/model/CreateTransitRouteTableAggregationRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouteTableAggregationRequest;

CreateTransitRouteTableAggregationRequest::CreateTransitRouteTableAggregationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouteTableAggregation") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouteTableAggregationRequest::~CreateTransitRouteTableAggregationRequest() {}

long CreateTransitRouteTableAggregationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouteTableAggregationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouteTableAggregationRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouteTableAggregationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouteTableAggregationRequest::getTransitRouteTableAggregationDescription() const {
  return transitRouteTableAggregationDescription_;
}

void CreateTransitRouteTableAggregationRequest::setTransitRouteTableAggregationDescription(const std::string &transitRouteTableAggregationDescription) {
  transitRouteTableAggregationDescription_ = transitRouteTableAggregationDescription;
  setParameter(std::string("TransitRouteTableAggregationDescription"), transitRouteTableAggregationDescription);
}

std::string CreateTransitRouteTableAggregationRequest::getTransitRouteTableAggregationName() const {
  return transitRouteTableAggregationName_;
}

void CreateTransitRouteTableAggregationRequest::setTransitRouteTableAggregationName(const std::string &transitRouteTableAggregationName) {
  transitRouteTableAggregationName_ = transitRouteTableAggregationName;
  setParameter(std::string("TransitRouteTableAggregationName"), transitRouteTableAggregationName);
}

bool CreateTransitRouteTableAggregationRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouteTableAggregationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouteTableAggregationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouteTableAggregationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouteTableAggregationRequest::getTransitRouteTableAggregationScope() const {
  return transitRouteTableAggregationScope_;
}

void CreateTransitRouteTableAggregationRequest::setTransitRouteTableAggregationScope(const std::string &transitRouteTableAggregationScope) {
  transitRouteTableAggregationScope_ = transitRouteTableAggregationScope;
  setParameter(std::string("TransitRouteTableAggregationScope"), transitRouteTableAggregationScope);
}

std::string CreateTransitRouteTableAggregationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouteTableAggregationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouteTableAggregationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouteTableAggregationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouteTableAggregationRequest::getVersion() const {
  return version_;
}

void CreateTransitRouteTableAggregationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateTransitRouteTableAggregationRequest::getTransitRouteTableId() const {
  return transitRouteTableId_;
}

void CreateTransitRouteTableAggregationRequest::setTransitRouteTableId(const std::string &transitRouteTableId) {
  transitRouteTableId_ = transitRouteTableId;
  setParameter(std::string("TransitRouteTableId"), transitRouteTableId);
}

std::string CreateTransitRouteTableAggregationRequest::getTransitRouteTableAggregationCidr() const {
  return transitRouteTableAggregationCidr_;
}

void CreateTransitRouteTableAggregationRequest::setTransitRouteTableAggregationCidr(const std::string &transitRouteTableAggregationCidr) {
  transitRouteTableAggregationCidr_ = transitRouteTableAggregationCidr;
  setParameter(std::string("TransitRouteTableAggregationCidr"), transitRouteTableAggregationCidr);
}

