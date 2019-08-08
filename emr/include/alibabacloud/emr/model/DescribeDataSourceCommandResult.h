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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEDATASOURCECOMMANDRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEDATASOURCECOMMANDRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeDataSourceCommandResult
    : public ServiceResult {
public:
  struct Host {
    long endTime;
    std::string message;
    std::string state;
    long startTime;
    std::string data;
    std::string hostName;
  };

  DescribeDataSourceCommandResult();
  explicit DescribeDataSourceCommandResult(const std::string &payload);
  ~DescribeDataSourceCommandResult();
  long getEndTime() const;
  std::string getMessage() const;
  std::string getState() const;
  long getStartTime() const;
  std::vector<Host> getHostList() const;
  std::string getData() const;
  std::string getCommandId() const;
  std::string getHostName() const;

protected:
  void parse(const std::string &payload);

private:
  long endTime_;
  std::string message_;
  std::string state_;
  long startTime_;
  std::vector<Host> hostList_;
  std::string data_;
  std::string commandId_;
  std::string hostName_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEDATASOURCECOMMANDRESULT_H_