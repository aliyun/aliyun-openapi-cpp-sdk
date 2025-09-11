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

#include <alibabacloud/quickbi-public/model/UpdateCubeBySqlRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateCubeBySqlRequest;

UpdateCubeBySqlRequest::UpdateCubeBySqlRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateCubeBySql") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCubeBySqlRequest::~UpdateCubeBySqlRequest() {}

std::string UpdateCubeBySqlRequest::getDsId() const {
  return dsId_;
}

void UpdateCubeBySqlRequest::setDsId(const std::string &dsId) {
  dsId_ = dsId;
  setParameter(std::string("DsId"), dsId);
}

std::string UpdateCubeBySqlRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateCubeBySqlRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateCubeBySqlRequest::getUserId() const {
  return userId_;
}

void UpdateCubeBySqlRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateCubeBySqlRequest::getCubeId() const {
  return cubeId_;
}

void UpdateCubeBySqlRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string UpdateCubeBySqlRequest::getSignType() const {
  return signType_;
}

void UpdateCubeBySqlRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string UpdateCubeBySqlRequest::getCustomSql() const {
  return customSql_;
}

void UpdateCubeBySqlRequest::setCustomSql(const std::string &customSql) {
  customSql_ = customSql;
  setParameter(std::string("CustomSql"), customSql);
}

std::string UpdateCubeBySqlRequest::getWorkspaceId() const {
  return workspaceId_;
}

void UpdateCubeBySqlRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

