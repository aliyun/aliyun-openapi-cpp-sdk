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

#include <alibabacloud/dypnsapi/model/QueryGateVerifyStatisticPublicRequest.h>

using AlibabaCloud::Dypnsapi::Model::QueryGateVerifyStatisticPublicRequest;

QueryGateVerifyStatisticPublicRequest::QueryGateVerifyStatisticPublicRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "QueryGateVerifyStatisticPublic") {
  setMethod(HttpRequest::Method::Post);
}

QueryGateVerifyStatisticPublicRequest::~QueryGateVerifyStatisticPublicRequest() {}

long QueryGateVerifyStatisticPublicRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryGateVerifyStatisticPublicRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int QueryGateVerifyStatisticPublicRequest::getAuthenticationType() const {
  return authenticationType_;
}

void QueryGateVerifyStatisticPublicRequest::setAuthenticationType(int authenticationType) {
  authenticationType_ = authenticationType;
  setParameter(std::string("AuthenticationType"), std::to_string(authenticationType));
}

std::string QueryGateVerifyStatisticPublicRequest::getStartDate() const {
  return startDate_;
}

void QueryGateVerifyStatisticPublicRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string QueryGateVerifyStatisticPublicRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryGateVerifyStatisticPublicRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryGateVerifyStatisticPublicRequest::getSceneCode() const {
  return sceneCode_;
}

void QueryGateVerifyStatisticPublicRequest::setSceneCode(const std::string &sceneCode) {
  sceneCode_ = sceneCode;
  setParameter(std::string("SceneCode"), sceneCode);
}

std::string QueryGateVerifyStatisticPublicRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryGateVerifyStatisticPublicRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryGateVerifyStatisticPublicRequest::getProdCode() const {
  return prodCode_;
}

void QueryGateVerifyStatisticPublicRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string QueryGateVerifyStatisticPublicRequest::getOsType() const {
  return osType_;
}

void QueryGateVerifyStatisticPublicRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

long QueryGateVerifyStatisticPublicRequest::getOwnerId() const {
  return ownerId_;
}

void QueryGateVerifyStatisticPublicRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryGateVerifyStatisticPublicRequest::getEndDate() const {
  return endDate_;
}

void QueryGateVerifyStatisticPublicRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

