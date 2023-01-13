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

#include <alibabacloud/cbn/model/DisableTransitRouterRouteTablePropagationRequest.h>

using AlibabaCloud::Cbn::Model::DisableTransitRouterRouteTablePropagationRequest;

DisableTransitRouterRouteTablePropagationRequest::DisableTransitRouterRouteTablePropagationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DisableTransitRouterRouteTablePropagation") {
  setMethod(HttpRequest::Method::Post);
}

DisableTransitRouterRouteTablePropagationRequest::~DisableTransitRouterRouteTablePropagationRequest() {}

long DisableTransitRouterRouteTablePropagationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableTransitRouterRouteTablePropagationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableTransitRouterRouteTablePropagationRequest::getClientToken() const {
  return clientToken_;
}

void DisableTransitRouterRouteTablePropagationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DisableTransitRouterRouteTablePropagationRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void DisableTransitRouterRouteTablePropagationRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

bool DisableTransitRouterRouteTablePropagationRequest::getDryRun() const {
  return dryRun_;
}

void DisableTransitRouterRouteTablePropagationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DisableTransitRouterRouteTablePropagationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableTransitRouterRouteTablePropagationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisableTransitRouterRouteTablePropagationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisableTransitRouterRouteTablePropagationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisableTransitRouterRouteTablePropagationRequest::getOwnerId() const {
  return ownerId_;
}

void DisableTransitRouterRouteTablePropagationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableTransitRouterRouteTablePropagationRequest::getVersion() const {
  return version_;
}

void DisableTransitRouterRouteTablePropagationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DisableTransitRouterRouteTablePropagationRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DisableTransitRouterRouteTablePropagationRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

