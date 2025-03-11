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

#include <alibabacloud/drds/model/SubmitSmoothExpandPreCheckTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitSmoothExpandPreCheckTaskRequest;

SubmitSmoothExpandPreCheckTaskRequest::SubmitSmoothExpandPreCheckTaskRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SubmitSmoothExpandPreCheckTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSmoothExpandPreCheckTaskRequest::~SubmitSmoothExpandPreCheckTaskRequest() {}

std::string SubmitSmoothExpandPreCheckTaskRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SubmitSmoothExpandPreCheckTaskRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string SubmitSmoothExpandPreCheckTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitSmoothExpandPreCheckTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitSmoothExpandPreCheckTaskRequest::getDbName() const {
  return dbName_;
}

void SubmitSmoothExpandPreCheckTaskRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

