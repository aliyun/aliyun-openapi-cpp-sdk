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

#include <alibabacloud/linkvisual/model/AddFaceUserGroupAndDeviceGroupRelationRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceUserGroupAndDeviceGroupRelationRequest;

AddFaceUserGroupAndDeviceGroupRelationRequest::AddFaceUserGroupAndDeviceGroupRelationRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceUserGroupAndDeviceGroupRelation") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceUserGroupAndDeviceGroupRelationRequest::~AddFaceUserGroupAndDeviceGroupRelationRequest() {}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getRelation() const {
  return relation_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setRelation(const std::string &relation) {
  relation_ = relation;
  setParameter(std::string("Relation"), relation);
}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getUserGroupId() const {
  return userGroupId_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceUserGroupAndDeviceGroupRelationRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceUserGroupAndDeviceGroupRelationRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

