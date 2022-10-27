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

#include <alibabacloud/ehpc/model/SetPostScriptsRequest.h>

using AlibabaCloud::EHPC::Model::SetPostScriptsRequest;

SetPostScriptsRequest::SetPostScriptsRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "SetPostScripts") {
  setMethod(HttpRequest::Method::Get);
}

SetPostScriptsRequest::~SetPostScriptsRequest() {}

std::vector<SetPostScriptsRequest::PostInstallScripts> SetPostScriptsRequest::getPostInstallScripts() const {
  return postInstallScripts_;
}

void SetPostScriptsRequest::setPostInstallScripts(const std::vector<SetPostScriptsRequest::PostInstallScripts> &postInstallScripts) {
  postInstallScripts_ = postInstallScripts;
  for(int dep1 = 0; dep1 != postInstallScripts.size(); dep1++) {
  auto postInstallScriptsObj = postInstallScripts.at(dep1);
  std::string postInstallScriptsObjStr = std::string("PostInstallScripts") + "." + std::to_string(dep1 + 1);
    setParameter(postInstallScriptsObjStr + ".Args", postInstallScriptsObj.args);
    setParameter(postInstallScriptsObjStr + ".Url", postInstallScriptsObj.url);
  }
}

std::string SetPostScriptsRequest::getClusterId() const {
  return clusterId_;
}

void SetPostScriptsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string SetPostScriptsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetPostScriptsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetPostScriptsRequest::getRegionId() const {
  return regionId_;
}

void SetPostScriptsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

