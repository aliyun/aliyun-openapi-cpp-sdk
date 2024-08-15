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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATESILENCEPOLICYREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATESILENCEPOLICYREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateSilencePolicyRequest : public RpcServiceRequest {
public:
	CreateOrUpdateSilencePolicyRequest();
	~CreateOrUpdateSilencePolicyRequest();
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getMatchingRules() const;
	void setMatchingRules(const std::string &matchingRules);
	std::string getTimeSlots() const;
	void setTimeSlots(const std::string &timeSlots);
	std::string getAreaCodes() const;
	void setAreaCodes(const std::string &areaCodes);
	std::string getEffectiveTimeType() const;
	void setEffectiveTimeType(const std::string &effectiveTimeType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);
	long getId() const;
	void setId(long id);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getTimePeriod() const;
	void setTimePeriod(const std::string &timePeriod);

private:
	std::string proxyUserId_;
	std::string matchingRules_;
	std::string timeSlots_;
	std::string areaCodes_;
	std::string effectiveTimeType_;
	std::string regionId_;
	std::string name_;
	long id_;
	std::string state_;
	std::string timePeriod_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATESILENCEPOLICYREQUEST_H_
