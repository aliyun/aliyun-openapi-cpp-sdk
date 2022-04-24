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

#include <alibabacloud/bssopenapi/model/DescribeInstanceBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeInstanceBillRequest;

DescribeInstanceBillRequest::DescribeInstanceBillRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeInstanceBill") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceBillRequest::~DescribeInstanceBillRequest() {}

std::string DescribeInstanceBillRequest::getProductCode() const {
  return productCode_;
}

void DescribeInstanceBillRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

bool DescribeInstanceBillRequest::getIsHideZeroCharge() const {
  return isHideZeroCharge_;
}

void DescribeInstanceBillRequest::setIsHideZeroCharge(bool isHideZeroCharge) {
  isHideZeroCharge_ = isHideZeroCharge;
  setParameter(std::string("IsHideZeroCharge"), isHideZeroCharge ? "true" : "false");
}

std::string DescribeInstanceBillRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeInstanceBillRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

long DescribeInstanceBillRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeInstanceBillRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeInstanceBillRequest::getProductType() const {
  return productType_;
}

void DescribeInstanceBillRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string DescribeInstanceBillRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInstanceBillRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeInstanceBillRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeInstanceBillRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

long DescribeInstanceBillRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceBillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceBillRequest::getBillingDate() const {
  return billingDate_;
}

void DescribeInstanceBillRequest::setBillingDate(const std::string &billingDate) {
  billingDate_ = billingDate;
  setParameter(std::string("BillingDate"), billingDate);
}

bool DescribeInstanceBillRequest::getIsBillingItem() const {
  return isBillingItem_;
}

void DescribeInstanceBillRequest::setIsBillingItem(bool isBillingItem) {
  isBillingItem_ = isBillingItem;
  setParameter(std::string("IsBillingItem"), isBillingItem ? "true" : "false");
}

std::string DescribeInstanceBillRequest::getInstanceID() const {
  return instanceID_;
}

void DescribeInstanceBillRequest::setInstanceID(const std::string &instanceID) {
  instanceID_ = instanceID;
  setParameter(std::string("InstanceID"), instanceID);
}

std::string DescribeInstanceBillRequest::getGranularity() const {
  return granularity_;
}

void DescribeInstanceBillRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

int DescribeInstanceBillRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInstanceBillRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

