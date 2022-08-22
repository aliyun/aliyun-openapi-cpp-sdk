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

#include <alibabacloud/dbfs/model/ResizeDbfsRequest.h>

using AlibabaCloud::DBFS::Model::ResizeDbfsRequest;

ResizeDbfsRequest::ResizeDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ResizeDbfs") {
  setMethod(HttpRequest::Method::Post);
}

ResizeDbfsRequest::~ResizeDbfsRequest() {}

int ResizeDbfsRequest::getNewSizeG() const {
  return newSizeG_;
}

void ResizeDbfsRequest::setNewSizeG(int newSizeG) {
  newSizeG_ = newSizeG;
  setParameter(std::string("NewSizeG"), std::to_string(newSizeG));
}

std::string ResizeDbfsRequest::getRegionId() const {
  return regionId_;
}

void ResizeDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResizeDbfsRequest::getFsId() const {
  return fsId_;
}

void ResizeDbfsRequest::setFsId(const std::string &fsId) {
  fsId_ = fsId;
  setParameter(std::string("FsId"), fsId);
}

