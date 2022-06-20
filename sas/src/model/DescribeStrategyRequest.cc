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

#include <alibabacloud/sas/model/DescribeStrategyRequest.h>

using AlibabaCloud::Sas::Model::DescribeStrategyRequest;

DescribeStrategyRequest::DescribeStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeStrategy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStrategyRequest::~DescribeStrategyRequest() {}

std::string DescribeStrategyRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeStrategyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeStrategyRequest::getLang() const {
  return lang_;
}

void DescribeStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeStrategyRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeStrategyRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string DescribeStrategyRequest::getCustomType() const {
  return customType_;
}

void DescribeStrategyRequest::setCustomType(const std::string &customType) {
  customType_ = customType;
  setParameter(std::string("CustomType"), customType);
}

std::string DescribeStrategyRequest::getStrategyIds() const {
  return strategyIds_;
}

void DescribeStrategyRequest::setStrategyIds(const std::string &strategyIds) {
  strategyIds_ = strategyIds;
  setParameter(std::string("StrategyIds"), strategyIds);
}

