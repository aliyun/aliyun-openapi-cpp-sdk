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

#ifndef ALIBABACLOUD_ECS_MODEL_RECOVERVIRTUALBORDERROUTERREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_RECOVERVIRTUALBORDERROUTERREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT RecoverVirtualBorderRouterRequest : public RpcServiceRequest {
public:
	RecoverVirtualBorderRouterRequest();
	~RecoverVirtualBorderRouterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getVbrId() const;
	void setVbrId(const std::string &vbrId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getUserCidr() const;
	void setUserCidr(const std::string &userCidr);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string vbrId_;
	std::string regionId_;
	std::string userCidr_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_RECOVERVIRTUALBORDERROUTERREQUEST_H_
