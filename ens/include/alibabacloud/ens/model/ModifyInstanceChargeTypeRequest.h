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

#ifndef ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ModifyInstanceChargeTypeRequest : public RpcServiceRequest {
public:
	ModifyInstanceChargeTypeRequest();
	~ModifyInstanceChargeTypeRequest();
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	bool getIncludeDataDisks() const;
	void setIncludeDataDisks(bool includeDataDisks);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);

private:
	std::string period_;
	bool includeDataDisks_;
	std::string periodUnit_;
	bool autoRenew_;
	std::vector<std::string> instanceIds_;
	std::string instanceChargeType_;
	bool autoPay_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
