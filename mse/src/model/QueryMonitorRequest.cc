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

#include <alibabacloud/mse/model/QueryMonitorRequest.h>

using AlibabaCloud::Mse::Model::QueryMonitorRequest;

QueryMonitorRequest::QueryMonitorRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryMonitor") {
  setMethod(HttpRequest::Method::Post);
}

QueryMonitorRequest::~QueryMonitorRequest() {}

std::string QueryMonitorRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryMonitorRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long QueryMonitorRequest::getStartTime() const {
  return startTime_;
}

void QueryMonitorRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string QueryMonitorRequest::getRequestPars() const {
  return requestPars_;
}

void QueryMonitorRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string QueryMonitorRequest::getMonitorType() const {
  return monitorType_;
}

void QueryMonitorRequest::setMonitorType(const std::string &monitorType) {
  monitorType_ = monitorType;
  setParameter(std::string("MonitorType"), monitorType);
}

long QueryMonitorRequest::getEndTime() const {
  return endTime_;
}

void QueryMonitorRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string QueryMonitorRequest::getClusterId() const {
  return clusterId_;
}

void QueryMonitorRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryMonitorRequest::getInstanceId() const {
  return instanceId_;
}

void QueryMonitorRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryMonitorRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryMonitorRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

long QueryMonitorRequest::getStep() const {
  return step_;
}

void QueryMonitorRequest::setStep(long step) {
  step_ = step;
  setParameter(std::string("Step"), std::to_string(step));
}

