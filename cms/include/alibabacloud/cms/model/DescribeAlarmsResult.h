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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSRESULT_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeAlarmsResult : public ServiceResult {
public:
  struct Alarm {
    struct Escalations {
      struct Info {
        std::string comparisonOperator;
        std::string times;
        std::string statistics;
        std::string threshold;
      };
      struct Warn {
        std::string comparisonOperator;
        std::string times;
        std::string statistics;
        std::string threshold;
      };
      struct Critical {
        std::string comparisonOperator;
        std::string times;
        std::string statistics;
        std::string threshold;
      };
      Critical critical;
      Info info;
      Warn warn;
    };
    std::string groupName;
    std::string noEffectiveInterval;
    std::string comparisonOperator;
    std::string evaluationCount;
    std::string name;
    std::string metricName;
    std::string displayName;
    bool enable;
    std::string ruleName;
    std::string threshold;
    std::string silenceTime;
    std::string contactGroups;
    std::string period;
    std::string dimensions;
    std::string _namespace;
    std::string effectiveInterval;
    std::string statistics;
    std::string subject;
    std::string groupId;
    std::string uuid;
    std::string state;
    Escalations escalations;
    std::string webhook;
    std::string level;
    std::string resources;
  };

  DescribeAlarmsResult();
  explicit DescribeAlarmsResult(const std::string &payload);
  ~DescribeAlarmsResult();
  std::string getMessage() const;
  std::string getTotal() const;
  std::string getTraceId() const;
  std::vector<Alarm> getDatapoints() const;
  int getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  std::string total_;
  std::string traceId_;
  std::vector<Alarm> datapoints_;
  int code_;
  bool success_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSRESULT_H_