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

#include <alibabacloud/ehpc/model/InstallSoftwareRequest.h>

using AlibabaCloud::EHPC::Model::InstallSoftwareRequest;

InstallSoftwareRequest::InstallSoftwareRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "InstallSoftware") {
  setMethod(HttpRequest::Method::Get);
}

InstallSoftwareRequest::~InstallSoftwareRequest() {}

std::string InstallSoftwareRequest::getClusterId() const {
  return clusterId_;
}

void InstallSoftwareRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string InstallSoftwareRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void InstallSoftwareRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string InstallSoftwareRequest::getApplication() const {
  return application_;
}

void InstallSoftwareRequest::setApplication(const std::string &application) {
  application_ = application;
  setParameter(std::string("Application"), application);
}

