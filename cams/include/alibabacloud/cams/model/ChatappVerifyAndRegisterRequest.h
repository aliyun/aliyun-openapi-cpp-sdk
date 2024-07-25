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

#ifndef ALIBABACLOUD_CAMS_MODEL_CHATAPPVERIFYANDREGISTERREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_CHATAPPVERIFYANDREGISTERREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT ChatappVerifyAndRegisterRequest : public RpcServiceRequest {
public:
	ChatappVerifyAndRegisterRequest();
	~ChatappVerifyAndRegisterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getLowcodeTenantId() const;
	void setLowcodeTenantId(const std::string &lowcodeTenantId);
	std::string getExtendFunction() const;
	void setExtendFunction(const std::string &extendFunction);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getLowcodePhysicAppName() const;
	void setLowcodePhysicAppName(const std::string &lowcodePhysicAppName);
	std::string getVerifyCode() const;
	void setVerifyCode(const std::string &verifyCode);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getLowcodeLogicAppName() const;
	void setLowcodeLogicAppName(const std::string &lowcodeLogicAppName);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);

private:
	long resourceOwnerId_;
	std::string phoneNumber_;
	std::string lowcodeTenantId_;
	std::string extendFunction_;
	std::string accessKeyId_;
	std::string lowcodePhysicAppName_;
	std::string verifyCode_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string lowcodeLogicAppName_;
	std::string custSpaceId_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_CHATAPPVERIFYANDREGISTERREQUEST_H_
