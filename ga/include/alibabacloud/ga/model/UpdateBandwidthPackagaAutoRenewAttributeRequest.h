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

#ifndef ALIBABACLOUD_GA_MODEL_UPDATEBANDWIDTHPACKAGAAUTORENEWATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_UPDATEBANDWIDTHPACKAGAAUTORENEWATTRIBUTEREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT UpdateBandwidthPackagaAutoRenewAttributeRequest : public RpcServiceRequest {
public:
	UpdateBandwidthPackagaAutoRenewAttributeRequest();
	~UpdateBandwidthPackagaAutoRenewAttributeRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getAutoRenewDuration() const;
	void setAutoRenewDuration(int autoRenewDuration);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRenewalStatus() const;
	void setRenewalStatus(const std::string &renewalStatus);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string clientToken_;
	int autoRenewDuration_;
	std::string instanceId_;
	bool autoRenew_;
	std::string regionId_;
	std::string renewalStatus_;
	std::string name_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_UPDATEBANDWIDTHPACKAGAAUTORENEWATTRIBUTEREQUEST_H_
