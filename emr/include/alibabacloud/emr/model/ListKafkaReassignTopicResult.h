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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTKAFKAREASSIGNTOPICRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTKAFKAREASSIGNTOPICRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListKafkaReassignTopicResult
    : public ServiceResult {
public:
  struct ReassignTopic {
    std::string status;
    int numPartition;
    std::string topicId;
    std::string process;
    int finishedPartition;
    std::string topicName;
  };

  ListKafkaReassignTopicResult();
  explicit ListKafkaReassignTopicResult(const std::string &payload);
  ~ListKafkaReassignTopicResult();
  std::vector<ReassignTopic> getReassignTopicList() const;
  int getPageSize() const;
  int getPageNumber() const;
  int getTotal() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<ReassignTopic> reassignTopicList_;
  int pageSize_;
  int pageNumber_;
  int total_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTKAFKAREASSIGNTOPICRESULT_H_