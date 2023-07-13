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

#include <alibabacloud/mse/model/QueryConfigRequest.h>

using AlibabaCloud::Mse::Model::QueryConfigRequest;

QueryConfigRequest::QueryConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryConfig") {
  setMethod(HttpRequest::Method::Post);
}

QueryConfigRequest::~QueryConfigRequest() {}

std::string QueryConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryConfigRequest::getRequestPars() const {
  return requestPars_;
}

void QueryConfigRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

bool QueryConfigRequest::getNeedRunningConf() const {
  return needRunningConf_;
}

void QueryConfigRequest::setNeedRunningConf(bool needRunningConf) {
  needRunningConf_ = needRunningConf;
  setParameter(std::string("NeedRunningConf"), needRunningConf ? "true" : "false");
}

std::string QueryConfigRequest::getConfigType() const {
  return configType_;
}

void QueryConfigRequest::setConfigType(const std::string &configType) {
  configType_ = configType;
  setParameter(std::string("ConfigType"), configType);
}

std::string QueryConfigRequest::getClusterId() const {
  return clusterId_;
}

void QueryConfigRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryConfigRequest::getInstanceId() const {
  return instanceId_;
}

void QueryConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

