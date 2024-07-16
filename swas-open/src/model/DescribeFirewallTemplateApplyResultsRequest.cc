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

#include <alibabacloud/swas-open/model/DescribeFirewallTemplateApplyResultsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeFirewallTemplateApplyResultsRequest;

DescribeFirewallTemplateApplyResultsRequest::DescribeFirewallTemplateApplyResultsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeFirewallTemplateApplyResults") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFirewallTemplateApplyResultsRequest::~DescribeFirewallTemplateApplyResultsRequest() {}

std::string DescribeFirewallTemplateApplyResultsRequest::getFirewallTemplateId() const {
  return firewallTemplateId_;
}

void DescribeFirewallTemplateApplyResultsRequest::setFirewallTemplateId(const std::string &firewallTemplateId) {
  firewallTemplateId_ = firewallTemplateId;
  setParameter(std::string("FirewallTemplateId"), firewallTemplateId);
}

std::string DescribeFirewallTemplateApplyResultsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeFirewallTemplateApplyResultsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeFirewallTemplateApplyResultsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeFirewallTemplateApplyResultsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeFirewallTemplateApplyResultsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeFirewallTemplateApplyResultsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeFirewallTemplateApplyResultsRequest::getRegionId() const {
  return regionId_;
}

void DescribeFirewallTemplateApplyResultsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeFirewallTemplateApplyResultsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeFirewallTemplateApplyResultsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<std::string> DescribeFirewallTemplateApplyResultsRequest::getTaskId() const {
  return taskId_;
}

void DescribeFirewallTemplateApplyResultsRequest::setTaskId(const std::vector<std::string> &taskId) {
  taskId_ = taskId;
}

