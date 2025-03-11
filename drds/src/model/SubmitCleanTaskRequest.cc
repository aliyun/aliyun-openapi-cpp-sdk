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

#include <alibabacloud/drds/model/SubmitCleanTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitCleanTaskRequest;

SubmitCleanTaskRequest::SubmitCleanTaskRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SubmitCleanTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitCleanTaskRequest::~SubmitCleanTaskRequest() {}

std::string SubmitCleanTaskRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SubmitCleanTaskRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string SubmitCleanTaskRequest::getExpandType() const {
  return expandType_;
}

void SubmitCleanTaskRequest::setExpandType(const std::string &expandType) {
  expandType_ = expandType;
  setParameter(std::string("ExpandType"), expandType);
}

std::string SubmitCleanTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitCleanTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitCleanTaskRequest::getJobId() const {
  return jobId_;
}

void SubmitCleanTaskRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string SubmitCleanTaskRequest::getDbName() const {
  return dbName_;
}

void SubmitCleanTaskRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string SubmitCleanTaskRequest::getParentJobId() const {
  return parentJobId_;
}

void SubmitCleanTaskRequest::setParentJobId(const std::string &parentJobId) {
  parentJobId_ = parentJobId;
  setParameter(std::string("ParentJobId"), parentJobId);
}

