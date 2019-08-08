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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEHOSTPOOLRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEHOSTPOOLRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeHostPoolResult : public ServiceResult {
public:
  DescribeHostPoolResult();
  explicit DescribeHostPoolResult(const std::string &payload);
  ~DescribeHostPoolResult();
  std::string getStatus() const;
  std::string getType() const;
  long getGmtCreate() const;
  std::string getDescription() const;
  int getHostCount() const;
  std::string getBizId() const;
  std::string getName() const;

protected:
  void parse(const std::string &payload);

private:
  std::string status_;
  std::string type_;
  long gmtCreate_;
  std::string description_;
  int hostCount_;
  std::string bizId_;
  std::string name_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEHOSTPOOLRESULT_H_