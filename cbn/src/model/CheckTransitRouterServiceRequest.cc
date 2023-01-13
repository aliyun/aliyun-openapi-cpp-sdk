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

#include <alibabacloud/cbn/model/CheckTransitRouterServiceRequest.h>

using AlibabaCloud::Cbn::Model::CheckTransitRouterServiceRequest;

CheckTransitRouterServiceRequest::CheckTransitRouterServiceRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CheckTransitRouterService") {
  setMethod(HttpRequest::Method::Post);
}

CheckTransitRouterServiceRequest::~CheckTransitRouterServiceRequest() {}

long CheckTransitRouterServiceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckTransitRouterServiceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckTransitRouterServiceRequest::getClientToken() const {
  return clientToken_;
}

void CheckTransitRouterServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CheckTransitRouterServiceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckTransitRouterServiceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckTransitRouterServiceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckTransitRouterServiceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckTransitRouterServiceRequest::getOwnerId() const {
  return ownerId_;
}

void CheckTransitRouterServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckTransitRouterServiceRequest::getVersion() const {
  return version_;
}

void CheckTransitRouterServiceRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

