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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeExpressConnectTrafficQosQueueRequest : public RpcServiceRequest {
public:
	DescribeExpressConnectTrafficQosQueueRequest();
	~DescribeExpressConnectTrafficQosQueueRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getQosId() const;
	void setQosId(const std::string &qosId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getQueueIdList() const;
	void setQueueIdList(const std::vector<std::string> &queueIdList);
	std::vector<std::string> getQueueNameList() const;
	void setQueueNameList(const std::vector<std::string> &queueNameList);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string clientToken_;
	std::string regionId_;
	std::string qosId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> queueIdList_;
	std::vector<std::string> queueNameList_;
	long ownerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSQUEUEREQUEST_H_
