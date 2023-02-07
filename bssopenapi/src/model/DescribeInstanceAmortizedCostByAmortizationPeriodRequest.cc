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

#include <alibabacloud/bssopenapi/model/DescribeInstanceAmortizedCostByAmortizationPeriodRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeInstanceAmortizedCostByAmortizationPeriodRequest;

DescribeInstanceAmortizedCostByAmortizationPeriodRequest::DescribeInstanceAmortizedCostByAmortizationPeriodRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeInstanceAmortizedCostByAmortizationPeriod") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAmortizedCostByAmortizationPeriodRequest::~DescribeInstanceAmortizedCostByAmortizationPeriodRequest() {}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getProductDetail() const {
  return productDetail_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setProductDetail(const std::string &productDetail) {
  productDetail_ = productDetail;
  setBodyParameter(std::string("ProductDetail"), productDetail);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getProductCode() const {
  return productCode_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getBillOwnerIdList() const {
  return billOwnerIdList_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setBillOwnerIdList(const std::vector<std::string> &billOwnerIdList) {
  billOwnerIdList_ = billOwnerIdList;
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setBodyParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setBodyParameter(std::string("BillingCycle"), billingCycle);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getCostUnitCode() const {
  return costUnitCode_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setCostUnitCode(const std::string &costUnitCode) {
  costUnitCode_ = costUnitCode;
  setBodyParameter(std::string("CostUnitCode"), costUnitCode);
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getConsumePeriodFilter() const {
  return consumePeriodFilter_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setConsumePeriodFilter(const std::vector<std::string> &consumePeriodFilter) {
  consumePeriodFilter_ = consumePeriodFilter;
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getBillUserIdList() const {
  return billUserIdList_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setBillUserIdList(const std::vector<std::string> &billUserIdList) {
  billUserIdList_ = billUserIdList;
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getInstanceIdList() const {
  return instanceIdList_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setInstanceIdList(const std::vector<std::string> &instanceIdList) {
  instanceIdList_ = instanceIdList;
}

int DescribeInstanceAmortizedCostByAmortizationPeriodRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

