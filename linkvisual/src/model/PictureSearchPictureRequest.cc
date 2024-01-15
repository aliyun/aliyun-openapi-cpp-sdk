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

#include <alibabacloud/linkvisual/model/PictureSearchPictureRequest.h>

using AlibabaCloud::Linkvisual::Model::PictureSearchPictureRequest;

PictureSearchPictureRequest::PictureSearchPictureRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "PictureSearchPicture") {
  setMethod(HttpRequest::Method::Post);
}

PictureSearchPictureRequest::~PictureSearchPictureRequest() {}

float PictureSearchPictureRequest::getThreshold() const {
  return threshold_;
}

void PictureSearchPictureRequest::setThreshold(float threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string PictureSearchPictureRequest::getSearchPicUrl() const {
  return searchPicUrl_;
}

void PictureSearchPictureRequest::setSearchPicUrl(const std::string &searchPicUrl) {
  searchPicUrl_ = searchPicUrl;
  setParameter(std::string("SearchPicUrl"), searchPicUrl);
}

long PictureSearchPictureRequest::getStartTime() const {
  return startTime_;
}

void PictureSearchPictureRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int PictureSearchPictureRequest::getPictureSearchType() const {
  return pictureSearchType_;
}

void PictureSearchPictureRequest::setPictureSearchType(int pictureSearchType) {
  pictureSearchType_ = pictureSearchType;
  setParameter(std::string("PictureSearchType"), std::to_string(pictureSearchType));
}

int PictureSearchPictureRequest::getPageSize() const {
  return pageSize_;
}

void PictureSearchPictureRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long PictureSearchPictureRequest::getEndTime() const {
  return endTime_;
}

void PictureSearchPictureRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int PictureSearchPictureRequest::getCurrentPage() const {
  return currentPage_;
}

void PictureSearchPictureRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

bool PictureSearchPictureRequest::getContainPicUrl() const {
  return containPicUrl_;
}

void PictureSearchPictureRequest::setContainPicUrl(bool containPicUrl) {
  containPicUrl_ = containPicUrl;
  setParameter(std::string("ContainPicUrl"), containPicUrl ? "true" : "false");
}

std::string PictureSearchPictureRequest::getApiProduct() const {
  return apiProduct_;
}

void PictureSearchPictureRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string PictureSearchPictureRequest::getApiRevision() const {
  return apiRevision_;
}

void PictureSearchPictureRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string PictureSearchPictureRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void PictureSearchPictureRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

