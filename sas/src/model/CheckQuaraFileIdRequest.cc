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

#include <alibabacloud/sas/model/CheckQuaraFileIdRequest.h>

using AlibabaCloud::Sas::Model::CheckQuaraFileIdRequest;

CheckQuaraFileIdRequest::CheckQuaraFileIdRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CheckQuaraFileId") {
  setMethod(HttpRequest::Method::Post);
}

CheckQuaraFileIdRequest::~CheckQuaraFileIdRequest() {}

std::vector<std::string> CheckQuaraFileIdRequest::getQuaraFileIds() const {
  return quaraFileIds_;
}

void CheckQuaraFileIdRequest::setQuaraFileIds(const std::vector<std::string> &quaraFileIds) {
  quaraFileIds_ = quaraFileIds;
}

std::string CheckQuaraFileIdRequest::getUuid() const {
  return uuid_;
}

void CheckQuaraFileIdRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string CheckQuaraFileIdRequest::getSourceIp() const {
  return sourceIp_;
}

void CheckQuaraFileIdRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

