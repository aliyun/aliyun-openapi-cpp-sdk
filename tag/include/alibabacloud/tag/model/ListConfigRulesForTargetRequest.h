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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTCONFIGRULESFORTARGETREQUEST_H_
#define ALIBABACLOUD_TAG_MODEL_LISTCONFIGRULESFORTARGETREQUEST_H_

#include <alibabacloud/tag/TagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tag {
namespace Model {
class ALIBABACLOUD_TAG_EXPORT ListConfigRulesForTargetRequest : public RpcServiceRequest {
public:
	ListConfigRulesForTargetRequest();
	~ListConfigRulesForTargetRequest();
	std::string getTargetId() const;
	void setTargetId(const std::string &targetId);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPolicyType() const;
	void setPolicyType(const std::string &policyType);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getUserType() const;
	void setUserType(const std::string &userType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMaxResult() const;
	void setMaxResult(int maxResult);
	std::string getTagKey() const;
	void setTagKey(const std::string &tagKey);

private:
	std::string targetId_;
	std::string targetType_;
	std::string regionId_;
	std::string nextToken_;
	std::string resourceOwnerAccount_;
	std::string policyType_;
	std::string ownerAccount_;
	std::string userType_;
	long ownerId_;
	int maxResult_;
	std::string tagKey_;
};
} // namespace Model
} // namespace Tag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TAG_MODEL_LISTCONFIGRULESFORTARGETREQUEST_H_
