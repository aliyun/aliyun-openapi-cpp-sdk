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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATECMSORDERREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATECMSORDERREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateCmsOrderRequest : public RpcServiceRequest {
public:
	CreateCmsOrderRequest();
	~CreateCmsOrderRequest();
	std::string getSmsCount() const;
	void setSmsCount(const std::string &smsCount);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getLogMonitorStream() const;
	void setLogMonitorStream(const std::string &logMonitorStream);
	std::string getCustomTimeSeries() const;
	void setCustomTimeSeries(const std::string &customTimeSeries);
	std::string getApiCount() const;
	void setApiCount(const std::string &apiCount);
	std::string getPhoneCount() const;
	void setPhoneCount(const std::string &phoneCount);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getSuggestType() const;
	void setSuggestType(const std::string &suggestType);
	std::string getEventStoreNum() const;
	void setEventStoreNum(const std::string &eventStoreNum);
	std::string getSiteTaskNum() const;
	void setSiteTaskNum(const std::string &siteTaskNum);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getSiteOperatorNum() const;
	void setSiteOperatorNum(const std::string &siteOperatorNum);
	std::string getSiteEcsNum() const;
	void setSiteEcsNum(const std::string &siteEcsNum);
	std::string getEventStoreTime() const;
	void setEventStoreTime(const std::string &eventStoreTime);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string smsCount_;
	bool autoUseCoupon_;
	std::string logMonitorStream_;
	std::string customTimeSeries_;
	std::string apiCount_;
	std::string phoneCount_;
	int autoRenewPeriod_;
	int period_;
	bool autoPay_;
	std::string suggestType_;
	std::string eventStoreNum_;
	std::string siteTaskNum_;
	std::string periodUnit_;
	std::string siteOperatorNum_;
	std::string siteEcsNum_;
	std::string eventStoreTime_;
	std::string payType_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATECMSORDERREQUEST_H_
