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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPPEERSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPPEERSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeBgpPeersRequest : public RpcServiceRequest {
public:
	DescribeBgpPeersRequest();
	~DescribeBgpPeersRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getBgpGroupId() const;
	void setBgpGroupId(const std::string &bgpGroupId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getIsDefault() const;
	void setIsDefault(bool isDefault);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getBgpPeerId() const;
	void setBgpPeerId(const std::string &bgpPeerId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRouterId() const;
	void setRouterId(const std::string &routerId);

private:
	long resourceOwnerId_;
	std::string bgpGroupId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	bool isDefault_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string bgpPeerId_;
	long ownerId_;
	std::string routerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPPEERSREQUEST_H_
