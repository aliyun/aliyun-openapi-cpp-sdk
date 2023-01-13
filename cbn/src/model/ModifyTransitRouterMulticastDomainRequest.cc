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

#include <alibabacloud/cbn/model/ModifyTransitRouterMulticastDomainRequest.h>

using AlibabaCloud::Cbn::Model::ModifyTransitRouterMulticastDomainRequest;

ModifyTransitRouterMulticastDomainRequest::ModifyTransitRouterMulticastDomainRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyTransitRouterMulticastDomain") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTransitRouterMulticastDomainRequest::~ModifyTransitRouterMulticastDomainRequest() {}

long ModifyTransitRouterMulticastDomainRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyTransitRouterMulticastDomainRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyTransitRouterMulticastDomainRequest::getClientToken() const {
  return clientToken_;
}

void ModifyTransitRouterMulticastDomainRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void ModifyTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::string ModifyTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainDescription() const {
  return transitRouterMulticastDomainDescription_;
}

void ModifyTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainDescription(const std::string &transitRouterMulticastDomainDescription) {
  transitRouterMulticastDomainDescription_ = transitRouterMulticastDomainDescription;
  setParameter(std::string("TransitRouterMulticastDomainDescription"), transitRouterMulticastDomainDescription);
}

std::string ModifyTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainName() const {
  return transitRouterMulticastDomainName_;
}

void ModifyTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainName(const std::string &transitRouterMulticastDomainName) {
  transitRouterMulticastDomainName_ = transitRouterMulticastDomainName;
  setParameter(std::string("TransitRouterMulticastDomainName"), transitRouterMulticastDomainName);
}

bool ModifyTransitRouterMulticastDomainRequest::getDryRun() const {
  return dryRun_;
}

void ModifyTransitRouterMulticastDomainRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyTransitRouterMulticastDomainRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyTransitRouterMulticastDomainRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyTransitRouterMulticastDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyTransitRouterMulticastDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyTransitRouterMulticastDomainRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyTransitRouterMulticastDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyTransitRouterMulticastDomainRequest::getVersion() const {
  return version_;
}

void ModifyTransitRouterMulticastDomainRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

