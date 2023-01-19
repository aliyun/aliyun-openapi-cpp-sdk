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

#include <alibabacloud/sas/model/DescribeIpTagsRequest.h>

using AlibabaCloud::Sas::Model::DescribeIpTagsRequest;

DescribeIpTagsRequest::DescribeIpTagsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeIpTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpTagsRequest::~DescribeIpTagsRequest() {}

std::string DescribeIpTagsRequest::getIp() const {
  return ip_;
}

void DescribeIpTagsRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DescribeIpTagsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeIpTagsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeIpTagsRequest::getSecurityEventId() const {
  return securityEventId_;
}

void DescribeIpTagsRequest::setSecurityEventId(const std::string &securityEventId) {
  securityEventId_ = securityEventId;
  setParameter(std::string("SecurityEventId"), securityEventId);
}

