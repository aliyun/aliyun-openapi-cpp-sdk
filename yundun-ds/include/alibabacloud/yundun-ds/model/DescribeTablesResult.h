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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBETABLESRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBETABLESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Yundun_ds {
namespace Model {
class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeTablesResult
    : public ServiceResult {
public:
  struct Table {
    std::string owner;
    std::string productCode;
    long instanceId;
    std::string sensitiveRatio;
    std::string productId;
    long riskLevelId;
    std::string departName;
    std::string name;
    int totalCount;
    long creationTime;
    bool sensitive;
    std::string riskLevelName;
    long id;
    int sensitiveCount;
  };

  DescribeTablesResult();
  explicit DescribeTablesResult(const std::string &payload);
  ~DescribeTablesResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getCurrentPage() const;
  std::vector<Table> getItems() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int currentPage_;
  std::vector<Table> items_;
};
} // namespace Model
} // namespace Yundun_ds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBETABLESRESULT_H_