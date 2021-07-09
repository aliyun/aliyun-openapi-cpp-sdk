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

#include <alibabacloud/devops-rdc/model/ListDevopsProjectSprintsRequest.h>

using AlibabaCloud::Devops_rdc::Model::ListDevopsProjectSprintsRequest;

ListDevopsProjectSprintsRequest::ListDevopsProjectSprintsRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "ListDevopsProjectSprints") {
  setMethod(HttpRequest::Method::Post);
}

ListDevopsProjectSprintsRequest::~ListDevopsProjectSprintsRequest() {}

long ListDevopsProjectSprintsRequest::getPageSize() const {
  return pageSize_;
}

void ListDevopsProjectSprintsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDevopsProjectSprintsRequest::getProjectId() const {
  return projectId_;
}

void ListDevopsProjectSprintsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string ListDevopsProjectSprintsRequest::getOrgId() const {
  return orgId_;
}

void ListDevopsProjectSprintsRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string ListDevopsProjectSprintsRequest::getPageToken() const {
  return pageToken_;
}

void ListDevopsProjectSprintsRequest::setPageToken(const std::string &pageToken) {
  pageToken_ = pageToken;
  setBodyParameter(std::string("PageToken"), pageToken);
}

