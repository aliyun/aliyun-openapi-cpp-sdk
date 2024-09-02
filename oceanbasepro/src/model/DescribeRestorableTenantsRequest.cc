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

#include <alibabacloud/oceanbasepro/model/DescribeRestorableTenantsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeRestorableTenantsRequest;

DescribeRestorableTenantsRequest::DescribeRestorableTenantsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeRestorableTenants") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRestorableTenantsRequest::~DescribeRestorableTenantsRequest() {}

std::string DescribeRestorableTenantsRequest::getRestoreMode() const {
  return restoreMode_;
}

void DescribeRestorableTenantsRequest::setRestoreMode(const std::string &restoreMode) {
  restoreMode_ = restoreMode;
  setBodyParameter(std::string("RestoreMode"), restoreMode);
}

std::string DescribeRestorableTenantsRequest::getRestoreObjectType() const {
  return restoreObjectType_;
}

void DescribeRestorableTenantsRequest::setRestoreObjectType(const std::string &restoreObjectType) {
  restoreObjectType_ = restoreObjectType;
  setBodyParameter(std::string("RestoreObjectType"), restoreObjectType);
}

bool DescribeRestorableTenantsRequest::getIsOnline() const {
  return isOnline_;
}

void DescribeRestorableTenantsRequest::setIsOnline(bool isOnline) {
  isOnline_ = isOnline;
  setBodyParameter(std::string("IsOnline"), isOnline ? "true" : "false");
}

bool DescribeRestorableTenantsRequest::getIsRemote() const {
  return isRemote_;
}

void DescribeRestorableTenantsRequest::setIsRemote(bool isRemote) {
  isRemote_ = isRemote;
  setBodyParameter(std::string("IsRemote"), isRemote ? "true" : "false");
}

std::string DescribeRestorableTenantsRequest::getMethod() const {
  return method_;
}

void DescribeRestorableTenantsRequest::setMethod(const std::string &method) {
  method_ = method;
  setBodyParameter(std::string("Method"), method);
}

std::string DescribeRestorableTenantsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRestorableTenantsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRestorableTenantsRequest::getSetId() const {
  return setId_;
}

void DescribeRestorableTenantsRequest::setSetId(const std::string &setId) {
  setId_ = setId;
  setBodyParameter(std::string("SetId"), setId);
}

