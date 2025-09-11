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

#include <alibabacloud/quickbi-public/model/CreateDatasetRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateDatasetRequest;

CreateDatasetRequest::CreateDatasetRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateDataset") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatasetRequest::~CreateDatasetRequest() {}

std::string CreateDatasetRequest::getDsId() const {
  return dsId_;
}

void CreateDatasetRequest::setDsId(const std::string &dsId) {
  dsId_ = dsId;
  setParameter(std::string("DsId"), dsId);
}

std::string CreateDatasetRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateDatasetRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CreateDatasetRequest::getUserId() const {
  return userId_;
}

void CreateDatasetRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateDatasetRequest::getTableName() const {
  return tableName_;
}

void CreateDatasetRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string CreateDatasetRequest::getTargetDirectoryId() const {
  return targetDirectoryId_;
}

void CreateDatasetRequest::setTargetDirectoryId(const std::string &targetDirectoryId) {
  targetDirectoryId_ = targetDirectoryId;
  setParameter(std::string("TargetDirectoryId"), targetDirectoryId);
}

std::string CreateDatasetRequest::getSignType() const {
  return signType_;
}

void CreateDatasetRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string CreateDatasetRequest::getUserDefineCubeName() const {
  return userDefineCubeName_;
}

void CreateDatasetRequest::setUserDefineCubeName(const std::string &userDefineCubeName) {
  userDefineCubeName_ = userDefineCubeName;
  setParameter(std::string("UserDefineCubeName"), userDefineCubeName);
}

std::string CreateDatasetRequest::getWorkspaceId() const {
  return workspaceId_;
}

void CreateDatasetRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

