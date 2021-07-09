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

#include <alibabacloud/devops-rdc/model/ListDevopsProjectsRequest.h>

using AlibabaCloud::Devops_rdc::Model::ListDevopsProjectsRequest;

ListDevopsProjectsRequest::ListDevopsProjectsRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "ListDevopsProjects") {
  setMethod(HttpRequest::Method::Post);
}

ListDevopsProjectsRequest::~ListDevopsProjectsRequest() {}

std::string ListDevopsProjectsRequest::getSelectBy() const {
  return selectBy_;
}

void ListDevopsProjectsRequest::setSelectBy(const std::string &selectBy) {
  selectBy_ = selectBy;
  setBodyParameter(std::string("SelectBy"), selectBy);
}

int ListDevopsProjectsRequest::getPageSize() const {
  return pageSize_;
}

void ListDevopsProjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDevopsProjectsRequest::getOrderBy() const {
  return orderBy_;
}

void ListDevopsProjectsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setBodyParameter(std::string("OrderBy"), orderBy);
}

std::string ListDevopsProjectsRequest::getOrgId() const {
  return orgId_;
}

void ListDevopsProjectsRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string ListDevopsProjectsRequest::getPageToken() const {
  return pageToken_;
}

void ListDevopsProjectsRequest::setPageToken(const std::string &pageToken) {
  pageToken_ = pageToken;
  setBodyParameter(std::string("PageToken"), pageToken);
}

