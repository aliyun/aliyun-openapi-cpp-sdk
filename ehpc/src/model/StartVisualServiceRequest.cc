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

#include <alibabacloud/ehpc/model/StartVisualServiceRequest.h>

using AlibabaCloud::EHPC::Model::StartVisualServiceRequest;

StartVisualServiceRequest::StartVisualServiceRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "StartVisualService") {
  setMethod(HttpRequest::Method::Get);
}

StartVisualServiceRequest::~StartVisualServiceRequest() {}

std::string StartVisualServiceRequest::getClusterId() const {
  return clusterId_;
}

void StartVisualServiceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string StartVisualServiceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void StartVisualServiceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int StartVisualServiceRequest::getPort() const {
  return port_;
}

void StartVisualServiceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string StartVisualServiceRequest::getCidrIp() const {
  return cidrIp_;
}

void StartVisualServiceRequest::setCidrIp(const std::string &cidrIp) {
  cidrIp_ = cidrIp;
  setParameter(std::string("CidrIp"), cidrIp);
}

