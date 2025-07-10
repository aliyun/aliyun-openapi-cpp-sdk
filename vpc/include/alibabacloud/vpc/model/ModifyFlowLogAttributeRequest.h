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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyFlowLogAttributeRequest : public RpcServiceRequest {
public:
	ModifyFlowLogAttributeRequest();
	~ModifyFlowLogAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getEnableTrafficAnalyze() const;
	void setEnableTrafficAnalyze(bool enableTrafficAnalyze);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDisableLogDelivery() const;
	void setDisableLogDelivery(bool disableLogDelivery);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	bool getEnableLogDelivery() const;
	void setEnableLogDelivery(bool enableLogDelivery);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getAggregationInterval() const;
	void setAggregationInterval(int aggregationInterval);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getFlowLogId() const;
	void setFlowLogId(const std::string &flowLogId);
	std::string getFlowLogName() const;
	void setFlowLogName(const std::string &flowLogName);
	std::string getTrafficAnalyzerId() const;
	void setTrafficAnalyzerId(const std::string &trafficAnalyzerId);

private:
	long resourceOwnerId_;
	std::string description_;
	bool enableTrafficAnalyze_;
	std::string regionId_;
	bool disableLogDelivery_;
	std::string ipVersion_;
	bool enableLogDelivery_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int aggregationInterval_;
	long ownerId_;
	std::string flowLogId_;
	std::string flowLogName_;
	std::string trafficAnalyzerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_
