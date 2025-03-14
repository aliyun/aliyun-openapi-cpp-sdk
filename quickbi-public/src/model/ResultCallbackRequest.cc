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

#include <alibabacloud/quickbi-public/model/ResultCallbackRequest.h>

using AlibabaCloud::Quickbi_public::Model::ResultCallbackRequest;

ResultCallbackRequest::ResultCallbackRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ResultCallback") {
  setMethod(HttpRequest::Method::Post);
}

ResultCallbackRequest::~ResultCallbackRequest() {}

std::string ResultCallbackRequest::getAccessPoint() const {
  return accessPoint_;
}

void ResultCallbackRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ResultCallbackRequest::getHandleReason() const {
  return handleReason_;
}

void ResultCallbackRequest::setHandleReason(const std::string &handleReason) {
  handleReason_ = handleReason;
  setParameter(std::string("HandleReason"), handleReason);
}

std::string ResultCallbackRequest::getApplicationId() const {
  return applicationId_;
}

void ResultCallbackRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ResultCallbackRequest::getSignType() const {
  return signType_;
}

void ResultCallbackRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int ResultCallbackRequest::getStatus() const {
  return status_;
}

void ResultCallbackRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

