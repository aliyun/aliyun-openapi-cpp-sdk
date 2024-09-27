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

#include <alibabacloud/ecs-workbench/model/ListTerminalCommandsRequest.h>

using AlibabaCloud::Ecs_workbench::Model::ListTerminalCommandsRequest;

ListTerminalCommandsRequest::ListTerminalCommandsRequest()
    : RpcServiceRequest("ecs-workbench", "2022-02-20", "ListTerminalCommands") {
  setMethod(HttpRequest::Method::Post);
}

ListTerminalCommandsRequest::~ListTerminalCommandsRequest() {}

int ListTerminalCommandsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTerminalCommandsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListTerminalCommandsRequest::getRegionId() const {
  return regionId_;
}

void ListTerminalCommandsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListTerminalCommandsRequest::getPageSize() const {
  return pageSize_;
}

void ListTerminalCommandsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTerminalCommandsRequest::getTerminalSessionToken() const {
  return terminalSessionToken_;
}

void ListTerminalCommandsRequest::setTerminalSessionToken(const std::string &terminalSessionToken) {
  terminalSessionToken_ = terminalSessionToken;
  setBodyParameter(std::string("TerminalSessionToken"), terminalSessionToken);
}

