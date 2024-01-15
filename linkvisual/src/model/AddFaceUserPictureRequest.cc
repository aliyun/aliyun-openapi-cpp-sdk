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

#include <alibabacloud/linkvisual/model/AddFaceUserPictureRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceUserPictureRequest;

AddFaceUserPictureRequest::AddFaceUserPictureRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceUserPicture") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceUserPictureRequest::~AddFaceUserPictureRequest() {}

std::string AddFaceUserPictureRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceUserPictureRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceUserPictureRequest::getUserId() const {
  return userId_;
}

void AddFaceUserPictureRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string AddFaceUserPictureRequest::getFacePicUrl() const {
  return facePicUrl_;
}

void AddFaceUserPictureRequest::setFacePicUrl(const std::string &facePicUrl) {
  facePicUrl_ = facePicUrl;
  setParameter(std::string("FacePicUrl"), facePicUrl);
}

std::string AddFaceUserPictureRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceUserPictureRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceUserPictureRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceUserPictureRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

