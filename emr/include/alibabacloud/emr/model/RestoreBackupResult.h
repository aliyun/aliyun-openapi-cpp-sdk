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

#ifndef ALIBABACLOUD_EMR_MODEL_RESTOREBACKUPRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_RESTOREBACKUPRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT RestoreBackupResult : public ServiceResult {
public:
  RestoreBackupResult();
  explicit RestoreBackupResult(const std::string &payload);
  ~RestoreBackupResult();
  std::string getTriggerType() const;
  long getEndTime() const;
  long getStartTime() const;
  long getGmtModified() const;
  std::string getTaskStatus() const;
  std::string getTaskDetail() const;
  std::string getTriggerUser() const;
  long getGmtCreate() const;
  int getTaskProcess() const;
  std::string getClusterBizId() const;
  std::string getTaskType() const;
  std::string getBizId() const;
  long getDataSourceId() const;
  std::string getHostName() const;
  long getEcmTaskId() const;
  std::string getTaskResultDetail() const;

protected:
  void parse(const std::string &payload);

private:
  std::string triggerType_;
  long endTime_;
  long startTime_;
  long gmtModified_;
  std::string taskStatus_;
  std::string taskDetail_;
  std::string triggerUser_;
  long gmtCreate_;
  int taskProcess_;
  std::string clusterBizId_;
  std::string taskType_;
  std::string bizId_;
  long dataSourceId_;
  std::string hostName_;
  long ecmTaskId_;
  std::string taskResultDetail_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_RESTOREBACKUPRESULT_H_