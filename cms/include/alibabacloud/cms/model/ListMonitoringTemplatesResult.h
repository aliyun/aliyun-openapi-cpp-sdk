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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTMONITORINGTEMPLATESRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_LISTMONITORINGTEMPLATESRESULT_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT ListMonitoringTemplatesResult
    : public ServiceResult {
public:
  struct Resource {
    struct ApplyHistory {
      std::string groupName;
      long applyTime;
      long groupId;
    };
    long gmtCreate;
    std::string description;
    std::string alertTemplatesJson;
    long gmtModified;
    std::string _namespace;
    long restVersion;
    long id;
    std::vector<Resource::ApplyHistory> applyHistories;
    std::string eventRuleTemplatesJson;
    std::string name;
  };

  ListMonitoringTemplatesResult();
  explicit ListMonitoringTemplatesResult(const std::string &payload);
  ~ListMonitoringTemplatesResult();
  long getPageSize() const;
  long getPageNumber() const;
  long getTotal() const;
  std::vector<Resource> getResources() const;
  int getErrorCode() const;
  std::string getErrorMessage() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  long pageSize_;
  long pageNumber_;
  long total_;
  std::vector<Resource> resources_;
  int errorCode_;
  std::string errorMessage_;
  bool success_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_LISTMONITORINGTEMPLATESRESULT_H_