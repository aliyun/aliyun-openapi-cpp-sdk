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

#include <alibabacloud/cbn/model/DisassociateTransitRouterMulticastDomainRequest.h>

using AlibabaCloud::Cbn::Model::DisassociateTransitRouterMulticastDomainRequest;

DisassociateTransitRouterMulticastDomainRequest::DisassociateTransitRouterMulticastDomainRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DisassociateTransitRouterMulticastDomain") {
  setMethod(HttpRequest::Method::Post);
}

DisassociateTransitRouterMulticastDomainRequest::~DisassociateTransitRouterMulticastDomainRequest() {}

long DisassociateTransitRouterMulticastDomainRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisassociateTransitRouterMulticastDomainRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisassociateTransitRouterMulticastDomainRequest::getClientToken() const {
  return clientToken_;
}

void DisassociateTransitRouterMulticastDomainRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DisassociateTransitRouterMulticastDomainRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void DisassociateTransitRouterMulticastDomainRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::string DisassociateTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void DisassociateTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

bool DisassociateTransitRouterMulticastDomainRequest::getDryRun() const {
  return dryRun_;
}

void DisassociateTransitRouterMulticastDomainRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DisassociateTransitRouterMulticastDomainRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisassociateTransitRouterMulticastDomainRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisassociateTransitRouterMulticastDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisassociateTransitRouterMulticastDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisassociateTransitRouterMulticastDomainRequest::getOwnerId() const {
  return ownerId_;
}

void DisassociateTransitRouterMulticastDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisassociateTransitRouterMulticastDomainRequest::getVersion() const {
  return version_;
}

void DisassociateTransitRouterMulticastDomainRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DisassociateTransitRouterMulticastDomainRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DisassociateTransitRouterMulticastDomainRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

