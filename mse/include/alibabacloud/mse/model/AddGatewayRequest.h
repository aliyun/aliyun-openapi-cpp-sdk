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

#ifndef ALIBABACLOUD_MSE_MODEL_ADDGATEWAYREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_ADDGATEWAYREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT AddGatewayRequest : public RpcServiceRequest {
public:
	AddGatewayRequest();
	~AddGatewayRequest();
	std::string getInternetSlbSpec() const;
	void setInternetSlbSpec(const std::string &internetSlbSpec);
	int getReplica() const;
	void setReplica(int replica);
	std::string getVSwitchId2() const;
	void setVSwitchId2(const std::string &vSwitchId2);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	bool getEnterpriseSecurityGroup() const;
	void setEnterpriseSecurityGroup(bool enterpriseSecurityGroup);
	std::string getVpc() const;
	void setVpc(const std::string &vpc);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getSlbSpec() const;
	void setSlbSpec(const std::string &slbSpec);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string internetSlbSpec_;
	int replica_;
	std::string vSwitchId2_;
	std::string spec_;
	bool enterpriseSecurityGroup_;
	std::string vpc_;
	std::string vSwitchId_;
	std::string slbSpec_;
	std::string name_;
	std::string acceptLanguage_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_ADDGATEWAYREQUEST_H_
