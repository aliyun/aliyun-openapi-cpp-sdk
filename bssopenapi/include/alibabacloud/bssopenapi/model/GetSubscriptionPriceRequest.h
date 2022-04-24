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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_GETSUBSCRIPTIONPRICEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_GETSUBSCRIPTIONPRICEREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT GetSubscriptionPriceRequest : public RpcServiceRequest {
public:
	struct ModuleList {
		std::string moduleCode;
		int moduleStatus;
		std::string tag;
		std::string config;
	};
	GetSubscriptionPriceRequest();
	~GetSubscriptionPriceRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	int getQuantity() const;
	void setQuantity(int quantity);
	std::string getSubscriptionType() const;
	void setSubscriptionType(const std::string &subscriptionType);
	std::vector<ModuleList> getModuleList() const;
	void setModuleList(const std::vector<ModuleList> &moduleList);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	int getServicePeriodQuantity() const;
	void setServicePeriodQuantity(int servicePeriodQuantity);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getServicePeriodUnit() const;
	void setServicePeriodUnit(const std::string &servicePeriodUnit);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::string productCode_;
	int quantity_;
	std::string subscriptionType_;
	std::vector<ModuleList> moduleList_;
	long ownerId_;
	std::string productType_;
	int servicePeriodQuantity_;
	std::string instanceId_;
	std::string servicePeriodUnit_;
	std::string region_;
	std::string orderType_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_GETSUBSCRIPTIONPRICEREQUEST_H_
