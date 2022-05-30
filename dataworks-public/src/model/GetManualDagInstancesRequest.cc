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

#include <alibabacloud/dataworks-public/model/GetManualDagInstancesRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetManualDagInstancesRequest;

GetManualDagInstancesRequest::GetManualDagInstancesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetManualDagInstances") {
  setMethod(HttpRequest::Method::Post);
}

GetManualDagInstancesRequest::~GetManualDagInstancesRequest() {}

std::string GetManualDagInstancesRequest::getProjectEnv() const {
  return projectEnv_;
}

void GetManualDagInstancesRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

std::string GetManualDagInstancesRequest::getProjectName() const {
  return projectName_;
}

void GetManualDagInstancesRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string GetManualDagInstancesRequest::getDagId() const {
  return dagId_;
}

void GetManualDagInstancesRequest::setDagId(const std::string &dagId) {
  dagId_ = dagId;
  setBodyParameter(std::string("DagId"), dagId);
}

