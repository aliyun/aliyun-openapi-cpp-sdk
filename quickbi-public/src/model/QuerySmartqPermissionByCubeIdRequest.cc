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

#include <alibabacloud/quickbi-public/model/QuerySmartqPermissionByCubeIdRequest.h>

using AlibabaCloud::Quickbi_public::Model::QuerySmartqPermissionByCubeIdRequest;

QuerySmartqPermissionByCubeIdRequest::QuerySmartqPermissionByCubeIdRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QuerySmartqPermissionByCubeId") {
  setMethod(HttpRequest::Method::Post);
}

QuerySmartqPermissionByCubeIdRequest::~QuerySmartqPermissionByCubeIdRequest() {}

std::string QuerySmartqPermissionByCubeIdRequest::getAccessPoint() const {
  return accessPoint_;
}

void QuerySmartqPermissionByCubeIdRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QuerySmartqPermissionByCubeIdRequest::getUserId() const {
  return userId_;
}

void QuerySmartqPermissionByCubeIdRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string QuerySmartqPermissionByCubeIdRequest::getCubeId() const {
  return cubeId_;
}

void QuerySmartqPermissionByCubeIdRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string QuerySmartqPermissionByCubeIdRequest::getSignType() const {
  return signType_;
}

void QuerySmartqPermissionByCubeIdRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

