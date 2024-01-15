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

#include <alibabacloud/linkvisual/model/QueryFaceAllUserGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryFaceAllUserGroupRequest;

QueryFaceAllUserGroupRequest::QueryFaceAllUserGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryFaceAllUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

QueryFaceAllUserGroupRequest::~QueryFaceAllUserGroupRequest() {}

std::string QueryFaceAllUserGroupRequest::getIsolationId() const {
  return isolationId_;
}

void QueryFaceAllUserGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

int QueryFaceAllUserGroupRequest::getPageSize() const {
  return pageSize_;
}

void QueryFaceAllUserGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryFaceAllUserGroupRequest::getPageNo() const {
  return pageNo_;
}

void QueryFaceAllUserGroupRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string QueryFaceAllUserGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryFaceAllUserGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryFaceAllUserGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryFaceAllUserGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

