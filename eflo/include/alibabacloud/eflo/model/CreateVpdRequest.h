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
		std::string name;
		std::string zoneId;
		std::string cidr;
		std::string type;
	};
	CreateVpdRequest();
	~CreateVpdRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getCidr() const;
	void setCidr(const std::string &cidr);
	std::vector<Subnets> getSubnets() const;
	void setSubnets(const std::vector<Subnets> &subnets);

private:
	std::string regionId_;
	std::string name_;
	std::string cidr_;
	std::vector<Subnets> subnets_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_CREATEVPDREQUEST_H_
