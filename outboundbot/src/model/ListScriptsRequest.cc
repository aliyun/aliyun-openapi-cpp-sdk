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

#include <alibabacloud/outboundbot/model/ListScriptsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListScriptsRequest;

ListScriptsRequest::ListScriptsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListScripts") {
  setMethod(HttpRequest::Method::Post);
}

ListScriptsRequest::~ListScriptsRequest() {}

int ListScriptsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListScriptsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListScriptsRequest::getInstanceId() const {
  return instanceId_;
}

void ListScriptsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListScriptsRequest::getPageSize() const {
  return pageSize_;
}

void ListScriptsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

