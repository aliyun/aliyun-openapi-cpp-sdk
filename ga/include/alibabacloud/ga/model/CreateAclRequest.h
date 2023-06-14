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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEACLREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEACLREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT CreateAclRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct AclEntries {
		std::string entry;
		std::string entryDescription;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateAclRequest();
	~CreateAclRequest();
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getAclName() const;
	void setAclName(const std::string &aclName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::vector<AclEntries> getAclEntries() const;
	void setAclEntries(const std::vector<AclEntries> &aclEntries);
	std::string getAddressIPVersion() const;
	void setAddressIPVersion(const std::string &addressIPVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	bool dryRun_;
	std::string aclName_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::vector<AclEntries> aclEntries_;
	std::string addressIPVersion_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_CREATEACLREQUEST_H_
