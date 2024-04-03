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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_CREATEAUTHKEYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_CREATEAUTHKEYREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT CreateAuthKeyRequest : public RpcServiceRequest {
public:
	CreateAuthKeyRequest();
	~CreateAuthKeyRequest();
	std::string getUserDeviceId() const;
	void setUserDeviceId(const std::string &userDeviceId);
	bool getTest() const;
	void setTest(bool test);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getAuthYears() const;
	void setAuthYears(int authYears);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::string userDeviceId_;
	bool test_;
	std::string bizType_;
	std::string sourceIp_;
	int authYears_;
	std::string lang_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_CREATEAUTHKEYREQUEST_H_
