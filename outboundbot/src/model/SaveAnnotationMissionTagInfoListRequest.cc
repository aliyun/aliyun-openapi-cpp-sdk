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

#include <alibabacloud/outboundbot/model/SaveAnnotationMissionTagInfoListRequest.h>

using AlibabaCloud::OutboundBot::Model::SaveAnnotationMissionTagInfoListRequest;

SaveAnnotationMissionTagInfoListRequest::SaveAnnotationMissionTagInfoListRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SaveAnnotationMissionTagInfoList") {
  setMethod(HttpRequest::Method::Post);
}

SaveAnnotationMissionTagInfoListRequest::~SaveAnnotationMissionTagInfoListRequest() {}

std::string SaveAnnotationMissionTagInfoListRequest::getInstanceId() const {
  return instanceId_;
}

void SaveAnnotationMissionTagInfoListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveAnnotationMissionTagInfoListRequest::getAnnotationMissionTagInfoListJsonString() const {
  return annotationMissionTagInfoListJsonString_;
}

void SaveAnnotationMissionTagInfoListRequest::setAnnotationMissionTagInfoListJsonString(const std::string &annotationMissionTagInfoListJsonString) {
  annotationMissionTagInfoListJsonString_ = annotationMissionTagInfoListJsonString;
  setParameter(std::string("AnnotationMissionTagInfoListJsonString"), annotationMissionTagInfoListJsonString);
}

bool SaveAnnotationMissionTagInfoListRequest::getReset() const {
  return reset_;
}

void SaveAnnotationMissionTagInfoListRequest::setReset(bool reset) {
  reset_ = reset;
  setParameter(std::string("Reset"), reset ? "true" : "false");
}

std::vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList> SaveAnnotationMissionTagInfoListRequest::getAnnotationMissionTagInfoList() const {
  return annotationMissionTagInfoList_;
}

void SaveAnnotationMissionTagInfoListRequest::setAnnotationMissionTagInfoList(const std::vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList> &annotationMissionTagInfoList) {
  annotationMissionTagInfoList_ = annotationMissionTagInfoList;
  for(int dep1 = 0; dep1 != annotationMissionTagInfoList.size(); dep1++) {
  auto annotationMissionTagInfoListObj = annotationMissionTagInfoList.at(dep1);
  std::string annotationMissionTagInfoListObjStr = std::string("AnnotationMissionTagInfoList") + "." + std::to_string(dep1 + 1);
    setParameter(annotationMissionTagInfoListObjStr + ".AnnotationMissionTagInfoId", annotationMissionTagInfoListObj.annotationMissionTagInfoId);
    setParameter(annotationMissionTagInfoListObjStr + ".AnnotationMissionTagInfoName", annotationMissionTagInfoListObj.annotationMissionTagInfoName);
    setParameter(annotationMissionTagInfoListObjStr + ".InstanceId", annotationMissionTagInfoListObj.instanceId);
    setParameter(annotationMissionTagInfoListObjStr + ".AnnotationMissionTagInfoDescription", annotationMissionTagInfoListObj.annotationMissionTagInfoDescription);
    setParameter(annotationMissionTagInfoListObjStr + ".TenantId", annotationMissionTagInfoListObj.tenantId);
    setParameter(annotationMissionTagInfoListObjStr + ".Delete", annotationMissionTagInfoListObj._delete ? "true" : "false");
  }
}

