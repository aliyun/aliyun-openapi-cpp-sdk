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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_CREATEINSTANCESREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_CREATEINSTANCESREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT CreateInstancesRequest : public RpcServiceRequest {
public:
	CreateInstancesRequest();
	~CreateInstancesRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	int getAmount() const;
	void setAmount(int amount);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	long getDataDiskSize() const;
	void setDataDiskSize(long dataDiskSize);
	std::string getPlanId() const;
	void setPlanId(const std::string &planId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	std::string imageId_;
	std::string clientToken_;
	std::string regionId_;
	int autoRenewPeriod_;
	int period_;
	int amount_;
	bool autoRenew_;
	long dataDiskSize_;
	std::string planId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_CREATEINSTANCESREQUEST_H_
