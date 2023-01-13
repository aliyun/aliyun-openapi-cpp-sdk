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

#include <alibabacloud/cbn/model/CreateTransitRouterMulticastDomainRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterMulticastDomainRequest;

CreateTransitRouterMulticastDomainRequest::CreateTransitRouterMulticastDomainRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterMulticastDomain") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterMulticastDomainRequest::~CreateTransitRouterMulticastDomainRequest() {}

long CreateTransitRouterMulticastDomainRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterMulticastDomainRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterMulticastDomainRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterMulticastDomainRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterMulticastDomainRequest::getCenId() const {
  return cenId_;
}

void CreateTransitRouterMulticastDomainRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string CreateTransitRouterMulticastDomainRequest::getMulticastType() const {
  return multicastType_;
}

void CreateTransitRouterMulticastDomainRequest::setMulticastType(const std::string &multicastType) {
  multicastType_ = multicastType;
  setParameter(std::string("MulticastType"), multicastType);
}

std::string CreateTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainDescription() const {
  return transitRouterMulticastDomainDescription_;
}

void CreateTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainDescription(const std::string &transitRouterMulticastDomainDescription) {
  transitRouterMulticastDomainDescription_ = transitRouterMulticastDomainDescription;
  setParameter(std::string("TransitRouterMulticastDomainDescription"), transitRouterMulticastDomainDescription);
}

std::string CreateTransitRouterMulticastDomainRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterMulticastDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainName() const {
  return transitRouterMulticastDomainName_;
}

void CreateTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainName(const std::string &transitRouterMulticastDomainName) {
  transitRouterMulticastDomainName_ = transitRouterMulticastDomainName;
  setParameter(std::string("TransitRouterMulticastDomainName"), transitRouterMulticastDomainName);
}

std::vector<CreateTransitRouterMulticastDomainRequest::Tag> CreateTransitRouterMulticastDomainRequest::getTag() const {
  return tag_;
}

void CreateTransitRouterMulticastDomainRequest::setTag(const std::vector<CreateTransitRouterMulticastDomainRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateTransitRouterMulticastDomainRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterMulticastDomainRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterMulticastDomainRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterMulticastDomainRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterMulticastDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterMulticastDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterMulticastDomainRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterMulticastDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterMulticastDomainRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterMulticastDomainRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateTransitRouterMulticastDomainRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterMulticastDomainRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

