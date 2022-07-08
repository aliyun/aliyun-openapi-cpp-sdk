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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedEventsRequest.h>

using AlibabaCloud::Actiontrail::Model::GetAccessKeyLastUsedEventsRequest;

GetAccessKeyLastUsedEventsRequest::GetAccessKeyLastUsedEventsRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "GetAccessKeyLastUsedEvents") {
  setMethod(HttpRequest::Method::Post);
}

GetAccessKeyLastUsedEventsRequest::~GetAccessKeyLastUsedEventsRequest() {}

std::string GetAccessKeyLastUsedEventsRequest::getAccessKey() const {
  return accessKey_;
}

void GetAccessKeyLastUsedEventsRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setParameter(std::string("AccessKey"), accessKey);
}

std::string GetAccessKeyLastUsedEventsRequest::getNextToken() const {
  return nextToken_;
}

void GetAccessKeyLastUsedEventsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetAccessKeyLastUsedEventsRequest::getPageSize() const {
  return pageSize_;
}

void GetAccessKeyLastUsedEventsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string GetAccessKeyLastUsedEventsRequest::getServiceName() const {
  return serviceName_;
}

void GetAccessKeyLastUsedEventsRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

