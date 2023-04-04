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

#include <alibabacloud/imm/model/CreateBindingRequest.h>

using AlibabaCloud::Imm::Model::CreateBindingRequest;

CreateBindingRequest::CreateBindingRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateBinding") {
  setMethod(HttpRequest::Method::Post);
}

CreateBindingRequest::~CreateBindingRequest() {}

std::string CreateBindingRequest::getBucketOwnerId() const {
  return bucketOwnerId_;
}

void CreateBindingRequest::setBucketOwnerId(const std::string &bucketOwnerId) {
  bucketOwnerId_ = bucketOwnerId;
  setParameter(std::string("BucketOwnerId"), bucketOwnerId);
}

std::string CreateBindingRequest::getDatasetName() const {
  return datasetName_;
}

void CreateBindingRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string CreateBindingRequest::getProjectName() const {
  return projectName_;
}

void CreateBindingRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateBindingRequest::getURI() const {
  return uRI_;
}

void CreateBindingRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

