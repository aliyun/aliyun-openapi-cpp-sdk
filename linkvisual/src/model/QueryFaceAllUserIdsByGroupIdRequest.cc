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

#include <alibabacloud/linkvisual/model/QueryFaceAllUserIdsByGroupIdRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryFaceAllUserIdsByGroupIdRequest;

QueryFaceAllUserIdsByGroupIdRequest::QueryFaceAllUserIdsByGroupIdRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryFaceAllUserIdsByGroupId") {
  setMethod(HttpRequest::Method::Post);
}

QueryFaceAllUserIdsByGroupIdRequest::~QueryFaceAllUserIdsByGroupIdRequest() {}

std::string QueryFaceAllUserIdsByGroupIdRequest::getIsolationId() const {
  return isolationId_;
}

void QueryFaceAllUserIdsByGroupIdRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

int QueryFaceAllUserIdsByGroupIdRequest::getPageSize() const {
  return pageSize_;
}

void QueryFaceAllUserIdsByGroupIdRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryFaceAllUserIdsByGroupIdRequest::getUserGroupId() const {
  return userGroupId_;
}

void QueryFaceAllUserIdsByGroupIdRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

int QueryFaceAllUserIdsByGroupIdRequest::getPageNo() const {
  return pageNo_;
}

void QueryFaceAllUserIdsByGroupIdRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string QueryFaceAllUserIdsByGroupIdRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryFaceAllUserIdsByGroupIdRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryFaceAllUserIdsByGroupIdRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryFaceAllUserIdsByGroupIdRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

