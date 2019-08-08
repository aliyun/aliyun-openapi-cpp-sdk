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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORELISTTASKRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORELISTTASKRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreListTaskResult : public ServiceResult {
public:
  struct Task {
    std::string triggerUser;
    std::string triggerType;
    long gmtCreate;
    long endTime;
    int taskProcess;
    long executeTime;
    std::string taskType;
    long startTime;
    long gmtModified;
    std::string taskObject;
    std::string taskStatus;
    std::string bizId;
  };

  MetastoreListTaskResult();
  explicit MetastoreListTaskResult(const std::string &payload);
  ~MetastoreListTaskResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<Task> getTaskList() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<Task> taskList_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORELISTTASKRESULT_H_