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

#include <alibabacloud/mts/model/QuerySmarttagTemplateListRequest.h>

using AlibabaCloud::Mts::Model::QuerySmarttagTemplateListRequest;

QuerySmarttagTemplateListRequest::QuerySmarttagTemplateListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QuerySmarttagTemplateList") {
  setMethod(HttpRequest::Method::Post);
}

QuerySmarttagTemplateListRequest::~QuerySmarttagTemplateListRequest() {}

long QuerySmarttagTemplateListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySmarttagTemplateListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySmarttagTemplateListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySmarttagTemplateListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QuerySmarttagTemplateListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QuerySmarttagTemplateListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QuerySmarttagTemplateListRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySmarttagTemplateListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QuerySmarttagTemplateListRequest::getTemplateId() const {
  return templateId_;
}

void QuerySmarttagTemplateListRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string QuerySmarttagTemplateListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySmarttagTemplateListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

