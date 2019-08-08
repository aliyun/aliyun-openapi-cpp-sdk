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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINPVDATARESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINPVDATARESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainPvDataResult
    : public ServiceResult {
public:
  struct UsageData {
    std::string value;
    std::string timeStamp;
  };

  DescribeDcdnDomainPvDataResult();
  explicit DescribeDcdnDomainPvDataResult(const std::string &payload);
  ~DescribeDcdnDomainPvDataResult();
  std::string getEndTime() const;
  std::string getDomainName() const;
  std::string getDataInterval() const;
  std::string getStartTime() const;
  std::vector<UsageData> getPvDataInterval() const;

protected:
  void parse(const std::string &payload);

private:
  std::string endTime_;
  std::string domainName_;
  std::string dataInterval_;
  std::string startTime_;
  std::vector<UsageData> pvDataInterval_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINPVDATARESULT_H_