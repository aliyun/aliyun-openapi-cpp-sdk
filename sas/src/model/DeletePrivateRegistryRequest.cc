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

#include <alibabacloud/sas/model/DeletePrivateRegistryRequest.h>

using AlibabaCloud::Sas::Model::DeletePrivateRegistryRequest;

DeletePrivateRegistryRequest::DeletePrivateRegistryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeletePrivateRegistry") {
  setMethod(HttpRequest::Method::Post);
}

DeletePrivateRegistryRequest::~DeletePrivateRegistryRequest() {}

long DeletePrivateRegistryRequest::getRegistryId() const {
  return registryId_;
}

void DeletePrivateRegistryRequest::setRegistryId(long registryId) {
  registryId_ = registryId;
  setParameter(std::string("RegistryId"), std::to_string(registryId));
}

std::string DeletePrivateRegistryRequest::getSourceIp() const {
  return sourceIp_;
}

void DeletePrivateRegistryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

