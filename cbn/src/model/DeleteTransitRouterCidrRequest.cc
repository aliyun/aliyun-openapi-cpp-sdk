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

#include <alibabacloud/cbn/model/DeleteTransitRouterCidrRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterCidrRequest;

DeleteTransitRouterCidrRequest::DeleteTransitRouterCidrRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterCidr") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterCidrRequest::~DeleteTransitRouterCidrRequest() {}

long DeleteTransitRouterCidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterCidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterCidrRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterCidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTransitRouterCidrRequest::getTransitRouterCidrId() const {
  return transitRouterCidrId_;
}

void DeleteTransitRouterCidrRequest::setTransitRouterCidrId(const std::string &transitRouterCidrId) {
  transitRouterCidrId_ = transitRouterCidrId;
  setParameter(std::string("TransitRouterCidrId"), transitRouterCidrId);
}

std::string DeleteTransitRouterCidrRequest::getRegionId() const {
  return regionId_;
}

void DeleteTransitRouterCidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTransitRouterCidrRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterCidrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterCidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterCidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterCidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterCidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterCidrRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterCidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterCidrRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void DeleteTransitRouterCidrRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string DeleteTransitRouterCidrRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterCidrRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

