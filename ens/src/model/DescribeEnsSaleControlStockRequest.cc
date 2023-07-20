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

#include <alibabacloud/ens/model/DescribeEnsSaleControlStockRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsSaleControlStockRequest;

DescribeEnsSaleControlStockRequest::DescribeEnsSaleControlStockRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsSaleControlStock") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsSaleControlStockRequest::~DescribeEnsSaleControlStockRequest() {}

std::string DescribeEnsSaleControlStockRequest::getCustomAccount() const {
  return customAccount_;
}

void DescribeEnsSaleControlStockRequest::setCustomAccount(const std::string &customAccount) {
  customAccount_ = customAccount;
  setParameter(std::string("CustomAccount"), customAccount);
}

std::string DescribeEnsSaleControlStockRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeEnsSaleControlStockRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DescribeEnsSaleControlStockRequest::getModuleCode() const {
  return moduleCode_;
}

void DescribeEnsSaleControlStockRequest::setModuleCode(const std::string &moduleCode) {
  moduleCode_ = moduleCode;
  setParameter(std::string("ModuleCode"), moduleCode);
}

std::string DescribeEnsSaleControlStockRequest::getAliUidAccount() const {
  return aliUidAccount_;
}

void DescribeEnsSaleControlStockRequest::setAliUidAccount(const std::string &aliUidAccount) {
  aliUidAccount_ = aliUidAccount;
  setParameter(std::string("AliUidAccount"), aliUidAccount);
}

std::string DescribeEnsSaleControlStockRequest::getOrderType() const {
  return orderType_;
}

void DescribeEnsSaleControlStockRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

