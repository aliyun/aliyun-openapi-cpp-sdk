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
	struct Tag {
		std::string value;
		std::string key;
	};
	AddGatewayRequest();
	~AddGatewayRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getInternetSlbSpec() const;
	void setInternetSlbSpec(const std::string &internetSlbSpec);
	bool getEnableXtrace() const;
	void setEnableXtrace(bool enableXtrace);
	std::string getXtraceRatio() const;
	void setXtraceRatio(const std::string &xtraceRatio);
	int getReplica() const;
	void setReplica(int replica);
	std::string getVSwitchId2() const;
	void setVSwitchId2(const std::string &vSwitchId2);
	bool getEnableHardwareAcceleration() const;
	void setEnableHardwareAcceleration(bool enableHardwareAcceleration);
	bool getEnableSls() const;
	void setEnableSls(bool enableSls);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getEnterpriseSecurityGroup() const;
	void setEnterpriseSecurityGroup(bool enterpriseSecurityGroup);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
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
	std::string mseSessionId_;
	std::string internetSlbSpec_;
	bool enableXtrace_;
	std::string xtraceRatio_;
	int replica_;
	std::string vSwitchId2_;
	bool enableHardwareAcceleration_;
	bool enableSls_;
	std::string spec_;
	std::string resourceGroupId_;
	bool enterpriseSecurityGroup_;
	std::vector<Tag> tag_;
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
