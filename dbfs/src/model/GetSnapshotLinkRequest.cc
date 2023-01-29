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

#include <alibabacloud/dbfs/model/GetSnapshotLinkRequest.h>

using AlibabaCloud::DBFS::Model::GetSnapshotLinkRequest;

GetSnapshotLinkRequest::GetSnapshotLinkRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "GetSnapshotLink") {
  setMethod(HttpRequest::Method::Get);
}

GetSnapshotLinkRequest::~GetSnapshotLinkRequest() {}

std::string GetSnapshotLinkRequest::getLinkId() const {
  return linkId_;
}

void GetSnapshotLinkRequest::setLinkId(const std::string &linkId) {
  linkId_ = linkId;
  setParameter(std::string("LinkId"), linkId);
}

std::string GetSnapshotLinkRequest::getRegionId() const {
  return regionId_;
}

void GetSnapshotLinkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

