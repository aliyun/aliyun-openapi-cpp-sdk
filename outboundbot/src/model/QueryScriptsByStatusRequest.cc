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

#include <alibabacloud/outboundbot/model/QueryScriptsByStatusRequest.h>

using AlibabaCloud::OutboundBot::Model::QueryScriptsByStatusRequest;

QueryScriptsByStatusRequest::QueryScriptsByStatusRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "QueryScriptsByStatus") {
  setMethod(HttpRequest::Method::Post);
}

QueryScriptsByStatusRequest::~QueryScriptsByStatusRequest() {}

std::vector<std::string> QueryScriptsByStatusRequest::getStatusList() const {
  return statusList_;
}

void QueryScriptsByStatusRequest::setStatusList(const std::vector<std::string> &statusList) {
  statusList_ = statusList;
}

int QueryScriptsByStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryScriptsByStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string QueryScriptsByStatusRequest::getInstanceId() const {
  return instanceId_;
}

void QueryScriptsByStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int QueryScriptsByStatusRequest::getPageSize() const {
  return pageSize_;
}

void QueryScriptsByStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

