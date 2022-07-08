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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedResourcesRequest.h>

using AlibabaCloud::Actiontrail::Model::GetAccessKeyLastUsedResourcesRequest;

GetAccessKeyLastUsedResourcesRequest::GetAccessKeyLastUsedResourcesRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "GetAccessKeyLastUsedResources") {
  setMethod(HttpRequest::Method::Post);
}

GetAccessKeyLastUsedResourcesRequest::~GetAccessKeyLastUsedResourcesRequest() {}

std::string GetAccessKeyLastUsedResourcesRequest::getAccessKey() const {
  return accessKey_;
}

void GetAccessKeyLastUsedResourcesRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setParameter(std::string("AccessKey"), accessKey);
}

std::string GetAccessKeyLastUsedResourcesRequest::getNextToken() const {
  return nextToken_;
}

void GetAccessKeyLastUsedResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetAccessKeyLastUsedResourcesRequest::getPageSize() const {
  return pageSize_;
}

void GetAccessKeyLastUsedResourcesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string GetAccessKeyLastUsedResourcesRequest::getServiceName() const {
  return serviceName_;
}

void GetAccessKeyLastUsedResourcesRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

