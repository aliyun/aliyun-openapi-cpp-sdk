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

#include <alibabacloud/mse/model/ListClusterVersionsRequest.h>

using AlibabaCloud::Mse::Model::ListClusterVersionsRequest;

ListClusterVersionsRequest::ListClusterVersionsRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListClusterVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListClusterVersionsRequest::~ListClusterVersionsRequest() {}

std::string ListClusterVersionsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListClusterVersionsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListClusterVersionsRequest::getClusterType() const {
  return clusterType_;
}

void ListClusterVersionsRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string ListClusterVersionsRequest::getMseVersion() const {
  return mseVersion_;
}

void ListClusterVersionsRequest::setMseVersion(const std::string &mseVersion) {
  mseVersion_ = mseVersion;
  setParameter(std::string("MseVersion"), mseVersion);
}

std::string ListClusterVersionsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListClusterVersionsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

