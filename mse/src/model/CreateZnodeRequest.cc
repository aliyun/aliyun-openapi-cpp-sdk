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

#include <alibabacloud/mse/model/CreateZnodeRequest.h>

using AlibabaCloud::Mse::Model::CreateZnodeRequest;

CreateZnodeRequest::CreateZnodeRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateZnode") {
  setMethod(HttpRequest::Method::Post);
}

CreateZnodeRequest::~CreateZnodeRequest() {}

std::string CreateZnodeRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateZnodeRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateZnodeRequest::getData() const {
  return data_;
}

void CreateZnodeRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string CreateZnodeRequest::getPath() const {
  return path_;
}

void CreateZnodeRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string CreateZnodeRequest::getClusterId() const {
  return clusterId_;
}

void CreateZnodeRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateZnodeRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateZnodeRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

