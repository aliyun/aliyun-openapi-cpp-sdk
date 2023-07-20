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

#include <alibabacloud/ens/model/DescribeEnsSaleControlRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsSaleControlRequest;

DescribeEnsSaleControlRequest::DescribeEnsSaleControlRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsSaleControl") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsSaleControlRequest::~DescribeEnsSaleControlRequest() {}

std::string DescribeEnsSaleControlRequest::getCustomAccount() const {
  return customAccount_;
}

void DescribeEnsSaleControlRequest::setCustomAccount(const std::string &customAccount) {
  customAccount_ = customAccount;
  setParameter(std::string("CustomAccount"), customAccount);
}

std::string DescribeEnsSaleControlRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeEnsSaleControlRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DescribeEnsSaleControlRequest::getModuleCode() const {
  return moduleCode_;
}

void DescribeEnsSaleControlRequest::setModuleCode(const std::string &moduleCode) {
  moduleCode_ = moduleCode;
  setParameter(std::string("ModuleCode"), moduleCode);
}

std::string DescribeEnsSaleControlRequest::getAliUidAccount() const {
  return aliUidAccount_;
}

void DescribeEnsSaleControlRequest::setAliUidAccount(const std::string &aliUidAccount) {
  aliUidAccount_ = aliUidAccount;
  setParameter(std::string("AliUidAccount"), aliUidAccount);
}

std::string DescribeEnsSaleControlRequest::getOrderType() const {
  return orderType_;
}

void DescribeEnsSaleControlRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

