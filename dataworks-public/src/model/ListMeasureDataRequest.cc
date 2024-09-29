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

#include <alibabacloud/dataworks-public/model/ListMeasureDataRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListMeasureDataRequest;

ListMeasureDataRequest::ListMeasureDataRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListMeasureData") {
  setMethod(HttpRequest::Method::Post);
}

ListMeasureDataRequest::~ListMeasureDataRequest() {}

long ListMeasureDataRequest::getEndTime() const {
  return endTime_;
}

void ListMeasureDataRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListMeasureDataRequest::getStartTime() const {
  return startTime_;
}

void ListMeasureDataRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListMeasureDataRequest::getDomainCode() const {
  return domainCode_;
}

void ListMeasureDataRequest::setDomainCode(const std::string &domainCode) {
  domainCode_ = domainCode;
  setParameter(std::string("DomainCode"), domainCode);
}

std::string ListMeasureDataRequest::getComponentCode() const {
  return componentCode_;
}

void ListMeasureDataRequest::setComponentCode(const std::string &componentCode) {
  componentCode_ = componentCode;
  setParameter(std::string("ComponentCode"), componentCode);
}

