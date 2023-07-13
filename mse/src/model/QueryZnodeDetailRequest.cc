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

#include <alibabacloud/mse/model/QueryZnodeDetailRequest.h>

using AlibabaCloud::Mse::Model::QueryZnodeDetailRequest;

QueryZnodeDetailRequest::QueryZnodeDetailRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryZnodeDetail") {
  setMethod(HttpRequest::Method::Get);
}

QueryZnodeDetailRequest::~QueryZnodeDetailRequest() {}

std::string QueryZnodeDetailRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryZnodeDetailRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryZnodeDetailRequest::getPath() const {
  return path_;
}

void QueryZnodeDetailRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string QueryZnodeDetailRequest::getRequestPars() const {
  return requestPars_;
}

void QueryZnodeDetailRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string QueryZnodeDetailRequest::getClusterId() const {
  return clusterId_;
}

void QueryZnodeDetailRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryZnodeDetailRequest::getInstanceId() const {
  return instanceId_;
}

void QueryZnodeDetailRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryZnodeDetailRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryZnodeDetailRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

