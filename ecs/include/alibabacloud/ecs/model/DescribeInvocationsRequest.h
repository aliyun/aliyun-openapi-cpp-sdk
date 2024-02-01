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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeInvocationsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	DescribeInvocationsRequest();
	~DescribeInvocationsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getInvokeStatus() const;
	void setInvokeStatus(const std::string &invokeStatus);
	bool getIncludeOutput() const;
	void setIncludeOutput(bool includeOutput);
	std::string getCommandId() const;
	void setCommandId(const std::string &commandId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getContentEncoding() const;
	void setContentEncoding(const std::string &contentEncoding);
	std::string getRepeatMode() const;
	void setRepeatMode(const std::string &repeatMode);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getInvokeId() const;
	void setInvokeId(const std::string &invokeId);
	bool getTimed() const;
	void setTimed(bool timed);
	std::string getCommandName() const;
	void setCommandName(const std::string &commandName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCommandType() const;
	void setCommandType(const std::string &commandType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long resourceOwnerId_;
	std::string invokeStatus_;
	bool includeOutput_;
	std::string commandId_;
	long pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string nextToken_;
	std::string contentEncoding_;
	std::string repeatMode_;
	long pageSize_;
	std::vector<Tag> tag_;
	std::string invokeId_;
	bool timed_;
	std::string commandName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string commandType_;
	std::string instanceId_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONSREQUEST_H_
