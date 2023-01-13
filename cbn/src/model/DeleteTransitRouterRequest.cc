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

#include <alibabacloud/cbn/model/DeleteTransitRouterRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterRequest;

DeleteTransitRouterRequest::DeleteTransitRouterRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouter") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterRequest::~DeleteTransitRouterRequest() {}

long DeleteTransitRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouterRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void DeleteTransitRouterRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string DeleteTransitRouterRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

