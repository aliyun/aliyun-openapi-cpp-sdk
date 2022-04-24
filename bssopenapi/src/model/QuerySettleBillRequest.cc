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

#include <alibabacloud/bssopenapi/model/QuerySettleBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySettleBillRequest;

QuerySettleBillRequest::QuerySettleBillRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySettleBill") {
  setMethod(HttpRequest::Method::Post);
}

QuerySettleBillRequest::~QuerySettleBillRequest() {}

std::string QuerySettleBillRequest::getProductCode() const {
  return productCode_;
}

void QuerySettleBillRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

bool QuerySettleBillRequest::getIsHideZeroCharge() const {
  return isHideZeroCharge_;
}

void QuerySettleBillRequest::setIsHideZeroCharge(bool isHideZeroCharge) {
  isHideZeroCharge_ = isHideZeroCharge;
  setParameter(std::string("IsHideZeroCharge"), isHideZeroCharge ? "true" : "false");
}

bool QuerySettleBillRequest::getIsDisplayLocalCurrency() const {
  return isDisplayLocalCurrency_;
}

void QuerySettleBillRequest::setIsDisplayLocalCurrency(bool isDisplayLocalCurrency) {
  isDisplayLocalCurrency_ = isDisplayLocalCurrency;
  setParameter(std::string("IsDisplayLocalCurrency"), isDisplayLocalCurrency ? "true" : "false");
}

std::string QuerySettleBillRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QuerySettleBillRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string QuerySettleBillRequest::getBillingCycle() const {
  return billingCycle_;
}

void QuerySettleBillRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

std::string QuerySettleBillRequest::getType() const {
  return type_;
}

void QuerySettleBillRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long QuerySettleBillRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySettleBillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long QuerySettleBillRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void QuerySettleBillRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string QuerySettleBillRequest::getProductType() const {
  return productType_;
}

void QuerySettleBillRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string QuerySettleBillRequest::getRecordID() const {
  return recordID_;
}

void QuerySettleBillRequest::setRecordID(const std::string &recordID) {
  recordID_ = recordID;
  setParameter(std::string("RecordID"), recordID);
}

std::string QuerySettleBillRequest::getNextToken() const {
  return nextToken_;
}

void QuerySettleBillRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int QuerySettleBillRequest::getMaxResults() const {
  return maxResults_;
}

void QuerySettleBillRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

