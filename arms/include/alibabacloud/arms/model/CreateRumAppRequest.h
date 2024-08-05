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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATERUMAPPREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATERUMAPPREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateRumAppRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateRumAppRequest();
	~CreateRumAppRequest();
	std::string getPackageName() const;
	void setPackageName(const std::string &packageName);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getSiteType() const;
	void setSiteType(const std::string &siteType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getAppGroup() const;
	void setAppGroup(const std::string &appGroup);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNickName() const;
	void setNickName(const std::string &nickName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	std::string packageName_;
	std::string description_;
	std::string source_;
	std::string siteType_;
	std::string resourceGroupId_;
	std::string appName_;
	std::string appGroup_;
	std::string regionId_;
	std::string nickName_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATERUMAPPREQUEST_H_
