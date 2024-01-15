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

#include <alibabacloud/linkvisual/model/AddFaceUserRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceUserRequest;

AddFaceUserRequest::AddFaceUserRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceUser") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceUserRequest::~AddFaceUserRequest() {}

std::string AddFaceUserRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceUserRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceUserRequest::getCustomUserId() const {
  return customUserId_;
}

void AddFaceUserRequest::setCustomUserId(const std::string &customUserId) {
  customUserId_ = customUserId;
  setParameter(std::string("CustomUserId"), customUserId);
}

std::string AddFaceUserRequest::getParams() const {
  return params_;
}

void AddFaceUserRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string AddFaceUserRequest::getFacePicUrl() const {
  return facePicUrl_;
}

void AddFaceUserRequest::setFacePicUrl(const std::string &facePicUrl) {
  facePicUrl_ = facePicUrl;
  setParameter(std::string("FacePicUrl"), facePicUrl);
}

std::string AddFaceUserRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceUserRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceUserRequest::getName() const {
  return name_;
}

void AddFaceUserRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddFaceUserRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceUserRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

