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

#include <alibabacloud/imm/model/ResumeBindingRequest.h>

using AlibabaCloud::Imm::Model::ResumeBindingRequest;

ResumeBindingRequest::ResumeBindingRequest()
    : RpcServiceRequest("imm", "2020-09-30", "ResumeBinding") {
  setMethod(HttpRequest::Method::Post);
}

ResumeBindingRequest::~ResumeBindingRequest() {}

std::string ResumeBindingRequest::getProjectName() const {
  return projectName_;
}

void ResumeBindingRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string ResumeBindingRequest::getDatasetName() const {
  return datasetName_;
}

void ResumeBindingRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string ResumeBindingRequest::getURI() const {
  return uRI_;
}

void ResumeBindingRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

