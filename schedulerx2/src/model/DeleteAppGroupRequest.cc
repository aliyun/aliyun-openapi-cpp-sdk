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

#include <alibabacloud/schedulerx2/model/DeleteAppGroupRequest.h>

using AlibabaCloud::Schedulerx2::Model::DeleteAppGroupRequest;

DeleteAppGroupRequest::DeleteAppGroupRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "DeleteAppGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAppGroupRequest::~DeleteAppGroupRequest() {}

std::string DeleteAppGroupRequest::getGroupId() const {
  return groupId_;
}

void DeleteAppGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DeleteAppGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteAppGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteAppGroupRequest::getDeleteJobs() const {
  return deleteJobs_;
}

void DeleteAppGroupRequest::setDeleteJobs(bool deleteJobs) {
  deleteJobs_ = deleteJobs;
  setParameter(std::string("DeleteJobs"), deleteJobs ? "true" : "false");
}

std::string DeleteAppGroupRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteAppGroupRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

