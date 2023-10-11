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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_CHECKSMSVERIFYCODEREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_CHECKSMSVERIFYCODEREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT CheckSmsVerifyCodeRequest : public RpcServiceRequest {
public:
	CheckSmsVerifyCodeRequest();
	~CheckSmsVerifyCodeRequest();
	long getCaseAuthPolicy() const;
	void setCaseAuthPolicy(long caseAuthPolicy);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCountryCode() const;
	void setCountryCode(const std::string &countryCode);
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getExtendFunction() const;
	void setExtendFunction(const std::string &extendFunction);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getVerifyCode() const;
	void setVerifyCode(const std::string &verifyCode);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSchemeName() const;
	void setSchemeName(const std::string &schemeName);
	std::string getOutId() const;
	void setOutId(const std::string &outId);

private:
	long caseAuthPolicy_;
	long resourceOwnerId_;
	std::string countryCode_;
	std::string phoneNumber_;
	std::string extendFunction_;
	std::string accessKeyId_;
	std::string verifyCode_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string schemeName_;
	std::string outId_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_CHECKSMSVERIFYCODEREQUEST_H_
