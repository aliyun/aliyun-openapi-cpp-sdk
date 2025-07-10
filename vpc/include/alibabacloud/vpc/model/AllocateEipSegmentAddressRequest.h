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

#ifndef ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPSEGMENTADDRESSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPSEGMENTADDRESSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT AllocateEipSegmentAddressRequest : public RpcServiceRequest {
public:
	AllocateEipSegmentAddressRequest();
	~AllocateEipSegmentAddressRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getZone() const;
	void setZone(const std::string &zone);
	std::string getNetmode() const;
	void setNetmode(const std::string &netmode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBandwidth() const;
	void setBandwidth(const std::string &bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEipMask() const;
	void setEipMask(const std::string &eipMask);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string isp_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string zone_;
	std::string netmode_;
	std::string resourceOwnerAccount_;
	std::string bandwidth_;
	std::string ownerAccount_;
	std::string eipMask_;
	long ownerId_;
	std::string internetChargeType_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPSEGMENTADDRESSREQUEST_H_
