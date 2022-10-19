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

#include <alibabacloud/resourcemanager/model/DeleteAccountRequest.h>

using AlibabaCloud::ResourceManager::Model::DeleteAccountRequest;

DeleteAccountRequest::DeleteAccountRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "DeleteAccount") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccountRequest::~DeleteAccountRequest() {}

std::vector<DeleteAccountRequest::std::string> DeleteAccountRequest::getAbandonableCheckId() const {
  return abandonableCheckId_;
}

void DeleteAccountRequest::setAbandonableCheckId(const std::vector<DeleteAccountRequest::std::string> &abandonableCheckId) {
  abandonableCheckId_ = abandonableCheckId;
  for(int dep1 = 0; dep1 != abandonableCheckId.size(); dep1++) {
    setParameter(std::string("AbandonableCheckId") + "." + std::to_string(dep1 + 1), abandonableCheckId[dep1]);
  }
}

std::string DeleteAccountRequest::getAccountId() const {
  return accountId_;
}

void DeleteAccountRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

