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

#include <alibabacloud/ehpc/model/GetPostScriptsRequest.h>

using AlibabaCloud::EHPC::Model::GetPostScriptsRequest;

GetPostScriptsRequest::GetPostScriptsRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "GetPostScripts") {
  setMethod(HttpRequest::Method::Get);
}

GetPostScriptsRequest::~GetPostScriptsRequest() {}

std::string GetPostScriptsRequest::getClusterId() const {
  return clusterId_;
}

void GetPostScriptsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetPostScriptsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetPostScriptsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetPostScriptsRequest::getRegionId() const {
  return regionId_;
}

void GetPostScriptsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

