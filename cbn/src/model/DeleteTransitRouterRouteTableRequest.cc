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

#include <alibabacloud/cbn/model/DeleteTransitRouterRouteTableRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterRouteTableRequest;

DeleteTransitRouterRouteTableRequest::DeleteTransitRouterRouteTableRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterRouteTableRequest::~DeleteTransitRouterRouteTableRequest() {}

long DeleteTransitRouterRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterRouteTableRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterRouteTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTransitRouterRouteTableRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void DeleteTransitRouterRouteTableRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

bool DeleteTransitRouterRouteTableRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterRouteTableRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterRouteTableRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterRouteTableRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

