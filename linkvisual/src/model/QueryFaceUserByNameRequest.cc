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

#include <alibabacloud/linkvisual/model/QueryFaceUserByNameRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryFaceUserByNameRequest;

QueryFaceUserByNameRequest::QueryFaceUserByNameRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryFaceUserByName") {
  setMethod(HttpRequest::Method::Post);
}

QueryFaceUserByNameRequest::~QueryFaceUserByNameRequest() {}

std::string QueryFaceUserByNameRequest::getIsolationId() const {
  return isolationId_;
}

void QueryFaceUserByNameRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

int QueryFaceUserByNameRequest::getPageSize() const {
  return pageSize_;
}

void QueryFaceUserByNameRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryFaceUserByNameRequest::getParams() const {
  return params_;
}

void QueryFaceUserByNameRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

int QueryFaceUserByNameRequest::getPageNo() const {
  return pageNo_;
}

void QueryFaceUserByNameRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string QueryFaceUserByNameRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryFaceUserByNameRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryFaceUserByNameRequest::getName() const {
  return name_;
}

void QueryFaceUserByNameRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string QueryFaceUserByNameRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryFaceUserByNameRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

