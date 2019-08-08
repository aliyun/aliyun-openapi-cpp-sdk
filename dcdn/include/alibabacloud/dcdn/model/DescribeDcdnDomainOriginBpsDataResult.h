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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINORIGINBPSDATARESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINORIGINBPSDATARESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainOriginBpsDataResult
    : public ServiceResult {
public:
  struct DataModule {
    float dynamicHttpOriginBps;
    float staticHttpOriginBps;
    float staticHttpsOriginBps;
    float dynamicHttpsOriginBps;
    std::string timeStamp;
    float originBps;
  };

  DescribeDcdnDomainOriginBpsDataResult();
  explicit DescribeDcdnDomainOriginBpsDataResult(const std::string &payload);
  ~DescribeDcdnDomainOriginBpsDataResult();
  std::string getEndTime() const;
  std::string getDomainName() const;
  std::string getStartTime() const;
  std::string getDataInterval() const;
  std::vector<DataModule> getOriginBpsDataPerInterval() const;

protected:
  void parse(const std::string &payload);

private:
  std::string endTime_;
  std::string domainName_;
  std::string startTime_;
  std::string dataInterval_;
  std::vector<DataModule> originBpsDataPerInterval_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINORIGINBPSDATARESULT_H_