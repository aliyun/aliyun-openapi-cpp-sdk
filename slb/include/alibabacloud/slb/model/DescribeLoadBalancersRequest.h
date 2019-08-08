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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/slb/SlbExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancersRequest
    : public RpcServiceRequest {
  struct Tag {
    std::string value;
    std::string key;
  };

public:
  DescribeLoadBalancersRequest();
  ~DescribeLoadBalancersRequest();

  std::string getAccess_key_id() const;
  void setAccess_key_id(const std::string &access_key_id);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getNetworkType() const;
  void setNetworkType(const std::string &networkType);
  std::string getAddressIPVersion() const;
  void setAddressIPVersion(const std::string &addressIPVersion);
  std::string getMasterZoneId() const;
  void setMasterZoneId(const std::string &masterZoneId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getResourceGroupId() const;
  void setResourceGroupId(const std::string &resourceGroupId);
  std::string getLoadBalancerName() const;
  void setLoadBalancerName(const std::string &loadBalancerName);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getAddressType() const;
  void setAddressType(const std::string &addressType);
  std::string getSlaveZoneId() const;
  void setSlaveZoneId(const std::string &slaveZoneId);
  std::vector<Tag> getTag() const;
  void setTag(const std::vector<Tag> &tag);
  std::string getFuzzy() const;
  void setFuzzy(const std::string &fuzzy);
  std::string getAddress() const;
  void setAddress(const std::string &address);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  std::string getServerId() const;
  void setServerId(const std::string &serverId);
  std::string getLoadBalancerStatus() const;
  void setLoadBalancerStatus(const std::string &loadBalancerStatus);
  std::string getTags() const;
  void setTags(const std::string &tags);
  std::string getServerIntranetAddress() const;
  void setServerIntranetAddress(const std::string &serverIntranetAddress);
  std::string getVSwitchId() const;
  void setVSwitchId(const std::string &vSwitchId);
  std::string getLoadBalancerId() const;
  void setLoadBalancerId(const std::string &loadBalancerId);
  std::string getInternetChargeType() const;
  void setInternetChargeType(const std::string &internetChargeType);
  std::string getVpcId() const;
  void setVpcId(const std::string &vpcId);
  std::string getPayType() const;
  void setPayType(const std::string &payType);

private:
  std::string access_key_id_;
  long resourceOwnerId_;
  std::string networkType_;
  std::string addressIPVersion_;
  std::string masterZoneId_;
  int pageNumber_;
  std::string resourceGroupId_;
  std::string loadBalancerName_;
  std::string regionId_;
  int pageSize_;
  std::string addressType_;
  std::string slaveZoneId_;
  std::vector<Tag> tag_;
  std::string fuzzy_;
  std::string address_;
  std::string resourceOwnerAccount_;
  std::string ownerAccount_;
  long ownerId_;
  std::string serverId_;
  std::string loadBalancerStatus_;
  std::string tags_;
  std::string serverIntranetAddress_;
  std::string vSwitchId_;
  std::string loadBalancerId_;
  std::string internetChargeType_;
  std::string vpcId_;
  std::string payType_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSREQUEST_H_