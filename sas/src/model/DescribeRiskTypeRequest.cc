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

#include <alibabacloud/sas/model/DescribeRiskTypeRequest.h>

using AlibabaCloud::Sas::Model::DescribeRiskTypeRequest;

DescribeRiskTypeRequest::DescribeRiskTypeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeRiskType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRiskTypeRequest::~DescribeRiskTypeRequest() {}

std::string DescribeRiskTypeRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRiskTypeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeRiskTypeRequest::getLang() const {
  return lang_;
}

void DescribeRiskTypeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeRiskTypeRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeRiskTypeRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string DescribeRiskTypeRequest::getTypeName() const {
  return typeName_;
}

void DescribeRiskTypeRequest::setTypeName(const std::string &typeName) {
  typeName_ = typeName;
  setParameter(std::string("TypeName"), typeName);
}

std::string DescribeRiskTypeRequest::getUuids() const {
  return uuids_;
}

void DescribeRiskTypeRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

