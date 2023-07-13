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

#include <alibabacloud/mse/model/UpdateZnodeRequest.h>

using AlibabaCloud::Mse::Model::UpdateZnodeRequest;

UpdateZnodeRequest::UpdateZnodeRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateZnode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateZnodeRequest::~UpdateZnodeRequest() {}

std::string UpdateZnodeRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateZnodeRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateZnodeRequest::getData() const {
  return data_;
}

void UpdateZnodeRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string UpdateZnodeRequest::getPath() const {
  return path_;
}

void UpdateZnodeRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string UpdateZnodeRequest::getRequestPars() const {
  return requestPars_;
}

void UpdateZnodeRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string UpdateZnodeRequest::getClusterId() const {
  return clusterId_;
}

void UpdateZnodeRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateZnodeRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateZnodeRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

