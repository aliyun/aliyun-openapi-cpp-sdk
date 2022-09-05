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

#include <alibabacloud/cdn/model/DescribeEsExecuteDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeEsExecuteDataRequest;

DescribeEsExecuteDataRequest::DescribeEsExecuteDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeEsExecuteData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEsExecuteDataRequest::~DescribeEsExecuteDataRequest() {}

std::string DescribeEsExecuteDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeEsExecuteDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeEsExecuteDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeEsExecuteDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeEsExecuteDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEsExecuteDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEsExecuteDataRequest::getRuleId() const {
  return ruleId_;
}

void DescribeEsExecuteDataRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

