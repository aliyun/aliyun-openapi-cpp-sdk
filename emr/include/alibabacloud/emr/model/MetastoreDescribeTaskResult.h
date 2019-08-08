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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBETASKRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBETASKRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreDescribeTaskResult
    : public ServiceResult {
public:
  struct Task {
    std::string triggerType;
    long endTime;
    long executeTime;
    long startTime;
    long gmtModified;
    std::string taskObject;
    std::string taskStatus;
    std::string taskDetail;
    std::string triggerUser;
    long gmtCreate;
    int taskProcess;
    std::string taskType;
    std::string bizId;
    std::string dataSourceId;
    std::string taskResultDetail;
  };

  MetastoreDescribeTaskResult();
  explicit MetastoreDescribeTaskResult(const std::string &payload);
  ~MetastoreDescribeTaskResult();
  Task getTask() const;

protected:
  void parse(const std::string &payload);

private:
  Task task_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBETASKRESULT_H_