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

#ifndef ALIBABACLOUD_MSE_MODEL_IMPORTSERVICESREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_IMPORTSERVICESREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ImportServicesRequest : public RpcServiceRequest {
public:
	struct ServiceList {
		std::string serviceProtocol;
		std::string name;
		std::string _namespace;
		std::string groupName;
		std::string string;
		std::vector<std::string> ips;
		long servicePort;
	};
	ImportServicesRequest();
	~ImportServicesRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::vector<ServiceList> getServiceList() const;
	void setServiceList(const std::vector<ServiceList> &serviceList);
	std::string getTlsSetting() const;
	void setTlsSetting(const std::string &tlsSetting);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getFcServiceName() const;
	void setFcServiceName(const std::string &fcServiceName);
	std::string getFcVersion() const;
	void setFcVersion(const std::string &fcVersion);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	std::vector<ServiceList> serviceList_;
	std::string tlsSetting_;
	std::string sourceType_;
	std::string fcServiceName_;
	std::string fcVersion_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_IMPORTSERVICESREQUEST_H_
