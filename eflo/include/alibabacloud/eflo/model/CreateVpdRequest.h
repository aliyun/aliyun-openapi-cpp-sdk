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

#ifndef ALIBABACLOUD_EFLO_MODEL_CREATEVPDREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_CREATEVPDREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT CreateVpdRequest : public RpcServiceRequest {
public:
	struct Subnets {
		std::string regionId;
		std::string zoneId;
		std::string cidr;
		std::string subnetName;
		std::string type;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateVpdRequest();
	~CreateVpdRequest();
	std::string getVpdName() const;
	void setVpdName(const std::string &vpdName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCidr() const;
	void setCidr(const std::string &cidr);
	std::vector<Subnets> getSubnets() const;
	void setSubnets(const std::vector<Subnets> &subnets);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	std::string vpdName_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string cidr_;
	std::vector<Subnets> subnets_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_CREATEVPDREQUEST_H_
