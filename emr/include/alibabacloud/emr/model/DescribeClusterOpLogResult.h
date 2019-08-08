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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTEROPLOGRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTEROPLOGRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeClusterOpLogResult
    : public ServiceResult {
public:
  struct ChangeLog {
    std::string status;
    std::string gmtCreate;
    std::string message;
    std::string changeType;
    std::string gmtModified;
    std::string targetType;
    long id;
    std::string targetKey;
  };

  DescribeClusterOpLogResult();
  explicit DescribeClusterOpLogResult(const std::string &payload);
  ~DescribeClusterOpLogResult();
  std::string getPageSize() const;
  std::string getPageNumber() const;
  std::string getTotal() const;
  std::vector<ChangeLog> getChangeLogList() const;

protected:
  void parse(const std::string &payload);

private:
  std::string pageSize_;
  std::string pageNumber_;
  std::string total_;
  std::vector<ChangeLog> changeLogList_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTEROPLOGRESULT_H_