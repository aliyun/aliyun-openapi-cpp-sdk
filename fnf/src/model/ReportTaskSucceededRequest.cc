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

#include <alibabacloud/fnf/model/ReportTaskSucceededRequest.h>

using AlibabaCloud::Fnf::Model::ReportTaskSucceededRequest;

ReportTaskSucceededRequest::ReportTaskSucceededRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "ReportTaskSucceeded") {
  setMethod(HttpRequest::Method::Post);
}

ReportTaskSucceededRequest::~ReportTaskSucceededRequest() {}

std::string ReportTaskSucceededRequest::getOutput() const {
  return output_;
}

void ReportTaskSucceededRequest::setOutput(const std::string &output) {
  output_ = output;
  setBodyParameter(std::string("Output"), output);
}

std::string ReportTaskSucceededRequest::getTaskToken() const {
  return taskToken_;
}

void ReportTaskSucceededRequest::setTaskToken(const std::string &taskToken) {
  taskToken_ = taskToken;
  setParameter(std::string("TaskToken"), taskToken);
}

