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

#ifndef ALIBABACLOUD_ENS_MODEL_UPDATEENSSALECONTROLREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_UPDATEENSSALECONTROLREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT UpdateEnsSaleControlRequest : public RpcServiceRequest {
public:
	struct SaleControls {
		std::string moduleCode;
		struct ModuleValue {
			std::string string;
			std::vector<std::string> moduleValue;
			std::string moduleMaxValue;
			std::string moduleMinValue;
		};
		ModuleValue moduleValue;
		struct ConditionControlsItem {
			std::string conditionControlModuleValue;
			std::string conditionControlModuleCode;
		};
		ConditionControlsItem conditionControlsItem;
		std::vector<ConditionControlsItem> conditionControls;
		std::string description;
		std::string _operator;
		std::string orderType;
	};
	UpdateEnsSaleControlRequest();
	~UpdateEnsSaleControlRequest();
	std::vector<SaleControls> getSaleControls() const;
	void setSaleControls(const std::vector<SaleControls> &saleControls);
	std::string getCustomAccount() const;
	void setCustomAccount(const std::string &customAccount);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	std::string getAliUidAccount() const;
	void setAliUidAccount(const std::string &aliUidAccount);

private:
	std::vector<SaleControls> saleControls_;
	std::string customAccount_;
	std::string commodityCode_;
	std::string aliUidAccount_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_UPDATEENSSALECONTROLREQUEST_H_
