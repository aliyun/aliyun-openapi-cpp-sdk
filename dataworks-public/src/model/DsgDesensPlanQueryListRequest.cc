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

#include <alibabacloud/dataworks-public/model/DsgDesensPlanQueryListRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgDesensPlanQueryListRequest;

DsgDesensPlanQueryListRequest::DsgDesensPlanQueryListRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgDesensPlanQueryList") {
  setMethod(HttpRequest::Method::Get);
}

DsgDesensPlanQueryListRequest::~DsgDesensPlanQueryListRequest() {}

std::string DsgDesensPlanQueryListRequest::getOwner() const {
  return owner_;
}

void DsgDesensPlanQueryListRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

int DsgDesensPlanQueryListRequest::getPageSize() const {
  return pageSize_;
}

void DsgDesensPlanQueryListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DsgDesensPlanQueryListRequest::getSceneId() const {
  return sceneId_;
}

void DsgDesensPlanQueryListRequest::setSceneId(int sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

std::string DsgDesensPlanQueryListRequest::getRuleName() const {
  return ruleName_;
}

void DsgDesensPlanQueryListRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

int DsgDesensPlanQueryListRequest::getPageNumber() const {
  return pageNumber_;
}

void DsgDesensPlanQueryListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DsgDesensPlanQueryListRequest::getStatus() const {
  return status_;
}

void DsgDesensPlanQueryListRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

