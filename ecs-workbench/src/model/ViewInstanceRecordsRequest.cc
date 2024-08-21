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

#include <alibabacloud/ecs-workbench/model/ViewInstanceRecordsRequest.h>

using AlibabaCloud::Ecs_workbench::Model::ViewInstanceRecordsRequest;

ViewInstanceRecordsRequest::ViewInstanceRecordsRequest()
    : RpcServiceRequest("ecs-workbench", "2022-02-20", "ViewInstanceRecords") {
  setMethod(HttpRequest::Method::Post);
}

ViewInstanceRecordsRequest::~ViewInstanceRecordsRequest() {}

std::string ViewInstanceRecordsRequest::getInstanceId() const {
  return instanceId_;
}

void ViewInstanceRecordsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ViewInstanceRecordsRequest::getRegionId() const {
  return regionId_;
}

void ViewInstanceRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ViewInstanceRecordsRequest::getTerminalSessionToken() const {
  return terminalSessionToken_;
}

void ViewInstanceRecordsRequest::setTerminalSessionToken(const std::string &terminalSessionToken) {
  terminalSessionToken_ = terminalSessionToken;
  setBodyParameter(std::string("TerminalSessionToken"), terminalSessionToken);
}

