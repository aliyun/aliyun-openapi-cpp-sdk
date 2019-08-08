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

#ifndef ALIBABACLOUD_CMS_MODEL_TASKCONFIGLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_TASKCONFIGLISTRESULT_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT TaskConfigListResult : public ServiceResult {
public:
  struct NodeTaskConfig {
    std::string groupName;
    std::string alertConfig;
    std::string taskName;
    std::string taskScope;
    std::string taskType;
    long id;
    bool disabled;
    std::vector<std::string> instanceList;
    std::string jsonData;
    long groupId;
  };

  TaskConfigListResult();
  explicit TaskConfigListResult(const std::string &payload);
  ~TaskConfigListResult();
  int getPageSize() const;
  int getPageNumber() const;
  int getPageTotal() const;
  std::vector<NodeTaskConfig> getTaskList() const;
  int getTotal() const;
  int getErrorCode() const;
  std::string getErrorMessage() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  int pageSize_;
  int pageNumber_;
  int pageTotal_;
  std::vector<NodeTaskConfig> taskList_;
  int total_;
  int errorCode_;
  std::string errorMessage_;
  bool success_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_TASKCONFIGLISTRESULT_H_