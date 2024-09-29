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

#include <alibabacloud/dataworks-public/model/RunCycleDagNodesRequest.h>

using AlibabaCloud::Dataworks_public::Model::RunCycleDagNodesRequest;

RunCycleDagNodesRequest::RunCycleDagNodesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RunCycleDagNodes") {
  setMethod(HttpRequest::Method::Post);
}

RunCycleDagNodesRequest::~RunCycleDagNodesRequest() {}

std::string RunCycleDagNodesRequest::getProjectEnv() const {
  return projectEnv_;
}

void RunCycleDagNodesRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string RunCycleDagNodesRequest::getStartBizDate() const {
  return startBizDate_;
}

void RunCycleDagNodesRequest::setStartBizDate(const std::string &startBizDate) {
  startBizDate_ = startBizDate;
  setBodyParameter(std::string("StartBizDate"), startBizDate);
}

bool RunCycleDagNodesRequest::getParallelism() const {
  return parallelism_;
}

void RunCycleDagNodesRequest::setParallelism(bool parallelism) {
  parallelism_ = parallelism;
  setBodyParameter(std::string("Parallelism"), parallelism ? "true" : "false");
}

std::string RunCycleDagNodesRequest::getAlertNoticeType() const {
  return alertNoticeType_;
}

void RunCycleDagNodesRequest::setAlertNoticeType(const std::string &alertNoticeType) {
  alertNoticeType_ = alertNoticeType;
  setBodyParameter(std::string("AlertNoticeType"), alertNoticeType);
}

long RunCycleDagNodesRequest::getRootNodeId() const {
  return rootNodeId_;
}

void RunCycleDagNodesRequest::setRootNodeId(long rootNodeId) {
  rootNodeId_ = rootNodeId;
  setBodyParameter(std::string("RootNodeId"), std::to_string(rootNodeId));
}

std::string RunCycleDagNodesRequest::getBizBeginTime() const {
  return bizBeginTime_;
}

void RunCycleDagNodesRequest::setBizBeginTime(const std::string &bizBeginTime) {
  bizBeginTime_ = bizBeginTime;
  setBodyParameter(std::string("BizBeginTime"), bizBeginTime);
}

std::string RunCycleDagNodesRequest::getEndBizDate() const {
  return endBizDate_;
}

void RunCycleDagNodesRequest::setEndBizDate(const std::string &endBizDate) {
  endBizDate_ = endBizDate;
  setBodyParameter(std::string("EndBizDate"), endBizDate);
}

bool RunCycleDagNodesRequest::getStartFutureInstanceImmediately() const {
  return startFutureInstanceImmediately_;
}

void RunCycleDagNodesRequest::setStartFutureInstanceImmediately(bool startFutureInstanceImmediately) {
  startFutureInstanceImmediately_ = startFutureInstanceImmediately;
  setBodyParameter(std::string("StartFutureInstanceImmediately"), startFutureInstanceImmediately ? "true" : "false");
}

int RunCycleDagNodesRequest::getConcurrentRuns() const {
  return concurrentRuns_;
}

void RunCycleDagNodesRequest::setConcurrentRuns(int concurrentRuns) {
  concurrentRuns_ = concurrentRuns;
  setBodyParameter(std::string("ConcurrentRuns"), std::to_string(concurrentRuns));
}

std::string RunCycleDagNodesRequest::getAlertType() const {
  return alertType_;
}

void RunCycleDagNodesRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string RunCycleDagNodesRequest::getIncludeNodeIds() const {
  return includeNodeIds_;
}

void RunCycleDagNodesRequest::setIncludeNodeIds(const std::string &includeNodeIds) {
  includeNodeIds_ = includeNodeIds;
  setBodyParameter(std::string("IncludeNodeIds"), includeNodeIds);
}

std::string RunCycleDagNodesRequest::getBizEndTime() const {
  return bizEndTime_;
}

void RunCycleDagNodesRequest::setBizEndTime(const std::string &bizEndTime) {
  bizEndTime_ = bizEndTime;
  setBodyParameter(std::string("BizEndTime"), bizEndTime);
}

std::string RunCycleDagNodesRequest::getName() const {
  return name_;
}

void RunCycleDagNodesRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string RunCycleDagNodesRequest::getExcludeNodeIds() const {
  return excludeNodeIds_;
}

void RunCycleDagNodesRequest::setExcludeNodeIds(const std::string &excludeNodeIds) {
  excludeNodeIds_ = excludeNodeIds;
  setBodyParameter(std::string("ExcludeNodeIds"), excludeNodeIds);
}

std::string RunCycleDagNodesRequest::getNodeParams() const {
  return nodeParams_;
}

void RunCycleDagNodesRequest::setNodeParams(const std::string &nodeParams) {
  nodeParams_ = nodeParams;
  setBodyParameter(std::string("NodeParams"), nodeParams);
}

