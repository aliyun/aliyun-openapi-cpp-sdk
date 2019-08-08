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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTJOBTEMPLATESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTJOBTEMPLATESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListJobTemplatesResult : public ServiceResult {
public:
  struct JobTemplates {
    std::string variables;
    bool reRunable;
    std::string commandLine;
    int priority;
    std::string stderrRedirectPath;
    std::string stdoutRedirectPath;
    std::string id;
    std::string arrayRequest;
    std::string runasUser;
    std::string packagePath;
    std::string name;
  };

  ListJobTemplatesResult();
  explicit ListJobTemplatesResult(const std::string &payload);
  ~ListJobTemplatesResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<JobTemplates> getTemplates() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<JobTemplates> templates_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTJOBTEMPLATESRESULT_H_