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

#include <alibabacloud/arms/model/ConfigAppRequest.h>

using AlibabaCloud::ARMS::Model::ConfigAppRequest;

ConfigAppRequest::ConfigAppRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ConfigApp") {
  setMethod(HttpRequest::Method::Post);
}

ConfigAppRequest::~ConfigAppRequest() {}

std::string ConfigAppRequest::getAppIds() const {
  return appIds_;
}

void ConfigAppRequest::setAppIds(const std::string &appIds) {
  appIds_ = appIds;
  setParameter(std::string("AppIds"), appIds);
}

std::string ConfigAppRequest::getRegionId() const {
  return regionId_;
}

void ConfigAppRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigAppRequest::getEnable() const {
  return enable_;
}

void ConfigAppRequest::setEnable(const std::string &enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable);
}

std::string ConfigAppRequest::getType() const {
  return type_;
}

void ConfigAppRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

