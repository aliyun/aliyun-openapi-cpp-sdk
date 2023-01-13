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

#include <alibabacloud/cbn/model/EnableTransitRouterRouteTablePropagationRequest.h>

using AlibabaCloud::Cbn::Model::EnableTransitRouterRouteTablePropagationRequest;

EnableTransitRouterRouteTablePropagationRequest::EnableTransitRouterRouteTablePropagationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "EnableTransitRouterRouteTablePropagation") {
  setMethod(HttpRequest::Method::Post);
}

EnableTransitRouterRouteTablePropagationRequest::~EnableTransitRouterRouteTablePropagationRequest() {}

long EnableTransitRouterRouteTablePropagationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableTransitRouterRouteTablePropagationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableTransitRouterRouteTablePropagationRequest::getClientToken() const {
  return clientToken_;
}

void EnableTransitRouterRouteTablePropagationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableTransitRouterRouteTablePropagationRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void EnableTransitRouterRouteTablePropagationRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

bool EnableTransitRouterRouteTablePropagationRequest::getDryRun() const {
  return dryRun_;
}

void EnableTransitRouterRouteTablePropagationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string EnableTransitRouterRouteTablePropagationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableTransitRouterRouteTablePropagationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnableTransitRouterRouteTablePropagationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableTransitRouterRouteTablePropagationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableTransitRouterRouteTablePropagationRequest::getOwnerId() const {
  return ownerId_;
}

void EnableTransitRouterRouteTablePropagationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableTransitRouterRouteTablePropagationRequest::getVersion() const {
  return version_;
}

void EnableTransitRouterRouteTablePropagationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string EnableTransitRouterRouteTablePropagationRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void EnableTransitRouterRouteTablePropagationRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

