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

#include <alibabacloud/mse/model/UpdateImageRequest.h>

using AlibabaCloud::Mse::Model::UpdateImageRequest;

UpdateImageRequest::UpdateImageRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateImage") {
  setMethod(HttpRequest::Method::Post);
}

UpdateImageRequest::~UpdateImageRequest() {}

std::string UpdateImageRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateImageRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateImageRequest::getVersionCode() const {
  return versionCode_;
}

void UpdateImageRequest::setVersionCode(const std::string &versionCode) {
  versionCode_ = versionCode;
  setParameter(std::string("VersionCode"), versionCode);
}

std::string UpdateImageRequest::getClusterId() const {
  return clusterId_;
}

void UpdateImageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateImageRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateImageRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

