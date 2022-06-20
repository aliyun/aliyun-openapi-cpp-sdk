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

#include <alibabacloud/sas/model/DescribeStrategyExecDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeStrategyExecDetailRequest;

DescribeStrategyExecDetailRequest::DescribeStrategyExecDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeStrategyExecDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStrategyExecDetailRequest::~DescribeStrategyExecDetailRequest() {}

std::string DescribeStrategyExecDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeStrategyExecDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeStrategyExecDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStrategyExecDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeStrategyExecDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeStrategyExecDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeStrategyExecDetailRequest::getStrategyId() const {
  return strategyId_;
}

void DescribeStrategyExecDetailRequest::setStrategyId(int strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), std::to_string(strategyId));
}

