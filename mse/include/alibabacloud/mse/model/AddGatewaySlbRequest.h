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

#ifndef ALIBABACLOUD_MSE_MODEL_ADDGATEWAYSLBREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_ADDGATEWAYSLBREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT AddGatewaySlbRequest : public RpcServiceRequest {
public:
	struct VServiceList {
		std::string vServerGroupId;
		std::string protocol;
		int port;
		std::string vServerGroupName;
	};
	AddGatewaySlbRequest();
	~AddGatewaySlbRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getSlbId() const;
	void setSlbId(const std::string &slbId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getType() const;
	void setType(const std::string &type);
	int getHttpPort() const;
	void setHttpPort(int httpPort);
	int getServiceWeight() const;
	void setServiceWeight(int serviceWeight);
	std::string getVServerGroupId() const;
	void setVServerGroupId(const std::string &vServerGroupId);
	std::vector<VServiceList> getVServiceList() const;
	void setVServiceList(const std::vector<VServiceList> &vServiceList);
	std::string getHttpsVServerGroupId() const;
	void setHttpsVServerGroupId(const std::string &httpsVServerGroupId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	int getHttpsPort() const;
	void setHttpsPort(int httpsPort);

private:
	std::string mseSessionId_;
	std::string slbId_;
	std::string gatewayUniqueId_;
	std::string type_;
	int httpPort_;
	int serviceWeight_;
	std::string vServerGroupId_;
	std::vector<VServiceList> vServiceList_;
	std::string httpsVServerGroupId_;
	std::string acceptLanguage_;
	int httpsPort_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_ADDGATEWAYSLBREQUEST_H_
