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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_CREATEINSTANCEREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT CreateInstanceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct ZoneVSwitchSecurityGroup {
		std::string vSwitchId;
		std::string cidrBlock;
		std::string securityGroupId;
		std::string zoneId;
	};
	CreateInstanceRequest();
	~CreateInstanceRequest();
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	std::string getInstanceCidr() const;
	void setInstanceCidr(const std::string &instanceCidr);
	std::string getHttpsPolicy() const;
	void setHttpsPolicy(const std::string &httpsPolicy);
	int getDuration() const;
	void setDuration(int duration);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getUserVpcId() const;
	void setUserVpcId(const std::string &userVpcId);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::vector<ZoneVSwitchSecurityGroup> getZoneVSwitchSecurityGroup() const;
	void setZoneVSwitchSecurityGroup(const std::vector<ZoneVSwitchSecurityGroup> &zoneVSwitchSecurityGroup);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	std::string instanceSpec_;
	std::string instanceCidr_;
	std::string httpsPolicy_;
	int duration_;
	std::string instanceType_;
	std::vector<Tag> tag_;
	bool autoPay_;
	std::string userVpcId_;
	std::string token_;
	std::vector<ZoneVSwitchSecurityGroup> zoneVSwitchSecurityGroup_;
	std::string instanceName_;
	std::string zoneId_;
	std::string chargeType_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_CREATEINSTANCEREQUEST_H_
