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

#include <alibabacloud/ehpc/model/DeleteJobsRequest.h>

using AlibabaCloud::EHPC::Model::DeleteJobsRequest;

DeleteJobsRequest::DeleteJobsRequest()
    : RpcServiceRequest("ehpc", "2023-07-01", "DeleteJobs") {
  setMethod(HttpRequest::Method::Post);
}

DeleteJobsRequest::~DeleteJobsRequest() {}

std::vector<DeleteJobsRequest::JobSpec> DeleteJobsRequest::getJobSpec() const {
  return jobSpec_;
}

void DeleteJobsRequest::setJobSpec(const std::vector<DeleteJobsRequest::JobSpec> &jobSpec) {
  jobSpec_ = jobSpec;
  for(int dep1 = 0; dep1 != jobSpec.size(); dep1++) {
    setParameter(std::string("JobSpec") + "." + std::to_string(dep1 + 1) + ".JobId", jobSpec[dep1].jobId);
    for(int dep2 = 0; dep2 != jobSpec[dep1].taskSpec.size(); dep2++) {
      setParameter(std::string("JobSpec") + "." + std::to_string(dep1 + 1) + ".TaskSpec." + std::to_string(dep2 + 1) + ".TaskName", jobSpec[dep1].taskSpec[dep2].taskName);
      for(int dep3 = 0; dep3 != jobSpec[dep1].taskSpec[dep2].arrayIndex.size(); dep3++) {
        setParameter(std::string("JobSpec") + "." + std::to_string(dep1 + 1) + ".TaskSpec." + std::to_string(dep2 + 1) + ".ArrayIndex." + std::to_string(dep3 + 1), std::to_string(jobSpec[dep1].taskSpec[dep2].arrayIndex[dep3]));
      }
    }
  }
}

std::vector<DeleteJobsRequest::std::string> DeleteJobsRequest::getExecutorIds() const {
  return executorIds_;
}

void DeleteJobsRequest::setExecutorIds(const std::vector<DeleteJobsRequest::std::string> &executorIds) {
  executorIds_ = executorIds;
  for(int dep1 = 0; dep1 != executorIds.size(); dep1++) {
    setParameter(std::string("ExecutorIds") + "." + std::to_string(dep1 + 1), executorIds[dep1]);
  }
}

