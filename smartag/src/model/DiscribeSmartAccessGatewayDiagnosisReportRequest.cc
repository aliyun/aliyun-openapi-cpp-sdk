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

#include <alibabacloud/smartag/model/DiscribeSmartAccessGatewayDiagnosisReportRequest.h>

using AlibabaCloud::Smartag::Model::DiscribeSmartAccessGatewayDiagnosisReportRequest;

DiscribeSmartAccessGatewayDiagnosisReportRequest::DiscribeSmartAccessGatewayDiagnosisReportRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DiscribeSmartAccessGatewayDiagnosisReport") {
  setMethod(HttpRequest::Method::Post);
}

DiscribeSmartAccessGatewayDiagnosisReportRequest::~DiscribeSmartAccessGatewayDiagnosisReportRequest() {}

long DiscribeSmartAccessGatewayDiagnosisReportRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DiscribeSmartAccessGatewayDiagnosisReportRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DiscribeSmartAccessGatewayDiagnosisReportRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DiscribeSmartAccessGatewayDiagnosisReportRequest::getOwnerId() const {
  return ownerId_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DiscribeSmartAccessGatewayDiagnosisReportRequest::getRegionId() const {
  return regionId_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DiscribeSmartAccessGatewayDiagnosisReportRequest::getSmartAGId() const {
  return smartAGId_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DiscribeSmartAccessGatewayDiagnosisReportRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DiscribeSmartAccessGatewayDiagnosisReportRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

