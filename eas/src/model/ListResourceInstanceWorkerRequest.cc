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

#include <alibabacloud/eas/model/ListResourceInstanceWorkerRequest.h>

using AlibabaCloud::Eas::Model::ListResourceInstanceWorkerRequest;

ListResourceInstanceWorkerRequest::ListResourceInstanceWorkerRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources/[ClusterId]/[ResourceId]/instance/[InstanceName]/workers"};
  setMethod(HttpRequest::Method::Get);
}

ListResourceInstanceWorkerRequest::~ListResourceInstanceWorkerRequest() {}

std::string ListResourceInstanceWorkerRequest::getResourceId() const {
  return resourceId_;
}

void ListResourceInstanceWorkerRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListResourceInstanceWorkerRequest::getInstanceName() const {
  return instanceName_;
}

void ListResourceInstanceWorkerRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

int ListResourceInstanceWorkerRequest::getPageSize() const {
  return pageSize_;
}

void ListResourceInstanceWorkerRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListResourceInstanceWorkerRequest::getClusterId() const {
  return clusterId_;
}

void ListResourceInstanceWorkerRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListResourceInstanceWorkerRequest::getPageNumber() const {
  return pageNumber_;
}

void ListResourceInstanceWorkerRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

