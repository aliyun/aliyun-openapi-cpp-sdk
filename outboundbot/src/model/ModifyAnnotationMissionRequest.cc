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

#include <alibabacloud/outboundbot/model/ModifyAnnotationMissionRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyAnnotationMissionRequest;

ModifyAnnotationMissionRequest::ModifyAnnotationMissionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyAnnotationMission") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAnnotationMissionRequest::~ModifyAnnotationMissionRequest() {}

int ModifyAnnotationMissionRequest::getAnnotationStatus() const {
  return annotationStatus_;
}

void ModifyAnnotationMissionRequest::setAnnotationStatus(int annotationStatus) {
  annotationStatus_ = annotationStatus;
  setParameter(std::string("AnnotationStatus"), std::to_string(annotationStatus));
}

bool ModifyAnnotationMissionRequest::get_Delete() const {
  return _delete_;
}

void ModifyAnnotationMissionRequest::set_Delete(bool _delete) {
  _delete_ = _delete;
  setParameter(std::string("Delete"), _delete ? "true" : "false");
}

std::string ModifyAnnotationMissionRequest::getAnnotationMissionId() const {
  return annotationMissionId_;
}

void ModifyAnnotationMissionRequest::setAnnotationMissionId(const std::string &annotationMissionId) {
  annotationMissionId_ = annotationMissionId;
  setParameter(std::string("AnnotationMissionId"), annotationMissionId);
}

std::string ModifyAnnotationMissionRequest::getAnnotationMissionName() const {
  return annotationMissionName_;
}

void ModifyAnnotationMissionRequest::setAnnotationMissionName(const std::string &annotationMissionName) {
  annotationMissionName_ = annotationMissionName;
  setParameter(std::string("AnnotationMissionName"), annotationMissionName);
}

