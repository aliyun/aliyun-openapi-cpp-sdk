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

#include <alibabacloud/oceanbasepro/model/ListProjectFullVerifyResultRequest.h>

using AlibabaCloud::OceanBasePro::Model::ListProjectFullVerifyResultRequest;

ListProjectFullVerifyResultRequest::ListProjectFullVerifyResultRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ListProjectFullVerifyResult") {
  setMethod(HttpRequest::Method::Post);
}

ListProjectFullVerifyResultRequest::~ListProjectFullVerifyResultRequest() {}

std::vector<ListProjectFullVerifyResultRequest::std::string> ListProjectFullVerifyResultRequest::getDestSchemas() const {
  return destSchemas_;
}

void ListProjectFullVerifyResultRequest::setDestSchemas(const std::vector<ListProjectFullVerifyResultRequest::std::string> &destSchemas) {
  destSchemas_ = destSchemas;
  for(int dep1 = 0; dep1 != destSchemas.size(); dep1++) {
    setBodyParameter(std::string("DestSchemas") + "." + std::to_string(dep1 + 1), destSchemas[dep1]);
  }
}

int ListProjectFullVerifyResultRequest::getPageNumber() const {
  return pageNumber_;
}

void ListProjectFullVerifyResultRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListProjectFullVerifyResultRequest::getPageSize() const {
  return pageSize_;
}

void ListProjectFullVerifyResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListProjectFullVerifyResultRequest::std::string> ListProjectFullVerifyResultRequest::getSourceSchemas() const {
  return sourceSchemas_;
}

void ListProjectFullVerifyResultRequest::setSourceSchemas(const std::vector<ListProjectFullVerifyResultRequest::std::string> &sourceSchemas) {
  sourceSchemas_ = sourceSchemas;
  for(int dep1 = 0; dep1 != sourceSchemas.size(); dep1++) {
    setBodyParameter(std::string("SourceSchemas") + "." + std::to_string(dep1 + 1), sourceSchemas[dep1]);
  }
}

std::string ListProjectFullVerifyResultRequest::getProjectId() const {
  return projectId_;
}

void ListProjectFullVerifyResultRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string ListProjectFullVerifyResultRequest::getStatus() const {
  return status_;
}

void ListProjectFullVerifyResultRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

