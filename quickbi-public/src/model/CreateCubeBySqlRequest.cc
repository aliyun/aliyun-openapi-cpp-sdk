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

#include <alibabacloud/quickbi-public/model/CreateCubeBySqlRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateCubeBySqlRequest;

CreateCubeBySqlRequest::CreateCubeBySqlRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateCubeBySql") {
  setMethod(HttpRequest::Method::Post);
}

CreateCubeBySqlRequest::~CreateCubeBySqlRequest() {}

std::string CreateCubeBySqlRequest::getDsId() const {
  return dsId_;
}

void CreateCubeBySqlRequest::setDsId(const std::string &dsId) {
  dsId_ = dsId;
  setParameter(std::string("DsId"), dsId);
}

std::string CreateCubeBySqlRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateCubeBySqlRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CreateCubeBySqlRequest::getCaption() const {
  return caption_;
}

void CreateCubeBySqlRequest::setCaption(const std::string &caption) {
  caption_ = caption;
  setParameter(std::string("Caption"), caption);
}

std::string CreateCubeBySqlRequest::getUserId() const {
  return userId_;
}

void CreateCubeBySqlRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateCubeBySqlRequest::getSignType() const {
  return signType_;
}

void CreateCubeBySqlRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string CreateCubeBySqlRequest::getCustomSql() const {
  return customSql_;
}

void CreateCubeBySqlRequest::setCustomSql(const std::string &customSql) {
  customSql_ = customSql;
  setParameter(std::string("CustomSql"), customSql);
}

std::string CreateCubeBySqlRequest::getWorkspaceId() const {
  return workspaceId_;
}

void CreateCubeBySqlRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

