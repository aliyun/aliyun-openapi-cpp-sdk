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

#include <alibabacloud/viapi-regen/model/CreateLabelsetRequest.h>

using AlibabaCloud::Viapi_regen::Model::CreateLabelsetRequest;

CreateLabelsetRequest::CreateLabelsetRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "CreateLabelset") {
  setMethod(HttpRequest::Method::Post);
}

CreateLabelsetRequest::~CreateLabelsetRequest() {}

std::string CreateLabelsetRequest::getDescription() const {
  return description_;
}

void CreateLabelsetRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateLabelsetRequest::getType() const {
  return type_;
}

void CreateLabelsetRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

long CreateLabelsetRequest::getPreLabelId() const {
  return preLabelId_;
}

void CreateLabelsetRequest::setPreLabelId(long preLabelId) {
  preLabelId_ = preLabelId;
  setBodyParameter(std::string("PreLabelId"), std::to_string(preLabelId));
}

std::string CreateLabelsetRequest::getTagUserList() const {
  return tagUserList_;
}

void CreateLabelsetRequest::setTagUserList(const std::string &tagUserList) {
  tagUserList_ = tagUserList;
  setBodyParameter(std::string("TagUserList"), tagUserList);
}

std::string CreateLabelsetRequest::getUserOssUrl() const {
  return userOssUrl_;
}

void CreateLabelsetRequest::setUserOssUrl(const std::string &userOssUrl) {
  userOssUrl_ = userOssUrl;
  setBodyParameter(std::string("UserOssUrl"), userOssUrl);
}

std::string CreateLabelsetRequest::getObjectKey() const {
  return objectKey_;
}

void CreateLabelsetRequest::setObjectKey(const std::string &objectKey) {
  objectKey_ = objectKey;
  setBodyParameter(std::string("ObjectKey"), objectKey);
}

std::string CreateLabelsetRequest::getName() const {
  return name_;
}

void CreateLabelsetRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long CreateLabelsetRequest::getDatasetId() const {
  return datasetId_;
}

void CreateLabelsetRequest::setDatasetId(long datasetId) {
  datasetId_ = datasetId;
  setBodyParameter(std::string("DatasetId"), std::to_string(datasetId));
}

std::string CreateLabelsetRequest::getTagSettings() const {
  return tagSettings_;
}

void CreateLabelsetRequest::setTagSettings(const std::string &tagSettings) {
  tagSettings_ = tagSettings;
  setBodyParameter(std::string("TagSettings"), tagSettings);
}

