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

#include <alibabacloud/bssopenapi/model/QueryInstanceBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryInstanceBillRequest;

QueryInstanceBillRequest::QueryInstanceBillRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryInstanceBill") {
  setMethod(HttpRequest::Method::Post);
}

QueryInstanceBillRequest::~QueryInstanceBillRequest() {}

std::string QueryInstanceBillRequest::getProductCode() const {
  return productCode_;
}

void QueryInstanceBillRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

bool QueryInstanceBillRequest::getIsHideZeroCharge() const {
  return isHideZeroCharge_;
}

void QueryInstanceBillRequest::setIsHideZeroCharge(bool isHideZeroCharge) {
  isHideZeroCharge_ = isHideZeroCharge;
  setParameter(std::string("IsHideZeroCharge"), isHideZeroCharge ? "true" : "false");
}

std::string QueryInstanceBillRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QueryInstanceBillRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string QueryInstanceBillRequest::getBillingCycle() const {
  return billingCycle_;
}

void QueryInstanceBillRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

long QueryInstanceBillRequest::getOwnerId() const {
  return ownerId_;
}

void QueryInstanceBillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int QueryInstanceBillRequest::getPageNum() const {
  return pageNum_;
}

void QueryInstanceBillRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long QueryInstanceBillRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void QueryInstanceBillRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string QueryInstanceBillRequest::getBillingDate() const {
  return billingDate_;
}

void QueryInstanceBillRequest::setBillingDate(const std::string &billingDate) {
  billingDate_ = billingDate;
  setParameter(std::string("BillingDate"), billingDate);
}

std::string QueryInstanceBillRequest::getProductType() const {
  return productType_;
}

void QueryInstanceBillRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

bool QueryInstanceBillRequest::getIsBillingItem() const {
  return isBillingItem_;
}

void QueryInstanceBillRequest::setIsBillingItem(bool isBillingItem) {
  isBillingItem_ = isBillingItem;
  setParameter(std::string("IsBillingItem"), isBillingItem ? "true" : "false");
}

std::string QueryInstanceBillRequest::getGranularity() const {
  return granularity_;
}

void QueryInstanceBillRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

int QueryInstanceBillRequest::getPageSize() const {
  return pageSize_;
}

void QueryInstanceBillRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

