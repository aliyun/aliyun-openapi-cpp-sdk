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

#include <alibabacloud/ens/model/CleanDistDataRequest.h>

using AlibabaCloud::Ens::Model::CleanDistDataRequest;

CleanDistDataRequest::CleanDistDataRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CleanDistData") {
  setMethod(HttpRequest::Method::Post);
}

CleanDistDataRequest::~CleanDistDataRequest() {}

std::string CleanDistDataRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CleanDistDataRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CleanDistDataRequest::getDataName() const {
  return dataName_;
}

void CleanDistDataRequest::setDataName(const std::string &dataName) {
  dataName_ = dataName;
  setParameter(std::string("DataName"), dataName);
}

std::string CleanDistDataRequest::getDataVersion() const {
  return dataVersion_;
}

void CleanDistDataRequest::setDataVersion(const std::string &dataVersion) {
  dataVersion_ = dataVersion;
  setParameter(std::string("DataVersion"), dataVersion);
}

std::string CleanDistDataRequest::getAppId() const {
  return appId_;
}

void CleanDistDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

