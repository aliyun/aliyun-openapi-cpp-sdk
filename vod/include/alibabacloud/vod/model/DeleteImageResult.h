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

#ifndef ALIBABACLOUD_VOD_MODEL_DELETEIMAGERESULT_H_
#define ALIBABACLOUD_VOD_MODEL_DELETEIMAGERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DeleteImageResult : public ServiceResult {
public:
  DeleteImageResult();
  explicit DeleteImageResult(const std::string &payload);
  ~DeleteImageResult();

protected:
  void parse(const std::string &payload);

private:
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DELETEIMAGERESULT_H_