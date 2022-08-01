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

#include <alibabacloud/kms/model/UpdateRotationPolicyRequest.h>

using AlibabaCloud::Kms::Model::UpdateRotationPolicyRequest;

UpdateRotationPolicyRequest::UpdateRotationPolicyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UpdateRotationPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRotationPolicyRequest::~UpdateRotationPolicyRequest() {}

std::string UpdateRotationPolicyRequest::getKeyId() const {
  return keyId_;
}

void UpdateRotationPolicyRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string UpdateRotationPolicyRequest::getRotationInterval() const {
  return rotationInterval_;
}

void UpdateRotationPolicyRequest::setRotationInterval(const std::string &rotationInterval) {
  rotationInterval_ = rotationInterval;
  setParameter(std::string("RotationInterval"), rotationInterval);
}

bool UpdateRotationPolicyRequest::getEnableAutomaticRotation() const {
  return enableAutomaticRotation_;
}

void UpdateRotationPolicyRequest::setEnableAutomaticRotation(bool enableAutomaticRotation) {
  enableAutomaticRotation_ = enableAutomaticRotation;
  setParameter(std::string("EnableAutomaticRotation"), enableAutomaticRotation ? "true" : "false");
}

