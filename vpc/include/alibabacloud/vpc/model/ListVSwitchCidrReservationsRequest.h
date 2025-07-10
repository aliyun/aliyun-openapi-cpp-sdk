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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTVSWITCHCIDRRESERVATIONSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTVSWITCHCIDRRESERVATIONSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListVSwitchCidrReservationsRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	ListVSwitchCidrReservationsRequest();
	~ListVSwitchCidrReservationsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVSwitchCidrReservationType() const;
	void setVSwitchCidrReservationType(const std::string &vSwitchCidrReservationType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getVSwitchCidrReservationIds() const;
	void setVSwitchCidrReservationIds(const std::vector<std::string> &vSwitchCidrReservationIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	long resourceOwnerId_;
	std::string vSwitchCidrReservationType_;
	std::string nextToken_;
	std::vector<std::string> vSwitchCidrReservationIds_;
	std::string regionId_;
	std::string ipVersion_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<Tags> tags_;
	std::string vSwitchId_;
	long maxResults_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTVSWITCHCIDRRESERVATIONSREQUEST_H_
