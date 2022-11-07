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

#ifndef ALIBABACLOUD_CC5G_MODEL_ATTACHVPCTONETLINKREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_ATTACHVPCTONETLINKREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT AttachVpcToNetLinkRequest : public RpcServiceRequest {
public:
	AttachVpcToNetLinkRequest();
	~AttachVpcToNetLinkRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getNetLinkId() const;
	void setNetLinkId(const std::string &netLinkId);
	std::vector<std::string> getVSwitches() const;
	void setVSwitches(const std::vector<std::string> &vSwitches);
	std::string getWirelessCloudConnectorId() const;
	void setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string clientToken_;
	std::string regionId_;
	bool dryRun_;
	std::string netLinkId_;
	std::vector<std::string> vSwitches_;
	std::string wirelessCloudConnectorId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_ATTACHVPCTONETLINKREQUEST_H_
