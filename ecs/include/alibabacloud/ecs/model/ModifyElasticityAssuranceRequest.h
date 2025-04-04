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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYELASTICITYASSURANCEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYELASTICITYASSURANCEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyElasticityAssuranceRequest : public RpcServiceRequest {
public:
	struct RecurrenceRules {
		std::string recurrenceType;
		std::string recurrenceValue;
		int startHour;
		int endHour;
	};
	ModifyElasticityAssuranceRequest();
	~ModifyElasticityAssuranceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPrivatePoolOptionsId() const;
	void setPrivatePoolOptionsId(const std::string &privatePoolOptionsId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPrivatePoolOptionsName() const;
	void setPrivatePoolOptionsName(const std::string &privatePoolOptionsName);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<RecurrenceRules> getRecurrenceRules() const;
	void setRecurrenceRules(const std::vector<RecurrenceRules> &recurrenceRules);
	std::string getPackageType() const;
	void setPackageType(const std::string &packageType);
	int getInstanceAmount() const;
	void setInstanceAmount(int instanceAmount);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	std::string privatePoolOptionsId_;
	std::string resourceOwnerAccount_;
	std::string privatePoolOptionsName_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<RecurrenceRules> recurrenceRules_;
	std::string packageType_;
	int instanceAmount_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYELASTICITYASSURANCEREQUEST_H_
