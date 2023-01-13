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

#include <alibabacloud/cbn/model/UpdateTransitRouterRouteTableRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterRouteTableRequest;

UpdateTransitRouterRouteTableRequest::UpdateTransitRouterRouteTableRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterRouteTableRequest::~UpdateTransitRouterRouteTableRequest() {}

long UpdateTransitRouterRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterRouteTableRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterRouteTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

UpdateTransitRouterRouteTableRequest::RouteTableOptions UpdateTransitRouterRouteTableRequest::getRouteTableOptions() const {
  return routeTableOptions_;
}

void UpdateTransitRouterRouteTableRequest::setRouteTableOptions(const UpdateTransitRouterRouteTableRequest::RouteTableOptions &routeTableOptions) {
  routeTableOptions_ = routeTableOptions;
  setParameter(std::string("RouteTableOptions") + ".MultiRegionECMP", routeTableOptions.multiRegionECMP);
}

std::string UpdateTransitRouterRouteTableRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void UpdateTransitRouterRouteTableRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::string UpdateTransitRouterRouteTableRequest::getTransitRouterRouteTableDescription() const {
  return transitRouterRouteTableDescription_;
}

void UpdateTransitRouterRouteTableRequest::setTransitRouterRouteTableDescription(const std::string &transitRouterRouteTableDescription) {
  transitRouterRouteTableDescription_ = transitRouterRouteTableDescription;
  setParameter(std::string("TransitRouterRouteTableDescription"), transitRouterRouteTableDescription);
}

bool UpdateTransitRouterRouteTableRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterRouteTableRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterRouteTableRequest::getTransitRouterRouteTableName() const {
  return transitRouterRouteTableName_;
}

void UpdateTransitRouterRouteTableRequest::setTransitRouterRouteTableName(const std::string &transitRouterRouteTableName) {
  transitRouterRouteTableName_ = transitRouterRouteTableName;
  setParameter(std::string("TransitRouterRouteTableName"), transitRouterRouteTableName);
}

std::string UpdateTransitRouterRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterRouteTableRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterRouteTableRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

