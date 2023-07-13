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

#include <alibabacloud/mse/model/QueryInstancesInfoRequest.h>

using AlibabaCloud::Mse::Model::QueryInstancesInfoRequest;

QueryInstancesInfoRequest::QueryInstancesInfoRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryInstancesInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryInstancesInfoRequest::~QueryInstancesInfoRequest() {}

std::string QueryInstancesInfoRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryInstancesInfoRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryInstancesInfoRequest::getRegionId() const {
  return regionId_;
}

void QueryInstancesInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryInstancesInfoRequest::getRequestPars() const {
  return requestPars_;
}

void QueryInstancesInfoRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string QueryInstancesInfoRequest::getOrderId() const {
  return orderId_;
}

void QueryInstancesInfoRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string QueryInstancesInfoRequest::getClusterId() const {
  return clusterId_;
}

void QueryInstancesInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryInstancesInfoRequest::getInstanceId() const {
  return instanceId_;
}

void QueryInstancesInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryInstancesInfoRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryInstancesInfoRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

