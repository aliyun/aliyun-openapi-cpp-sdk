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

#include <alibabacloud/elasticsearch/model/GetEmonMonitorDataRequest.h>

using AlibabaCloud::Elasticsearch::Model::GetEmonMonitorDataRequest;

GetEmonMonitorDataRequest::GetEmonMonitorDataRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/emon/projects/[ProjectId]/metrics/query"};
  setMethod(HttpRequest::Method::Post);
}

GetEmonMonitorDataRequest::~GetEmonMonitorDataRequest() {}

std::string GetEmonMonitorDataRequest::getBody() const {
  return body_;
}

void GetEmonMonitorDataRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string GetEmonMonitorDataRequest::getProjectId() const {
  return projectId_;
}

void GetEmonMonitorDataRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

