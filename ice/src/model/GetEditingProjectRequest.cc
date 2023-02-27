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

#include <alibabacloud/ice/model/GetEditingProjectRequest.h>

using AlibabaCloud::ICE::Model::GetEditingProjectRequest;

GetEditingProjectRequest::GetEditingProjectRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

GetEditingProjectRequest::~GetEditingProjectRequest() {}

long GetEditingProjectRequest::getFEExtendFlag() const {
  return fEExtendFlag_;
}

void GetEditingProjectRequest::setFEExtendFlag(long fEExtendFlag) {
  fEExtendFlag_ = fEExtendFlag;
  setParameter(std::string("FEExtendFlag"), std::to_string(fEExtendFlag));
}

std::string GetEditingProjectRequest::getRequestSource() const {
  return requestSource_;
}

void GetEditingProjectRequest::setRequestSource(const std::string &requestSource) {
  requestSource_ = requestSource;
  setParameter(std::string("RequestSource"), requestSource);
}

std::string GetEditingProjectRequest::getProjectId() const {
  return projectId_;
}

void GetEditingProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

