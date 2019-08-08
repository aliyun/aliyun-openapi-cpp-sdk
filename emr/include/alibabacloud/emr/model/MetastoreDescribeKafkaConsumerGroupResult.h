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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEKAFKACONSUMERGROUPRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEKAFKACONSUMERGROUPRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreDescribeKafkaConsumerGroupResult
    : public ServiceResult {
public:
  struct Partition {
    long gmtCreate;
    std::string consumerGroupId;
    long consumerOffset;
    long lag;
    std::string consumerInstanceOwner;
    long gmtModified;
    long logEndOffset;
    int partitionId;
    std::string dataSourceId;
  };

  MetastoreDescribeKafkaConsumerGroupResult();
  explicit MetastoreDescribeKafkaConsumerGroupResult(
      const std::string &payload);
  ~MetastoreDescribeKafkaConsumerGroupResult();
  long getGmtCreate() const;
  long getGmtModified() const;
  std::string getId() const;
  std::vector<Partition> getPartitionList() const;
  std::string getConsumerType() const;
  std::string getPartitionProportion() const;
  std::string getDataSourceId() const;
  std::string getConsumerGroup() const;
  long getTotalLag() const;

protected:
  void parse(const std::string &payload);

private:
  long gmtCreate_;
  long gmtModified_;
  std::string id_;
  std::vector<Partition> partitionList_;
  std::string consumerType_;
  std::string partitionProportion_;
  std::string dataSourceId_;
  std::string consumerGroup_;
  long totalLag_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEKAFKACONSUMERGROUPRESULT_H_