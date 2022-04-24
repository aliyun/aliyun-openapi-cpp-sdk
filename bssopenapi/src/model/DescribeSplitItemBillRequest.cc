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

#include <alibabacloud/bssopenapi/model/DescribeSplitItemBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeSplitItemBillRequest;

DescribeSplitItemBillRequest::DescribeSplitItemBillRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeSplitItemBill") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSplitItemBillRequest::~DescribeSplitItemBillRequest() {}

std::string DescribeSplitItemBillRequest::getProductCode() const {
  return productCode_;
}

void DescribeSplitItemBillRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string DescribeSplitItemBillRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeSplitItemBillRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

long DescribeSplitItemBillRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeSplitItemBillRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeSplitItemBillRequest::getProductType() const {
  return productType_;
}

void DescribeSplitItemBillRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string DescribeSplitItemBillRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSplitItemBillRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeSplitItemBillRequest::getSplitItemID() const {
  return splitItemID_;
}

void DescribeSplitItemBillRequest::setSplitItemID(const std::string &splitItemID) {
  splitItemID_ = splitItemID;
  setParameter(std::string("SplitItemID"), splitItemID);
}

std::string DescribeSplitItemBillRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeSplitItemBillRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

long DescribeSplitItemBillRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSplitItemBillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeSplitItemBillRequest::TagFilter> DescribeSplitItemBillRequest::getTagFilter() const {
  return tagFilter_;
}

void DescribeSplitItemBillRequest::setTagFilter(const std::vector<DescribeSplitItemBillRequest::TagFilter> &tagFilter) {
  tagFilter_ = tagFilter;
  for(int dep1 = 0; dep1 != tagFilter.size(); dep1++) {
  auto tagFilterObj = tagFilter.at(dep1);
  std::string tagFilterObjStr = std::string("TagFilter") + "." + std::to_string(dep1 + 1);
    setParameter(tagFilterObjStr + ".TagKey", tagFilterObj.tagKey);
  }
}

std::string DescribeSplitItemBillRequest::getBillingDate() const {
  return billingDate_;
}

void DescribeSplitItemBillRequest::setBillingDate(const std::string &billingDate) {
  billingDate_ = billingDate;
  setParameter(std::string("BillingDate"), billingDate);
}

std::string DescribeSplitItemBillRequest::getInstanceID() const {
  return instanceID_;
}

void DescribeSplitItemBillRequest::setInstanceID(const std::string &instanceID) {
  instanceID_ = instanceID;
  setParameter(std::string("InstanceID"), instanceID);
}

std::string DescribeSplitItemBillRequest::getGranularity() const {
  return granularity_;
}

void DescribeSplitItemBillRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

int DescribeSplitItemBillRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSplitItemBillRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

