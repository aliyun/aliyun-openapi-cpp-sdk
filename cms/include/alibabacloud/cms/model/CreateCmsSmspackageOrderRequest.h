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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATECMSSMSPACKAGEORDERREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATECMSSMSPACKAGEORDERREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateCmsSmspackageOrderRequest : public RpcServiceRequest {
public:
	CreateCmsSmspackageOrderRequest();
	~CreateCmsSmspackageOrderRequest();
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getSmsCount() const;
	void setSmsCount(const std::string &smsCount);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);

private:
	int autoRenewPeriod_;
	int period_;
	bool autoPay_;
	std::string smsCount_;
	bool autoUseCoupon_;
	std::string periodUnit_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATECMSSMSPACKAGEORDERREQUEST_H_
