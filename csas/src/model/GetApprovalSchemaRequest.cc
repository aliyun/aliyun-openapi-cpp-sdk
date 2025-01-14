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

#include <alibabacloud/csas/model/GetApprovalSchemaRequest.h>

using AlibabaCloud::Csas::Model::GetApprovalSchemaRequest;

GetApprovalSchemaRequest::GetApprovalSchemaRequest()
    : RpcServiceRequest("csas", "2023-01-20", "GetApprovalSchema") {
  setMethod(HttpRequest::Method::Get);
}

GetApprovalSchemaRequest::~GetApprovalSchemaRequest() {}

std::string GetApprovalSchemaRequest::getSourceIp() const {
  return sourceIp_;
}

void GetApprovalSchemaRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetApprovalSchemaRequest::getSchemaId() const {
  return schemaId_;
}

void GetApprovalSchemaRequest::setSchemaId(const std::string &schemaId) {
  schemaId_ = schemaId;
  setParameter(std::string("SchemaId"), schemaId);
}

