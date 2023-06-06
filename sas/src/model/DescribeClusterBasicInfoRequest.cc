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

#include <alibabacloud/sas/model/DescribeClusterBasicInfoRequest.h>

using AlibabaCloud::Sas::Model::DescribeClusterBasicInfoRequest;

DescribeClusterBasicInfoRequest::DescribeClusterBasicInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeClusterBasicInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterBasicInfoRequest::~DescribeClusterBasicInfoRequest() {}

std::string DescribeClusterBasicInfoRequest::getTargetType() const {
  return targetType_;
}

void DescribeClusterBasicInfoRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeClusterBasicInfoRequest::getType() const {
  return type_;
}

void DescribeClusterBasicInfoRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeClusterBasicInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeClusterBasicInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeClusterBasicInfoRequest::getClusterId() const {
  return clusterId_;
}

void DescribeClusterBasicInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

