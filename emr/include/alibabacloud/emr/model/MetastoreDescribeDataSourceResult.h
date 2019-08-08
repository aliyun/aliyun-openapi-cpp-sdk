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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEDATASOURCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEDATASOURCERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreDescribeDataSourceResult
    : public ServiceResult {
public:
  struct DataSource {
    struct Config {
      std::string configName;
      std::string value;
    };
    std::string description;
    std::string sourceType;
    long gmtModified;
    long usedSize;
    std::string name;
    long gmtCreate;
    long capacity;
    std::string clusterBizId;
    std::string userId;
    std::string clusterName;
    std::string id;
    std::string connectionInfo;
    std::vector<Config> configList;
  };

  MetastoreDescribeDataSourceResult();
  explicit MetastoreDescribeDataSourceResult(const std::string &payload);
  ~MetastoreDescribeDataSourceResult();
  DataSource getDataSource() const;

protected:
  void parse(const std::string &payload);

private:
  DataSource dataSource_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEDATASOURCERESULT_H_