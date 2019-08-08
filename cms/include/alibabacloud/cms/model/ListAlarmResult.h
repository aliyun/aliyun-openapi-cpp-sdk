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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTALARMRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_LISTALARMRESULT_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT ListAlarmResult : public ServiceResult {
public:
  struct Alarm {
    int silenceTime;
    int notifyType;
    std::string contactGroups;
    std::string comparisonOperator;
    int endTime;
    int startTime;
    std::string dimensions;
    int period;
    int evaluationCount;
    std::string _namespace;
    std::string statistics;
    std::string name;
    std::string metricName;
    std::string state;
    bool enable;
    std::string webhook;
    std::string id;
    std::string threshold;
  };

  ListAlarmResult();
  explicit ListAlarmResult(const std::string &payload);
  ~ListAlarmResult();
  std::string getMessage() const;
  int getNextToken() const;
  std::vector<Alarm> getAlarmList() const;
  int getTotal() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  int nextToken_;
  std::vector<Alarm> alarmList_;
  int total_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_LISTALARMRESULT_H_