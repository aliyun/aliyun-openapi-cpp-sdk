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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYQOSCARREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYQOSCARREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT ModifyQosCarRequest : public RpcServiceRequest {
public:
	ModifyQosCarRequest();
	~ModifyQosCarRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getMinBandwidthAbs() const;
	void setMinBandwidthAbs(int minBandwidthAbs);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPercentSourceType() const;
	void setPercentSourceType(const std::string &percentSourceType);
	std::string getQosId() const;
	void setQosId(const std::string &qosId);
	int getMaxBandwidthAbs() const;
	void setMaxBandwidthAbs(int maxBandwidthAbs);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getMaxBandwidthPercent() const;
	void setMaxBandwidthPercent(int maxBandwidthPercent);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getQosCarId() const;
	void setQosCarId(const std::string &qosCarId);
	int getPriority() const;
	void setPriority(int priority);
	int getMinBandwidthPercent() const;
	void setMinBandwidthPercent(int minBandwidthPercent);
	std::string getLimitType() const;
	void setLimitType(const std::string &limitType);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	int minBandwidthAbs_;
	std::string description_;
	std::string regionId_;
	std::string percentSourceType_;
	std::string qosId_;
	int maxBandwidthAbs_;
	std::string resourceOwnerAccount_;
	int maxBandwidthPercent_;
	std::string ownerAccount_;
	long ownerId_;
	std::string qosCarId_;
	int priority_;
	int minBandwidthPercent_;
	std::string limitType_;
	std::string name_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYQOSCARREQUEST_H_
