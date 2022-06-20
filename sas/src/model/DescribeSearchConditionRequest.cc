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

#include <alibabacloud/sas/model/DescribeSearchConditionRequest.h>

using AlibabaCloud::Sas::Model::DescribeSearchConditionRequest;

DescribeSearchConditionRequest::DescribeSearchConditionRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSearchCondition") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSearchConditionRequest::~DescribeSearchConditionRequest() {}

std::string DescribeSearchConditionRequest::getType() const {
  return type_;
}

void DescribeSearchConditionRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeSearchConditionRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSearchConditionRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSearchConditionRequest::getLang() const {
  return lang_;
}

void DescribeSearchConditionRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

