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

#include <alibabacloud/smartag/model/AddDnatEntryRequest.h>

using AlibabaCloud::Smartag::Model::AddDnatEntryRequest;

AddDnatEntryRequest::AddDnatEntryRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "AddDnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

AddDnatEntryRequest::~AddDnatEntryRequest() {}

long AddDnatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddDnatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddDnatEntryRequest::getType() const {
  return type_;
}

void AddDnatEntryRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddDnatEntryRequest::getInternalIp() const {
  return internalIp_;
}

void AddDnatEntryRequest::setInternalIp(const std::string &internalIp) {
  internalIp_ = internalIp;
  setParameter(std::string("InternalIp"), internalIp);
}

std::string AddDnatEntryRequest::getRegionId() const {
  return regionId_;
}

void AddDnatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddDnatEntryRequest::getExternalIp() const {
  return externalIp_;
}

void AddDnatEntryRequest::setExternalIp(const std::string &externalIp) {
  externalIp_ = externalIp;
  setParameter(std::string("ExternalIp"), externalIp);
}

std::string AddDnatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddDnatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddDnatEntryRequest::getIpProtocol() const {
  return ipProtocol_;
}

void AddDnatEntryRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string AddDnatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddDnatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddDnatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void AddDnatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddDnatEntryRequest::getSagId() const {
  return sagId_;
}

void AddDnatEntryRequest::setSagId(const std::string &sagId) {
  sagId_ = sagId;
  setParameter(std::string("SagId"), sagId);
}

std::string AddDnatEntryRequest::getInternalPort() const {
  return internalPort_;
}

void AddDnatEntryRequest::setInternalPort(const std::string &internalPort) {
  internalPort_ = internalPort;
  setParameter(std::string("InternalPort"), internalPort);
}

std::string AddDnatEntryRequest::getExternalPort() const {
  return externalPort_;
}

void AddDnatEntryRequest::setExternalPort(const std::string &externalPort) {
  externalPort_ = externalPort;
  setParameter(std::string("ExternalPort"), externalPort);
}

