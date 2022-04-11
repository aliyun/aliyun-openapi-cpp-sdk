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

#include <alibabacloud/vod/model/AddWatermarkRequest.h>

using AlibabaCloud::Vod::Model::AddWatermarkRequest;

AddWatermarkRequest::AddWatermarkRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddWatermark") {
  setMethod(HttpRequest::Method::Post);
}

AddWatermarkRequest::~AddWatermarkRequest() {}

std::string AddWatermarkRequest::getType() const {
  return type_;
}

void AddWatermarkRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddWatermarkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddWatermarkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddWatermarkRequest::getWatermarkConfig() const {
  return watermarkConfig_;
}

void AddWatermarkRequest::setWatermarkConfig(const std::string &watermarkConfig) {
  watermarkConfig_ = watermarkConfig;
  setParameter(std::string("WatermarkConfig"), watermarkConfig);
}

std::string AddWatermarkRequest::getAppId() const {
  return appId_;
}

void AddWatermarkRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string AddWatermarkRequest::getName() const {
  return name_;
}

void AddWatermarkRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddWatermarkRequest::getFileUrl() const {
  return fileUrl_;
}

void AddWatermarkRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

