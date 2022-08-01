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

#include <alibabacloud/kms/model/ScheduleKeyDeletionRequest.h>

using AlibabaCloud::Kms::Model::ScheduleKeyDeletionRequest;

ScheduleKeyDeletionRequest::ScheduleKeyDeletionRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ScheduleKeyDeletion") {
  setMethod(HttpRequest::Method::Post);
}

ScheduleKeyDeletionRequest::~ScheduleKeyDeletionRequest() {}

int ScheduleKeyDeletionRequest::getPendingWindowInDays() const {
  return pendingWindowInDays_;
}

void ScheduleKeyDeletionRequest::setPendingWindowInDays(int pendingWindowInDays) {
  pendingWindowInDays_ = pendingWindowInDays;
  setParameter(std::string("PendingWindowInDays"), std::to_string(pendingWindowInDays));
}

std::string ScheduleKeyDeletionRequest::getKeyId() const {
  return keyId_;
}

void ScheduleKeyDeletionRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

