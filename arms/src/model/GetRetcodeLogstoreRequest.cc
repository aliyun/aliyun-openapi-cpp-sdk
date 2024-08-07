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

#include <alibabacloud/arms/model/GetRetcodeLogstoreRequest.h>

using AlibabaCloud::ARMS::Model::GetRetcodeLogstoreRequest;

GetRetcodeLogstoreRequest::GetRetcodeLogstoreRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRetcodeLogstore") {
  setMethod(HttpRequest::Method::Post);
}

GetRetcodeLogstoreRequest::~GetRetcodeLogstoreRequest() {}

std::string GetRetcodeLogstoreRequest::getRegionId() const {
  return regionId_;
}

void GetRetcodeLogstoreRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetRetcodeLogstoreRequest::getPid() const {
  return pid_;
}

void GetRetcodeLogstoreRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

