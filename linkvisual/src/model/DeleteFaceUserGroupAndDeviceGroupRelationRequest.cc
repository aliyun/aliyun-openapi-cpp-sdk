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

#include <alibabacloud/linkvisual/model/DeleteFaceUserGroupAndDeviceGroupRelationRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteFaceUserGroupAndDeviceGroupRelationRequest;

DeleteFaceUserGroupAndDeviceGroupRelationRequest::DeleteFaceUserGroupAndDeviceGroupRelationRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteFaceUserGroupAndDeviceGroupRelation") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFaceUserGroupAndDeviceGroupRelationRequest::~DeleteFaceUserGroupAndDeviceGroupRelationRequest() {}

std::string DeleteFaceUserGroupAndDeviceGroupRelationRequest::getIsolationId() const {
  return isolationId_;
}

void DeleteFaceUserGroupAndDeviceGroupRelationRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string DeleteFaceUserGroupAndDeviceGroupRelationRequest::getControlId() const {
  return controlId_;
}

void DeleteFaceUserGroupAndDeviceGroupRelationRequest::setControlId(const std::string &controlId) {
  controlId_ = controlId;
  setParameter(std::string("ControlId"), controlId);
}

std::string DeleteFaceUserGroupAndDeviceGroupRelationRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteFaceUserGroupAndDeviceGroupRelationRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteFaceUserGroupAndDeviceGroupRelationRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteFaceUserGroupAndDeviceGroupRelationRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

