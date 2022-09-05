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

#include <alibabacloud/arms/model/SendTTSVerifyLinkRequest.h>

using AlibabaCloud::ARMS::Model::SendTTSVerifyLinkRequest;

SendTTSVerifyLinkRequest::SendTTSVerifyLinkRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SendTTSVerifyLink") {
  setMethod(HttpRequest::Method::Post);
}

SendTTSVerifyLinkRequest::~SendTTSVerifyLinkRequest() {}

long SendTTSVerifyLinkRequest::getContactId() const {
  return contactId_;
}

void SendTTSVerifyLinkRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setBodyParameter(std::string("ContactId"), std::to_string(contactId));
}

std::string SendTTSVerifyLinkRequest::getPhone() const {
  return phone_;
}

void SendTTSVerifyLinkRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setBodyParameter(std::string("Phone"), phone);
}

