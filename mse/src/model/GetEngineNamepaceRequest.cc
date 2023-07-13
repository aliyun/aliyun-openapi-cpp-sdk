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

#include <alibabacloud/mse/model/GetEngineNamepaceRequest.h>

using AlibabaCloud::Mse::Model::GetEngineNamepaceRequest;

GetEngineNamepaceRequest::GetEngineNamepaceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetEngineNamepace") {
  setMethod(HttpRequest::Method::Post);
}

GetEngineNamepaceRequest::~GetEngineNamepaceRequest() {}

std::string GetEngineNamepaceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetEngineNamepaceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetEngineNamepaceRequest::getId() const {
  return id_;
}

void GetEngineNamepaceRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string GetEngineNamepaceRequest::getClusterId() const {
  return clusterId_;
}

void GetEngineNamepaceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetEngineNamepaceRequest::getInstanceId() const {
  return instanceId_;
}

void GetEngineNamepaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetEngineNamepaceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetEngineNamepaceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

