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

#include <alibabacloud/imm/model/StopBindingRequest.h>

using AlibabaCloud::Imm::Model::StopBindingRequest;

StopBindingRequest::StopBindingRequest()
    : RpcServiceRequest("imm", "2020-09-30", "StopBinding") {
  setMethod(HttpRequest::Method::Post);
}

StopBindingRequest::~StopBindingRequest() {}

std::string StopBindingRequest::getReason() const {
  return reason_;
}

void StopBindingRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string StopBindingRequest::getProjectName() const {
  return projectName_;
}

void StopBindingRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string StopBindingRequest::getDatasetName() const {
  return datasetName_;
}

void StopBindingRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string StopBindingRequest::getURI() const {
  return uRI_;
}

void StopBindingRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

