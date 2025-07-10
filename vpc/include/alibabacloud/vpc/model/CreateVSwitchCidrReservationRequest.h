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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVSWITCHCIDRRESERVATIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVSWITCHCIDRRESERVATIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateVSwitchCidrReservationRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateVSwitchCidrReservationRequest();
	~CreateVSwitchCidrReservationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getVSwitchCidrReservationType() const;
	void setVSwitchCidrReservationType(const std::string &vSwitchCidrReservationType);
	std::string getVSwitchCidrReservationDescription() const;
	void setVSwitchCidrReservationDescription(const std::string &vSwitchCidrReservationDescription);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getVSwitchCidrReservationName() const;
	void setVSwitchCidrReservationName(const std::string &vSwitchCidrReservationName);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVSwitchCidrReservationMask() const;
	void setVSwitchCidrReservationMask(const std::string &vSwitchCidrReservationMask);
	std::string getVSwitchCidrReservationCidr() const;
	void setVSwitchCidrReservationCidr(const std::string &vSwitchCidrReservationCidr);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string vSwitchCidrReservationType_;
	std::string vSwitchCidrReservationDescription_;
	std::string regionId_;
	std::string vSwitchCidrReservationName_;
	std::string ipVersion_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string vSwitchId_;
	std::string vSwitchCidrReservationMask_;
	std::string vSwitchCidrReservationCidr_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVSWITCHCIDRRESERVATIONREQUEST_H_
