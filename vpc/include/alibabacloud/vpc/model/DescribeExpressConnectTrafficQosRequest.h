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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeExpressConnectTrafficQosRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	DescribeExpressConnectTrafficQosRequest();
	~DescribeExpressConnectTrafficQosRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getQosIdList() const;
	void setQosIdList(const std::vector<std::string> &qosIdList);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::vector<std::string> getQosNameList() const;
	void setQosNameList(const std::vector<std::string> &qosNameList);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string clientToken_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> qosIdList_;
	long ownerId_;
	std::vector<Tags> tags_;
	std::vector<std::string> qosNameList_;
	int maxResults_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSREQUEST_H_
