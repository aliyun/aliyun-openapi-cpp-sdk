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

#include <alibabacloud/vpc/model/CreateVSwitchCidrReservationRequest.h>

using AlibabaCloud::Vpc::Model::CreateVSwitchCidrReservationRequest;

CreateVSwitchCidrReservationRequest::CreateVSwitchCidrReservationRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVSwitchCidrReservation") {
  setMethod(HttpRequest::Method::Post);
}

CreateVSwitchCidrReservationRequest::~CreateVSwitchCidrReservationRequest() {}

long CreateVSwitchCidrReservationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVSwitchCidrReservationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVSwitchCidrReservationRequest::getClientToken() const {
  return clientToken_;
}

void CreateVSwitchCidrReservationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVSwitchCidrReservationRequest::getVSwitchCidrReservationType() const {
  return vSwitchCidrReservationType_;
}

void CreateVSwitchCidrReservationRequest::setVSwitchCidrReservationType(const std::string &vSwitchCidrReservationType) {
  vSwitchCidrReservationType_ = vSwitchCidrReservationType;
  setParameter(std::string("VSwitchCidrReservationType"), vSwitchCidrReservationType);
}

std::string CreateVSwitchCidrReservationRequest::getVSwitchCidrReservationDescription() const {
  return vSwitchCidrReservationDescription_;
}

void CreateVSwitchCidrReservationRequest::setVSwitchCidrReservationDescription(const std::string &vSwitchCidrReservationDescription) {
  vSwitchCidrReservationDescription_ = vSwitchCidrReservationDescription;
  setParameter(std::string("VSwitchCidrReservationDescription"), vSwitchCidrReservationDescription);
}

std::string CreateVSwitchCidrReservationRequest::getRegionId() const {
  return regionId_;
}

void CreateVSwitchCidrReservationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVSwitchCidrReservationRequest::getVSwitchCidrReservationName() const {
  return vSwitchCidrReservationName_;
}

void CreateVSwitchCidrReservationRequest::setVSwitchCidrReservationName(const std::string &vSwitchCidrReservationName) {
  vSwitchCidrReservationName_ = vSwitchCidrReservationName;
  setParameter(std::string("VSwitchCidrReservationName"), vSwitchCidrReservationName);
}

std::string CreateVSwitchCidrReservationRequest::getIpVersion() const {
  return ipVersion_;
}

void CreateVSwitchCidrReservationRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::vector<CreateVSwitchCidrReservationRequest::Tag> CreateVSwitchCidrReservationRequest::getTag() const {
  return tag_;
}

void CreateVSwitchCidrReservationRequest::setTag(const std::vector<CreateVSwitchCidrReservationRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateVSwitchCidrReservationRequest::getDryRun() const {
  return dryRun_;
}

void CreateVSwitchCidrReservationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVSwitchCidrReservationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVSwitchCidrReservationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVSwitchCidrReservationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVSwitchCidrReservationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateVSwitchCidrReservationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVSwitchCidrReservationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVSwitchCidrReservationRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateVSwitchCidrReservationRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateVSwitchCidrReservationRequest::getVSwitchCidrReservationMask() const {
  return vSwitchCidrReservationMask_;
}

void CreateVSwitchCidrReservationRequest::setVSwitchCidrReservationMask(const std::string &vSwitchCidrReservationMask) {
  vSwitchCidrReservationMask_ = vSwitchCidrReservationMask;
  setParameter(std::string("VSwitchCidrReservationMask"), vSwitchCidrReservationMask);
}

std::string CreateVSwitchCidrReservationRequest::getVSwitchCidrReservationCidr() const {
  return vSwitchCidrReservationCidr_;
}

void CreateVSwitchCidrReservationRequest::setVSwitchCidrReservationCidr(const std::string &vSwitchCidrReservationCidr) {
  vSwitchCidrReservationCidr_ = vSwitchCidrReservationCidr;
  setParameter(std::string("VSwitchCidrReservationCidr"), vSwitchCidrReservationCidr);
}

