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

#include <alibabacloud/outboundbot/model/ListAnnotationMissionRequest.h>

using AlibabaCloud::OutboundBot::Model::ListAnnotationMissionRequest;

ListAnnotationMissionRequest::ListAnnotationMissionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListAnnotationMission") {
  setMethod(HttpRequest::Method::Post);
}

ListAnnotationMissionRequest::~ListAnnotationMissionRequest() {}

long ListAnnotationMissionRequest::getCreateTimeStartFilter() const {
  return createTimeStartFilter_;
}

void ListAnnotationMissionRequest::setCreateTimeStartFilter(long createTimeStartFilter) {
  createTimeStartFilter_ = createTimeStartFilter;
  setParameter(std::string("CreateTimeStartFilter"), std::to_string(createTimeStartFilter));
}

std::string ListAnnotationMissionRequest::getAnnotationStatusListStringFilter() const {
  return annotationStatusListStringFilter_;
}

void ListAnnotationMissionRequest::setAnnotationStatusListStringFilter(const std::string &annotationStatusListStringFilter) {
  annotationStatusListStringFilter_ = annotationStatusListStringFilter;
  setParameter(std::string("AnnotationStatusListStringFilter"), annotationStatusListStringFilter);
}

std::string ListAnnotationMissionRequest::getAnnotationMissionId() const {
  return annotationMissionId_;
}

void ListAnnotationMissionRequest::setAnnotationMissionId(const std::string &annotationMissionId) {
  annotationMissionId_ = annotationMissionId;
  setParameter(std::string("AnnotationMissionId"), annotationMissionId);
}

std::string ListAnnotationMissionRequest::getAnnotationMissionName() const {
  return annotationMissionName_;
}

void ListAnnotationMissionRequest::setAnnotationMissionName(const std::string &annotationMissionName) {
  annotationMissionName_ = annotationMissionName;
  setParameter(std::string("AnnotationMissionName"), annotationMissionName);
}

std::string ListAnnotationMissionRequest::getInstanceId() const {
  return instanceId_;
}

void ListAnnotationMissionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListAnnotationMissionRequest::getCreateTimeEndFilter() const {
  return createTimeEndFilter_;
}

void ListAnnotationMissionRequest::setCreateTimeEndFilter(long createTimeEndFilter) {
  createTimeEndFilter_ = createTimeEndFilter;
  setParameter(std::string("CreateTimeEndFilter"), std::to_string(createTimeEndFilter));
}

std::vector<int> ListAnnotationMissionRequest::getAnnotationStatusListFilter() const {
  return annotationStatusListFilter_;
}

void ListAnnotationMissionRequest::setAnnotationStatusListFilter(const std::vector<int> &annotationStatusListFilter) {
  annotationStatusListFilter_ = annotationStatusListFilter;
}

int ListAnnotationMissionRequest::getPageSize() const {
  return pageSize_;
}

void ListAnnotationMissionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListAnnotationMissionRequest::getPageIndex() const {
  return pageIndex_;
}

void ListAnnotationMissionRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

