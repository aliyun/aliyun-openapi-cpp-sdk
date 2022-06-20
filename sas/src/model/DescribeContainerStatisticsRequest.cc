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

#include <alibabacloud/sas/model/DescribeContainerStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeContainerStatisticsRequest;

DescribeContainerStatisticsRequest::DescribeContainerStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeContainerStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContainerStatisticsRequest::~DescribeContainerStatisticsRequest() {}

std::string DescribeContainerStatisticsRequest::getClusterId() const {
  return clusterId_;
}

void DescribeContainerStatisticsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeContainerStatisticsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeContainerStatisticsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

