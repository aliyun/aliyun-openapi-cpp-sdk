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

#include <alibabacloud/sas/model/DeleteCustomBlockRecordRequest.h>

using AlibabaCloud::Sas::Model::DeleteCustomBlockRecordRequest;

DeleteCustomBlockRecordRequest::DeleteCustomBlockRecordRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteCustomBlockRecord") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomBlockRecordRequest::~DeleteCustomBlockRecordRequest() {}

long DeleteCustomBlockRecordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCustomBlockRecordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCustomBlockRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteCustomBlockRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DeleteCustomBlockRecordRequest::getId() const {
  return id_;
}

void DeleteCustomBlockRecordRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

