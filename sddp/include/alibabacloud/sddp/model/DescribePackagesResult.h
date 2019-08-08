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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEPACKAGESRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEPACKAGESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribePackagesResult : public ServiceResult {
public:
  struct Package {
    std::string owner;
    int totalCount;
    long instanceId;
    long creationTime;
    bool sensitive;
    std::string riskLevelName;
    long id;
    int sensitiveCount;
    long riskLevelId;
    std::string departName;
    std::string name;
  };

  DescribePackagesResult();
  explicit DescribePackagesResult(const std::string &payload);
  ~DescribePackagesResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getCurrentPage() const;
  std::vector<Package> getItems() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int currentPage_;
  std::vector<Package> items_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEPACKAGESRESULT_H_