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

#include <alibabacloud/arms/model/ListEnvCustomJobsRequest.h>

using AlibabaCloud::ARMS::Model::ListEnvCustomJobsRequest;

ListEnvCustomJobsRequest::ListEnvCustomJobsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListEnvCustomJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListEnvCustomJobsRequest::~ListEnvCustomJobsRequest() {}

std::string ListEnvCustomJobsRequest::getEnvironmentId() const {
  return environmentId_;
}

void ListEnvCustomJobsRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string ListEnvCustomJobsRequest::getRegionId() const {
  return regionId_;
}

void ListEnvCustomJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ListEnvCustomJobsRequest::getEncryptYaml() const {
  return encryptYaml_;
}

void ListEnvCustomJobsRequest::setEncryptYaml(bool encryptYaml) {
  encryptYaml_ = encryptYaml;
  setParameter(std::string("EncryptYaml"), encryptYaml ? "true" : "false");
}

