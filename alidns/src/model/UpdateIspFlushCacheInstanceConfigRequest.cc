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

#include <alibabacloud/alidns/model/UpdateIspFlushCacheInstanceConfigRequest.h>

using AlibabaCloud::Alidns::Model::UpdateIspFlushCacheInstanceConfigRequest;

UpdateIspFlushCacheInstanceConfigRequest::UpdateIspFlushCacheInstanceConfigRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateIspFlushCacheInstanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIspFlushCacheInstanceConfigRequest::~UpdateIspFlushCacheInstanceConfigRequest() {}

std::string UpdateIspFlushCacheInstanceConfigRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateIspFlushCacheInstanceConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateIspFlushCacheInstanceConfigRequest::getInstanceName() const {
  return instanceName_;
}

void UpdateIspFlushCacheInstanceConfigRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string UpdateIspFlushCacheInstanceConfigRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateIspFlushCacheInstanceConfigRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateIspFlushCacheInstanceConfigRequest::getLang() const {
  return lang_;
}

void UpdateIspFlushCacheInstanceConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

