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

#include <alibabacloud/tag/model/DeleteTagRequest.h>

using AlibabaCloud::Tag::Model::DeleteTagRequest;

DeleteTagRequest::DeleteTagRequest()
    : RpcServiceRequest("tag", "2018-08-28", "DeleteTag") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTagRequest::~DeleteTagRequest() {}

std::string DeleteTagRequest::getRegionId() const {
  return regionId_;
}

void DeleteTagRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteTagRequest::getValue() const {
  return value_;
}

void DeleteTagRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string DeleteTagRequest::getKey() const {
  return key_;
}

void DeleteTagRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DeleteTagRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTagRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTagRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTagRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTagRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTagRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

