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

#include <alibabacloud/waf-openapi/model/DeleteInstanceRequest.h>

using AlibabaCloud::Waf_openapi::Model::DeleteInstanceRequest;

DeleteInstanceRequest::DeleteInstanceRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DeleteInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteInstanceRequest::~DeleteInstanceRequest() {}

std::string DeleteInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteInstanceRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteInstanceRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteInstanceRequest::getRegionId() const {
  return regionId_;
}

void DeleteInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteInstanceRequest::getLang() const {
  return lang_;
}

void DeleteInstanceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DeleteInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

