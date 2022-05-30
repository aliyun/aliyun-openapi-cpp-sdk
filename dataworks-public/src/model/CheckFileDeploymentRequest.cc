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

#include <alibabacloud/dataworks-public/model/CheckFileDeploymentRequest.h>

using AlibabaCloud::Dataworks_public::Model::CheckFileDeploymentRequest;

CheckFileDeploymentRequest::CheckFileDeploymentRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CheckFileDeployment") {
  setMethod(HttpRequest::Method::Post);
}

CheckFileDeploymentRequest::~CheckFileDeploymentRequest() {}

std::string CheckFileDeploymentRequest::getCheckDetailUrl() const {
  return checkDetailUrl_;
}

void CheckFileDeploymentRequest::setCheckDetailUrl(const std::string &checkDetailUrl) {
  checkDetailUrl_ = checkDetailUrl;
  setBodyParameter(std::string("CheckDetailUrl"), checkDetailUrl);
}

std::string CheckFileDeploymentRequest::getCheckerInstanceId() const {
  return checkerInstanceId_;
}

void CheckFileDeploymentRequest::setCheckerInstanceId(const std::string &checkerInstanceId) {
  checkerInstanceId_ = checkerInstanceId;
  setBodyParameter(std::string("CheckerInstanceId"), checkerInstanceId);
}

std::string CheckFileDeploymentRequest::getStatus() const {
  return status_;
}

void CheckFileDeploymentRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

