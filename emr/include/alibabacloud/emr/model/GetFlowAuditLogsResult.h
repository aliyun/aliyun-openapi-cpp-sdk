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

#ifndef ALIBABACLOUD_EMR_MODEL_GETFLOWAUDITLOGSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETFLOWAUDITLOGSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT GetFlowAuditLogsResult : public ServiceResult {
public:
  struct Item {
    std::string entityId;
    std::string entityType;
    std::string status;
    std::string userId;
    std::string content;
    std::string operatorId;
    std::string entityGroupId;
    std::string operation;
    long ts;
  };

  GetFlowAuditLogsResult();
  explicit GetFlowAuditLogsResult(const std::string &payload);
  ~GetFlowAuditLogsResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<Item> getItems() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<Item> items_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_GETFLOWAUDITLOGSRESULT_H_