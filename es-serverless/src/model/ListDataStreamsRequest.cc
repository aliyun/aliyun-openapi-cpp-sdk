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

#include <alibabacloud/es-serverless/model/ListDataStreamsRequest.h>

using AlibabaCloud::Es_serverless::Model::ListDataStreamsRequest;

ListDataStreamsRequest::ListDataStreamsRequest()
    : RoaServiceRequest("es-serverless", "2022-08-22") {
  setResourcePath("/openapi/xops/instances/[appName]/data-streams"};
  setMethod(HttpRequest::Method::Get);
}

ListDataStreamsRequest::~ListDataStreamsRequest() {}

std::string ListDataStreamsRequest::getAppName() const {
  return appName_;
}

void ListDataStreamsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("appName"), appName);
}

std::string ListDataStreamsRequest::getDataStreamName() const {
  return dataStreamName_;
}

void ListDataStreamsRequest::setDataStreamName(const std::string &dataStreamName) {
  dataStreamName_ = dataStreamName;
  setParameter(std::string("dataStreamName"), dataStreamName);
}

int ListDataStreamsRequest::getPageSize() const {
  return pageSize_;
}

void ListDataStreamsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

int ListDataStreamsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataStreamsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

