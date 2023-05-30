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

#include <alibabacloud/kms/model/SetDeletionProtectionRequest.h>

using AlibabaCloud::Kms::Model::SetDeletionProtectionRequest;

SetDeletionProtectionRequest::SetDeletionProtectionRequest()
    : RpcServiceRequest("kms", "2016-01-20", "SetDeletionProtection") {
  setMethod(HttpRequest::Method::Post);
}

SetDeletionProtectionRequest::~SetDeletionProtectionRequest() {}

std::string SetDeletionProtectionRequest::getDeletionProtectionDescription() const {
  return deletionProtectionDescription_;
}

void SetDeletionProtectionRequest::setDeletionProtectionDescription(const std::string &deletionProtectionDescription) {
  deletionProtectionDescription_ = deletionProtectionDescription;
  setParameter(std::string("DeletionProtectionDescription"), deletionProtectionDescription);
}

bool SetDeletionProtectionRequest::getEnableDeletionProtection() const {
  return enableDeletionProtection_;
}

void SetDeletionProtectionRequest::setEnableDeletionProtection(bool enableDeletionProtection) {
  enableDeletionProtection_ = enableDeletionProtection;
  setParameter(std::string("EnableDeletionProtection"), enableDeletionProtection ? "true" : "false");
}

std::string SetDeletionProtectionRequest::getProtectedResourceArn() const {
  return protectedResourceArn_;
}

void SetDeletionProtectionRequest::setProtectedResourceArn(const std::string &protectedResourceArn) {
  protectedResourceArn_ = protectedResourceArn;
  setParameter(std::string("ProtectedResourceArn"), protectedResourceArn);
}

