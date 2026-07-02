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

#include <alibabacloud/quickbi-public/model/DeleteAuthorizationByUserIdRequest.h>

using AlibabaCloud::Quickbi_public::Model::DeleteAuthorizationByUserIdRequest;

DeleteAuthorizationByUserIdRequest::DeleteAuthorizationByUserIdRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DeleteAuthorizationByUserId") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAuthorizationByUserIdRequest::~DeleteAuthorizationByUserIdRequest() {}

std::string DeleteAuthorizationByUserIdRequest::getAccessPoint() const {
  return accessPoint_;
}

void DeleteAuthorizationByUserIdRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string DeleteAuthorizationByUserIdRequest::getQbiUserId() const {
  return qbiUserId_;
}

void DeleteAuthorizationByUserIdRequest::setQbiUserId(const std::string &qbiUserId) {
  qbiUserId_ = qbiUserId;
  setParameter(std::string("QbiUserId"), qbiUserId);
}

std::string DeleteAuthorizationByUserIdRequest::getResourceId() const {
  return resourceId_;
}

void DeleteAuthorizationByUserIdRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DeleteAuthorizationByUserIdRequest::getSignType() const {
  return signType_;
}

void DeleteAuthorizationByUserIdRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string DeleteAuthorizationByUserIdRequest::getResourceType() const {
  return resourceType_;
}

void DeleteAuthorizationByUserIdRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

