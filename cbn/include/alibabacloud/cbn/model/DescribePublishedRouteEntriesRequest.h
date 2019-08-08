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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBEPUBLISHEDROUTEENTRIESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBEPUBLISHEDROUTEENTRIESREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DescribePublishedRouteEntriesRequest
    : public RpcServiceRequest {

public:
  DescribePublishedRouteEntriesRequest();
  ~DescribePublishedRouteEntriesRequest();

  std::string getChildInstanceId() const;
  void setChildInstanceId(const std::string &childInstanceId);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getCenId() const;
  void setCenId(const std::string &cenId);
  std::string getDestinationCidrBlock() const;
  void setDestinationCidrBlock(const std::string &destinationCidrBlock);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getChildInstanceType() const;
  void setChildInstanceType(const std::string &childInstanceType);
  std::string getChildInstanceRouteTableId() const;
  void
  setChildInstanceRouteTableId(const std::string &childInstanceRouteTableId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getChildInstanceRegionId() const;
  void setChildInstanceRegionId(const std::string &childInstanceRegionId);

private:
  std::string childInstanceId_;
  long resourceOwnerId_;
  std::string resourceOwnerAccount_;
  std::string cenId_;
  std::string destinationCidrBlock_;
  int pageSize_;
  std::string childInstanceType_;
  std::string childInstanceRouteTableId_;
  int pageNumber_;
  std::string childInstanceRegionId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBEPUBLISHEDROUTEENTRIESREQUEST_H_