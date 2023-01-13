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

#include <alibabacloud/cbn/model/CreateTransitRouterCidrRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterCidrRequest;

CreateTransitRouterCidrRequest::CreateTransitRouterCidrRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterCidr") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterCidrRequest::~CreateTransitRouterCidrRequest() {}

long CreateTransitRouterCidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterCidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterCidrRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterCidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterCidrRequest::getDescription() const {
  return description_;
}

void CreateTransitRouterCidrRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateTransitRouterCidrRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterCidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTransitRouterCidrRequest::getCidr() const {
  return cidr_;
}

void CreateTransitRouterCidrRequest::setCidr(const std::string &cidr) {
  cidr_ = cidr;
  setParameter(std::string("Cidr"), cidr);
}

bool CreateTransitRouterCidrRequest::getPublishCidrRoute() const {
  return publishCidrRoute_;
}

void CreateTransitRouterCidrRequest::setPublishCidrRoute(bool publishCidrRoute) {
  publishCidrRoute_ = publishCidrRoute;
  setParameter(std::string("PublishCidrRoute"), publishCidrRoute ? "true" : "false");
}

bool CreateTransitRouterCidrRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterCidrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterCidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterCidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterCidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterCidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterCidrRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterCidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterCidrRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterCidrRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateTransitRouterCidrRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterCidrRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateTransitRouterCidrRequest::getName() const {
  return name_;
}

void CreateTransitRouterCidrRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

