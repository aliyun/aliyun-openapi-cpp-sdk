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

#ifndef ALIBABACLOUD_OOS_MODEL_CREATEAPPLICATIONGROUPREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_CREATEAPPLICATIONGROUPREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT CreateApplicationGroupRequest : public RpcServiceRequest {
public:
	CreateApplicationGroupRequest();
	~CreateApplicationGroupRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCmsGroupId() const;
	void setCmsGroupId(const std::string &cmsGroupId);
	std::string getDeployRegionId() const;
	void setDeployRegionId(const std::string &deployRegionId);
	std::string getApplicationName() const;
	void setApplicationName(const std::string &applicationName);
	std::string getImportTagValue() const;
	void setImportTagValue(const std::string &importTagValue);
	std::string getImportTagKey() const;
	void setImportTagKey(const std::string &importTagKey);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	std::string cmsGroupId_;
	std::string deployRegionId_;
	std::string applicationName_;
	std::string importTagValue_;
	std::string importTagKey_;
	std::string name_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_CREATEAPPLICATIONGROUPREQUEST_H_
