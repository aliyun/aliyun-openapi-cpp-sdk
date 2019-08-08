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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERSTATISTICSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERSTATISTICSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeUserStatisticsResult
    : public ServiceResult {
public:
  DescribeUserStatisticsResult();
  explicit DescribeUserStatisticsResult(const std::string &payload);
  ~DescribeUserStatisticsResult();
  int getJobMigratedNum() const;
  int getExecutePlanMigratedNum() const;
  int getExecutePlanNum() const;
  std::string getUserId() const;
  int getInteractionJobNum() const;
  int getJobNum() const;
  long getId() const;
  int getInteractionJobMigratedNum() const;

protected:
  void parse(const std::string &payload);

private:
  int jobMigratedNum_;
  int executePlanMigratedNum_;
  int executePlanNum_;
  std::string userId_;
  int interactionJobNum_;
  int jobNum_;
  long id_;
  int interactionJobMigratedNum_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERSTATISTICSRESULT_H_