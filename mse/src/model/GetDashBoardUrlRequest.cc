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

#include <alibabacloud/mse/model/GetDashBoardUrlRequest.h>

using AlibabaCloud::Mse::Model::GetDashBoardUrlRequest;

GetDashBoardUrlRequest::GetDashBoardUrlRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetDashBoardUrl") {
  setMethod(HttpRequest::Method::Post);
}

GetDashBoardUrlRequest::~GetDashBoardUrlRequest() {}

std::string GetDashBoardUrlRequest::getInstanceId() const {
  return instanceId_;
}

void GetDashBoardUrlRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetDashBoardUrlRequest::getRegionId() const {
  return regionId_;
}

void GetDashBoardUrlRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetDashBoardUrlRequest::getRequestPars() const {
  return requestPars_;
}

void GetDashBoardUrlRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string GetDashBoardUrlRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetDashBoardUrlRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

