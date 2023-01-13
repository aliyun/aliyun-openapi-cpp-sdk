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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateTransitRouterRequest : public RpcServiceRequest {
public:
	struct TransitRouterCidrList {
		std::string name;
		std::string description;
		std::string cidr;
		bool publishCidrRoute;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateTransitRouterRequest();
	~CreateTransitRouterRequest();
	std::string getTransitRouterName() const;
	void setTransitRouterName(const std::string &transitRouterName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getServiceMode() const;
	void setServiceMode(const std::string &serviceMode);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::vector<TransitRouterCidrList> getTransitRouterCidrList() const;
	void setTransitRouterCidrList(const std::vector<TransitRouterCidrList> &transitRouterCidrList);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
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
	std::string getTransitRouterDescription() const;
	void setTransitRouterDescription(const std::string &transitRouterDescription);
	bool getSupportMulticast() const;
	void setSupportMulticast(bool supportMulticast);
	std::string getVersion() const;
	void setVersion(const std::string &version);

private:
	std::string transitRouterName_;
	long resourceOwnerId_;
	std::string serviceMode_;
	std::string clientToken_;
	std::string cenId_;
	std::vector<TransitRouterCidrList> transitRouterCidrList_;
	std::string type_;
	std::string regionId_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterDescription_;
	bool supportMulticast_;
	std::string version_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERREQUEST_H_
