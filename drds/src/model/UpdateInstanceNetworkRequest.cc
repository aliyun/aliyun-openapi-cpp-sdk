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

#include <alibabacloud/drds/model/UpdateInstanceNetworkRequest.h>

using AlibabaCloud::Drds::Model::UpdateInstanceNetworkRequest;

UpdateInstanceNetworkRequest::UpdateInstanceNetworkRequest()
    : RpcServiceRequest("drds", "2019-01-23", "UpdateInstanceNetwork") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceNetworkRequest::~UpdateInstanceNetworkRequest() {}

std::string UpdateInstanceNetworkRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void UpdateInstanceNetworkRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string UpdateInstanceNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateInstanceNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool UpdateInstanceNetworkRequest::getRetainClassic() const {
  return retainClassic_;
}

void UpdateInstanceNetworkRequest::setRetainClassic(bool retainClassic) {
  retainClassic_ = retainClassic;
  setParameter(std::string("RetainClassic"), retainClassic ? "true" : "false");
}

int UpdateInstanceNetworkRequest::getClassicExpiredDays() const {
  return classicExpiredDays_;
}

void UpdateInstanceNetworkRequest::setClassicExpiredDays(int classicExpiredDays) {
  classicExpiredDays_ = classicExpiredDays;
  setParameter(std::string("ClassicExpiredDays"), std::to_string(classicExpiredDays));
}

std::string UpdateInstanceNetworkRequest::getSrcInstanceNetworkType() const {
  return srcInstanceNetworkType_;
}

void UpdateInstanceNetworkRequest::setSrcInstanceNetworkType(const std::string &srcInstanceNetworkType) {
  srcInstanceNetworkType_ = srcInstanceNetworkType;
  setParameter(std::string("SrcInstanceNetworkType"), srcInstanceNetworkType);
}

