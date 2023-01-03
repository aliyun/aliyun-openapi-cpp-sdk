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

#ifndef ALIBABACLOUD_EFLO_MODEL_CREATEVCCREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_CREATEVCCREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT CreateVccRequest : public RpcServiceRequest {
public:
	CreateVccRequest();
	~CreateVccRequest();
	std::string getBgpCidr() const;
	void setBgpCidr(const std::string &bgpCidr);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getAccessCouldService() const;
	void setAccessCouldService(bool accessCouldService);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getVccId() const;
	void setVccId(const std::string &vccId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpdId() const;
	void setVpdId(const std::string &vpdId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string bgpCidr_;
	std::string cenId_;
	std::string description_;
	bool accessCouldService_;
	std::string regionId_;
	std::string vccId_;
	std::string vSwitchId_;
	std::string vpdId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_CREATEVCCREQUEST_H_
