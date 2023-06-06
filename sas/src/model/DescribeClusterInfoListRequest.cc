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

#include <alibabacloud/sas/model/DescribeClusterInfoListRequest.h>

using AlibabaCloud::Sas::Model::DescribeClusterInfoListRequest;

DescribeClusterInfoListRequest::DescribeClusterInfoListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeClusterInfoList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterInfoListRequest::~DescribeClusterInfoListRequest() {}

std::string DescribeClusterInfoListRequest::getTargetType() const {
  return targetType_;
}

void DescribeClusterInfoListRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeClusterInfoListRequest::getType() const {
  return type_;
}

void DescribeClusterInfoListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeClusterInfoListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeClusterInfoListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeClusterInfoListRequest::getTarget() const {
  return target_;
}

void DescribeClusterInfoListRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

