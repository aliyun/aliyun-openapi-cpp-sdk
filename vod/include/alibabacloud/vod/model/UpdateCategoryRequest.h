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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATECATEGORYREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATECATEGORYREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UpdateCategoryRequest : public RpcServiceRequest {

public:
  UpdateCategoryRequest();
  ~UpdateCategoryRequest();

  std::string getResourceOwnerId() const;
  void setResourceOwnerId(const std::string &resourceOwnerId);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  long getCateId() const;
  void setCateId(long cateId);
  std::string getOwnerId() const;
  void setOwnerId(const std::string &ownerId);
  std::string getCateName() const;
  void setCateName(const std::string &cateName);

private:
  std::string resourceOwnerId_;
  std::string resourceOwnerAccount_;
  long cateId_;
  std::string ownerId_;
  std::string cateName_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATECATEGORYREQUEST_H_