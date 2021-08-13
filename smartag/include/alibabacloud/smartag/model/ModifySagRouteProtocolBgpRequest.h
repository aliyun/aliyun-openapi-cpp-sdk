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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGROUTEPROTOCOLBGPREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGROUTEPROTOCOLBGPREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT ModifySagRouteProtocolBgpRequest : public RpcServiceRequest {
public:
	ModifySagRouteProtocolBgpRequest();
	~ModifySagRouteProtocolBgpRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getKeepAlive() const;
	void setKeepAlive(int keepAlive);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getHoldTime() const;
	void setHoldTime(int holdTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAdvertiseIps() const;
	void setAdvertiseIps(const std::string &advertiseIps);
	std::string getRouterId() const;
	void setRouterId(const std::string &routerId);
	int getLocalAs() const;
	void setLocalAs(int localAs);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);
	std::string getSmartAGSn() const;
	void setSmartAGSn(const std::string &smartAGSn);

private:
	long resourceOwnerId_;
	int keepAlive_;
	std::string regionId_;
	int holdTime_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string advertiseIps_;
	std::string routerId_;
	int localAs_;
	std::string smartAGId_;
	std::string smartAGSn_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGROUTEPROTOCOLBGPREQUEST_H_
