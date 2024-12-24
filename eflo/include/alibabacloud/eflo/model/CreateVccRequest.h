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
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateVccRequest();
	~CreateVccRequest();
	std::string getBgpCidr() const;
	void setBgpCidr(const std::string &bgpCidr);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getCenOwnerId() const;
	void setCenOwnerId(const std::string &cenOwnerId);
	long getBgpAsn() const;
	void setBgpAsn(long bgpAsn);
	bool getAccessCouldService() const;
	void setAccessCouldService(bool accessCouldService);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getVccName() const;
	void setVccName(const std::string &vccName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getVccId() const;
	void setVccId(const std::string &vccId);
	std::string getConnectionType() const;
	void setConnectionType(const std::string &connectionType);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpdId() const;
	void setVpdId(const std::string &vpdId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	std::string bgpCidr_;
	std::string cenId_;
	std::string description_;
	std::string cenOwnerId_;
	long bgpAsn_;
	bool accessCouldService_;
	std::string resourceGroupId_;
	std::string vccName_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::string vccId_;
	std::string connectionType_;
	int bandwidth_;
	std::string vSwitchId_;
	std::string vpdId_;
	std::string vpcId_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_CREATEVCCREQUEST_H_
