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

#include <alibabacloud/live/model/CreateLiveStreamMonitorRequest.h>

using AlibabaCloud::Live::Model::CreateLiveStreamMonitorRequest;

CreateLiveStreamMonitorRequest::CreateLiveStreamMonitorRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveStreamMonitor") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveStreamMonitorRequest::~CreateLiveStreamMonitorRequest() {}

std::string CreateLiveStreamMonitorRequest::getMonitorConfig() const {
  return monitorConfig_;
}

void CreateLiveStreamMonitorRequest::setMonitorConfig(const std::string &monitorConfig) {
  monitorConfig_ = monitorConfig;
  setParameter(std::string("MonitorConfig"), monitorConfig);
}

std::string CreateLiveStreamMonitorRequest::getMonitorName() const {
  return monitorName_;
}

void CreateLiveStreamMonitorRequest::setMonitorName(const std::string &monitorName) {
  monitorName_ = monitorName;
  setParameter(std::string("MonitorName"), monitorName);
}

std::string CreateLiveStreamMonitorRequest::getRegionId() const {
  return regionId_;
}

void CreateLiveStreamMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLiveStreamMonitorRequest::getStream() const {
  return stream_;
}

void CreateLiveStreamMonitorRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string CreateLiveStreamMonitorRequest::getOutputTemplate() const {
  return outputTemplate_;
}

void CreateLiveStreamMonitorRequest::setOutputTemplate(const std::string &outputTemplate) {
  outputTemplate_ = outputTemplate;
  setParameter(std::string("OutputTemplate"), outputTemplate);
}

std::string CreateLiveStreamMonitorRequest::getApp() const {
  return app_;
}

void CreateLiveStreamMonitorRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string CreateLiveStreamMonitorRequest::getInputList() const {
  return inputList_;
}

void CreateLiveStreamMonitorRequest::setInputList(const std::string &inputList) {
  inputList_ = inputList;
  setParameter(std::string("InputList"), inputList);
}

std::string CreateLiveStreamMonitorRequest::getDingTalkWebHookUrl() const {
  return dingTalkWebHookUrl_;
}

void CreateLiveStreamMonitorRequest::setDingTalkWebHookUrl(const std::string &dingTalkWebHookUrl) {
  dingTalkWebHookUrl_ = dingTalkWebHookUrl;
  setParameter(std::string("DingTalkWebHookUrl"), dingTalkWebHookUrl);
}

long CreateLiveStreamMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLiveStreamMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLiveStreamMonitorRequest::getDomain() const {
  return domain_;
}

void CreateLiveStreamMonitorRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string CreateLiveStreamMonitorRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void CreateLiveStreamMonitorRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

