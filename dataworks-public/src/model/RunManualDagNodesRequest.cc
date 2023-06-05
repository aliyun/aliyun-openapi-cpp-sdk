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

#include <alibabacloud/dataworks-public/model/RunManualDagNodesRequest.h>

using AlibabaCloud::Dataworks_public::Model::RunManualDagNodesRequest;

RunManualDagNodesRequest::RunManualDagNodesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RunManualDagNodes") {
  setMethod(HttpRequest::Method::Post);
}

RunManualDagNodesRequest::~RunManualDagNodesRequest() {}

std::string RunManualDagNodesRequest::getProjectEnv() const {
  return projectEnv_;
}

void RunManualDagNodesRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string RunManualDagNodesRequest::getProjectName() const {
  return projectName_;
}

void RunManualDagNodesRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string RunManualDagNodesRequest::getStartBizDate() const {
  return startBizDate_;
}

void RunManualDagNodesRequest::setStartBizDate(const std::string &startBizDate) {
  startBizDate_ = startBizDate;
  setBodyParameter(std::string("StartBizDate"), startBizDate);
}

std::string RunManualDagNodesRequest::getEndBizDate() const {
  return endBizDate_;
}

void RunManualDagNodesRequest::setEndBizDate(const std::string &endBizDate) {
  endBizDate_ = endBizDate;
  setBodyParameter(std::string("EndBizDate"), endBizDate);
}

std::string RunManualDagNodesRequest::getDagParameters() const {
  return dagParameters_;
}

void RunManualDagNodesRequest::setDagParameters(const std::string &dagParameters) {
  dagParameters_ = dagParameters;
  setBodyParameter(std::string("DagParameters"), dagParameters);
}

std::string RunManualDagNodesRequest::getIncludeNodeIds() const {
  return includeNodeIds_;
}

void RunManualDagNodesRequest::setIncludeNodeIds(const std::string &includeNodeIds) {
  includeNodeIds_ = includeNodeIds;
  setBodyParameter(std::string("IncludeNodeIds"), includeNodeIds);
}

std::string RunManualDagNodesRequest::getBizDate() const {
  return bizDate_;
}

void RunManualDagNodesRequest::setBizDate(const std::string &bizDate) {
  bizDate_ = bizDate;
  setBodyParameter(std::string("BizDate"), bizDate);
}

std::string RunManualDagNodesRequest::getExcludeNodeIds() const {
  return excludeNodeIds_;
}

void RunManualDagNodesRequest::setExcludeNodeIds(const std::string &excludeNodeIds) {
  excludeNodeIds_ = excludeNodeIds;
  setBodyParameter(std::string("ExcludeNodeIds"), excludeNodeIds);
}

std::string RunManualDagNodesRequest::getFlowName() const {
  return flowName_;
}

void RunManualDagNodesRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

long RunManualDagNodesRequest::getProjectId() const {
  return projectId_;
}

void RunManualDagNodesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string RunManualDagNodesRequest::getNodeParameters() const {
  return nodeParameters_;
}

void RunManualDagNodesRequest::setNodeParameters(const std::string &nodeParameters) {
  nodeParameters_ = nodeParameters;
  setBodyParameter(std::string("NodeParameters"), nodeParameters);
}

