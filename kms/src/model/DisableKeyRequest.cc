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

#include <alibabacloud/kms/model/DisableKeyRequest.h>

using AlibabaCloud::Kms::Model::DisableKeyRequest;

DisableKeyRequest::DisableKeyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "DisableKey") {
  setMethod(HttpRequest::Method::Post);
}

DisableKeyRequest::~DisableKeyRequest() {}

std::string DisableKeyRequest::getKeyId() const {
  return keyId_;
}

void DisableKeyRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

