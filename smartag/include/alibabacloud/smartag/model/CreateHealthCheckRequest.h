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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATEHEALTHCHECKREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATEHEALTHCHECKREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT CreateHealthCheckRequest : public RpcServiceRequest {
public:
	CreateHealthCheckRequest();
	~CreateHealthCheckRequest();
	int getProbeInterval() const;
	void setProbeInterval(int probeInterval);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDstPort() const;
	void setDstPort(int dstPort);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	int getFailCountThreshold() const;
	void setFailCountThreshold(int failCountThreshold);
	int getProbeTimeout() const;
	void setProbeTimeout(int probeTimeout);
	int getRttFailThreshold() const;
	void setRttFailThreshold(int rttFailThreshold);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getRttThreshold() const;
	void setRttThreshold(int rttThreshold);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDstIpAddr() const;
	void setDstIpAddr(const std::string &dstIpAddr);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSrcIpAddr() const;
	void setSrcIpAddr(const std::string &srcIpAddr);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);
	int getSrcPort() const;
	void setSrcPort(int srcPort);
	int getProbeCount() const;
	void setProbeCount(int probeCount);

private:
	int probeInterval_;
	long resourceOwnerId_;
	int dstPort_;
	std::string description_;
	std::string type_;
	int failCountThreshold_;
	int probeTimeout_;
	int rttFailThreshold_;
	std::string regionId_;
	int rttThreshold_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string dstIpAddr_;
	long ownerId_;
	std::string srcIpAddr_;
	std::string name_;
	std::string smartAGId_;
	int srcPort_;
	int probeCount_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATEHEALTHCHECKREQUEST_H_
