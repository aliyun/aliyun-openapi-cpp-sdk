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

#include <alibabacloud/ice/model/SearchMediaClipByFaceRequest.h>

using AlibabaCloud::ICE::Model::SearchMediaClipByFaceRequest;

SearchMediaClipByFaceRequest::SearchMediaClipByFaceRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SearchMediaClipByFace") {
  setMethod(HttpRequest::Method::Post);
}

SearchMediaClipByFaceRequest::~SearchMediaClipByFaceRequest() {}

std::string SearchMediaClipByFaceRequest::getEntityId() const {
  return entityId_;
}

void SearchMediaClipByFaceRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string SearchMediaClipByFaceRequest::getBiz() const {
  return biz_;
}

void SearchMediaClipByFaceRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

int SearchMediaClipByFaceRequest::getPageSize() const {
  return pageSize_;
}

void SearchMediaClipByFaceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchMediaClipByFaceRequest::getMediaId() const {
  return mediaId_;
}

void SearchMediaClipByFaceRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string SearchMediaClipByFaceRequest::getFaceSearchToken() const {
  return faceSearchToken_;
}

void SearchMediaClipByFaceRequest::setFaceSearchToken(const std::string &faceSearchToken) {
  faceSearchToken_ = faceSearchToken;
  setParameter(std::string("FaceSearchToken"), faceSearchToken);
}

int SearchMediaClipByFaceRequest::getPageNo() const {
  return pageNo_;
}

void SearchMediaClipByFaceRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string SearchMediaClipByFaceRequest::getAppId() const {
  return appId_;
}

void SearchMediaClipByFaceRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

