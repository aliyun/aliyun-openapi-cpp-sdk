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

#include <alibabacloud/mse/model/UpdateGatewayOptionRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayOptionRequest;

UpdateGatewayOptionRequest::UpdateGatewayOptionRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayOption") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayOptionRequest::~UpdateGatewayOptionRequest() {}

std::string UpdateGatewayOptionRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayOptionRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayOptionRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayOptionRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

UpdateGatewayOptionRequest::GatewayOption UpdateGatewayOptionRequest::getGatewayOption() const {
  return gatewayOption_;
}

void UpdateGatewayOptionRequest::setGatewayOption(const UpdateGatewayOptionRequest::GatewayOption &gatewayOption) {
  gatewayOption_ = gatewayOption;
  setParameter(std::string("GatewayOption") + ".EnableWaf", gatewayOption.enableWaf ? "true" : "false");
  setParameter(std::string("GatewayOption") + ".EnableHardwareAcceleration", gatewayOption.enableHardwareAcceleration ? "true" : "false");
  setParameter(std::string("GatewayOption") + ".DisableHttp2Alpn", gatewayOption.disableHttp2Alpn ? "true" : "false");
  setParameter(std::string("GatewayOption") + ".LogConfigDetails.ProjectName", gatewayOption.logConfigDetails.projectName);
  setParameter(std::string("GatewayOption") + ".LogConfigDetails.LogStoreName", gatewayOption.logConfigDetails.logStoreName);
  setParameter(std::string("GatewayOption") + ".LogConfigDetails.LogEnabled", gatewayOption.logConfigDetails.logEnabled ? "true" : "false");
  setParameter(std::string("GatewayOption") + ".TraceDetails.TraceEnabled", gatewayOption.traceDetails.traceEnabled ? "true" : "false");
  setParameter(std::string("GatewayOption") + ".TraceDetails.Sample", std::to_string(gatewayOption.traceDetails.sample));
}

long UpdateGatewayOptionRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayOptionRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateGatewayOptionRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayOptionRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

