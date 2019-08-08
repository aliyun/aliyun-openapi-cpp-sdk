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

#ifndef ALIBABACLOUD_OPENANALYTICS_MODEL_GETPRODUCTSTATUSRESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_MODEL_GETPRODUCTSTATUSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics/OpenanalyticsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Openanalytics {
namespace Model {
class ALIBABACLOUD_OPENANALYTICS_EXPORT GetProductStatusResult
    : public ServiceResult {
public:
  GetProductStatusResult();
  explicit GetProductStatusResult(const std::string &payload);
  ~GetProductStatusResult();
  std::string getData() const;
  std::string getRegionId() const;

protected:
  void parse(const std::string &payload);

private:
  std::string data_;
  std::string regionId_;
};
} // namespace Model
} // namespace Openanalytics
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OPENANALYTICS_MODEL_GETPRODUCTSTATUSRESULT_H_