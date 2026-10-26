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

#include <alibabacloud/quickbi-public/model/UpdateDataSourcePropertiesRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateDataSourcePropertiesRequest;

UpdateDataSourcePropertiesRequest::UpdateDataSourcePropertiesRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateDataSourceProperties") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDataSourcePropertiesRequest::~UpdateDataSourcePropertiesRequest() {}

std::string UpdateDataSourcePropertiesRequest::getDsId() const {
  return dsId_;
}

void UpdateDataSourcePropertiesRequest::setDsId(const std::string &dsId) {
  dsId_ = dsId;
  setParameter(std::string("DsId"), dsId);
}

std::string UpdateDataSourcePropertiesRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateDataSourcePropertiesRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateDataSourcePropertiesRequest::getDescription() const {
  return description_;
}

void UpdateDataSourcePropertiesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateDataSourcePropertiesRequest::getShowName() const {
  return showName_;
}

void UpdateDataSourcePropertiesRequest::setShowName(const std::string &showName) {
  showName_ = showName;
  setParameter(std::string("ShowName"), showName);
}

std::string UpdateDataSourcePropertiesRequest::getQuickBIOwnerId() const {
  return quickBIOwnerId_;
}

void UpdateDataSourcePropertiesRequest::setQuickBIOwnerId(const std::string &quickBIOwnerId) {
  quickBIOwnerId_ = quickBIOwnerId;
  setParameter(std::string("QuickBIOwnerId"), quickBIOwnerId);
}

std::string UpdateDataSourcePropertiesRequest::getSignType() const {
  return signType_;
}

void UpdateDataSourcePropertiesRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

