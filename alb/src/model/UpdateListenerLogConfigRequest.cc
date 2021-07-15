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

#include <alibabacloud/alb/model/UpdateListenerLogConfigRequest.h>

using AlibabaCloud::Alb::Model::UpdateListenerLogConfigRequest;

UpdateListenerLogConfigRequest::UpdateListenerLogConfigRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateListenerLogConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateListenerLogConfigRequest::~UpdateListenerLogConfigRequest() {}

std::string UpdateListenerLogConfigRequest::getClientToken() const {
  return clientToken_;
}

void UpdateListenerLogConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateListenerLogConfigRequest::getListenerId() const {
  return listenerId_;
}

void UpdateListenerLogConfigRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

bool UpdateListenerLogConfigRequest::getAccessLogRecordCustomizedHeadersEnabled() const {
  return accessLogRecordCustomizedHeadersEnabled_;
}

void UpdateListenerLogConfigRequest::setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) {
  accessLogRecordCustomizedHeadersEnabled_ = accessLogRecordCustomizedHeadersEnabled;
  setParameter(std::string("AccessLogRecordCustomizedHeadersEnabled"), accessLogRecordCustomizedHeadersEnabled ? "true" : "false");
}

bool UpdateListenerLogConfigRequest::getDryRun() const {
  return dryRun_;
}

void UpdateListenerLogConfigRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

UpdateListenerLogConfigRequest::AccessLogTracingConfig UpdateListenerLogConfigRequest::getAccessLogTracingConfig() const {
  return accessLogTracingConfig_;
}

void UpdateListenerLogConfigRequest::setAccessLogTracingConfig(const UpdateListenerLogConfigRequest::AccessLogTracingConfig &accessLogTracingConfig) {
  accessLogTracingConfig_ = accessLogTracingConfig;
  setParameter(std::string("AccessLogTracingConfig") + ".TracingType", accessLogTracingConfig.tracingType);
  setParameter(std::string("AccessLogTracingConfig") + ".TracingEnabled", accessLogTracingConfig.tracingEnabled ? "true" : "false");
  setParameter(std::string("AccessLogTracingConfig") + ".TracingSample", std::to_string(accessLogTracingConfig.tracingSample));
}

