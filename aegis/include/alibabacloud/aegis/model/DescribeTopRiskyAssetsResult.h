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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOPRISKYASSETSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOPRISKYASSETSRESULT_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeTopRiskyAssetsResult
    : public ServiceResult {
public:
  struct TopRiskyAsset {
    struct AssetInfo {
      std::string instanceName;
      std::string uuid;
      std::string ip;
      std::string count;
    };
    std::string type;
    std::vector<TopRiskyAsset::AssetInfo> assetInfos;
  };

  DescribeTopRiskyAssetsResult();
  explicit DescribeTopRiskyAssetsResult(const std::string &payload);
  ~DescribeTopRiskyAssetsResult();
  int getTotalCount() const;
  std::vector<TopRiskyAsset> getTopRiskyAssets() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  std::vector<TopRiskyAsset> topRiskyAssets_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBETOPRISKYASSETSRESULT_H_