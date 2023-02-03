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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYDOMAINREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYDOMAINREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateGatewayDomainRequest : public RpcServiceRequest {
public:
	UpdateGatewayDomainRequest();
	~UpdateGatewayDomainRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getTlsMax() const;
	void setTlsMax(const std::string &tlsMax);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	bool getMustHttps() const;
	void setMustHttps(bool mustHttps);
	std::string getHttp2() const;
	void setHttp2(const std::string &http2);
	long getId() const;
	void setId(long id);
	std::string getTlsMin() const;
	void setTlsMin(const std::string &tlsMin);
	std::string getCertIdentifier() const;
	void setCertIdentifier(const std::string &certIdentifier);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	std::string tlsMax_;
	std::string protocol_;
	bool mustHttps_;
	std::string http2_;
	long id_;
	std::string tlsMin_;
	std::string certIdentifier_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYDOMAINREQUEST_H_
