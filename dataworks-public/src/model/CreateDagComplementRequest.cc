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

#include <alibabacloud/dataworks-public/model/CreateDagComplementRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDagComplementRequest;

CreateDagComplementRequest::CreateDagComplementRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDagComplement") {
  setMethod(HttpRequest::Method::Post);
}

CreateDagComplementRequest::~CreateDagComplementRequest() {}

std::string CreateDagComplementRequest::getProjectEnv() const {
  return projectEnv_;
}

void CreateDagComplementRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string CreateDagComplementRequest::getStartBizDate() const {
  return startBizDate_;
}

void CreateDagComplementRequest::setStartBizDate(const std::string &startBizDate) {
  startBizDate_ = startBizDate;
  setBodyParameter(std::string("StartBizDate"), startBizDate);
}

bool CreateDagComplementRequest::getParallelism() const {
  return parallelism_;
}

void CreateDagComplementRequest::setParallelism(bool parallelism) {
  parallelism_ = parallelism;
  setBodyParameter(std::string("Parallelism"), parallelism ? "true" : "false");
}

long CreateDagComplementRequest::getRootNodeId() const {
  return rootNodeId_;
}

void CreateDagComplementRequest::setRootNodeId(long rootNodeId) {
  rootNodeId_ = rootNodeId;
  setBodyParameter(std::string("RootNodeId"), std::to_string(rootNodeId));
}

std::string CreateDagComplementRequest::getBizBeginTime() const {
  return bizBeginTime_;
}

void CreateDagComplementRequest::setBizBeginTime(const std::string &bizBeginTime) {
  bizBeginTime_ = bizBeginTime;
  setBodyParameter(std::string("BizBeginTime"), bizBeginTime);
}

std::string CreateDagComplementRequest::getEndBizDate() const {
  return endBizDate_;
}

void CreateDagComplementRequest::setEndBizDate(const std::string &endBizDate) {
  endBizDate_ = endBizDate;
  setBodyParameter(std::string("EndBizDate"), endBizDate);
}

std::string CreateDagComplementRequest::getIncludeNodeIds() const {
  return includeNodeIds_;
}

void CreateDagComplementRequest::setIncludeNodeIds(const std::string &includeNodeIds) {
  includeNodeIds_ = includeNodeIds;
  setBodyParameter(std::string("IncludeNodeIds"), includeNodeIds);
}

std::string CreateDagComplementRequest::getBizEndTime() const {
  return bizEndTime_;
}

void CreateDagComplementRequest::setBizEndTime(const std::string &bizEndTime) {
  bizEndTime_ = bizEndTime;
  setBodyParameter(std::string("BizEndTime"), bizEndTime);
}

std::string CreateDagComplementRequest::getName() const {
  return name_;
}

void CreateDagComplementRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateDagComplementRequest::getExcludeNodeIds() const {
  return excludeNodeIds_;
}

void CreateDagComplementRequest::setExcludeNodeIds(const std::string &excludeNodeIds) {
  excludeNodeIds_ = excludeNodeIds;
  setBodyParameter(std::string("ExcludeNodeIds"), excludeNodeIds);
}

std::string CreateDagComplementRequest::getNodeParams() const {
  return nodeParams_;
}

void CreateDagComplementRequest::setNodeParams(const std::string &nodeParams) {
  nodeParams_ = nodeParams;
  setBodyParameter(std::string("NodeParams"), nodeParams);
}

