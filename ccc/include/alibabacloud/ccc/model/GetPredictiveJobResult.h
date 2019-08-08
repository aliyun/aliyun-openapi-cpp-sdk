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

#ifndef ALIBABACLOUD_CCC_MODEL_GETPREDICTIVEJOBRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETPREDICTIVEJOBRESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT GetPredictiveJobResult : public ServiceResult {
public:
  struct Job {
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
    struct Task {
      struct Contact1 {
        std::string role;
        std::string honorific;
        std::string referenceId;
        std::string state;
        std::string phoneNumber;
        std::string contactId;
        std::string contactName;
        std::string jobId;
      };
      std::string status;
      std::string chatbotId;
      long planedTime;
      std::string calledNumber;
      std::string taskId;
      std::string scenarioId;
      long actualTime;
      std::string callId;
      int duration;
      std::string brief;
      std::string callingNumber;
      Contact1 contact1;
      std::string jobId;
    };
    std::string status;
    std::string jobGroupId;
    std::vector<Task> tasks;
    std::string scenarioId;
    std::vector<Contact> contacts;
    std::string referenceId;
    int priority;
    int systemPriority;
    std::string failureReason;
    std::string strategyId;
    std::string jobId;
    std::vector<std::string> callingNumbers;
  };

  GetPredictiveJobResult();
  explicit GetPredictiveJobResult(const std::string &payload);
  ~GetPredictiveJobResult();
  std::string getMessage() const;
  int getHttpStatusCode() const;
  Job getJob() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  int httpStatusCode_;
  Job job_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_GETPREDICTIVEJOBRESULT_H_