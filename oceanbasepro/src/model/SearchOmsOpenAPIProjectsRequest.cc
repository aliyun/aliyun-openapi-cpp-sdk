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

#include <alibabacloud/oceanbasepro/model/SearchOmsOpenAPIProjectsRequest.h>

using AlibabaCloud::OceanBasePro::Model::SearchOmsOpenAPIProjectsRequest;

SearchOmsOpenAPIProjectsRequest::SearchOmsOpenAPIProjectsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "SearchOmsOpenAPIProjects") {
  setMethod(HttpRequest::Method::Post);
}

SearchOmsOpenAPIProjectsRequest::~SearchOmsOpenAPIProjectsRequest() {}

std::vector<SearchOmsOpenAPIProjectsRequest::std::string> SearchOmsOpenAPIProjectsRequest::getDestDbTypes() const {
  return destDbTypes_;
}

void SearchOmsOpenAPIProjectsRequest::setDestDbTypes(const std::vector<SearchOmsOpenAPIProjectsRequest::std::string> &destDbTypes) {
  destDbTypes_ = destDbTypes;
  for(int dep1 = 0; dep1 != destDbTypes.size(); dep1++) {
    setBodyParameter(std::string("DestDbTypes") + "." + std::to_string(dep1 + 1), destDbTypes[dep1]);
  }
}

std::vector<SearchOmsOpenAPIProjectsRequest::std::string> SearchOmsOpenAPIProjectsRequest::getStatusList() const {
  return statusList_;
}

void SearchOmsOpenAPIProjectsRequest::setStatusList(const std::vector<SearchOmsOpenAPIProjectsRequest::std::string> &statusList) {
  statusList_ = statusList;
  for(int dep1 = 0; dep1 != statusList.size(); dep1++) {
    setBodyParameter(std::string("StatusList") + "." + std::to_string(dep1 + 1), statusList[dep1]);
  }
}

std::string SearchOmsOpenAPIProjectsRequest::getSearchKey() const {
  return searchKey_;
}

void SearchOmsOpenAPIProjectsRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

int SearchOmsOpenAPIProjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchOmsOpenAPIProjectsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<SearchOmsOpenAPIProjectsRequest::std::string> SearchOmsOpenAPIProjectsRequest::getSourceDbTypes() const {
  return sourceDbTypes_;
}

void SearchOmsOpenAPIProjectsRequest::setSourceDbTypes(const std::vector<SearchOmsOpenAPIProjectsRequest::std::string> &sourceDbTypes) {
  sourceDbTypes_ = sourceDbTypes;
  for(int dep1 = 0; dep1 != sourceDbTypes.size(); dep1++) {
    setBodyParameter(std::string("SourceDbTypes") + "." + std::to_string(dep1 + 1), sourceDbTypes[dep1]);
  }
}

int SearchOmsOpenAPIProjectsRequest::getPageSize() const {
  return pageSize_;
}

void SearchOmsOpenAPIProjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchOmsOpenAPIProjectsRequest::getWorkerGradeId() const {
  return workerGradeId_;
}

void SearchOmsOpenAPIProjectsRequest::setWorkerGradeId(const std::string &workerGradeId) {
  workerGradeId_ = workerGradeId;
  setBodyParameter(std::string("WorkerGradeId"), workerGradeId);
}

std::vector<SearchOmsOpenAPIProjectsRequest::std::string> SearchOmsOpenAPIProjectsRequest::getLabelIds() const {
  return labelIds_;
}

void SearchOmsOpenAPIProjectsRequest::setLabelIds(const std::vector<SearchOmsOpenAPIProjectsRequest::std::string> &labelIds) {
  labelIds_ = labelIds;
  for(int dep1 = 0; dep1 != labelIds.size(); dep1++) {
    setBodyParameter(std::string("LabelIds") + "." + std::to_string(dep1 + 1), labelIds[dep1]);
  }
}

