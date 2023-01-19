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

#include <alibabacloud/sas/model/DescribeClientConfSetupRequest.h>

using AlibabaCloud::Sas::Model::DescribeClientConfSetupRequest;

DescribeClientConfSetupRequest::DescribeClientConfSetupRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeClientConfSetup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClientConfSetupRequest::~DescribeClientConfSetupRequest() {}

std::string DescribeClientConfSetupRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeClientConfSetupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeClientConfSetupRequest::getStrategyTag() const {
  return strategyTag_;
}

void DescribeClientConfSetupRequest::setStrategyTag(const std::string &strategyTag) {
  strategyTag_ = strategyTag;
  setParameter(std::string("StrategyTag"), strategyTag);
}

std::string DescribeClientConfSetupRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeClientConfSetupRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string DescribeClientConfSetupRequest::getStrategyTagValue() const {
  return strategyTagValue_;
}

void DescribeClientConfSetupRequest::setStrategyTagValue(const std::string &strategyTagValue) {
  strategyTagValue_ = strategyTagValue;
  setParameter(std::string("StrategyTagValue"), strategyTagValue);
}

