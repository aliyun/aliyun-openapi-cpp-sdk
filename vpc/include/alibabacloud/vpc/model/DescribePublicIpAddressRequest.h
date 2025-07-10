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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEPUBLICIPADDRESSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEPUBLICIPADDRESSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribePublicIpAddressRequest : public RpcServiceRequest {
public:
	DescribePublicIpAddressRequest();
	~DescribePublicIpAddressRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getResourceUid() const;
	void setResourceUid(long resourceUid);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::string getBandwidth() const;
	void setBandwidth(const std::string &bandwidth);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getKbpsBandwidth() const;
	void setKbpsBandwidth(const std::string &kbpsBandwidth);
	std::string getResourceBid() const;
	void setResourceBid(const std::string &resourceBid);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string regionId_;
	long resourceUid_;
	int pageSize_;
	std::string ipVersion_;
	std::string bandwidth_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string kbpsBandwidth_;
	std::string resourceBid_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEPUBLICIPADDRESSREQUEST_H_
