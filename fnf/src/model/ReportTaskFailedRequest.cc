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

#include <alibabacloud/fnf/model/ReportTaskFailedRequest.h>

using AlibabaCloud::Fnf::Model::ReportTaskFailedRequest;

ReportTaskFailedRequest::ReportTaskFailedRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "ReportTaskFailed") {
  setMethod(HttpRequest::Method::Post);
}

ReportTaskFailedRequest::~ReportTaskFailedRequest() {}

std::string ReportTaskFailedRequest::getCause() const {
  return cause_;
}

void ReportTaskFailedRequest::setCause(const std::string &cause) {
  cause_ = cause;
  setBodyParameter(std::string("Cause"), cause);
}

std::string ReportTaskFailedRequest::getError() const {
  return error_;
}

void ReportTaskFailedRequest::setError(const std::string &error) {
  error_ = error;
  setBodyParameter(std::string("Error"), error);
}

std::string ReportTaskFailedRequest::getTaskToken() const {
  return taskToken_;
}

void ReportTaskFailedRequest::setTaskToken(const std::string &taskToken) {
  taskToken_ = taskToken;
  setParameter(std::string("TaskToken"), taskToken);
}

