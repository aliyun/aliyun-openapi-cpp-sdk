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

#include <alibabacloud/ddoscoo/model/DescribeNetworkRulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeNetworkRulesRequest;

DescribeNetworkRulesRequest::DescribeNetworkRulesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeNetworkRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkRulesRequest::~DescribeNetworkRulesRequest() {}

bool DescribeNetworkRulesRequest::getIsOffset() const {
  return isOffset_;
}

void DescribeNetworkRulesRequest::setIsOffset(bool isOffset) {
  isOffset_ = isOffset;
  setParameter(std::string("IsOffset"), isOffset ? "true" : "false");
}

int DescribeNetworkRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeNetworkRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeNetworkRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeNetworkRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNetworkRulesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeNetworkRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeNetworkRulesRequest::getFrontendPort() const {
  return frontendPort_;
}

void DescribeNetworkRulesRequest::setFrontendPort(int frontendPort) {
  frontendPort_ = frontendPort;
  setParameter(std::string("FrontendPort"), std::to_string(frontendPort));
}

std::string DescribeNetworkRulesRequest::getForwardProtocol() const {
  return forwardProtocol_;
}

void DescribeNetworkRulesRequest::setForwardProtocol(const std::string &forwardProtocol) {
  forwardProtocol_ = forwardProtocol;
  setParameter(std::string("ForwardProtocol"), forwardProtocol);
}

