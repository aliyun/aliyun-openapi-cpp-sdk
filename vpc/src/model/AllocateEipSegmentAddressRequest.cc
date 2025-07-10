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

#include <alibabacloud/vpc/model/AllocateEipSegmentAddressRequest.h>

using AlibabaCloud::Vpc::Model::AllocateEipSegmentAddressRequest;

AllocateEipSegmentAddressRequest::AllocateEipSegmentAddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AllocateEipSegmentAddress") {
  setMethod(HttpRequest::Method::Post);
}

AllocateEipSegmentAddressRequest::~AllocateEipSegmentAddressRequest() {}

long AllocateEipSegmentAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateEipSegmentAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateEipSegmentAddressRequest::getClientToken() const {
  return clientToken_;
}

void AllocateEipSegmentAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateEipSegmentAddressRequest::getIsp() const {
  return isp_;
}

void AllocateEipSegmentAddressRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string AllocateEipSegmentAddressRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AllocateEipSegmentAddressRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AllocateEipSegmentAddressRequest::getRegionId() const {
  return regionId_;
}

void AllocateEipSegmentAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateEipSegmentAddressRequest::getZone() const {
  return zone_;
}

void AllocateEipSegmentAddressRequest::setZone(const std::string &zone) {
  zone_ = zone;
  setParameter(std::string("Zone"), zone);
}

std::string AllocateEipSegmentAddressRequest::getNetmode() const {
  return netmode_;
}

void AllocateEipSegmentAddressRequest::setNetmode(const std::string &netmode) {
  netmode_ = netmode;
  setParameter(std::string("Netmode"), netmode);
}

std::string AllocateEipSegmentAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateEipSegmentAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateEipSegmentAddressRequest::getBandwidth() const {
  return bandwidth_;
}

void AllocateEipSegmentAddressRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string AllocateEipSegmentAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateEipSegmentAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AllocateEipSegmentAddressRequest::getEipMask() const {
  return eipMask_;
}

void AllocateEipSegmentAddressRequest::setEipMask(const std::string &eipMask) {
  eipMask_ = eipMask;
  setParameter(std::string("EipMask"), eipMask);
}

long AllocateEipSegmentAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateEipSegmentAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateEipSegmentAddressRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void AllocateEipSegmentAddressRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

