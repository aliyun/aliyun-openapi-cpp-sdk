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

#include <alibabacloud/ens/model/DescribeWorkflowRequest.h>

using AlibabaCloud::Ens::Model::DescribeWorkflowRequest;

DescribeWorkflowRequest::DescribeWorkflowRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWorkflowRequest::~DescribeWorkflowRequest() {}

std::string DescribeWorkflowRequest::getPageNum() const {
  return pageNum_;
}

void DescribeWorkflowRequest::setPageNum(const std::string &pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), pageNum);
}

std::string DescribeWorkflowRequest::getStartDate() const {
  return startDate_;
}

void DescribeWorkflowRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribeWorkflowRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeWorkflowRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeWorkflowRequest::getId() const {
  return id_;
}

void DescribeWorkflowRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DescribeWorkflowRequest::getWorkFlowId() const {
  return workFlowId_;
}

void DescribeWorkflowRequest::setWorkFlowId(const std::string &workFlowId) {
  workFlowId_ = workFlowId;
  setParameter(std::string("WorkFlowId"), workFlowId);
}

std::string DescribeWorkflowRequest::getBusinessId() const {
  return businessId_;
}

void DescribeWorkflowRequest::setBusinessId(const std::string &businessId) {
  businessId_ = businessId;
  setParameter(std::string("BusinessId"), businessId);
}

std::string DescribeWorkflowRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeWorkflowRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeWorkflowRequest::getEndDate() const {
  return endDate_;
}

void DescribeWorkflowRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeWorkflowRequest::getStatus() const {
  return status_;
}

void DescribeWorkflowRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeWorkflowRequest::getWorkFlowName() const {
  return workFlowName_;
}

void DescribeWorkflowRequest::setWorkFlowName(const std::string &workFlowName) {
  workFlowName_ = workFlowName;
  setParameter(std::string("WorkFlowName"), workFlowName);
}

std::string DescribeWorkflowRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWorkflowRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeWorkflowRequest::getAliUid() const {
  return aliUid_;
}

void DescribeWorkflowRequest::setAliUid(const std::string &aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), aliUid);
}

