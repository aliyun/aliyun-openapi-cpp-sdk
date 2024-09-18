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

#include <alibabacloud/quickbi-public/model/UpdateEmbeddedStatusRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateEmbeddedStatusRequest;

UpdateEmbeddedStatusRequest::UpdateEmbeddedStatusRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateEmbeddedStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEmbeddedStatusRequest::~UpdateEmbeddedStatusRequest() {}

bool UpdateEmbeddedStatusRequest::getThirdPartAuthFlag() const {
  return thirdPartAuthFlag_;
}

void UpdateEmbeddedStatusRequest::setThirdPartAuthFlag(bool thirdPartAuthFlag) {
  thirdPartAuthFlag_ = thirdPartAuthFlag;
  setParameter(std::string("ThirdPartAuthFlag"), thirdPartAuthFlag ? "true" : "false");
}

std::string UpdateEmbeddedStatusRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateEmbeddedStatusRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateEmbeddedStatusRequest::getSignType() const {
  return signType_;
}

void UpdateEmbeddedStatusRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string UpdateEmbeddedStatusRequest::getWorksId() const {
  return worksId_;
}

void UpdateEmbeddedStatusRequest::setWorksId(const std::string &worksId) {
  worksId_ = worksId;
  setParameter(std::string("WorksId"), worksId);
}

