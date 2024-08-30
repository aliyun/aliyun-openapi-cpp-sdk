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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERACTIVATEREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERACTIVATEREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveSingleTaskForCreatingOrderActivateRequest : public RpcServiceRequest {
public:
	SaveSingleTaskForCreatingOrderActivateRequest();
	~SaveSingleTaskForCreatingOrderActivateRequest();
	std::string getCountry() const;
	void setCountry(const std::string &country);
	std::string getDns2() const;
	void setDns2(const std::string &dns2);
	std::string getDns1() const;
	void setDns1(const std::string &dns1);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getZhCity() const;
	void setZhCity(const std::string &zhCity);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getTelExt() const;
	void setTelExt(const std::string &telExt);
	std::string getProvince() const;
	void setProvince(const std::string &province);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getZhAddress() const;
	void setZhAddress(const std::string &zhAddress);
	std::string getTelephone() const;
	void setTelephone(const std::string &telephone);
	std::string getZhProvince() const;
	void setZhProvince(const std::string &zhProvince);
	std::string getRegistrantOrganization() const;
	void setRegistrantOrganization(const std::string &registrantOrganization);
	std::string getPromotionNo() const;
	void setPromotionNo(const std::string &promotionNo);
	std::string getRegistrantName() const;
	void setRegistrantName(const std::string &registrantName);
	bool getUsePromotion() const;
	void setUsePromotion(bool usePromotion);
	int getSubscriptionDuration() const;
	void setSubscriptionDuration(int subscriptionDuration);
	bool getPermitPremiumActivation() const;
	void setPermitPremiumActivation(bool permitPremiumActivation);
	std::string getCity() const;
	void setCity(const std::string &city);
	long getRegistrantProfileId() const;
	void setRegistrantProfileId(long registrantProfileId);
	bool getAliyunDns() const;
	void setAliyunDns(bool aliyunDns);
	std::string getZhRegistrantName() const;
	void setZhRegistrantName(const std::string &zhRegistrantName);
	std::string getPostalCode() const;
	void setPostalCode(const std::string &postalCode);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getZhRegistrantOrganization() const;
	void setZhRegistrantOrganization(const std::string &zhRegistrantOrganization);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getTelArea() const;
	void setTelArea(const std::string &telArea);
	std::string getRegistrantType() const;
	void setRegistrantType(const std::string &registrantType);
	bool getTrademarkDomainActivation() const;
	void setTrademarkDomainActivation(bool trademarkDomainActivation);
	bool getUseCoupon() const;
	void setUseCoupon(bool useCoupon);
	bool getEnableDomainProxy() const;
	void setEnableDomainProxy(bool enableDomainProxy);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);

private:
	std::string country_;
	std::string dns2_;
	std::string dns1_;
	std::string couponNo_;
	std::string zhCity_;
	std::string resourceGroupId_;
	std::string telExt_;
	std::string province_;
	std::string domainName_;
	std::string zhAddress_;
	std::string telephone_;
	std::string zhProvince_;
	std::string registrantOrganization_;
	std::string promotionNo_;
	std::string registrantName_;
	bool usePromotion_;
	int subscriptionDuration_;
	bool permitPremiumActivation_;
	std::string city_;
	long registrantProfileId_;
	bool aliyunDns_;
	std::string zhRegistrantName_;
	std::string postalCode_;
	std::string lang_;
	std::string email_;
	std::string zhRegistrantOrganization_;
	std::string address_;
	std::string telArea_;
	std::string registrantType_;
	bool trademarkDomainActivation_;
	bool useCoupon_;
	bool enableDomainProxy_;
	std::string userClientIp_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORCREATINGORDERACTIVATEREQUEST_H_
