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

#include <alibabacloud/ddoscoo/model/DescribeBackSourceCidrRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeBackSourceCidrRequest;

DescribeBackSourceCidrRequest::DescribeBackSourceCidrRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeBackSourceCidr") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackSourceCidrRequest::~DescribeBackSourceCidrRequest() {}

std::string DescribeBackSourceCidrRequest::getLine() const {
  return line_;
}

void DescribeBackSourceCidrRequest::setLine(const std::string &line) {
  line_ = line;
  setParameter(std::string("Line"), line);
}

std::string DescribeBackSourceCidrRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeBackSourceCidrRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeBackSourceCidrRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBackSourceCidrRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeBackSourceCidrRequest::getIpVersion() const {
  return ipVersion_;
}

void DescribeBackSourceCidrRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

