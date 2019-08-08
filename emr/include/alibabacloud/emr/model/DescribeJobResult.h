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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEJOBRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEJOBRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeJobResult : public ServiceResult {
public:
  DescribeJobResult();
  explicit DescribeJobResult(const std::string &payload);
  ~DescribeJobResult();
  std::string getFailAct() const;
  std::string getType() const;
  std::string getRunParameter() const;
  std::string getId() const;
  int getMaxRetry() const;
  int getRetryInterval() const;
  std::string getName() const;

protected:
  void parse(const std::string &payload);

private:
  std::string failAct_;
  std::string type_;
  std::string runParameter_;
  std::string id_;
  int maxRetry_;
  int retryInterval_;
  std::string name_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEJOBRESULT_H_