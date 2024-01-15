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

#include <alibabacloud/linkvisual/model/UpdateFaceUserGroupAndDeviceGroupRelationRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateFaceUserGroupAndDeviceGroupRelationRequest;

UpdateFaceUserGroupAndDeviceGroupRelationRequest::UpdateFaceUserGroupAndDeviceGroupRelationRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateFaceUserGroupAndDeviceGroupRelation") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFaceUserGroupAndDeviceGroupRelationRequest::~UpdateFaceUserGroupAndDeviceGroupRelationRequest() {}

std::string UpdateFaceUserGroupAndDeviceGroupRelationRequest::getIsolationId() const {
  return isolationId_;
}

void UpdateFaceUserGroupAndDeviceGroupRelationRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string UpdateFaceUserGroupAndDeviceGroupRelationRequest::getControlId() const {
  return controlId_;
}

void UpdateFaceUserGroupAndDeviceGroupRelationRequest::setControlId(const std::string &controlId) {
  controlId_ = controlId;
  setParameter(std::string("ControlId"), controlId);
}

std::string UpdateFaceUserGroupAndDeviceGroupRelationRequest::getRelation() const {
  return relation_;
}

void UpdateFaceUserGroupAndDeviceGroupRelationRequest::setRelation(const std::string &relation) {
  relation_ = relation;
  setParameter(std::string("Relation"), relation);
}

std::string UpdateFaceUserGroupAndDeviceGroupRelationRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateFaceUserGroupAndDeviceGroupRelationRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateFaceUserGroupAndDeviceGroupRelationRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateFaceUserGroupAndDeviceGroupRelationRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

