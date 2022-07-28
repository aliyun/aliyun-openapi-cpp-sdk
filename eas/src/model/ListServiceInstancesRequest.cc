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

#include <alibabacloud/eas/model/ListServiceInstancesRequest.h>

using AlibabaCloud::Eas::Model::ListServiceInstancesRequest;

ListServiceInstancesRequest::ListServiceInstancesRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/instances"};
  setMethod(HttpRequest::Method::Get);
}

ListServiceInstancesRequest::~ListServiceInstancesRequest() {}

integer ListServiceInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListServiceInstancesRequest::setPageSize(integer pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

string ListServiceInstancesRequest::getServiceName() const {
  return serviceName_;
}

void ListServiceInstancesRequest::setServiceName(string serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), std::to_string(serviceName));
}

string ListServiceInstancesRequest::getClusterId() const {
  return clusterId_;
}

void ListServiceInstancesRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

integer ListServiceInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListServiceInstancesRequest::setPageNumber(integer pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

