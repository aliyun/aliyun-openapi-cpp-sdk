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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListVirtualPhysicalConnectionsRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	ListVirtualPhysicalConnectionsRequest();
	~ListVirtualPhysicalConnectionsRequest();
	std::vector<std::string> getVlanIds() const;
	void setVlanIds(const std::vector<std::string> &vlanIds);
	std::string getVirtualPhysicalConnectionBusinessStatus() const;
	void setVirtualPhysicalConnectionBusinessStatus(const std::string &virtualPhysicalConnectionBusinessStatus);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<std::string> getVirtualPhysicalConnectionAliUids() const;
	void setVirtualPhysicalConnectionAliUids(const std::vector<std::string> &virtualPhysicalConnectionAliUids);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getVirtualPhysicalConnectionIds() const;
	void setVirtualPhysicalConnectionIds(const std::vector<std::string> &virtualPhysicalConnectionIds);
	bool getIsConfirmed() const;
	void setIsConfirmed(bool isConfirmed);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::vector<std::string> getVirtualPhysicalConnectionStatuses() const;
	void setVirtualPhysicalConnectionStatuses(const std::vector<std::string> &virtualPhysicalConnectionStatuses);
	std::string getPhysicalConnectionId() const;
	void setPhysicalConnectionId(const std::string &physicalConnectionId);
	std::string getName() const;
	void setName(const std::string &name);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::vector<std::string> vlanIds_;
	std::string virtualPhysicalConnectionBusinessStatus_;
	std::string resourceGroupId_;
	std::vector<std::string> virtualPhysicalConnectionAliUids_;
	std::string nextToken_;
	std::string regionId_;
	std::vector<std::string> virtualPhysicalConnectionIds_;
	bool isConfirmed_;
	std::vector<Tags> tags_;
	std::vector<std::string> virtualPhysicalConnectionStatuses_;
	std::string physicalConnectionId_;
	std::string name_;
	int maxResults_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_H_
