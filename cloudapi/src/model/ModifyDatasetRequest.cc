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

#include <alibabacloud/cloudapi/model/ModifyDatasetRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyDatasetRequest;

ModifyDatasetRequest::ModifyDatasetRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyDataset") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatasetRequest::~ModifyDatasetRequest() {}

std::string ModifyDatasetRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDatasetRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDatasetRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyDatasetRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyDatasetRequest::getDatasetId() const {
  return datasetId_;
}

void ModifyDatasetRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

std::string ModifyDatasetRequest::getDatasetName() const {
  return datasetName_;
}

void ModifyDatasetRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

