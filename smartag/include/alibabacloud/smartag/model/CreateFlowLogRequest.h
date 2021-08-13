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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATEFLOWLOGREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATEFLOWLOGREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT CreateFlowLogRequest : public RpcServiceRequest {
public:
	CreateFlowLogRequest();
	~CreateFlowLogRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNetflowVersion() const;
	void setNetflowVersion(const std::string &netflowVersion);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getInactiveAging() const;
	void setInactiveAging(int inactiveAging);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSlsRegionId() const;
	void setSlsRegionId(const std::string &slsRegionId);
	int getActiveAging() const;
	void setActiveAging(int activeAging);
	std::string getOutputType() const;
	void setOutputType(const std::string &outputType);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getLogstoreName() const;
	void setLogstoreName(const std::string &logstoreName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getNetflowServerPort() const;
	void setNetflowServerPort(int netflowServerPort);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getNetflowServerIp() const;
	void setNetflowServerIp(const std::string &netflowServerIp);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	std::string netflowVersion_;
	std::string description_;
	int inactiveAging_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string slsRegionId_;
	int activeAging_;
	std::string outputType_;
	std::string projectName_;
	std::string logstoreName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int netflowServerPort_;
	long ownerId_;
	std::string netflowServerIp_;
	std::string name_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATEFLOWLOGREQUEST_H_
