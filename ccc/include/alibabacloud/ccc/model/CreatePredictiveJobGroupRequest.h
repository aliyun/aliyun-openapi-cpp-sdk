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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEPREDICTIVEJOBGROUPREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEPREDICTIVEJOBGROUPREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CreatePredictiveJobGroupRequest
    : public RpcServiceRequest {

public:
  CreatePredictiveJobGroupRequest();
  ~CreatePredictiveJobGroupRequest();

  std::string getInstanceId() const;
  void setInstanceId(const std::string &instanceId);
  bool getIsDraft() const;
  void setIsDraft(bool isDraft);
  std::string getSkillGroupId() const;
  void setSkillGroupId(const std::string &skillGroupId);
  std::string getStrategyJson() const;
  void setStrategyJson(const std::string &strategyJson);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  bool getTimingSchedule() const;
  void setTimingSchedule(bool timingSchedule);
  std::vector<std::string> getJobsJson() const;
  void setJobsJson(const std::vector<std::string> &jobsJson);
  std::string getJobFilePath() const;
  void setJobFilePath(const std::string &jobFilePath);

private:
  std::string instanceId_;
  bool isDraft_;
  std::string skillGroupId_;
  std::string strategyJson_;
  std::string name_;
  std::string description_;
  bool timingSchedule_;
  std::vector<std::string> jobsJson_;
  std::string jobFilePath_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEPREDICTIVEJOBGROUPREQUEST_H_