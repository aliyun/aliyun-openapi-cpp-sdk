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

#include <alibabacloud/cloudapi/model/CreateDatasetRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateDatasetRequest;

CreateDatasetRequest::CreateDatasetRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateDataset") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatasetRequest::~CreateDatasetRequest() {}

std::string CreateDatasetRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDatasetRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDatasetRequest::getDatasetType() const {
  return datasetType_;
}

void CreateDatasetRequest::setDatasetType(const std::string &datasetType) {
  datasetType_ = datasetType;
  setParameter(std::string("DatasetType"), datasetType);
}

std::string CreateDatasetRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateDatasetRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateDatasetRequest::getDatasetName() const {
  return datasetName_;
}

void CreateDatasetRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

