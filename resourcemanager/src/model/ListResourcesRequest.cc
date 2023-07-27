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

#include <alibabacloud/resourcemanager/model/ListResourcesRequest.h>

using AlibabaCloud::ResourceManager::Model::ListResourcesRequest;

ListResourcesRequest::ListResourcesRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListResources") {
  setMethod(HttpRequest::Method::Post);
}

ListResourcesRequest::~ListResourcesRequest() {}

int ListResourcesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListResourcesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int ListResourcesRequest::getPageSize() const {
  return pageSize_;
}

void ListResourcesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListResourcesRequest::getResourceId() const {
  return resourceId_;
}

void ListResourcesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::vector<ListResourcesRequest::ResourceTypes> ListResourcesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListResourcesRequest::setResourceTypes(const std::vector<ListResourcesRequest::ResourceTypes> &resourceTypes) {
  resourceTypes_ = resourceTypes;
  for(int dep1 = 0; dep1 != resourceTypes.size(); dep1++) {
    setParameter(std::string("ResourceTypes") + "." + std::to_string(dep1 + 1) + ".Service", resourceTypes[dep1].service);
    setParameter(std::string("ResourceTypes") + "." + std::to_string(dep1 + 1) + ".ResourceType", resourceTypes[dep1].resourceType);
  }
}

std::string ListResourcesRequest::getResourceType() const {
  return resourceType_;
}

void ListResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListResourcesRequest::getService() const {
  return service_;
}

void ListResourcesRequest::setService(const std::string &service) {
  service_ = service;
  setParameter(std::string("Service"), service);
}

std::string ListResourcesRequest::getRegion() const {
  return region_;
}

void ListResourcesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string ListResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void ListResourcesRequest::setResourceIds(const std::string &resourceIds) {
  resourceIds_ = resourceIds;
  setParameter(std::string("ResourceIds"), resourceIds);
}

