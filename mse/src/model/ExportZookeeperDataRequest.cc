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

#include <alibabacloud/mse/model/ExportZookeeperDataRequest.h>

using AlibabaCloud::Mse::Model::ExportZookeeperDataRequest;

ExportZookeeperDataRequest::ExportZookeeperDataRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ExportZookeeperData") {
  setMethod(HttpRequest::Method::Post);
}

ExportZookeeperDataRequest::~ExportZookeeperDataRequest() {}

std::string ExportZookeeperDataRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ExportZookeeperDataRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ExportZookeeperDataRequest::getRegionId() const {
  return regionId_;
}

void ExportZookeeperDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ExportZookeeperDataRequest::getRequestPars() const {
  return requestPars_;
}

void ExportZookeeperDataRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ExportZookeeperDataRequest::getExportType() const {
  return exportType_;
}

void ExportZookeeperDataRequest::setExportType(const std::string &exportType) {
  exportType_ = exportType;
  setParameter(std::string("ExportType"), exportType);
}

std::string ExportZookeeperDataRequest::getInstanceId() const {
  return instanceId_;
}

void ExportZookeeperDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ExportZookeeperDataRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ExportZookeeperDataRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

