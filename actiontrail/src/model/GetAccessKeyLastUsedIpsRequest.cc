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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedIpsRequest.h>

using AlibabaCloud::Actiontrail::Model::GetAccessKeyLastUsedIpsRequest;

GetAccessKeyLastUsedIpsRequest::GetAccessKeyLastUsedIpsRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "GetAccessKeyLastUsedIps") {
  setMethod(HttpRequest::Method::Post);
}

GetAccessKeyLastUsedIpsRequest::~GetAccessKeyLastUsedIpsRequest() {}

std::string GetAccessKeyLastUsedIpsRequest::getAccessKey() const {
  return accessKey_;
}

void GetAccessKeyLastUsedIpsRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setParameter(std::string("AccessKey"), accessKey);
}

std::string GetAccessKeyLastUsedIpsRequest::getNextToken() const {
  return nextToken_;
}

void GetAccessKeyLastUsedIpsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetAccessKeyLastUsedIpsRequest::getPageSize() const {
  return pageSize_;
}

void GetAccessKeyLastUsedIpsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string GetAccessKeyLastUsedIpsRequest::getServiceName() const {
  return serviceName_;
}

void GetAccessKeyLastUsedIpsRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

