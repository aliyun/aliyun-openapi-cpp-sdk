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

#include <alibabacloud/drds/model/RemoveInstanceAccountRequest.h>

using AlibabaCloud::Drds::Model::RemoveInstanceAccountRequest;

RemoveInstanceAccountRequest::RemoveInstanceAccountRequest()
    : RpcServiceRequest("drds", "2019-01-23", "RemoveInstanceAccount") {
  setMethod(HttpRequest::Method::Post);
}

RemoveInstanceAccountRequest::~RemoveInstanceAccountRequest() {}

std::string RemoveInstanceAccountRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void RemoveInstanceAccountRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string RemoveInstanceAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RemoveInstanceAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RemoveInstanceAccountRequest::getAccountName() const {
  return accountName_;
}

void RemoveInstanceAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

