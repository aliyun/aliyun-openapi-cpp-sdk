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

#include <alibabacloud/linkvisual/model/CreatePictureSearchJobRequest.h>

using AlibabaCloud::Linkvisual::Model::CreatePictureSearchJobRequest;

CreatePictureSearchJobRequest::CreatePictureSearchJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreatePictureSearchJob") {
  setMethod(HttpRequest::Method::Post);
}

CreatePictureSearchJobRequest::~CreatePictureSearchJobRequest() {}

float CreatePictureSearchJobRequest::getThreshold() const {
  return threshold_;
}

void CreatePictureSearchJobRequest::setThreshold(float threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string CreatePictureSearchJobRequest::getSearchPicUrl() const {
  return searchPicUrl_;
}

void CreatePictureSearchJobRequest::setSearchPicUrl(const std::string &searchPicUrl) {
  searchPicUrl_ = searchPicUrl;
  setParameter(std::string("SearchPicUrl"), searchPicUrl);
}

long CreatePictureSearchJobRequest::getStartTime() const {
  return startTime_;
}

void CreatePictureSearchJobRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int CreatePictureSearchJobRequest::getPictureSearchType() const {
  return pictureSearchType_;
}

void CreatePictureSearchJobRequest::setPictureSearchType(int pictureSearchType) {
  pictureSearchType_ = pictureSearchType;
  setParameter(std::string("PictureSearchType"), std::to_string(pictureSearchType));
}

float CreatePictureSearchJobRequest::getBodyThreshold() const {
  return bodyThreshold_;
}

void CreatePictureSearchJobRequest::setBodyThreshold(float bodyThreshold) {
  bodyThreshold_ = bodyThreshold;
  setParameter(std::string("BodyThreshold"), std::to_string(bodyThreshold));
}

long CreatePictureSearchJobRequest::getEndTime() const {
  return endTime_;
}

void CreatePictureSearchJobRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string CreatePictureSearchJobRequest::getApiProduct() const {
  return apiProduct_;
}

void CreatePictureSearchJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreatePictureSearchJobRequest::getApiRevision() const {
  return apiRevision_;
}

void CreatePictureSearchJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreatePictureSearchJobRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void CreatePictureSearchJobRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

