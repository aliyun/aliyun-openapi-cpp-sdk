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

#include <alibabacloud/ddoscoo/model/DescribeSlsAuthStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSlsAuthStatusRequest;

DescribeSlsAuthStatusRequest::DescribeSlsAuthStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeSlsAuthStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlsAuthStatusRequest::~DescribeSlsAuthStatusRequest() {}

std::string DescribeSlsAuthStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSlsAuthStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSlsAuthStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSlsAuthStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSlsAuthStatusRequest::getLang() const {
  return lang_;
}

void DescribeSlsAuthStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

