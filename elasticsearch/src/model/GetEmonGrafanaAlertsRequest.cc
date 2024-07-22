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

#include <alibabacloud/elasticsearch/model/GetEmonGrafanaAlertsRequest.h>

using AlibabaCloud::Elasticsearch::Model::GetEmonGrafanaAlertsRequest;

GetEmonGrafanaAlertsRequest::GetEmonGrafanaAlertsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/emon/projects/[ProjectId]/grafana/proxy/api/alerts"};
  setMethod(HttpRequest::Method::Get);
}

GetEmonGrafanaAlertsRequest::~GetEmonGrafanaAlertsRequest() {}

std::string GetEmonGrafanaAlertsRequest::getBody() const {
  return body_;
}

void GetEmonGrafanaAlertsRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string GetEmonGrafanaAlertsRequest::getProjectId() const {
  return projectId_;
}

void GetEmonGrafanaAlertsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

