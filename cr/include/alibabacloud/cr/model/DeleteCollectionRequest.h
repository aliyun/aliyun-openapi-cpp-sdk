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

#ifndef ALIBABACLOUD_CR_MODEL_DELETECOLLECTIONREQUEST_H_
#define ALIBABACLOUD_CR_MODEL_DELETECOLLECTIONREQUEST_H_

#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cr/CrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cr {
namespace Model {
class ALIBABACLOUD_CR_EXPORT DeleteCollectionRequest
    : public RoaServiceRequest {

public:
  DeleteCollectionRequest();
  ~DeleteCollectionRequest();

  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  long getCollectionId() const;
  void setCollectionId(long collectionId);

private:
  std::string regionId_;
  long collectionId_;
};
} // namespace Model
} // namespace Cr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CR_MODEL_DELETECOLLECTIONREQUEST_H_