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

#include <alibabacloud/sas/model/DescribeVulDetailsRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulDetailsRequest;

DescribeVulDetailsRequest::DescribeVulDetailsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVulDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulDetailsRequest::~DescribeVulDetailsRequest() {}

std::string DescribeVulDetailsRequest::getType() const {
  return type_;
}

void DescribeVulDetailsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeVulDetailsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVulDetailsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeVulDetailsRequest::getLang() const {
  return lang_;
}

void DescribeVulDetailsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeVulDetailsRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeVulDetailsRequest::setResourceDirectoryAccountId(long resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), std::to_string(resourceDirectoryAccountId));
}

std::string DescribeVulDetailsRequest::getAliasName() const {
  return aliasName_;
}

void DescribeVulDetailsRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string DescribeVulDetailsRequest::getName() const {
  return name_;
}

void DescribeVulDetailsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

