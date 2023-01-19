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

#include <alibabacloud/sas/model/DeleteInterceptionTargetRequest.h>

using AlibabaCloud::Sas::Model::DeleteInterceptionTargetRequest;

DeleteInterceptionTargetRequest::DeleteInterceptionTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteInterceptionTarget") {
  setMethod(HttpRequest::Method::Post);
}

DeleteInterceptionTargetRequest::~DeleteInterceptionTargetRequest() {}

std::string DeleteInterceptionTargetRequest::getTargetIds() const {
  return targetIds_;
}

void DeleteInterceptionTargetRequest::setTargetIds(const std::string &targetIds) {
  targetIds_ = targetIds;
  setParameter(std::string("TargetIds"), targetIds);
}

std::string DeleteInterceptionTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteInterceptionTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

