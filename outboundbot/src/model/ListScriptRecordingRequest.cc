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

#include <alibabacloud/outboundbot/model/ListScriptRecordingRequest.h>

using AlibabaCloud::OutboundBot::Model::ListScriptRecordingRequest;

ListScriptRecordingRequest::ListScriptRecordingRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListScriptRecording") {
  setMethod(HttpRequest::Method::Post);
}

ListScriptRecordingRequest::~ListScriptRecordingRequest() {}

std::string ListScriptRecordingRequest::getUuidsJson() const {
  return uuidsJson_;
}

void ListScriptRecordingRequest::setUuidsJson(const std::string &uuidsJson) {
  uuidsJson_ = uuidsJson;
  setParameter(std::string("UuidsJson"), uuidsJson);
}

std::string ListScriptRecordingRequest::getStatesJson() const {
  return statesJson_;
}

void ListScriptRecordingRequest::setStatesJson(const std::string &statesJson) {
  statesJson_ = statesJson;
  setParameter(std::string("StatesJson"), statesJson);
}

int ListScriptRecordingRequest::getPageNumber() const {
  return pageNumber_;
}

void ListScriptRecordingRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListScriptRecordingRequest::getScriptId() const {
  return scriptId_;
}

void ListScriptRecordingRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ListScriptRecordingRequest::getSearch() const {
  return search_;
}

void ListScriptRecordingRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("Search"), search);
}

std::string ListScriptRecordingRequest::getInstanceId() const {
  return instanceId_;
}

void ListScriptRecordingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListScriptRecordingRequest::getPageSize() const {
  return pageSize_;
}

void ListScriptRecordingRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

