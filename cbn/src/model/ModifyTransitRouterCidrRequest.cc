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

#include <alibabacloud/cbn/model/ModifyTransitRouterCidrRequest.h>

using AlibabaCloud::Cbn::Model::ModifyTransitRouterCidrRequest;

ModifyTransitRouterCidrRequest::ModifyTransitRouterCidrRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyTransitRouterCidr") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTransitRouterCidrRequest::~ModifyTransitRouterCidrRequest() {}

long ModifyTransitRouterCidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyTransitRouterCidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyTransitRouterCidrRequest::getClientToken() const {
  return clientToken_;
}

void ModifyTransitRouterCidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyTransitRouterCidrRequest::getDescription() const {
  return description_;
}

void ModifyTransitRouterCidrRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyTransitRouterCidrRequest::getTransitRouterCidrId() const {
  return transitRouterCidrId_;
}

void ModifyTransitRouterCidrRequest::setTransitRouterCidrId(const std::string &transitRouterCidrId) {
  transitRouterCidrId_ = transitRouterCidrId;
  setParameter(std::string("TransitRouterCidrId"), transitRouterCidrId);
}

std::string ModifyTransitRouterCidrRequest::getRegionId() const {
  return regionId_;
}

void ModifyTransitRouterCidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyTransitRouterCidrRequest::getCidr() const {
  return cidr_;
}

void ModifyTransitRouterCidrRequest::setCidr(const std::string &cidr) {
  cidr_ = cidr;
  setParameter(std::string("Cidr"), cidr);
}

bool ModifyTransitRouterCidrRequest::getPublishCidrRoute() const {
  return publishCidrRoute_;
}

void ModifyTransitRouterCidrRequest::setPublishCidrRoute(bool publishCidrRoute) {
  publishCidrRoute_ = publishCidrRoute;
  setParameter(std::string("PublishCidrRoute"), publishCidrRoute ? "true" : "false");
}

bool ModifyTransitRouterCidrRequest::getDryRun() const {
  return dryRun_;
}

void ModifyTransitRouterCidrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyTransitRouterCidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyTransitRouterCidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyTransitRouterCidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyTransitRouterCidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyTransitRouterCidrRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyTransitRouterCidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyTransitRouterCidrRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ModifyTransitRouterCidrRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ModifyTransitRouterCidrRequest::getVersion() const {
  return version_;
}

void ModifyTransitRouterCidrRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ModifyTransitRouterCidrRequest::getName() const {
  return name_;
}

void ModifyTransitRouterCidrRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

