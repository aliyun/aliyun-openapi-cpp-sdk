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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORELISTKAFKATOPICRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORELISTKAFKATOPICRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreListKafkaTopicResult
    : public ServiceResult {
public:
  struct Topic {
    struct Cluster {
      std::string clusterBizId;
      std::string clusterName;
      std::string clusterStatus;
    };
    struct AdvancedConfig {
      std::string value;
      std::string key;
    };
    long gmtCreate;
    std::vector<Topic::AdvancedConfig> advancedConfigList;
    int replicationFactor;
    int numPartitions;
    long gmtModified;
    Cluster cluster;
    std::string id;
    std::string dataSourceId;
    std::string topicName;
  };

  MetastoreListKafkaTopicResult();
  explicit MetastoreListKafkaTopicResult(const std::string &payload);
  ~MetastoreListKafkaTopicResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<Topic> getTopicList() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<Topic> topicList_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORELISTKAFKATOPICRESULT_H_