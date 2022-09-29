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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_GENERATEVEHICLEREPAIRPLANREQUEST_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_GENERATEVEHICLEREPAIRPLANREQUEST_H_

#include <alibabacloud/objectdet/ObjectdetExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Objectdet {
namespace Model {
class ALIBABACLOUD_OBJECTDET_EXPORT GenerateVehicleRepairPlanRequest : public RpcServiceRequest {
public:
	struct DamageImageList {
		std::string imageUrl;
		std::string createTimeStamp;
	};
	GenerateVehicleRepairPlanRequest();
	~GenerateVehicleRepairPlanRequest();
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	std::vector<DamageImageList> getDamageImageList() const;
	void setDamageImageList(const std::vector<DamageImageList> &damageImageList);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);

private:
	bool formatResultToJson_;
	std::string ossFile_;
	std::vector<DamageImageList> damageImageList_;
	std::string requestProxyBy_;
};
} // namespace Model
} // namespace Objectdet
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_GENERATEVEHICLEREPAIRPLANREQUEST_H_
