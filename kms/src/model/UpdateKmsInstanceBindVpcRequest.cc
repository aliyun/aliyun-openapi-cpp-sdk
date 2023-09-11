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

#include <alibabacloud/kms/model/UpdateKmsInstanceBindVpcRequest.h>

using AlibabaCloud::Kms::Model::UpdateKmsInstanceBindVpcRequest;

UpdateKmsInstanceBindVpcRequest::UpdateKmsInstanceBindVpcRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UpdateKmsInstanceBindVpc") {
  setMethod(HttpRequest::Method::Get);
}

UpdateKmsInstanceBindVpcRequest::~UpdateKmsInstanceBindVpcRequest() {}

std::string UpdateKmsInstanceBindVpcRequest::getKmsInstanceId() const {
  return kmsInstanceId_;
}

void UpdateKmsInstanceBindVpcRequest::setKmsInstanceId(const std::string &kmsInstanceId) {
  kmsInstanceId_ = kmsInstanceId;
  setParameter(std::string("KmsInstanceId"), kmsInstanceId);
}

std::string UpdateKmsInstanceBindVpcRequest::getBindVpcs() const {
  return bindVpcs_;
}

void UpdateKmsInstanceBindVpcRequest::setBindVpcs(const std::string &bindVpcs) {
  bindVpcs_ = bindVpcs;
  setParameter(std::string("BindVpcs"), bindVpcs);
}

