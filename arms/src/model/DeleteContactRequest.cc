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

#include <alibabacloud/arms/model/DeleteContactRequest.h>

using AlibabaCloud::ARMS::Model::DeleteContactRequest;

DeleteContactRequest::DeleteContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteContact") {
  setMethod(HttpRequest::Method::Post);
}

DeleteContactRequest::~DeleteContactRequest() {}

long DeleteContactRequest::getContactId() const {
  return contactId_;
}

void DeleteContactRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), std::to_string(contactId));
}

