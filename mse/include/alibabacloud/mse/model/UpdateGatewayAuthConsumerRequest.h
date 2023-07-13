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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYAUTHCONSUMERREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYAUTHCONSUMERREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateGatewayAuthConsumerRequest : public RpcServiceRequest {
public:
	UpdateGatewayAuthConsumerRequest();
	~UpdateGatewayAuthConsumerRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getKeyName() const;
	void setKeyName(const std::string &keyName);
	long getId() const;
	void setId(long id);
	std::string getTokenPrefix() const;
	void setTokenPrefix(const std::string &tokenPrefix);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getJwks() const;
	void setJwks(const std::string &jwks);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTokenPosition() const;
	void setTokenPosition(const std::string &tokenPosition);
	std::string getEncodeType() const;
	void setEncodeType(const std::string &encodeType);
	std::string getKeyValue() const;
	void setKeyValue(const std::string &keyValue);
	bool getTokenPass() const;
	void setTokenPass(bool tokenPass);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getTokenName() const;
	void setTokenName(const std::string &tokenName);

private:
	std::string mseSessionId_;
	std::string keyName_;
	long id_;
	std::string tokenPrefix_;
	std::string gatewayUniqueId_;
	std::string jwks_;
	std::string description_;
	std::string tokenPosition_;
	std::string encodeType_;
	std::string keyValue_;
	bool tokenPass_;
	std::string acceptLanguage_;
	std::string tokenName_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYAUTHCONSUMERREQUEST_H_
