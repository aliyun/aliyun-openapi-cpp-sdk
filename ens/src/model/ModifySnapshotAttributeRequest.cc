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

#include <alibabacloud/ens/model/ModifySnapshotAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifySnapshotAttributeRequest;

ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifySnapshotAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifySnapshotAttributeRequest::~ModifySnapshotAttributeRequest() {}

std::string ModifySnapshotAttributeRequest::getSnapshotId() const {
  return snapshotId_;
}

void ModifySnapshotAttributeRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string ModifySnapshotAttributeRequest::getDescription() const {
  return description_;
}

void ModifySnapshotAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifySnapshotAttributeRequest::getSnapshotName() const {
  return snapshotName_;
}

void ModifySnapshotAttributeRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

