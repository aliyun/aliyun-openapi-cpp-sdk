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

#include <alibabacloud/ice/model/DescribePlayQoeListRequest.h>

using AlibabaCloud::ICE::Model::DescribePlayQoeListRequest;

DescribePlayQoeListRequest::DescribePlayQoeListRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribePlayQoeList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayQoeListRequest::~DescribePlayQoeListRequest() {}

std::string DescribePlayQoeListRequest::getNetwork() const {
  return network_;
}

void DescribePlayQoeListRequest::setNetwork(const std::string &network) {
  network_ = network;
  setParameter(std::string("Network"), network);
}

std::vector<DescribePlayQoeListRequest::std::string> DescribePlayQoeListRequest::getMetricTypes() const {
  return metricTypes_;
}

void DescribePlayQoeListRequest::setMetricTypes(const std::vector<DescribePlayQoeListRequest::std::string> &metricTypes) {
  metricTypes_ = metricTypes;
  for(int dep1 = 0; dep1 != metricTypes.size(); dep1++) {
    setParameter(std::string("MetricTypes") + "." + std::to_string(dep1 + 1), metricTypes[dep1]);
  }
}

std::string DescribePlayQoeListRequest::getAppName() const {
  return appName_;
}

void DescribePlayQoeListRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int DescribePlayQoeListRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlayQoeListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribePlayQoeListRequest::getEndTs() const {
  return endTs_;
}

void DescribePlayQoeListRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

std::string DescribePlayQoeListRequest::getDefinition() const {
  return definition_;
}

void DescribePlayQoeListRequest::setDefinition(const std::string &definition) {
  definition_ = definition;
  setParameter(std::string("Definition"), definition);
}

std::string DescribePlayQoeListRequest::getItemConfigs() const {
  return itemConfigs_;
}

void DescribePlayQoeListRequest::setItemConfigs(const std::string &itemConfigs) {
  itemConfigs_ = itemConfigs;
  setParameter(std::string("ItemConfigs"), itemConfigs);
}

std::string DescribePlayQoeListRequest::getOs() const {
  return os_;
}

void DescribePlayQoeListRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

std::string DescribePlayQoeListRequest::getOrderName() const {
  return orderName_;
}

void DescribePlayQoeListRequest::setOrderName(const std::string &orderName) {
  orderName_ = orderName;
  setParameter(std::string("OrderName"), orderName);
}

long DescribePlayQoeListRequest::getBeginTs() const {
  return beginTs_;
}

void DescribePlayQoeListRequest::setBeginTs(long beginTs) {
  beginTs_ = beginTs;
  setParameter(std::string("BeginTs"), std::to_string(beginTs));
}

int DescribePlayQoeListRequest::getPageNo() const {
  return pageNo_;
}

void DescribePlayQoeListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string DescribePlayQoeListRequest::getTerminalType() const {
  return terminalType_;
}

void DescribePlayQoeListRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}

std::string DescribePlayQoeListRequest::getOrderType() const {
  return orderType_;
}

void DescribePlayQoeListRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

