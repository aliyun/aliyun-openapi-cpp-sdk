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

#include <alibabacloud/dataworks-public/model/RunTriggerNodeRequest.h>

using AlibabaCloud::Dataworks_public::Model::RunTriggerNodeRequest;

RunTriggerNodeRequest::RunTriggerNodeRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RunTriggerNode") {
  setMethod(HttpRequest::Method::Post);
}

RunTriggerNodeRequest::~RunTriggerNodeRequest() {}

long RunTriggerNodeRequest::getBizDate() const {
  return bizDate_;
}

void RunTriggerNodeRequest::setBizDate(long bizDate) {
  bizDate_ = bizDate;
  setBodyParameter(std::string("BizDate"), std::to_string(bizDate));
}

long RunTriggerNodeRequest::getAppId() const {
  return appId_;
}

void RunTriggerNodeRequest::setAppId(long appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), std::to_string(appId));
}

long RunTriggerNodeRequest::getCycleTime() const {
  return cycleTime_;
}

void RunTriggerNodeRequest::setCycleTime(long cycleTime) {
  cycleTime_ = cycleTime;
  setBodyParameter(std::string("CycleTime"), std::to_string(cycleTime));
}

long RunTriggerNodeRequest::getNodeId() const {
  return nodeId_;
}

void RunTriggerNodeRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

