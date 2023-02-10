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

#include <alibabacloud/eas/model/ListServiceVersionsRequest.h>

using AlibabaCloud::Eas::Model::ListServiceVersionsRequest;

ListServiceVersionsRequest::ListServiceVersionsRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/versions"};
  setMethod(HttpRequest::Method::Get);
}

ListServiceVersionsRequest::~ListServiceVersionsRequest() {}

int ListServiceVersionsRequest::getPageSize() const {
  return pageSize_;
}

void ListServiceVersionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListServiceVersionsRequest::getServiceName() const {
  return serviceName_;
}

void ListServiceVersionsRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string ListServiceVersionsRequest::getClusterId() const {
  return clusterId_;
}

void ListServiceVersionsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListServiceVersionsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListServiceVersionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

