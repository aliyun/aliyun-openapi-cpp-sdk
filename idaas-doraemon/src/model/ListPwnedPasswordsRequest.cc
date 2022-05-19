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

#include <alibabacloud/idaas-doraemon/model/ListPwnedPasswordsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListPwnedPasswordsRequest;

ListPwnedPasswordsRequest::ListPwnedPasswordsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListPwnedPasswords") {
  setMethod(HttpRequest::Method::Post);
}

ListPwnedPasswordsRequest::~ListPwnedPasswordsRequest() {}

std::string ListPwnedPasswordsRequest::getPrefixHexPasswordSha1Hash() const {
  return prefixHexPasswordSha1Hash_;
}

void ListPwnedPasswordsRequest::setPrefixHexPasswordSha1Hash(const std::string &prefixHexPasswordSha1Hash) {
  prefixHexPasswordSha1Hash_ = prefixHexPasswordSha1Hash;
  setParameter(std::string("PrefixHexPasswordSha1Hash"), prefixHexPasswordSha1Hash);
}

