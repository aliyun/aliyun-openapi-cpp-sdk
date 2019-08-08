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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEECSTYPESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEECSTYPESREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListAvailableEcsTypesRequest
    : public RpcServiceRequest {

public:
  ListAvailableEcsTypesRequest();
  ~ListAvailableEcsTypesRequest();

  std::string getSpotStrategy() const;
  void setSpotStrategy(const std::string &spotStrategy);
  std::string getZoneId() const;
  void setZoneId(const std::string &zoneId);
  bool getShowSoldOut() const;
  void setShowSoldOut(bool showSoldOut);
  std::string getInstanceChargeType() const;
  void setInstanceChargeType(const std::string &instanceChargeType);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string spotStrategy_;
  std::string zoneId_;
  bool showSoldOut_;
  std::string instanceChargeType_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEECSTYPESREQUEST_H_