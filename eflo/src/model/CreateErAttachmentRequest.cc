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

#include <alibabacloud/eflo/model/CreateErAttachmentRequest.h>

using AlibabaCloud::Eflo::Model::CreateErAttachmentRequest;

CreateErAttachmentRequest::CreateErAttachmentRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateErAttachment") {
  setMethod(HttpRequest::Method::Post);
}

CreateErAttachmentRequest::~CreateErAttachmentRequest() {}

std::string CreateErAttachmentRequest::getResourceTenantId() const {
  return resourceTenantId_;
}

void CreateErAttachmentRequest::setResourceTenantId(const std::string &resourceTenantId) {
  resourceTenantId_ = resourceTenantId;
  setBodyParameter(std::string("ResourceTenantId"), resourceTenantId);
}

std::string CreateErAttachmentRequest::getRegionId() const {
  return regionId_;
}

void CreateErAttachmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool CreateErAttachmentRequest::getAutoReceiveAllRoute() const {
  return autoReceiveAllRoute_;
}

void CreateErAttachmentRequest::setAutoReceiveAllRoute(bool autoReceiveAllRoute) {
  autoReceiveAllRoute_ = autoReceiveAllRoute;
  setBodyParameter(std::string("AutoReceiveAllRoute"), autoReceiveAllRoute ? "true" : "false");
}

std::string CreateErAttachmentRequest::getInstanceType() const {
  return instanceType_;
}

void CreateErAttachmentRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setBodyParameter(std::string("InstanceType"), instanceType);
}

std::string CreateErAttachmentRequest::getErAttachmentName() const {
  return erAttachmentName_;
}

void CreateErAttachmentRequest::setErAttachmentName(const std::string &erAttachmentName) {
  erAttachmentName_ = erAttachmentName;
  setBodyParameter(std::string("ErAttachmentName"), erAttachmentName);
}

std::string CreateErAttachmentRequest::getErId() const {
  return erId_;
}

void CreateErAttachmentRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string CreateErAttachmentRequest::getInstanceId() const {
  return instanceId_;
}

void CreateErAttachmentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

