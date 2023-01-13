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

#include <alibabacloud/cbn/model/CreateTransitRouterRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterRequest;

CreateTransitRouterRequest::CreateTransitRouterRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouter") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterRequest::~CreateTransitRouterRequest() {}

std::string CreateTransitRouterRequest::getTransitRouterName() const {
  return transitRouterName_;
}

void CreateTransitRouterRequest::setTransitRouterName(const std::string &transitRouterName) {
  transitRouterName_ = transitRouterName;
  setParameter(std::string("TransitRouterName"), transitRouterName);
}

long CreateTransitRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterRequest::getServiceMode() const {
  return serviceMode_;
}

void CreateTransitRouterRequest::setServiceMode(const std::string &serviceMode) {
  serviceMode_ = serviceMode;
  setParameter(std::string("ServiceMode"), serviceMode);
}

std::string CreateTransitRouterRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterRequest::getCenId() const {
  return cenId_;
}

void CreateTransitRouterRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::vector<CreateTransitRouterRequest::TransitRouterCidrList> CreateTransitRouterRequest::getTransitRouterCidrList() const {
  return transitRouterCidrList_;
}

void CreateTransitRouterRequest::setTransitRouterCidrList(const std::vector<CreateTransitRouterRequest::TransitRouterCidrList> &transitRouterCidrList) {
  transitRouterCidrList_ = transitRouterCidrList;
  for(int dep1 = 0; dep1 != transitRouterCidrList.size(); dep1++) {
    setParameter(std::string("TransitRouterCidrList") + "." + std::to_string(dep1 + 1) + ".Name", transitRouterCidrList[dep1].name);
    setParameter(std::string("TransitRouterCidrList") + "." + std::to_string(dep1 + 1) + ".Description", transitRouterCidrList[dep1].description);
    setParameter(std::string("TransitRouterCidrList") + "." + std::to_string(dep1 + 1) + ".Cidr", transitRouterCidrList[dep1].cidr);
    setParameter(std::string("TransitRouterCidrList") + "." + std::to_string(dep1 + 1) + ".PublishCidrRoute", transitRouterCidrList[dep1].publishCidrRoute ? "true" : "false");
  }
}

std::string CreateTransitRouterRequest::getType() const {
  return type_;
}

void CreateTransitRouterRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateTransitRouterRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateTransitRouterRequest::Tag> CreateTransitRouterRequest::getTag() const {
  return tag_;
}

void CreateTransitRouterRequest::setTag(const std::vector<CreateTransitRouterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateTransitRouterRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterRequest::getTransitRouterDescription() const {
  return transitRouterDescription_;
}

void CreateTransitRouterRequest::setTransitRouterDescription(const std::string &transitRouterDescription) {
  transitRouterDescription_ = transitRouterDescription;
  setParameter(std::string("TransitRouterDescription"), transitRouterDescription);
}

bool CreateTransitRouterRequest::getSupportMulticast() const {
  return supportMulticast_;
}

void CreateTransitRouterRequest::setSupportMulticast(bool supportMulticast) {
  supportMulticast_ = supportMulticast;
  setParameter(std::string("SupportMulticast"), supportMulticast ? "true" : "false");
}

std::string CreateTransitRouterRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

