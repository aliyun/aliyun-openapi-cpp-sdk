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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEXECUTEPLANMIGRATEINFORESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEXECUTEPLANMIGRATEINFORESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListExecutePlanMigrateInfoResult
    : public ServiceResult {
public:
  struct ExecutePlanMigrateInfo {
    struct JobInfo {
      long status;
      std::string description;
      std::string clusterId;
      std::string jobId;
      long indexNO;
    };
    long status;
    long isCycle;
    std::string buildClusterCondition;
    std::string startScheduleTime;
    std::string createTime;
    std::vector<ExecutePlanMigrateInfo::JobInfo> jobList;
    long id;
    std::string bizId;
    std::string cronExpr;
    std::string name;
  };

  ListExecutePlanMigrateInfoResult();
  explicit ListExecutePlanMigrateInfoResult(const std::string &payload);
  ~ListExecutePlanMigrateInfoResult();
  std::vector<ExecutePlanMigrateInfo> getExecutePlanMigrateInfoList() const;
  long getTotal() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<ExecutePlanMigrateInfo> executePlanMigrateInfoList_;
  long total_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEXECUTEPLANMIGRATEINFORESULT_H_