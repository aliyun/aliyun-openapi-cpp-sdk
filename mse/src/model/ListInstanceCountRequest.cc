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

#include <alibabacloud/mse/model/ListInstanceCountRequest.h>

using AlibabaCloud::Mse::Model::ListInstanceCountRequest;

ListInstanceCountRequest::ListInstanceCountRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListInstanceCount") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceCountRequest::~ListInstanceCountRequest() {}

std::string ListInstanceCountRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListInstanceCountRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListInstanceCountRequest::getRegionId() const {
  return regionId_;
}

void ListInstanceCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListInstanceCountRequest::getRequestPars() const {
  return requestPars_;
}

void ListInstanceCountRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListInstanceCountRequest::getClusterType() const {
  return clusterType_;
}

void ListInstanceCountRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string ListInstanceCountRequest::getMseVersion() const {
  return mseVersion_;
}

void ListInstanceCountRequest::setMseVersion(const std::string &mseVersion) {
  mseVersion_ = mseVersion;
  setParameter(std::string("MseVersion"), mseVersion);
}

std::string ListInstanceCountRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListInstanceCountRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

