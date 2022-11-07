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

#ifndef ALIBABACLOUD_CC5G_MODEL_CREATEWIRELESSCLOUDCONNECTORREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_CREATEWIRELESSCLOUDCONNECTORREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT CreateWirelessCloudConnectorRequest : public RpcServiceRequest {
public:
	struct NetLinks {
		std::string regionId;
		std::string vpcId;
		std::string string;
		std::vector<std::string> vSwitchs;
		std::string aPN;
	};
	CreateWirelessCloudConnectorRequest();
	~CreateWirelessCloudConnectorRequest();
	std::string getUseCase() const;
	void setUseCase(const std::string &useCase);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getISP() const;
	void setISP(const std::string &iSP);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::vector<NetLinks> getNetLinks() const;
	void setNetLinks(const std::vector<NetLinks> &netLinks);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string useCase_;
	std::string clientToken_;
	std::string iSP_;
	std::string description_;
	std::string businessType_;
	std::vector<NetLinks> netLinks_;
	std::string regionId_;
	bool dryRun_;
	std::string name_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_CREATEWIRELESSCLOUDCONNECTORREQUEST_H_
