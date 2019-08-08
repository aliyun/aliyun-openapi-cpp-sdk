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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMHISTORYRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMHISTORYRESULT_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeAlarmHistoryResult
    : public ServiceResult {
public:
  struct AlarmHistory {
    int status;
    std::vector<std::string> contactGroups;
    std::string alertName;
    std::string dimensions;
    int evaluationCount;
    std::string _namespace;
    std::vector<std::string> contactMails;
    std::vector<std::string> contactSmses;
    long alertTime;
    std::string groupId;
    std::string instanceName;
    std::string metricName;
    std::vector<std::string> contacts;
    std::string expression;
    std::string state;
    std::string userId;
    std::string value;
    std::string webhooks;
    std::string level;
    std::string id;
    std::string preLevel;
    long lastTime;
    std::string ruleName;
    std::vector<std::string> contactALIIMs;
  };

  DescribeAlarmHistoryResult();
  explicit DescribeAlarmHistoryResult(const std::string &payload);
  ~DescribeAlarmHistoryResult();
  std::vector<AlarmHistory> getAlarmHistoryList() const;
  std::string getMessage() const;
  std::string getTotal() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<AlarmHistory> alarmHistoryList_;
  std::string message_;
  std::string total_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMHISTORYRESULT_H_