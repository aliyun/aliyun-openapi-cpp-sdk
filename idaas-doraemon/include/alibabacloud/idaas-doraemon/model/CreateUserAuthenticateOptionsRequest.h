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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_CREATEUSERAUTHENTICATEOPTIONSREQUEST_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_CREATEUSERAUTHENTICATEOPTIONSREQUEST_H_

#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Idaas_doraemon {
namespace Model {
class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT CreateUserAuthenticateOptionsRequest : public RpcServiceRequest {
public:
	CreateUserAuthenticateOptionsRequest();
	~CreateUserAuthenticateOptionsRequest();
	std::string getClientExtendParamsJson() const;
	void setClientExtendParamsJson(const std::string &clientExtendParamsJson);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getBindHashBase64() const;
	void setBindHashBase64(const std::string &bindHashBase64);
	std::string getServerExtendParamsJson() const;
	void setServerExtendParamsJson(const std::string &serverExtendParamsJson);
	std::string getAuthenticatorType() const;
	void setAuthenticatorType(const std::string &authenticatorType);
	std::string getClientExtendParamsJsonSign() const;
	void setClientExtendParamsJsonSign(const std::string &clientExtendParamsJsonSign);
	std::string getApplicationExternalId() const;
	void setApplicationExternalId(const std::string &applicationExternalId);

private:
	std::string clientExtendParamsJson_;
	std::string userId_;
	std::string bindHashBase64_;
	std::string serverExtendParamsJson_;
	std::string authenticatorType_;
	std::string clientExtendParamsJsonSign_;
	std::string applicationExternalId_;
};
} // namespace Model
} // namespace Idaas_doraemon
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_CREATEUSERAUTHENTICATEOPTIONSREQUEST_H_
