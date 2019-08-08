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

#ifndef ALIBABACLOUD_CR_MODEL_GETIMAGESCANRESULT_H_
#define ALIBABACLOUD_CR_MODEL_GETIMAGESCANRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cr/CrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cr {
namespace Model {
class ALIBABACLOUD_CR_EXPORT GetImageScanResult : public ServiceResult {
public:
  GetImageScanResult();
  explicit GetImageScanResult(const std::string &payload);
  ~GetImageScanResult();

protected:
  void parse(const std::string &payload);

private:
};
} // namespace Model
} // namespace Cr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CR_MODEL_GETIMAGESCANRESULT_H_