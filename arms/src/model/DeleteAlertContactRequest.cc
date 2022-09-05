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

#include <alibabacloud/arms/model/DeleteAlertContactRequest.h>

using AlibabaCloud::ARMS::Model::DeleteAlertContactRequest;

DeleteAlertContactRequest::DeleteAlertContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteAlertContact") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAlertContactRequest::~DeleteAlertContactRequest() {}

std::string DeleteAlertContactRequest::getRegionId() const {
  return regionId_;
}

void DeleteAlertContactRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DeleteAlertContactRequest::getContactId() const {
  return contactId_;
}

void DeleteAlertContactRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), std::to_string(contactId));
}

std::string DeleteAlertContactRequest::getProxyUserId() const {
  return proxyUserId_;
}

void DeleteAlertContactRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

