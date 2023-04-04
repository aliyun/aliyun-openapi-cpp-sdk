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

#include <alibabacloud/imm/model/DeleteBindingRequest.h>

using AlibabaCloud::Imm::Model::DeleteBindingRequest;

DeleteBindingRequest::DeleteBindingRequest()
    : RpcServiceRequest("imm", "2020-09-30", "DeleteBinding") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBindingRequest::~DeleteBindingRequest() {}

std::string DeleteBindingRequest::getDatasetName() const {
  return datasetName_;
}

void DeleteBindingRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string DeleteBindingRequest::getProjectName() const {
  return projectName_;
}

void DeleteBindingRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string DeleteBindingRequest::getURI() const {
  return uRI_;
}

void DeleteBindingRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

bool DeleteBindingRequest::getCleanup() const {
  return cleanup_;
}

void DeleteBindingRequest::setCleanup(bool cleanup) {
  cleanup_ = cleanup;
  setParameter(std::string("Cleanup"), cleanup ? "true" : "false");
}

