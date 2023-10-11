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

#include <alibabacloud/dypnsapi/model/QueryGateVerifyBillingPublicRequest.h>

using AlibabaCloud::Dypnsapi::Model::QueryGateVerifyBillingPublicRequest;

QueryGateVerifyBillingPublicRequest::QueryGateVerifyBillingPublicRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "QueryGateVerifyBillingPublic") {
  setMethod(HttpRequest::Method::Post);
}

QueryGateVerifyBillingPublicRequest::~QueryGateVerifyBillingPublicRequest() {}

long QueryGateVerifyBillingPublicRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryGateVerifyBillingPublicRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int QueryGateVerifyBillingPublicRequest::getAuthenticationType() const {
  return authenticationType_;
}

void QueryGateVerifyBillingPublicRequest::setAuthenticationType(int authenticationType) {
  authenticationType_ = authenticationType;
  setParameter(std::string("AuthenticationType"), std::to_string(authenticationType));
}

std::string QueryGateVerifyBillingPublicRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryGateVerifyBillingPublicRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryGateVerifyBillingPublicRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryGateVerifyBillingPublicRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryGateVerifyBillingPublicRequest::getProdCode() const {
  return prodCode_;
}

void QueryGateVerifyBillingPublicRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long QueryGateVerifyBillingPublicRequest::getOwnerId() const {
  return ownerId_;
}

void QueryGateVerifyBillingPublicRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryGateVerifyBillingPublicRequest::getMonth() const {
  return month_;
}

void QueryGateVerifyBillingPublicRequest::setMonth(const std::string &month) {
  month_ = month;
  setParameter(std::string("Month"), month);
}

