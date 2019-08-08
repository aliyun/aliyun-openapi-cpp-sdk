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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERPARAMETERSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERPARAMETERSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterParametersResult
    : public ServiceResult {
public:
  struct Parameter {
    std::string defaultParameterValue;
    bool isModifiable;
    std::string checkingCode;
    std::string parameterValue;
    std::string parameterStatus;
    bool forceRestart;
    std::string dataType;
    std::string parameterName;
    std::string parameterDescription;
  };

  DescribeDBClusterParametersResult();
  explicit DescribeDBClusterParametersResult(const std::string &payload);
  ~DescribeDBClusterParametersResult();
  std::vector<Parameter> getRunningParameters() const;
  std::string getDBVersion() const;
  std::string getDBType() const;
  std::string getEngine() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Parameter> runningParameters_;
  std::string dBVersion_;
  std::string dBType_;
  std::string engine_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERPARAMETERSRESULT_H_