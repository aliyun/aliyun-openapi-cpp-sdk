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

#include <alibabacloud/dataworks-public/model/CreateManualDagRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateManualDagRequest;

CreateManualDagRequest::CreateManualDagRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateManualDag") {
  setMethod(HttpRequest::Method::Post);
}

CreateManualDagRequest::~CreateManualDagRequest() {}

std::string CreateManualDagRequest::getProjectEnv() const {
  return projectEnv_;
}

void CreateManualDagRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string CreateManualDagRequest::getProjectName() const {
  return projectName_;
}

void CreateManualDagRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string CreateManualDagRequest::getDagParameters() const {
  return dagParameters_;
}

void CreateManualDagRequest::setDagParameters(const std::string &dagParameters) {
  dagParameters_ = dagParameters;
  setBodyParameter(std::string("DagParameters"), dagParameters);
}

std::string CreateManualDagRequest::getIncludeNodeIds() const {
  return includeNodeIds_;
}

void CreateManualDagRequest::setIncludeNodeIds(const std::string &includeNodeIds) {
  includeNodeIds_ = includeNodeIds;
  setBodyParameter(std::string("IncludeNodeIds"), includeNodeIds);
}

std::string CreateManualDagRequest::getBizDate() const {
  return bizDate_;
}

void CreateManualDagRequest::setBizDate(const std::string &bizDate) {
  bizDate_ = bizDate;
  setBodyParameter(std::string("BizDate"), bizDate);
}

std::string CreateManualDagRequest::getExcludeNodeIds() const {
  return excludeNodeIds_;
}

void CreateManualDagRequest::setExcludeNodeIds(const std::string &excludeNodeIds) {
  excludeNodeIds_ = excludeNodeIds;
  setBodyParameter(std::string("ExcludeNodeIds"), excludeNodeIds);
}

std::string CreateManualDagRequest::getFlowName() const {
  return flowName_;
}

void CreateManualDagRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

std::string CreateManualDagRequest::getNodeParameters() const {
  return nodeParameters_;
}

void CreateManualDagRequest::setNodeParameters(const std::string &nodeParameters) {
  nodeParameters_ = nodeParameters;
  setBodyParameter(std::string("NodeParameters"), nodeParameters);
}

