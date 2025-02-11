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

#include <alibabacloud/cloudauth/model/RemoveWhiteListSettingRequest.h>

using AlibabaCloud::Cloudauth::Model::RemoveWhiteListSettingRequest;

RemoveWhiteListSettingRequest::RemoveWhiteListSettingRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "RemoveWhiteListSetting") {
  setMethod(HttpRequest::Method::Post);
}

RemoveWhiteListSettingRequest::~RemoveWhiteListSettingRequest() {}

std::string RemoveWhiteListSettingRequest::getServiceCode() const {
  return serviceCode_;
}

void RemoveWhiteListSettingRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setParameter(std::string("ServiceCode"), serviceCode);
}

std::vector<RemoveWhiteListSettingRequest::long> RemoveWhiteListSettingRequest::getIds() const {
  return ids_;
}

void RemoveWhiteListSettingRequest::setIds(const std::vector<RemoveWhiteListSettingRequest::long> &ids) {
  ids_ = ids;
  for(int dep1 = 0; dep1 != ids.size(); dep1++) {
    setParameter(std::string("Ids") + "." + std::to_string(dep1 + 1), std::to_string(ids[dep1]));
  }
}

