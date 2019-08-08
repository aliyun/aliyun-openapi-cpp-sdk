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

#ifndef ALIBABACLOUD_CCC_MODEL_GETTASKLISTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETTASKLISTRESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT GetTaskListResult : public ServiceResult {
public:
  struct Task {
    struct Contact {
      std::string role;
      std::string honorific;
      std::string referenceId;
      std::string state;
      std::string phoneNumber;
      std::string contactId;
      std::string contactName;
      std::string jobId;
    };
    struct ConversationDetail {
      struct SummaryItem {
        std::string category;
        std::string content;
        std::string summaryName;
      };
      std::string script;
      std::vector<ConversationDetail::SummaryItem> summary;
      long timestamp;
      std::string speaker;
    };
    std::string status;
    std::string chatbotId;
    long planedTime;
    std::string calledNumber;
    std::string taskId;
    std::string scenarioId;
    long actualTime;
    std::string callId;
    std::vector<Task::ConversationDetail> conversation;
    int duration;
    std::string brief;
    std::string callingNumber;
    Contact contact;
    std::string jobId;
  };

  GetTaskListResult();
  explicit GetTaskListResult(const std::string &payload);
  ~GetTaskListResult();
  std::vector<Task> getTasks() const;
  std::string getMessage() const;
  int getHttpStatusCode() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Task> tasks_;
  std::string message_;
  int httpStatusCode_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_GETTASKLISTRESULT_H_