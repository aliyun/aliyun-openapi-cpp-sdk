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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERREDEEMREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERREDEEMREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveSingleTaskForCreatingOrderRedeemRequest : public RpcServiceRequest {
public:
	SaveSingleTaskForCreatingOrderRedeemRequest();
	~SaveSingleTaskForCreatingOrderRedeemRequest();
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	bool getUseCoupon() const;
	void setUseCoupon(bool useCoupon);
	std::string getPromotionNo() const;
	void setPromotionNo(const std::string &promotionNo);
	long getCurrentExpirationDate() const;
	void setCurrentExpirationDate(long currentExpirationDate);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	bool getUsePromotion() const;
	void setUsePromotion(bool usePromotion);

private:
	std::string domainName_;
	std::string couponNo_;
	bool useCoupon_;
	std::string promotionNo_;
	long currentExpirationDate_;
	std::string userClientIp_;
	std::string lang_;
	bool usePromotion_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERREDEEMREQUEST_H_
