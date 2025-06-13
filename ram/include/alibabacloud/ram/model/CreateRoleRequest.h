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

#ifndef ALIBABACLOUD_RAM_MODEL_CREATEROLEREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_CREATEROLEREQUEST_H_

#include <alibabacloud/ram/RamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ram {
namespace Model {
class ALIBABACLOUD_RAM_EXPORT CreateRoleRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateRoleRequest();
	~CreateRoleRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAssumeRolePolicyDocument() const;
	void setAssumeRolePolicyDocument(const std::string &assumeRolePolicyDocument);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	long getMaxSessionDuration() const;
	void setMaxSessionDuration(long maxSessionDuration);
	std::string getRoleName() const;
	void setRoleName(const std::string &roleName);

private:
	std::string description_;
	std::string assumeRolePolicyDocument_;
	std::vector<Tag> tag_;
	long maxSessionDuration_;
	std::string roleName_;
};
} // namespace Model
} // namespace Ram
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RAM_MODEL_CREATEROLEREQUEST_H_
