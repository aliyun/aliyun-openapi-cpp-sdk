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

#include <alibabacloud/bssopenapi/model/DescribeProductAmortizedCostByConsumePeriodRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeProductAmortizedCostByConsumePeriodRequest;

DescribeProductAmortizedCostByConsumePeriodRequest::DescribeProductAmortizedCostByConsumePeriodRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeProductAmortizedCostByConsumePeriod") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProductAmortizedCostByConsumePeriodRequest::~DescribeProductAmortizedCostByConsumePeriodRequest() {}

std::string DescribeProductAmortizedCostByConsumePeriodRequest::getProductDetail() const {
  return productDetail_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setProductDetail(const std::string &productDetail) {
  productDetail_ = productDetail;
  setBodyParameter(std::string("ProductDetail"), productDetail);
}

std::string DescribeProductAmortizedCostByConsumePeriodRequest::getProductCode() const {
  return productCode_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::vector<std::string> DescribeProductAmortizedCostByConsumePeriodRequest::getBillOwnerIdList() const {
  return billOwnerIdList_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setBillOwnerIdList(const std::vector<std::string> &billOwnerIdList) {
  billOwnerIdList_ = billOwnerIdList;
}

std::string DescribeProductAmortizedCostByConsumePeriodRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setBodyParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string DescribeProductAmortizedCostByConsumePeriodRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setBodyParameter(std::string("BillingCycle"), billingCycle);
}

std::string DescribeProductAmortizedCostByConsumePeriodRequest::getCostUnitCode() const {
  return costUnitCode_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setCostUnitCode(const std::string &costUnitCode) {
  costUnitCode_ = costUnitCode;
  setBodyParameter(std::string("CostUnitCode"), costUnitCode);
}

std::vector<std::string> DescribeProductAmortizedCostByConsumePeriodRequest::getAmortizationPeriodFilter() const {
  return amortizationPeriodFilter_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setAmortizationPeriodFilter(const std::vector<std::string> &amortizationPeriodFilter) {
  amortizationPeriodFilter_ = amortizationPeriodFilter;
}

std::string DescribeProductAmortizedCostByConsumePeriodRequest::getNextToken() const {
  return nextToken_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribeProductAmortizedCostByConsumePeriodRequest::getBillUserIdList() const {
  return billUserIdList_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setBillUserIdList(const std::vector<std::string> &billUserIdList) {
  billUserIdList_ = billUserIdList;
}

int DescribeProductAmortizedCostByConsumePeriodRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeProductAmortizedCostByConsumePeriodRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

