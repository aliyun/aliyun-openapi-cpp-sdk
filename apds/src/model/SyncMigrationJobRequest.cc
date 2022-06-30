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

#include <alibabacloud/apds/model/SyncMigrationJobRequest.h>

using AlibabaCloud::Apds::Model::SyncMigrationJobRequest;

SyncMigrationJobRequest::SyncMigrationJobRequest()
    : RoaServiceRequest("apds", "2022-03-31") {
  setResourcePath("/okss-services/migration-job/sync-migration-job"};
  setMethod(HttpRequest::Method::Post);
}

SyncMigrationJobRequest::~SyncMigrationJobRequest() {}

string SyncMigrationJobRequest::getRegions() const {
  return regions_;
}

void SyncMigrationJobRequest::setRegions(string regions) {
  regions_ = regions;
  setParameter(std::string("regions"), std::to_string(regions));
}

string SyncMigrationJobRequest::getJobType() const {
  return jobType_;
}

void SyncMigrationJobRequest::setJobType(string jobType) {
  jobType_ = jobType;
  setParameter(std::string("jobType"), std::to_string(jobType));
}

string SyncMigrationJobRequest::getRegionId() const {
  return regionId_;
}

void SyncMigrationJobRequest::setRegionId(string regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), std::to_string(regionId));
}

