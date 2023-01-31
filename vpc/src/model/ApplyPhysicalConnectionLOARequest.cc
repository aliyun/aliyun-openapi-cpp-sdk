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

#include <alibabacloud/vpc/model/ApplyPhysicalConnectionLOARequest.h>

using AlibabaCloud::Vpc::Model::ApplyPhysicalConnectionLOARequest;

ApplyPhysicalConnectionLOARequest::ApplyPhysicalConnectionLOARequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ApplyPhysicalConnectionLOA") {
  setMethod(HttpRequest::Method::Post);
}

ApplyPhysicalConnectionLOARequest::~ApplyPhysicalConnectionLOARequest() {}

long ApplyPhysicalConnectionLOARequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ApplyPhysicalConnectionLOARequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ApplyPhysicalConnectionLOARequest::getClientToken() const {
  return clientToken_;
}

void ApplyPhysicalConnectionLOARequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ApplyPhysicalConnectionLOARequest::getLineType() const {
  return lineType_;
}

void ApplyPhysicalConnectionLOARequest::setLineType(const std::string &lineType) {
  lineType_ = lineType;
  setParameter(std::string("LineType"), lineType);
}

std::string ApplyPhysicalConnectionLOARequest::getRegionId() const {
  return regionId_;
}

void ApplyPhysicalConnectionLOARequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ApplyPhysicalConnectionLOARequest::getSi() const {
  return si_;
}

void ApplyPhysicalConnectionLOARequest::setSi(const std::string &si) {
  si_ = si;
  setParameter(std::string("Si"), si);
}

std::string ApplyPhysicalConnectionLOARequest::getPeerLocation() const {
  return peerLocation_;
}

void ApplyPhysicalConnectionLOARequest::setPeerLocation(const std::string &peerLocation) {
  peerLocation_ = peerLocation;
  setParameter(std::string("PeerLocation"), peerLocation);
}

std::string ApplyPhysicalConnectionLOARequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ApplyPhysicalConnectionLOARequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ApplyPhysicalConnectionLOARequest::getBandwidth() const {
  return bandwidth_;
}

void ApplyPhysicalConnectionLOARequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ApplyPhysicalConnectionLOARequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ApplyPhysicalConnectionLOARequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ApplyPhysicalConnectionLOARequest::getConstructionTime() const {
  return constructionTime_;
}

void ApplyPhysicalConnectionLOARequest::setConstructionTime(const std::string &constructionTime) {
  constructionTime_ = constructionTime;
  setParameter(std::string("ConstructionTime"), constructionTime);
}

long ApplyPhysicalConnectionLOARequest::getOwnerId() const {
  return ownerId_;
}

void ApplyPhysicalConnectionLOARequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ApplyPhysicalConnectionLOARequest::getInstanceId() const {
  return instanceId_;
}

void ApplyPhysicalConnectionLOARequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ApplyPhysicalConnectionLOARequest::getCompanyName() const {
  return companyName_;
}

void ApplyPhysicalConnectionLOARequest::setCompanyName(const std::string &companyName) {
  companyName_ = companyName;
  setParameter(std::string("CompanyName"), companyName);
}

std::vector<ApplyPhysicalConnectionLOARequest::PMInfo> ApplyPhysicalConnectionLOARequest::getPMInfo() const {
  return pMInfo_;
}

void ApplyPhysicalConnectionLOARequest::setPMInfo(const std::vector<ApplyPhysicalConnectionLOARequest::PMInfo> &pMInfo) {
  pMInfo_ = pMInfo;
  for(int dep1 = 0; dep1 != pMInfo.size(); dep1++) {
  auto pMInfoObj = pMInfo.at(dep1);
  std::string pMInfoObjStr = std::string("PMInfo") + "." + std::to_string(dep1 + 1);
    setParameter(pMInfoObjStr + ".PMCertificateNo", pMInfoObj.pMCertificateNo);
    setParameter(pMInfoObjStr + ".PMName", pMInfoObj.pMName);
    setParameter(pMInfoObjStr + ".PMCertificateType", pMInfoObj.pMCertificateType);
    setParameter(pMInfoObjStr + ".PMGender", pMInfoObj.pMGender);
    setParameter(pMInfoObjStr + ".PMContactInfo", pMInfoObj.pMContactInfo);
  }
}

