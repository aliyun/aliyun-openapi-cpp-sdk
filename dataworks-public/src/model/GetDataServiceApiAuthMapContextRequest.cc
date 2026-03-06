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

#include <alibabacloud/dataworks-public/model/GetDataServiceApiAuthMapContextRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataServiceApiAuthMapContextRequest;

GetDataServiceApiAuthMapContextRequest::GetDataServiceApiAuthMapContextRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "GetDataServiceApiAuthMapContext") {
  setMethod(HttpRequest::Method::Get);
}

GetDataServiceApiAuthMapContextRequest::~GetDataServiceApiAuthMapContextRequest() {}

std::string GetDataServiceApiAuthMapContextRequest::getApiPath() const {
  return apiPath_;
}

void GetDataServiceApiAuthMapContextRequest::setApiPath(const std::string &apiPath) {
  apiPath_ = apiPath;
  setParameter(std::string("ApiPath"), apiPath);
}

long GetDataServiceApiAuthMapContextRequest::getProjectId() const {
  return projectId_;
}

void GetDataServiceApiAuthMapContextRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long GetDataServiceApiAuthMapContextRequest::getApiId() const {
  return apiId_;
}

void GetDataServiceApiAuthMapContextRequest::setApiId(long apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), std::to_string(apiId));
}

bool GetDataServiceApiAuthMapContextRequest::getVerbose() const {
  return verbose_;
}

void GetDataServiceApiAuthMapContextRequest::setVerbose(bool verbose) {
  verbose_ = verbose;
  setParameter(std::string("Verbose"), verbose ? "true" : "false");
}

