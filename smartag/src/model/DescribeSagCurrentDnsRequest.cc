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

#include <alibabacloud/smartag/model/DescribeSagCurrentDnsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagCurrentDnsRequest;

DescribeSagCurrentDnsRequest::DescribeSagCurrentDnsRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagCurrentDns") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagCurrentDnsRequest::~DescribeSagCurrentDnsRequest() {}

long DescribeSagCurrentDnsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagCurrentDnsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagCurrentDnsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagCurrentDnsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagCurrentDnsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagCurrentDnsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagCurrentDnsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagCurrentDnsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagCurrentDnsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagCurrentDnsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagCurrentDnsRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagCurrentDnsRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DescribeSagCurrentDnsRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DescribeSagCurrentDnsRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

