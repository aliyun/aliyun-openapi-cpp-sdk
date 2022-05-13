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

#include <alibabacloud/mse/model/ListClusterDetailFeatureRequest.h>

using AlibabaCloud::Mse::Model::ListClusterDetailFeatureRequest;

ListClusterDetailFeatureRequest::ListClusterDetailFeatureRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListClusterDetailFeature") {
  setMethod(HttpRequest::Method::Post);
}

ListClusterDetailFeatureRequest::~ListClusterDetailFeatureRequest() {}

std::string ListClusterDetailFeatureRequest::getInstanceId() const {
  return instanceId_;
}

void ListClusterDetailFeatureRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListClusterDetailFeatureRequest::getRegionId() const {
  return regionId_;
}

void ListClusterDetailFeatureRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListClusterDetailFeatureRequest::getRequestPars() const {
  return requestPars_;
}

void ListClusterDetailFeatureRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListClusterDetailFeatureRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListClusterDetailFeatureRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

