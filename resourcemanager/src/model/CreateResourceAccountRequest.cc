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

#include <alibabacloud/resourcemanager/model/CreateResourceAccountRequest.h>

using AlibabaCloud::ResourceManager::Model::CreateResourceAccountRequest;

CreateResourceAccountRequest::CreateResourceAccountRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "CreateResourceAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateResourceAccountRequest::~CreateResourceAccountRequest() {}

std::vector<CreateResourceAccountRequest::Tag> CreateResourceAccountRequest::getTag() const {
  return tag_;
}

void CreateResourceAccountRequest::setTag(const std::vector<CreateResourceAccountRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string CreateResourceAccountRequest::getAccountNamePrefix() const {
  return accountNamePrefix_;
}

void CreateResourceAccountRequest::setAccountNamePrefix(const std::string &accountNamePrefix) {
  accountNamePrefix_ = accountNamePrefix;
  setParameter(std::string("AccountNamePrefix"), accountNamePrefix);
}

std::string CreateResourceAccountRequest::getResellAccountType() const {
  return resellAccountType_;
}

void CreateResourceAccountRequest::setResellAccountType(const std::string &resellAccountType) {
  resellAccountType_ = resellAccountType;
  setParameter(std::string("ResellAccountType"), resellAccountType);
}

std::string CreateResourceAccountRequest::getParentFolderId() const {
  return parentFolderId_;
}

void CreateResourceAccountRequest::setParentFolderId(const std::string &parentFolderId) {
  parentFolderId_ = parentFolderId;
  setParameter(std::string("ParentFolderId"), parentFolderId);
}

std::string CreateResourceAccountRequest::getDisplayName() const {
  return displayName_;
}

void CreateResourceAccountRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateResourceAccountRequest::getPayerAccountId() const {
  return payerAccountId_;
}

void CreateResourceAccountRequest::setPayerAccountId(const std::string &payerAccountId) {
  payerAccountId_ = payerAccountId;
  setParameter(std::string("PayerAccountId"), payerAccountId);
}

