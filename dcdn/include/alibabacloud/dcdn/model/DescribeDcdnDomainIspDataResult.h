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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINISPDATARESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINISPDATARESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainIspDataResult
    : public ServiceResult {
public:
  struct IspProportionData {
    std::string avgObjectSize;
    std::string bytesProportion;
    std::string bps;
    std::string proportion;
    std::string qps;
    std::string totalQuery;
    std::string isp;
    std::string totalBytes;
    std::string avgResponseRate;
    std::string ispEname;
    std::string avgResponseTime;
  };

  DescribeDcdnDomainIspDataResult();
  explicit DescribeDcdnDomainIspDataResult(const std::string &payload);
  ~DescribeDcdnDomainIspDataResult();
  std::string getEndTime() const;
  std::string getDomainName() const;
  std::vector<IspProportionData> getValue() const;
  std::string getDataInterval() const;
  std::string getStartTime() const;

protected:
  void parse(const std::string &payload);

private:
  std::string endTime_;
  std::string domainName_;
  std::vector<IspProportionData> value_;
  std::string dataInterval_;
  std::string startTime_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINISPDATARESULT_H_