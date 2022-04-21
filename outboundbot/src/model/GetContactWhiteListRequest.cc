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

#include <alibabacloud/outboundbot/model/GetContactWhiteListRequest.h>

using AlibabaCloud::OutboundBot::Model::GetContactWhiteListRequest;

GetContactWhiteListRequest::GetContactWhiteListRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GetContactWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

GetContactWhiteListRequest::~GetContactWhiteListRequest() {}

bool GetContactWhiteListRequest::getCountTotalRow() const {
  return countTotalRow_;
}

void GetContactWhiteListRequest::setCountTotalRow(bool countTotalRow) {
  countTotalRow_ = countTotalRow;
  setParameter(std::string("CountTotalRow"), countTotalRow ? "true" : "false");
}

int GetContactWhiteListRequest::getPageNumber() const {
  return pageNumber_;
}

void GetContactWhiteListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetContactWhiteListRequest::getInstanceId() const {
  return instanceId_;
}

void GetContactWhiteListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int GetContactWhiteListRequest::getPageSize() const {
  return pageSize_;
}

void GetContactWhiteListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

