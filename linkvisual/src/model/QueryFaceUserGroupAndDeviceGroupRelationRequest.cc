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

#include <alibabacloud/linkvisual/model/QueryFaceUserGroupAndDeviceGroupRelationRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryFaceUserGroupAndDeviceGroupRelationRequest;

QueryFaceUserGroupAndDeviceGroupRelationRequest::QueryFaceUserGroupAndDeviceGroupRelationRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryFaceUserGroupAndDeviceGroupRelation") {
  setMethod(HttpRequest::Method::Post);
}

QueryFaceUserGroupAndDeviceGroupRelationRequest::~QueryFaceUserGroupAndDeviceGroupRelationRequest() {}

std::string QueryFaceUserGroupAndDeviceGroupRelationRequest::getIsolationId() const {
  return isolationId_;
}

void QueryFaceUserGroupAndDeviceGroupRelationRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string QueryFaceUserGroupAndDeviceGroupRelationRequest::getControlId() const {
  return controlId_;
}

void QueryFaceUserGroupAndDeviceGroupRelationRequest::setControlId(const std::string &controlId) {
  controlId_ = controlId;
  setParameter(std::string("ControlId"), controlId);
}

std::string QueryFaceUserGroupAndDeviceGroupRelationRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryFaceUserGroupAndDeviceGroupRelationRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryFaceUserGroupAndDeviceGroupRelationRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryFaceUserGroupAndDeviceGroupRelationRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

