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

#include <alibabacloud/ehpc/model/SetSchedulerInfoRequest.h>

using AlibabaCloud::EHPC::Model::SetSchedulerInfoRequest;

SetSchedulerInfoRequest::SetSchedulerInfoRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "SetSchedulerInfo") {
  setMethod(HttpRequest::Method::Get);
}

SetSchedulerInfoRequest::~SetSchedulerInfoRequest() {}

std::vector<SetSchedulerInfoRequest::SlurmInfo> SetSchedulerInfoRequest::getSlurmInfo() const {
  return slurmInfo_;
}

void SetSchedulerInfoRequest::setSlurmInfo(const std::vector<SetSchedulerInfoRequest::SlurmInfo> &slurmInfo) {
  slurmInfo_ = slurmInfo;
  for(int dep1 = 0; dep1 != slurmInfo.size(); dep1++) {
  auto slurmInfoObj = slurmInfo.at(dep1);
  std::string slurmInfoObjStr = std::string("SlurmInfo") + "." + std::to_string(dep1 + 1);
    setParameter(slurmInfoObjStr + ".SchedInterval", std::to_string(slurmInfoObj.schedInterval));
    setParameter(slurmInfoObjStr + ".BackfillInterval", std::to_string(slurmInfoObj.backfillInterval));
  }
}

std::string SetSchedulerInfoRequest::getClusterId() const {
  return clusterId_;
}

void SetSchedulerInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string SetSchedulerInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetSchedulerInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<SetSchedulerInfoRequest::Scheduler> SetSchedulerInfoRequest::getScheduler() const {
  return scheduler_;
}

void SetSchedulerInfoRequest::setScheduler(const std::vector<SetSchedulerInfoRequest::Scheduler> &scheduler) {
  scheduler_ = scheduler;
  for(int dep1 = 0; dep1 != scheduler.size(); dep1++) {
  auto schedulerObj = scheduler.at(dep1);
  std::string schedulerObjStr = std::string("Scheduler") + "." + std::to_string(dep1 + 1);
    setParameter(schedulerObjStr + ".SchedName", schedulerObj.schedName);
  }
}

std::string SetSchedulerInfoRequest::getRegionId() const {
  return regionId_;
}

void SetSchedulerInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<SetSchedulerInfoRequest::PbsInfo> SetSchedulerInfoRequest::getPbsInfo() const {
  return pbsInfo_;
}

void SetSchedulerInfoRequest::setPbsInfo(const std::vector<SetSchedulerInfoRequest::PbsInfo> &pbsInfo) {
  pbsInfo_ = pbsInfo;
  for(int dep1 = 0; dep1 != pbsInfo.size(); dep1++) {
  auto pbsInfoObj = pbsInfo.at(dep1);
  std::string pbsInfoObjStr = std::string("PbsInfo") + "." + std::to_string(dep1 + 1);
    setParameter(pbsInfoObjStr + ".SchedInterval", std::to_string(pbsInfoObj.schedInterval));
    setParameter(pbsInfoObjStr + ".SchedMaxJobs", std::to_string(pbsInfoObj.schedMaxJobs));
    for(int dep2 = 0; dep2 != pbsInfoObj.aclLimit.size(); dep2++) {
    auto aclLimitObj = pbsInfoObj.aclLimit.at(dep2);
    std::string aclLimitObjStr = pbsInfoObjStr + ".AclLimit" + "." + std::to_string(dep2 + 1);
      setParameter(aclLimitObjStr + ".AclUsers", aclLimitObj.aclUsers);
      setParameter(aclLimitObjStr + ".Queue", aclLimitObj.queue);
    }
    for(int dep2 = 0; dep2 != pbsInfoObj.resourceLimit.size(); dep2++) {
    auto resourceLimitObj = pbsInfoObj.resourceLimit.at(dep2);
    std::string resourceLimitObjStr = pbsInfoObjStr + ".ResourceLimit" + "." + std::to_string(dep2 + 1);
      setParameter(resourceLimitObjStr + ".MaxJobs", std::to_string(resourceLimitObj.maxJobs));
      setParameter(resourceLimitObjStr + ".Nodes", std::to_string(resourceLimitObj.nodes));
      setParameter(resourceLimitObjStr + ".Mem", resourceLimitObj.mem);
      setParameter(resourceLimitObjStr + ".Cpus", std::to_string(resourceLimitObj.cpus));
      setParameter(resourceLimitObjStr + ".User", resourceLimitObj.user);
      setParameter(resourceLimitObjStr + ".Queue", resourceLimitObj.queue);
    }
    setParameter(pbsInfoObjStr + ".SchedMaxQueuedJobs", std::to_string(pbsInfoObj.schedMaxQueuedJobs));
    setParameter(pbsInfoObjStr + ".JobHistoryDuration", std::to_string(pbsInfoObj.jobHistoryDuration));
  }
}

