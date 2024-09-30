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

#ifndef ALIBABACLOUD_TAG_MODEL_ATTACHPOLICYREQUEST_H_
#define ALIBABACLOUD_TAG_MODEL_ATTACHPOLICYREQUEST_H_

#include <alibabacloud/tag/TagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tag {
namespace Model {
class ALIBABACLOUD_TAG_EXPORT AttachPolicyRequest : public RpcServiceRequest {
public:
	AttachPolicyRequest();
	~AttachPolicyRequest();
	std::string getTargetId() const;
	void setTargetId(const std::string &targetId);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getPolicyId() const;
	void setPolicyId(const std::string &policyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string targetId_;
	std::string targetType_;
	std::string policyId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Tag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TAG_MODEL_ATTACHPOLICYREQUEST_H_
