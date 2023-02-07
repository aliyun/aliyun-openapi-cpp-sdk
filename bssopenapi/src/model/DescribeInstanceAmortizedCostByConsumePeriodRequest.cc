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

#include <alibabacloud/bssopenapi/model/DescribeInstanceAmortizedCostByConsumePeriodRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeInstanceAmortizedCostByConsumePeriodRequest;

DescribeInstanceAmortizedCostByConsumePeriodRequest::DescribeInstanceAmortizedCostByConsumePeriodRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeInstanceAmortizedCostByConsumePeriod") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAmortizedCostByConsumePeriodRequest::~DescribeInstanceAmortizedCostByConsumePeriodRequest() {}

std::string DescribeInstanceAmortizedCostByConsumePeriodRequest::getProductDetail() const {
  return productDetail_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setProductDetail(const std::string &productDetail) {
  productDetail_ = productDetail;
  setBodyParameter(std::string("ProductDetail"), productDetail);
}

std::string DescribeInstanceAmortizedCostByConsumePeriodRequest::getProductCode() const {
  return productCode_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::vector<std::string> DescribeInstanceAmortizedCostByConsumePeriodRequest::getBillOwnerIdList() const {
  return billOwnerIdList_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setBillOwnerIdList(const std::vector<std::string> &billOwnerIdList) {
  billOwnerIdList_ = billOwnerIdList;
}

std::string DescribeInstanceAmortizedCostByConsumePeriodRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setBodyParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string DescribeInstanceAmortizedCostByConsumePeriodRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setBodyParameter(std::string("BillingCycle"), billingCycle);
}

std::string DescribeInstanceAmortizedCostByConsumePeriodRequest::getCostUnitCode() const {
  return costUnitCode_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setCostUnitCode(const std::string &costUnitCode) {
  costUnitCode_ = costUnitCode;
  setBodyParameter(std::string("CostUnitCode"), costUnitCode);
}

std::vector<std::string> DescribeInstanceAmortizedCostByConsumePeriodRequest::getAmortizationPeriodFilter() const {
  return amortizationPeriodFilter_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setAmortizationPeriodFilter(const std::vector<std::string> &amortizationPeriodFilter) {
  amortizationPeriodFilter_ = amortizationPeriodFilter;
}

std::string DescribeInstanceAmortizedCostByConsumePeriodRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribeInstanceAmortizedCostByConsumePeriodRequest::getBillUserIdList() const {
  return billUserIdList_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setBillUserIdList(const std::vector<std::string> &billUserIdList) {
  billUserIdList_ = billUserIdList;
}

std::vector<std::string> DescribeInstanceAmortizedCostByConsumePeriodRequest::getInstanceIdList() const {
  return instanceIdList_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setInstanceIdList(const std::vector<std::string> &instanceIdList) {
  instanceIdList_ = instanceIdList;
}

int DescribeInstanceAmortizedCostByConsumePeriodRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInstanceAmortizedCostByConsumePeriodRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

