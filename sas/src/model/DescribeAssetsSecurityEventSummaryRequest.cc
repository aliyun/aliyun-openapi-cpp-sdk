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

#include <alibabacloud/sas/model/DescribeAssetsSecurityEventSummaryRequest.h>

using AlibabaCloud::Sas::Model::DescribeAssetsSecurityEventSummaryRequest;

DescribeAssetsSecurityEventSummaryRequest::DescribeAssetsSecurityEventSummaryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAssetsSecurityEventSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAssetsSecurityEventSummaryRequest::~DescribeAssetsSecurityEventSummaryRequest() {}

long DescribeAssetsSecurityEventSummaryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAssetsSecurityEventSummaryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAssetsSecurityEventSummaryRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeAssetsSecurityEventSummaryRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeAssetsSecurityEventSummaryRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAssetsSecurityEventSummaryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeAssetsSecurityEventSummaryRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeAssetsSecurityEventSummaryRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::string DescribeAssetsSecurityEventSummaryRequest::getClusterId() const {
  return clusterId_;
}

void DescribeAssetsSecurityEventSummaryRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

