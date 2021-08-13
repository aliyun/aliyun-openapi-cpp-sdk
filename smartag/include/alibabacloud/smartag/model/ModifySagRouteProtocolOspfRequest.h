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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGROUTEPROTOCOLOSPFREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGROUTEPROTOCOLOSPFREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT ModifySagRouteProtocolOspfRequest : public RpcServiceRequest {
public:
	ModifySagRouteProtocolOspfRequest();
	~ModifySagRouteProtocolOspfRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAuthenticationType() const;
	void setAuthenticationType(const std::string &authenticationType);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	int getAreaId() const;
	void setAreaId(int areaId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMd5KeyId() const;
	void setMd5KeyId(int md5KeyId);
	std::string getRouterId() const;
	void setRouterId(const std::string &routerId);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);
	std::string getSmartAGSn() const;
	void setSmartAGSn(const std::string &smartAGSn);
	int getDeadTime() const;
	void setDeadTime(int deadTime);
	std::string getMd5Key() const;
	void setMd5Key(const std::string &md5Key);
	int getHelloTime() const;
	void setHelloTime(int helloTime);

private:
	long resourceOwnerId_;
	std::string authenticationType_;
	std::string password_;
	int areaId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	int md5KeyId_;
	std::string routerId_;
	std::string smartAGId_;
	std::string smartAGSn_;
	int deadTime_;
	std::string md5Key_;
	int helloTime_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGROUTEPROTOCOLOSPFREQUEST_H_
