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

#include <alibabacloud/ice/model/SearchMediaByFaceRequest.h>

using AlibabaCloud::ICE::Model::SearchMediaByFaceRequest;

SearchMediaByFaceRequest::SearchMediaByFaceRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SearchMediaByFace") {
  setMethod(HttpRequest::Method::Post);
}

SearchMediaByFaceRequest::~SearchMediaByFaceRequest() {}

std::string SearchMediaByFaceRequest::getEntityId() const {
  return entityId_;
}

void SearchMediaByFaceRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string SearchMediaByFaceRequest::getBiz() const {
  return biz_;
}

void SearchMediaByFaceRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

int SearchMediaByFaceRequest::getPageSize() const {
  return pageSize_;
}

void SearchMediaByFaceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchMediaByFaceRequest::getPersonImageUrl() const {
  return personImageUrl_;
}

void SearchMediaByFaceRequest::setPersonImageUrl(const std::string &personImageUrl) {
  personImageUrl_ = personImageUrl;
  setParameter(std::string("PersonImageUrl"), personImageUrl);
}

std::string SearchMediaByFaceRequest::getFaceSearchToken() const {
  return faceSearchToken_;
}

void SearchMediaByFaceRequest::setFaceSearchToken(const std::string &faceSearchToken) {
  faceSearchToken_ = faceSearchToken;
  setParameter(std::string("FaceSearchToken"), faceSearchToken);
}

int SearchMediaByFaceRequest::getPageNo() const {
  return pageNo_;
}

void SearchMediaByFaceRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string SearchMediaByFaceRequest::getAppId() const {
  return appId_;
}

void SearchMediaByFaceRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

