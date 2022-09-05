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

#include <alibabacloud/arms/model/CreateOrUpdateContactGroupRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateContactGroupRequest;

CreateOrUpdateContactGroupRequest::CreateOrUpdateContactGroupRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateContactGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateContactGroupRequest::~CreateOrUpdateContactGroupRequest() {}

long CreateOrUpdateContactGroupRequest::getContactGroupId() const {
  return contactGroupId_;
}

void CreateOrUpdateContactGroupRequest::setContactGroupId(long contactGroupId) {
  contactGroupId_ = contactGroupId;
  setBodyParameter(std::string("ContactGroupId"), std::to_string(contactGroupId));
}

std::string CreateOrUpdateContactGroupRequest::getContactGroupName() const {
  return contactGroupName_;
}

void CreateOrUpdateContactGroupRequest::setContactGroupName(const std::string &contactGroupName) {
  contactGroupName_ = contactGroupName;
  setBodyParameter(std::string("ContactGroupName"), contactGroupName);
}

std::string CreateOrUpdateContactGroupRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateOrUpdateContactGroupRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setBodyParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreateOrUpdateContactGroupRequest::getContactIds() const {
  return contactIds_;
}

void CreateOrUpdateContactGroupRequest::setContactIds(const std::string &contactIds) {
  contactIds_ = contactIds;
  setBodyParameter(std::string("ContactIds"), contactIds);
}

