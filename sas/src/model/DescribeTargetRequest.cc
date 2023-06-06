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

#include <alibabacloud/sas/model/DescribeTargetRequest.h>

using AlibabaCloud::Sas::Model::DescribeTargetRequest;

DescribeTargetRequest::DescribeTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeTarget") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTargetRequest::~DescribeTargetRequest() {}

std::string DescribeTargetRequest::getType() const {
  return type_;
}

void DescribeTargetRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeTargetRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeTargetRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string DescribeTargetRequest::getConfig() const {
  return config_;
}

void DescribeTargetRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

