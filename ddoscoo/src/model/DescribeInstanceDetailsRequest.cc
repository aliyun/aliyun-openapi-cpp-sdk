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

#include <alibabacloud/ddoscoo/model/DescribeInstanceDetailsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeInstanceDetailsRequest;

DescribeInstanceDetailsRequest::DescribeInstanceDetailsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeInstanceDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceDetailsRequest::~DescribeInstanceDetailsRequest() {}

std::string DescribeInstanceDetailsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceDetailsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribeInstanceDetailsRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeInstanceDetailsRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

