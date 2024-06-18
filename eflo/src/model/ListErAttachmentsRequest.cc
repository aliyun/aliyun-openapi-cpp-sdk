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

#include <alibabacloud/eflo/model/ListErAttachmentsRequest.h>

using AlibabaCloud::Eflo::Model::ListErAttachmentsRequest;

ListErAttachmentsRequest::ListErAttachmentsRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListErAttachments") {
  setMethod(HttpRequest::Method::Post);
}

ListErAttachmentsRequest::~ListErAttachmentsRequest() {}

int ListErAttachmentsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListErAttachmentsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListErAttachmentsRequest::getResourceTenantId() const {
  return resourceTenantId_;
}

void ListErAttachmentsRequest::setResourceTenantId(const std::string &resourceTenantId) {
  resourceTenantId_ = resourceTenantId;
  setBodyParameter(std::string("ResourceTenantId"), resourceTenantId);
}

std::string ListErAttachmentsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListErAttachmentsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListErAttachmentsRequest::getRegionId() const {
  return regionId_;
}

void ListErAttachmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool ListErAttachmentsRequest::getAutoReceiveAllRoute() const {
  return autoReceiveAllRoute_;
}

void ListErAttachmentsRequest::setAutoReceiveAllRoute(bool autoReceiveAllRoute) {
  autoReceiveAllRoute_ = autoReceiveAllRoute;
  setBodyParameter(std::string("AutoReceiveAllRoute"), autoReceiveAllRoute ? "true" : "false");
}

int ListErAttachmentsRequest::getPageSize() const {
  return pageSize_;
}

void ListErAttachmentsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListErAttachmentsRequest::getInstanceType() const {
  return instanceType_;
}

void ListErAttachmentsRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setBodyParameter(std::string("InstanceType"), instanceType);
}

std::string ListErAttachmentsRequest::getErAttachmentName() const {
  return erAttachmentName_;
}

void ListErAttachmentsRequest::setErAttachmentName(const std::string &erAttachmentName) {
  erAttachmentName_ = erAttachmentName;
  setBodyParameter(std::string("ErAttachmentName"), erAttachmentName);
}

std::string ListErAttachmentsRequest::getErId() const {
  return erId_;
}

void ListErAttachmentsRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string ListErAttachmentsRequest::getInstanceId() const {
  return instanceId_;
}

void ListErAttachmentsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ListErAttachmentsRequest::getErAttachmentId() const {
  return erAttachmentId_;
}

void ListErAttachmentsRequest::setErAttachmentId(const std::string &erAttachmentId) {
  erAttachmentId_ = erAttachmentId;
  setBodyParameter(std::string("ErAttachmentId"), erAttachmentId);
}

bool ListErAttachmentsRequest::getEnablePage() const {
  return enablePage_;
}

void ListErAttachmentsRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListErAttachmentsRequest::getStatus() const {
  return status_;
}

void ListErAttachmentsRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

