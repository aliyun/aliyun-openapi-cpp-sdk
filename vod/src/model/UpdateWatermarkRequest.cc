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

#include <alibabacloud/vod/model/UpdateWatermarkRequest.h>

using AlibabaCloud::Vod::Model::UpdateWatermarkRequest;

UpdateWatermarkRequest::UpdateWatermarkRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateWatermark") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWatermarkRequest::~UpdateWatermarkRequest() {}

std::string UpdateWatermarkRequest::getWatermarkConfig() const {
  return watermarkConfig_;
}

void UpdateWatermarkRequest::setWatermarkConfig(const std::string &watermarkConfig) {
  watermarkConfig_ = watermarkConfig;
  setParameter(std::string("WatermarkConfig"), watermarkConfig);
}

std::string UpdateWatermarkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateWatermarkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateWatermarkRequest::getWatermarkId() const {
  return watermarkId_;
}

void UpdateWatermarkRequest::setWatermarkId(const std::string &watermarkId) {
  watermarkId_ = watermarkId;
  setParameter(std::string("WatermarkId"), watermarkId);
}

std::string UpdateWatermarkRequest::getName() const {
  return name_;
}

void UpdateWatermarkRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

