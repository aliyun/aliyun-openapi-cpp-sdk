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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTPOLICIESREQUEST_H_
#define ALIBABACLOUD_TAG_MODEL_LISTPOLICIESREQUEST_H_

#include <alibabacloud/tag/TagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tag {
namespace Model {
class ALIBABACLOUD_TAG_EXPORT ListPoliciesRequest : public RpcServiceRequest {
public:
	ListPoliciesRequest();
	~ListPoliciesRequest();
	std::vector<std::string> getPolicyNames() const;
	void setPolicyNames(const std::vector<std::string> &policyNames);
	std::vector<std::string> getPolicyIds() const;
	void setPolicyIds(const std::vector<std::string> &policyIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getUserType() const;
	void setUserType(const std::string &userType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMaxResult() const;
	void setMaxResult(int maxResult);

private:
	std::vector<std::string> policyNames_;
	std::vector<std::string> policyIds_;
	std::string regionId_;
	std::string nextToken_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string userType_;
	long ownerId_;
	int maxResult_;
};
} // namespace Model
} // namespace Tag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TAG_MODEL_LISTPOLICIESREQUEST_H_
