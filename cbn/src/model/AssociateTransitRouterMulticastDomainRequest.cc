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

#include <alibabacloud/cbn/model/AssociateTransitRouterMulticastDomainRequest.h>

using AlibabaCloud::Cbn::Model::AssociateTransitRouterMulticastDomainRequest;

AssociateTransitRouterMulticastDomainRequest::AssociateTransitRouterMulticastDomainRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "AssociateTransitRouterMulticastDomain") {
  setMethod(HttpRequest::Method::Post);
}

AssociateTransitRouterMulticastDomainRequest::~AssociateTransitRouterMulticastDomainRequest() {}

long AssociateTransitRouterMulticastDomainRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateTransitRouterMulticastDomainRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateTransitRouterMulticastDomainRequest::getClientToken() const {
  return clientToken_;
}

void AssociateTransitRouterMulticastDomainRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> AssociateTransitRouterMulticastDomainRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void AssociateTransitRouterMulticastDomainRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::string AssociateTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void AssociateTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

bool AssociateTransitRouterMulticastDomainRequest::getDryRun() const {
  return dryRun_;
}

void AssociateTransitRouterMulticastDomainRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateTransitRouterMulticastDomainRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateTransitRouterMulticastDomainRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateTransitRouterMulticastDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateTransitRouterMulticastDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateTransitRouterMulticastDomainRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateTransitRouterMulticastDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateTransitRouterMulticastDomainRequest::getVersion() const {
  return version_;
}

void AssociateTransitRouterMulticastDomainRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string AssociateTransitRouterMulticastDomainRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void AssociateTransitRouterMulticastDomainRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

