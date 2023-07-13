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

#include <alibabacloud/mse/model/DeleteZnodeRequest.h>

using AlibabaCloud::Mse::Model::DeleteZnodeRequest;

DeleteZnodeRequest::DeleteZnodeRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteZnode") {
  setMethod(HttpRequest::Method::Post);
}

DeleteZnodeRequest::~DeleteZnodeRequest() {}

std::string DeleteZnodeRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteZnodeRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteZnodeRequest::getPath() const {
  return path_;
}

void DeleteZnodeRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string DeleteZnodeRequest::getRequestPars() const {
  return requestPars_;
}

void DeleteZnodeRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string DeleteZnodeRequest::getClusterId() const {
  return clusterId_;
}

void DeleteZnodeRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DeleteZnodeRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteZnodeRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

