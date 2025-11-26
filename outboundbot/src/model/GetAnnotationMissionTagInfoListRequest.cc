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

#include <alibabacloud/outboundbot/model/GetAnnotationMissionTagInfoListRequest.h>

using AlibabaCloud::OutboundBot::Model::GetAnnotationMissionTagInfoListRequest;

GetAnnotationMissionTagInfoListRequest::GetAnnotationMissionTagInfoListRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GetAnnotationMissionTagInfoList") {
  setMethod(HttpRequest::Method::Post);
}

GetAnnotationMissionTagInfoListRequest::~GetAnnotationMissionTagInfoListRequest() {}

std::string GetAnnotationMissionTagInfoListRequest::getInstanceId() const {
  return instanceId_;
}

void GetAnnotationMissionTagInfoListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int GetAnnotationMissionTagInfoListRequest::getPageSize() const {
  return pageSize_;
}

void GetAnnotationMissionTagInfoListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetAnnotationMissionTagInfoListRequest::getPageIndex() const {
  return pageIndex_;
}

void GetAnnotationMissionTagInfoListRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

