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

#include <alibabacloud/cbn/model/DeleteTransitRouteTableAggregationRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouteTableAggregationRequest;

DeleteTransitRouteTableAggregationRequest::DeleteTransitRouteTableAggregationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouteTableAggregation") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouteTableAggregationRequest::~DeleteTransitRouteTableAggregationRequest() {}

long DeleteTransitRouteTableAggregationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouteTableAggregationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouteTableAggregationRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouteTableAggregationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouteTableAggregationRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouteTableAggregationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouteTableAggregationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouteTableAggregationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouteTableAggregationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouteTableAggregationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouteTableAggregationRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouteTableAggregationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouteTableAggregationRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouteTableAggregationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouteTableAggregationRequest::getTransitRouteTableId() const {
  return transitRouteTableId_;
}

void DeleteTransitRouteTableAggregationRequest::setTransitRouteTableId(const std::string &transitRouteTableId) {
  transitRouteTableId_ = transitRouteTableId;
  setParameter(std::string("TransitRouteTableId"), transitRouteTableId);
}

std::string DeleteTransitRouteTableAggregationRequest::getTransitRouteTableAggregationCidr() const {
  return transitRouteTableAggregationCidr_;
}

void DeleteTransitRouteTableAggregationRequest::setTransitRouteTableAggregationCidr(const std::string &transitRouteTableAggregationCidr) {
  transitRouteTableAggregationCidr_ = transitRouteTableAggregationCidr;
  setParameter(std::string("TransitRouteTableAggregationCidr"), transitRouteTableAggregationCidr);
}

