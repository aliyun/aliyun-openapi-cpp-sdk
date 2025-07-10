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

#include <alibabacloud/vpc/model/SecondApplyPhysicalConnectionLOARequest.h>

using AlibabaCloud::Vpc::Model::SecondApplyPhysicalConnectionLOARequest;

SecondApplyPhysicalConnectionLOARequest::SecondApplyPhysicalConnectionLOARequest()
    : RpcServiceRequest("vpc", "2016-04-28", "SecondApplyPhysicalConnectionLOA") {
  setMethod(HttpRequest::Method::Post);
}

SecondApplyPhysicalConnectionLOARequest::~SecondApplyPhysicalConnectionLOARequest() {}

long SecondApplyPhysicalConnectionLOARequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SecondApplyPhysicalConnectionLOARequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SecondApplyPhysicalConnectionLOARequest::getClientToken() const {
  return clientToken_;
}

void SecondApplyPhysicalConnectionLOARequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SecondApplyPhysicalConnectionLOARequest::getLineType() const {
  return lineType_;
}

void SecondApplyPhysicalConnectionLOARequest::setLineType(const std::string &lineType) {
  lineType_ = lineType;
  setParameter(std::string("LineType"), lineType);
}

std::string SecondApplyPhysicalConnectionLOARequest::getRegionId() const {
  return regionId_;
}

void SecondApplyPhysicalConnectionLOARequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SecondApplyPhysicalConnectionLOARequest::getSi() const {
  return si_;
}

void SecondApplyPhysicalConnectionLOARequest::setSi(const std::string &si) {
  si_ = si;
  setParameter(std::string("Si"), si);
}

std::string SecondApplyPhysicalConnectionLOARequest::getPeerLocation() const {
  return peerLocation_;
}

void SecondApplyPhysicalConnectionLOARequest::setPeerLocation(const std::string &peerLocation) {
  peerLocation_ = peerLocation;
  setParameter(std::string("PeerLocation"), peerLocation);
}

std::string SecondApplyPhysicalConnectionLOARequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SecondApplyPhysicalConnectionLOARequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int SecondApplyPhysicalConnectionLOARequest::getBandwidth() const {
  return bandwidth_;
}

void SecondApplyPhysicalConnectionLOARequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string SecondApplyPhysicalConnectionLOARequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SecondApplyPhysicalConnectionLOARequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SecondApplyPhysicalConnectionLOARequest::getConstructionTime() const {
  return constructionTime_;
}

void SecondApplyPhysicalConnectionLOARequest::setConstructionTime(const std::string &constructionTime) {
  constructionTime_ = constructionTime;
  setParameter(std::string("ConstructionTime"), constructionTime);
}

long SecondApplyPhysicalConnectionLOARequest::getOwnerId() const {
  return ownerId_;
}

void SecondApplyPhysicalConnectionLOARequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SecondApplyPhysicalConnectionLOARequest::getInstanceId() const {
  return instanceId_;
}

void SecondApplyPhysicalConnectionLOARequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SecondApplyPhysicalConnectionLOARequest::getCompanyName() const {
  return companyName_;
}

void SecondApplyPhysicalConnectionLOARequest::setCompanyName(const std::string &companyName) {
  companyName_ = companyName;
  setParameter(std::string("CompanyName"), companyName);
}

std::vector<SecondApplyPhysicalConnectionLOARequest::PMInfo> SecondApplyPhysicalConnectionLOARequest::getPMInfo() const {
  return pMInfo_;
}

void SecondApplyPhysicalConnectionLOARequest::setPMInfo(const std::vector<SecondApplyPhysicalConnectionLOARequest::PMInfo> &pMInfo) {
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

