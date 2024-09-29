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

#include <alibabacloud/dataworks-public/model/DsgWhiteListQueryListRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgWhiteListQueryListRequest;

DsgWhiteListQueryListRequest::DsgWhiteListQueryListRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgWhiteListQueryList") {
  setMethod(HttpRequest::Method::Get);
}

DsgWhiteListQueryListRequest::~DsgWhiteListQueryListRequest() {}

std::string DsgWhiteListQueryListRequest::getDataType() const {
  return dataType_;
}

void DsgWhiteListQueryListRequest::setDataType(const std::string &dataType) {
  dataType_ = dataType;
  setParameter(std::string("DataType"), dataType);
}

int DsgWhiteListQueryListRequest::getPageSize() const {
  return pageSize_;
}

void DsgWhiteListQueryListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DsgWhiteListQueryListRequest::getSceneId() const {
  return sceneId_;
}

void DsgWhiteListQueryListRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

int DsgWhiteListQueryListRequest::getPageNumber() const {
  return pageNumber_;
}

void DsgWhiteListQueryListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

