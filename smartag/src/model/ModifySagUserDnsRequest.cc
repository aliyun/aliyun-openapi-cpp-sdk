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

#include <alibabacloud/smartag/model/ModifySagUserDnsRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagUserDnsRequest;

ModifySagUserDnsRequest::ModifySagUserDnsRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagUserDns") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagUserDnsRequest::~ModifySagUserDnsRequest() {}

long ModifySagUserDnsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagUserDnsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagUserDnsRequest::getSlaveDns() const {
  return slaveDns_;
}

void ModifySagUserDnsRequest::setSlaveDns(const std::string &slaveDns) {
  slaveDns_ = slaveDns;
  setParameter(std::string("SlaveDns"), slaveDns);
}

std::string ModifySagUserDnsRequest::getRegionId() const {
  return regionId_;
}

void ModifySagUserDnsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagUserDnsRequest::getMasterDns() const {
  return masterDns_;
}

void ModifySagUserDnsRequest::setMasterDns(const std::string &masterDns) {
  masterDns_ = masterDns;
  setParameter(std::string("MasterDns"), masterDns);
}

std::string ModifySagUserDnsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagUserDnsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagUserDnsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagUserDnsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagUserDnsRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagUserDnsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagUserDnsRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagUserDnsRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagUserDnsRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagUserDnsRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

