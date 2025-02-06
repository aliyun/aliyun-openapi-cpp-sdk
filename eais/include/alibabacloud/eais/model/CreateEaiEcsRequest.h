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

#ifndef ALIBABACLOUD_EAIS_MODEL_CREATEEAIECSREQUEST_H_
#define ALIBABACLOUD_EAIS_MODEL_CREATEEAIECSREQUEST_H_

#include <alibabacloud/eais/EaisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eais {
namespace Model {
class ALIBABACLOUD_EAIS_EXPORT CreateEaiEcsRequest : public RpcServiceRequest {
public:
	struct Ecs {
		std::string password;
		std::string imageId;
		std::string systemDiskCategory;
		std::string internetMaxBandwidthOut;
		std::string name;
		long systemDiskSize;
		std::string zoneId;
		std::string type;
		std::string internetMaxBandwidthIn;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateEaiEcsRequest();
	~CreateEaiEcsRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getEaisType() const;
	void setEaisType(const std::string &eaisType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	Ecs getEcs() const;
	void setEcs(const Ecs &ecs);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEaisName() const;
	void setEaisName(const std::string &eaisName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);

private:
	std::string clientToken_;
	std::string securityGroupId_;
	std::string eaisType_;
	std::string resourceGroupId_;
	Ecs ecs_;
	std::string regionId_;
	std::string eaisName_;
	std::vector<Tag> tag_;
	std::string vSwitchId_;
};
} // namespace Model
} // namespace Eais
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAIS_MODEL_CREATEEAIECSREQUEST_H_
