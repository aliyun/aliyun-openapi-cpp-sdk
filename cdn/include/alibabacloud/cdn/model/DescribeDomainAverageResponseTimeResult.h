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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINAVERAGERESPONSETIMERESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINAVERAGERESPONSETIMERESULT_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT DescribeDomainAverageResponseTimeResult
    : public ServiceResult {
public:
  struct DataModule {
    std::string value;
    std::string timeStamp;
  };

  DescribeDomainAverageResponseTimeResult();
  explicit DescribeDomainAverageResponseTimeResult(const std::string &payload);
  ~DescribeDomainAverageResponseTimeResult();
  std::vector<DataModule> getAvgRTPerInterval() const;
  std::string getIspNameEn() const;
  std::string getIspName() const;
  std::string getEndTime() const;
  std::string getDomainName() const;
  std::string getLocationNameEn() const;
  std::string getStartTime() const;
  std::string getDataInterval() const;
  std::string getLocationName() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<DataModule> avgRTPerInterval_;
  std::string ispNameEn_;
  std::string ispName_;
  std::string endTime_;
  std::string domainName_;
  std::string locationNameEn_;
  std::string startTime_;
  std::string dataInterval_;
  std::string locationName_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINAVERAGERESPONSETIMERESULT_H_