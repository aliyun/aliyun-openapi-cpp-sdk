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

#include <alibabacloud/arms/model/DeleteSourceMapRequest.h>

using AlibabaCloud::ARMS::Model::DeleteSourceMapRequest;

DeleteSourceMapRequest::DeleteSourceMapRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteSourceMap") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSourceMapRequest::~DeleteSourceMapRequest() {}

std::vector<DeleteSourceMapRequest::std::string> DeleteSourceMapRequest::getFidList() const {
  return fidList_;
}

void DeleteSourceMapRequest::setFidList(const std::vector<DeleteSourceMapRequest::std::string> &fidList) {
  fidList_ = fidList;
  for(int dep1 = 0; dep1 != fidList.size(); dep1++) {
    setParameter(std::string("FidList") + "." + std::to_string(dep1 + 1), fidList[dep1]);
  }
}

std::string DeleteSourceMapRequest::getRegionId() const {
  return regionId_;
}

void DeleteSourceMapRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSourceMapRequest::getPid() const {
  return pid_;
}

void DeleteSourceMapRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

