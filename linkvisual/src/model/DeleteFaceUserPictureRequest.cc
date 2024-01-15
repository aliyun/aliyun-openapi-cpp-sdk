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

#include <alibabacloud/linkvisual/model/DeleteFaceUserPictureRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteFaceUserPictureRequest;

DeleteFaceUserPictureRequest::DeleteFaceUserPictureRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteFaceUserPicture") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFaceUserPictureRequest::~DeleteFaceUserPictureRequest() {}

std::string DeleteFaceUserPictureRequest::getIsolationId() const {
  return isolationId_;
}

void DeleteFaceUserPictureRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string DeleteFaceUserPictureRequest::getUserId() const {
  return userId_;
}

void DeleteFaceUserPictureRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DeleteFaceUserPictureRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteFaceUserPictureRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteFaceUserPictureRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteFaceUserPictureRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeleteFaceUserPictureRequest::getFacePicMd5() const {
  return facePicMd5_;
}

void DeleteFaceUserPictureRequest::setFacePicMd5(const std::string &facePicMd5) {
  facePicMd5_ = facePicMd5;
  setParameter(std::string("FacePicMd5"), facePicMd5);
}

