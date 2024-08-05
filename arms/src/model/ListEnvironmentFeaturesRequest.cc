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

#include <alibabacloud/arms/model/ListEnvironmentFeaturesRequest.h>

using AlibabaCloud::ARMS::Model::ListEnvironmentFeaturesRequest;

ListEnvironmentFeaturesRequest::ListEnvironmentFeaturesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListEnvironmentFeatures") {
  setMethod(HttpRequest::Method::Post);
}

ListEnvironmentFeaturesRequest::~ListEnvironmentFeaturesRequest() {}

std::string ListEnvironmentFeaturesRequest::getAliyunLang() const {
  return aliyunLang_;
}

void ListEnvironmentFeaturesRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string ListEnvironmentFeaturesRequest::getEnvironmentId() const {
  return environmentId_;
}

void ListEnvironmentFeaturesRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string ListEnvironmentFeaturesRequest::getRegionId() const {
  return regionId_;
}

void ListEnvironmentFeaturesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

