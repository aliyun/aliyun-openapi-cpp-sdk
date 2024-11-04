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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTSECURITYPOLICIESREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_LISTSECURITYPOLICIESREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ListSecurityPoliciesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListSecurityPoliciesRequest();
	~ListSecurityPoliciesRequest();
	std::vector<std::string> getSecurityPolicyNames() const;
	void setSecurityPolicyNames(const std::vector<std::string> &securityPolicyNames);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<std::string> getSecurityPolicyIds() const;
	void setSecurityPolicyIds(const std::vector<std::string> &securityPolicyIds);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::vector<std::string> securityPolicyNames_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::vector<Tag> tag_;
	std::vector<std::string> securityPolicyIds_;
	int maxResults_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_LISTSECURITYPOLICIESREQUEST_H_
