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

#include <alibabacloud/dataworks-public/model/ListCalcEnginesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListCalcEnginesRequest;

ListCalcEnginesRequest::ListCalcEnginesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListCalcEngines") {
  setMethod(HttpRequest::Method::Post);
}

ListCalcEnginesRequest::~ListCalcEnginesRequest() {}

std::string ListCalcEnginesRequest::getCalcEngineType() const {
  return calcEngineType_;
}

void ListCalcEnginesRequest::setCalcEngineType(const std::string &calcEngineType) {
  calcEngineType_ = calcEngineType;
  setParameter(std::string("CalcEngineType"), calcEngineType);
}

int ListCalcEnginesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCalcEnginesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCalcEnginesRequest::getName() const {
  return name_;
}

void ListCalcEnginesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListCalcEnginesRequest::getEnvType() const {
  return envType_;
}

void ListCalcEnginesRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

int ListCalcEnginesRequest::getPageSize() const {
  return pageSize_;
}

void ListCalcEnginesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListCalcEnginesRequest::getProjectId() const {
  return projectId_;
}

void ListCalcEnginesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

