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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYADVANCEDDOMAINLISTREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYADVANCEDDOMAINLISTREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT QueryAdvancedDomainListRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	QueryAdvancedDomainListRequest();
	~QueryAdvancedDomainListRequest();
	std::string getProductDomainType() const;
	void setProductDomainType(const std::string &productDomainType);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getExcluded() const;
	void setExcluded(const std::string &excluded);
	int getStartLength() const;
	void setStartLength(int startLength);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getExcludedSuffix() const;
	void setExcludedSuffix(bool excludedSuffix);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getLang() const;
	void setLang(const std::string &lang);
	bool getExcludedPrefix() const;
	void setExcludedPrefix(bool excludedPrefix);
	std::string getKeyWord() const;
	void setKeyWord(const std::string &keyWord);
	bool getProductDomainTypeSort() const;
	void setProductDomainTypeSort(bool productDomainTypeSort);
	long getEndExpirationDate() const;
	void setEndExpirationDate(long endExpirationDate);
	std::string getSuffixs() const;
	void setSuffixs(const std::string &suffixs);
	bool getDomainNameSort() const;
	void setDomainNameSort(bool domainNameSort);
	bool getExpirationDateSort() const;
	void setExpirationDateSort(bool expirationDateSort);
	long getStartExpirationDate() const;
	void setStartExpirationDate(long startExpirationDate);
	int getDomainStatus() const;
	void setDomainStatus(int domainStatus);
	long getDomainGroupId() const;
	void setDomainGroupId(long domainGroupId);
	bool getKeyWordSuffix() const;
	void setKeyWordSuffix(bool keyWordSuffix);
	bool getKeyWordPrefix() const;
	void setKeyWordPrefix(bool keyWordPrefix);
	int getTradeType() const;
	void setTradeType(int tradeType);
	long getEndRegistrationDate() const;
	void setEndRegistrationDate(long endRegistrationDate);
	int getForm() const;
	void setForm(int form);
	bool getIsPremiumDomain() const;
	void setIsPremiumDomain(bool isPremiumDomain);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	bool getRegistrationDateSort() const;
	void setRegistrationDateSort(bool registrationDateSort);
	long getStartRegistrationDate() const;
	void setStartRegistrationDate(long startRegistrationDate);
	int getEndLength() const;
	void setEndLength(int endLength);

private:
	std::string productDomainType_;
	int pageNum_;
	std::string excluded_;
	int startLength_;
	std::string resourceGroupId_;
	bool excludedSuffix_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string lang_;
	bool excludedPrefix_;
	std::string keyWord_;
	bool productDomainTypeSort_;
	long endExpirationDate_;
	std::string suffixs_;
	bool domainNameSort_;
	bool expirationDateSort_;
	long startExpirationDate_;
	int domainStatus_;
	long domainGroupId_;
	bool keyWordSuffix_;
	bool keyWordPrefix_;
	int tradeType_;
	long endRegistrationDate_;
	int form_;
	bool isPremiumDomain_;
	std::string userClientIp_;
	bool registrationDateSort_;
	long startRegistrationDate_;
	int endLength_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYADVANCEDDOMAINLISTREQUEST_H_
