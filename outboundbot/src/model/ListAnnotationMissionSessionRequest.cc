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

#include <alibabacloud/outboundbot/model/ListAnnotationMissionSessionRequest.h>

using AlibabaCloud::OutboundBot::Model::ListAnnotationMissionSessionRequest;

ListAnnotationMissionSessionRequest::ListAnnotationMissionSessionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListAnnotationMissionSession") {
  setMethod(HttpRequest::Method::Post);
}

ListAnnotationMissionSessionRequest::~ListAnnotationMissionSessionRequest() {}

std::string ListAnnotationMissionSessionRequest::getAnnotationMissionSessionId() const {
  return annotationMissionSessionId_;
}

void ListAnnotationMissionSessionRequest::setAnnotationMissionSessionId(const std::string &annotationMissionSessionId) {
  annotationMissionSessionId_ = annotationMissionSessionId;
  setParameter(std::string("AnnotationMissionSessionId"), annotationMissionSessionId);
}

std::string ListAnnotationMissionSessionRequest::getAnnotationMissionId() const {
  return annotationMissionId_;
}

void ListAnnotationMissionSessionRequest::setAnnotationMissionId(const std::string &annotationMissionId) {
  annotationMissionId_ = annotationMissionId;
  setParameter(std::string("AnnotationMissionId"), annotationMissionId);
}

int ListAnnotationMissionSessionRequest::getEnvironment() const {
  return environment_;
}

void ListAnnotationMissionSessionRequest::setEnvironment(int environment) {
  environment_ = environment;
  setParameter(std::string("Environment"), std::to_string(environment));
}

std::string ListAnnotationMissionSessionRequest::getIncludeStatusListJsonString() const {
  return includeStatusListJsonString_;
}

void ListAnnotationMissionSessionRequest::setIncludeStatusListJsonString(const std::string &includeStatusListJsonString) {
  includeStatusListJsonString_ = includeStatusListJsonString;
  setParameter(std::string("IncludeStatusListJsonString"), includeStatusListJsonString);
}

int ListAnnotationMissionSessionRequest::getPageSize() const {
  return pageSize_;
}

void ListAnnotationMissionSessionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListAnnotationMissionSessionRequest::getPageIndex() const {
  return pageIndex_;
}

void ListAnnotationMissionSessionRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

