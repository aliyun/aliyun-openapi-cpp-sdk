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

#include <alibabacloud/linkvisual/model/QueryFaceUserIdByCustomUserIdRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryFaceUserIdByCustomUserIdRequest;

QueryFaceUserIdByCustomUserIdRequest::QueryFaceUserIdByCustomUserIdRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryFaceUserIdByCustomUserId") {
  setMethod(HttpRequest::Method::Post);
}

QueryFaceUserIdByCustomUserIdRequest::~QueryFaceUserIdByCustomUserIdRequest() {}

std::string QueryFaceUserIdByCustomUserIdRequest::getIsolationId() const {
  return isolationId_;
}

void QueryFaceUserIdByCustomUserIdRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string QueryFaceUserIdByCustomUserIdRequest::getCustomUserId() const {
  return customUserId_;
}

void QueryFaceUserIdByCustomUserIdRequest::setCustomUserId(const std::string &customUserId) {
  customUserId_ = customUserId;
  setParameter(std::string("CustomUserId"), customUserId);
}

std::string QueryFaceUserIdByCustomUserIdRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryFaceUserIdByCustomUserIdRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryFaceUserIdByCustomUserIdRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryFaceUserIdByCustomUserIdRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

