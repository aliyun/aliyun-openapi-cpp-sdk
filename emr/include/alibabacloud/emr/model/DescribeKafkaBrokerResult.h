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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEKAFKABROKERRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEKAFKABROKERRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeKafkaBrokerResult : public ServiceResult {
public:
  struct Topic {
    int leaderCount;
    int replicationFactor;
    int numPartitions;
    int brokerNumPartitions;
    std::string topicId;
    std::vector<std::string> partitionList;
    std::string topicName;
  };

  DescribeKafkaBrokerResult();
  explicit DescribeKafkaBrokerResult(const std::string &payload);
  ~DescribeKafkaBrokerResult();
  std::string getHostIp() const;
  std::string getStatus() const;
  int getLeaderCount() const;
  int getBrokerId() const;
  std::string getDiskUsageMean() const;
  std::string getDiskUsageMax() const;
  std::string getTraffic() const;
  int getTopicCount() const;
  std::string getHostId() const;
  int getDiskCapacity() const;
  std::string getDiskUnbalanceRate() const;
  std::vector<Topic> getTopicList() const;
  std::string getHostName() const;
  int getPartitionCount() const;

protected:
  void parse(const std::string &payload);

private:
  std::string hostIp_;
  std::string status_;
  int leaderCount_;
  int brokerId_;
  std::string diskUsageMean_;
  std::string diskUsageMax_;
  std::string traffic_;
  int topicCount_;
  std::string hostId_;
  int diskCapacity_;
  std::string diskUnbalanceRate_;
  std::vector<Topic> topicList_;
  std::string hostName_;
  int partitionCount_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEKAFKABROKERRESULT_H_