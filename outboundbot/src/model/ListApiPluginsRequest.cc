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

#include <alibabacloud/outboundbot/model/ListApiPluginsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListApiPluginsRequest;

ListApiPluginsRequest::ListApiPluginsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListApiPlugins") {
  setMethod(HttpRequest::Method::Post);
}

ListApiPluginsRequest::~ListApiPluginsRequest() {}

std::string ListApiPluginsRequest::getUuidsJson() const {
  return uuidsJson_;
}

void ListApiPluginsRequest::setUuidsJson(const std::string &uuidsJson) {
  uuidsJson_ = uuidsJson;
  setParameter(std::string("UuidsJson"), uuidsJson);
}

int ListApiPluginsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApiPluginsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListApiPluginsRequest::getInstanceId() const {
  return instanceId_;
}

void ListApiPluginsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListApiPluginsRequest::getPageSize() const {
  return pageSize_;
}

void ListApiPluginsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

