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

#include <alibabacloud/bssopenapi/model/DescribeProductAmortizedCostByAmortizationPeriodRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeProductAmortizedCostByAmortizationPeriodRequest;

DescribeProductAmortizedCostByAmortizationPeriodRequest::DescribeProductAmortizedCostByAmortizationPeriodRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeProductAmortizedCostByAmortizationPeriod") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProductAmortizedCostByAmortizationPeriodRequest::~DescribeProductAmortizedCostByAmortizationPeriodRequest() {}

std::string DescribeProductAmortizedCostByAmortizationPeriodRequest::getProductDetail() const {
  return productDetail_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setProductDetail(const std::string &productDetail) {
  productDetail_ = productDetail;
  setBodyParameter(std::string("ProductDetail"), productDetail);
}

std::string DescribeProductAmortizedCostByAmortizationPeriodRequest::getProductCode() const {
  return productCode_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::vector<std::string> DescribeProductAmortizedCostByAmortizationPeriodRequest::getBillOwnerIdList() const {
  return billOwnerIdList_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setBillOwnerIdList(const std::vector<std::string> &billOwnerIdList) {
  billOwnerIdList_ = billOwnerIdList;
}

std::string DescribeProductAmortizedCostByAmortizationPeriodRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setBodyParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string DescribeProductAmortizedCostByAmortizationPeriodRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setBodyParameter(std::string("BillingCycle"), billingCycle);
}

std::string DescribeProductAmortizedCostByAmortizationPeriodRequest::getCostUnitCode() const {
  return costUnitCode_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setCostUnitCode(const std::string &costUnitCode) {
  costUnitCode_ = costUnitCode;
  setBodyParameter(std::string("CostUnitCode"), costUnitCode);
}

std::vector<std::string> DescribeProductAmortizedCostByAmortizationPeriodRequest::getConsumePeriodFilter() const {
  return consumePeriodFilter_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setConsumePeriodFilter(const std::vector<std::string> &consumePeriodFilter) {
  consumePeriodFilter_ = consumePeriodFilter;
}

std::string DescribeProductAmortizedCostByAmortizationPeriodRequest::getNextToken() const {
  return nextToken_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribeProductAmortizedCostByAmortizationPeriodRequest::getBillUserIdList() const {
  return billUserIdList_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setBillUserIdList(const std::vector<std::string> &billUserIdList) {
  billUserIdList_ = billUserIdList;
}

int DescribeProductAmortizedCostByAmortizationPeriodRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeProductAmortizedCostByAmortizationPeriodRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

