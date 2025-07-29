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

#include <alibabacloud/live/model/UpdateLiveStreamMonitorRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveStreamMonitorRequest;

UpdateLiveStreamMonitorRequest::UpdateLiveStreamMonitorRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveStreamMonitor") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveStreamMonitorRequest::~UpdateLiveStreamMonitorRequest() {}

std::string UpdateLiveStreamMonitorRequest::getMonitorId() const {
  return monitorId_;
}

void UpdateLiveStreamMonitorRequest::setMonitorId(const std::string &monitorId) {
  monitorId_ = monitorId;
  setParameter(std::string("MonitorId"), monitorId);
}

std::string UpdateLiveStreamMonitorRequest::getMonitorConfig() const {
  return monitorConfig_;
}

void UpdateLiveStreamMonitorRequest::setMonitorConfig(const std::string &monitorConfig) {
  monitorConfig_ = monitorConfig;
  setParameter(std::string("MonitorConfig"), monitorConfig);
}

std::string UpdateLiveStreamMonitorRequest::getMonitorName() const {
  return monitorName_;
}

void UpdateLiveStreamMonitorRequest::setMonitorName(const std::string &monitorName) {
  monitorName_ = monitorName;
  setParameter(std::string("MonitorName"), monitorName);
}

std::string UpdateLiveStreamMonitorRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveStreamMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLiveStreamMonitorRequest::getStream() const {
  return stream_;
}

void UpdateLiveStreamMonitorRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string UpdateLiveStreamMonitorRequest::getOutputTemplate() const {
  return outputTemplate_;
}

void UpdateLiveStreamMonitorRequest::setOutputTemplate(const std::string &outputTemplate) {
  outputTemplate_ = outputTemplate;
  setParameter(std::string("OutputTemplate"), outputTemplate);
}

std::string UpdateLiveStreamMonitorRequest::getApp() const {
  return app_;
}

void UpdateLiveStreamMonitorRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string UpdateLiveStreamMonitorRequest::getInputList() const {
  return inputList_;
}

void UpdateLiveStreamMonitorRequest::setInputList(const std::string &inputList) {
  inputList_ = inputList;
  setParameter(std::string("InputList"), inputList);
}

std::string UpdateLiveStreamMonitorRequest::getDingTalkWebHookUrl() const {
  return dingTalkWebHookUrl_;
}

void UpdateLiveStreamMonitorRequest::setDingTalkWebHookUrl(const std::string &dingTalkWebHookUrl) {
  dingTalkWebHookUrl_ = dingTalkWebHookUrl;
  setParameter(std::string("DingTalkWebHookUrl"), dingTalkWebHookUrl);
}

long UpdateLiveStreamMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveStreamMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLiveStreamMonitorRequest::getDomain() const {
  return domain_;
}

void UpdateLiveStreamMonitorRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string UpdateLiveStreamMonitorRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void UpdateLiveStreamMonitorRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

