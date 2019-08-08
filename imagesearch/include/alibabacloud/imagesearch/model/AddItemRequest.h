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

#ifndef ALIBABACLOUD_IMAGESEARCH_MODEL_ADDITEMREQUEST_H_
#define ALIBABACLOUD_IMAGESEARCH_MODEL_ADDITEMREQUEST_H_

#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/imagesearch/ImageSearchExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace ImageSearch {
namespace Model {
class ALIBABACLOUD_IMAGESEARCH_EXPORT AddItemRequest
    : public RoaServiceRequest {

public:
  AddItemRequest();
  ~AddItemRequest();

  std::string getInstanceName() const;
  void setInstanceName(const std::string &instanceName);

private:
  std::string instanceName_;
};
} // namespace Model
} // namespace ImageSearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGESEARCH_MODEL_ADDITEMREQUEST_H_