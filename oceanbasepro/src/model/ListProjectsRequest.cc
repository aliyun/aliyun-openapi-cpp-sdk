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

#include <alibabacloud/oceanbasepro/model/ListProjectsRequest.h>

using AlibabaCloud::OceanBasePro::Model::ListProjectsRequest;

ListProjectsRequest::ListProjectsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ListProjects") {
  setMethod(HttpRequest::Method::Post);
}

ListProjectsRequest::~ListProjectsRequest() {}

std::string ListProjectsRequest::getSearchKey() const {
  return searchKey_;
}

void ListProjectsRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

std::string ListProjectsRequest::getType() const {
  return type_;
}

void ListProjectsRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

bool ListProjectsRequest::getVisibleSubProject() const {
  return visibleSubProject_;
}

void ListProjectsRequest::setVisibleSubProject(bool visibleSubProject) {
  visibleSubProject_ = visibleSubProject;
  setBodyParameter(std::string("VisibleSubProject"), visibleSubProject ? "true" : "false");
}

int ListProjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListProjectsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<ListProjectsRequest::std::string> ListProjectsRequest::getSinkEndpointTypes() const {
  return sinkEndpointTypes_;
}

void ListProjectsRequest::setSinkEndpointTypes(const std::vector<ListProjectsRequest::std::string> &sinkEndpointTypes) {
  sinkEndpointTypes_ = sinkEndpointTypes;
  for(int dep1 = 0; dep1 != sinkEndpointTypes.size(); dep1++) {
    setBodyParameter(std::string("SinkEndpointTypes") + "." + std::to_string(dep1 + 1), sinkEndpointTypes[dep1]);
  }
}

int ListProjectsRequest::getPageSize() const {
  return pageSize_;
}

void ListProjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListProjectsRequest::getOrder() const {
  return order_;
}

void ListProjectsRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

std::vector<ListProjectsRequest::std::string> ListProjectsRequest::getSourceEndpointTypes() const {
  return sourceEndpointTypes_;
}

void ListProjectsRequest::setSourceEndpointTypes(const std::vector<ListProjectsRequest::std::string> &sourceEndpointTypes) {
  sourceEndpointTypes_ = sourceEndpointTypes;
  for(int dep1 = 0; dep1 != sourceEndpointTypes.size(); dep1++) {
    setBodyParameter(std::string("SourceEndpointTypes") + "." + std::to_string(dep1 + 1), sourceEndpointTypes[dep1]);
  }
}

std::string ListProjectsRequest::getSortField() const {
  return sortField_;
}

void ListProjectsRequest::setSortField(const std::string &sortField) {
  sortField_ = sortField;
  setBodyParameter(std::string("SortField"), sortField);
}

bool ListProjectsRequest::getNeedRelatedInfo() const {
  return needRelatedInfo_;
}

void ListProjectsRequest::setNeedRelatedInfo(bool needRelatedInfo) {
  needRelatedInfo_ = needRelatedInfo;
  setBodyParameter(std::string("NeedRelatedInfo"), needRelatedInfo ? "true" : "false");
}

std::vector<ListProjectsRequest::std::string> ListProjectsRequest::getLabelIds() const {
  return labelIds_;
}

void ListProjectsRequest::setLabelIds(const std::vector<ListProjectsRequest::std::string> &labelIds) {
  labelIds_ = labelIds;
  for(int dep1 = 0; dep1 != labelIds.size(); dep1++) {
    setBodyParameter(std::string("LabelIds") + "." + std::to_string(dep1 + 1), labelIds[dep1]);
  }
}

std::vector<ListProjectsRequest::std::string> ListProjectsRequest::getStatus() const {
  return status_;
}

void ListProjectsRequest::setStatus(const std::vector<ListProjectsRequest::std::string> &status) {
  status_ = status;
  for(int dep1 = 0; dep1 != status.size(); dep1++) {
    setBodyParameter(std::string("Status") + "." + std::to_string(dep1 + 1), status[dep1]);
  }
}

