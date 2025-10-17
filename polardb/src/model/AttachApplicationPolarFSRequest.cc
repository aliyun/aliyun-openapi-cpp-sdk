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

#include <alibabacloud/polardb/model/AttachApplicationPolarFSRequest.h>

using AlibabaCloud::Polardb::Model::AttachApplicationPolarFSRequest;

AttachApplicationPolarFSRequest::AttachApplicationPolarFSRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "AttachApplicationPolarFS") {
  setMethod(HttpRequest::Method::Post);
}

AttachApplicationPolarFSRequest::~AttachApplicationPolarFSRequest() {}

bool AttachApplicationPolarFSRequest::getReplaceExisted() const {
  return replaceExisted_;
}

void AttachApplicationPolarFSRequest::setReplaceExisted(bool replaceExisted) {
  replaceExisted_ = replaceExisted;
  setParameter(std::string("ReplaceExisted"), replaceExisted ? "true" : "false");
}

std::string AttachApplicationPolarFSRequest::getApplicationId() const {
  return applicationId_;
}

void AttachApplicationPolarFSRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string AttachApplicationPolarFSRequest::getPolarFSAccessKeyId() const {
  return polarFSAccessKeyId_;
}

void AttachApplicationPolarFSRequest::setPolarFSAccessKeyId(const std::string &polarFSAccessKeyId) {
  polarFSAccessKeyId_ = polarFSAccessKeyId;
  setParameter(std::string("PolarFSAccessKeyId"), polarFSAccessKeyId);
}

std::string AttachApplicationPolarFSRequest::getPolarFSInstanceId() const {
  return polarFSInstanceId_;
}

void AttachApplicationPolarFSRequest::setPolarFSInstanceId(const std::string &polarFSInstanceId) {
  polarFSInstanceId_ = polarFSInstanceId;
  setParameter(std::string("PolarFSInstanceId"), polarFSInstanceId);
}

std::string AttachApplicationPolarFSRequest::getPolarFSAccessKeySecret() const {
  return polarFSAccessKeySecret_;
}

void AttachApplicationPolarFSRequest::setPolarFSAccessKeySecret(const std::string &polarFSAccessKeySecret) {
  polarFSAccessKeySecret_ = polarFSAccessKeySecret;
  setParameter(std::string("PolarFSAccessKeySecret"), polarFSAccessKeySecret);
}

