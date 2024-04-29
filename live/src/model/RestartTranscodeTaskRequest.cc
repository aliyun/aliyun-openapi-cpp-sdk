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

#include <alibabacloud/live/model/RestartTranscodeTaskRequest.h>

using AlibabaCloud::Live::Model::RestartTranscodeTaskRequest;

RestartTranscodeTaskRequest::RestartTranscodeTaskRequest()
    : RpcServiceRequest("live", "2016-11-01", "RestartTranscodeTask") {
  setMethod(HttpRequest::Method::Post);
}

RestartTranscodeTaskRequest::~RestartTranscodeTaskRequest() {}

std::string RestartTranscodeTaskRequest::getTranscodingTemplate() const {
  return transcodingTemplate_;
}

void RestartTranscodeTaskRequest::setTranscodingTemplate(const std::string &transcodingTemplate) {
  transcodingTemplate_ = transcodingTemplate;
  setParameter(std::string("TranscodingTemplate"), transcodingTemplate);
}

std::string RestartTranscodeTaskRequest::getSecurityToken() const {
  return securityToken_;
}

void RestartTranscodeTaskRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestartTranscodeTaskRequest::getPushDomain() const {
  return pushDomain_;
}

void RestartTranscodeTaskRequest::setPushDomain(const std::string &pushDomain) {
  pushDomain_ = pushDomain;
  setParameter(std::string("PushDomain"), pushDomain);
}

std::string RestartTranscodeTaskRequest::getStreamName() const {
  return streamName_;
}

void RestartTranscodeTaskRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string RestartTranscodeTaskRequest::getApp() const {
  return app_;
}

void RestartTranscodeTaskRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

