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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINREGIONDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINREGIONDATARESULT_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT DescribeDomainRegionDataResult
    : public ServiceResult {
public:
  struct RegionProportionData {
    std::string avgObjectSize;
    std::string bytesProportion;
    std::string bps;
    std::string totalQuery;
    std::string avgResponseRate;
    std::string reqErrRate;
    std::string reqHitRate;
    std::string proportion;
    std::string qps;
    std::string byteHitRate;
    std::string totalBytes;
    std::string region;
    std::string regionEname;
    std::string avgResponseTime;
  };

  DescribeDomainRegionDataResult();
  explicit DescribeDomainRegionDataResult(const std::string &payload);
  ~DescribeDomainRegionDataResult();
  std::string getEndTime() const;
  std::string getDomainName() const;
  std::vector<RegionProportionData> getValue() const;
  std::string getDataInterval() const;
  std::string getStartTime() const;

protected:
  void parse(const std::string &payload);

private:
  std::string endTime_;
  std::string domainName_;
  std::vector<RegionProportionData> value_;
  std::string dataInterval_;
  std::string startTime_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINREGIONDATARESULT_H_