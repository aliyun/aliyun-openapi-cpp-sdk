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

#ifndef ALIBABACLOUD_VPC_MODEL_ASSOCIATEEIPADDRESSBATCHREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ASSOCIATEEIPADDRESSBATCHREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT AssociateEipAddressBatchRequest : public RpcServiceRequest {
public:
	AssociateEipAddressBatchRequest();
	~AssociateEipAddressBatchRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBindedInstanceType() const;
	void setBindedInstanceType(const std::string &bindedInstanceType);
	std::string getBindedInstanceId() const;
	void setBindedInstanceId(const std::string &bindedInstanceId);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string bindedInstanceType_;
	std::string bindedInstanceId_;
	std::string mode_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::vector<std::string> instanceIds_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_ASSOCIATEEIPADDRESSBATCHREQUEST_H_
