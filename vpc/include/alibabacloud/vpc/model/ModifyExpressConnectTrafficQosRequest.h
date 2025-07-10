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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyExpressConnectTrafficQosRequest : public RpcServiceRequest {
public:
	struct RemoveInstanceList {
		std::string instanceId;
		std::string instanceType;
	};
	struct AddInstanceList {
		std::string instanceId;
		std::string instanceType;
	};
	ModifyExpressConnectTrafficQosRequest();
	~ModifyExpressConnectTrafficQosRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<RemoveInstanceList> getRemoveInstanceList() const;
	void setRemoveInstanceList(const std::vector<RemoveInstanceList> &removeInstanceList);
	std::vector<AddInstanceList> getAddInstanceList() const;
	void setAddInstanceList(const std::vector<AddInstanceList> &addInstanceList);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getQosId() const;
	void setQosId(const std::string &qosId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getQosName() const;
	void setQosName(const std::string &qosName);
	std::string getQosDescription() const;
	void setQosDescription(const std::string &qosDescription);

private:
	std::string clientToken_;
	std::vector<RemoveInstanceList> removeInstanceList_;
	std::vector<AddInstanceList> addInstanceList_;
	std::string regionId_;
	std::string qosId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string qosName_;
	std::string qosDescription_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_H_
