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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERMIGRATIONRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERMIGRATIONRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterMigrationResult
    : public ServiceResult {
public:
  DescribeDBClusterMigrationResult();
  explicit DescribeDBClusterMigrationResult(const std::string &payload);
  ~DescribeDBClusterMigrationResult();
  std::string getExpiredTime() const;
  std::string getDBClusterId() const;
  std::string getTopologies() const;
  std::string getRdsReadWriteMode() const;
  std::string getSourceRDSDBInstanceId() const;
  int getDelayedSeconds() const;
  std::string getDBClusterReadWriteMode() const;
  std::string getMigrationStatus() const;

protected:
  void parse(const std::string &payload);

private:
  std::string expiredTime_;
  std::string dBClusterId_;
  std::string topologies_;
  std::string rdsReadWriteMode_;
  std::string sourceRDSDBInstanceId_;
  int delayedSeconds_;
  std::string dBClusterReadWriteMode_;
  std::string migrationStatus_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERMIGRATIONRESULT_H_