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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERRENEWREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERRENEWREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveSingleTaskForCreatingOrderRenewRequest : public RpcServiceRequest {
public:
	SaveSingleTaskForCreatingOrderRenewRequest();
	~SaveSingleTaskForCreatingOrderRenewRequest();
	int getSubscriptionDuration() const;
	void setSubscriptionDuration(int subscriptionDuration);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	long getCurrentExpirationDate() const;
	void setCurrentExpirationDate(long currentExpirationDate);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	bool getUseCoupon() const;
	void setUseCoupon(bool useCoupon);
	std::string getPromotionNo() const;
	void setPromotionNo(const std::string &promotionNo);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	bool getUsePromotion() const;
	void setUsePromotion(bool usePromotion);

private:
	int subscriptionDuration_;
	std::string couponNo_;
	long currentExpirationDate_;
	std::string lang_;
	std::string domainName_;
	bool useCoupon_;
	std::string promotionNo_;
	std::string userClientIp_;
	bool usePromotion_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERRENEWREQUEST_H_
