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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINLISTREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINLISTREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT QueryDomainListRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	QueryDomainListRequest();
	~QueryDomainListRequest();
	std::string getProductDomainType() const;
	void setProductDomainType(const std::string &productDomainType);
	std::string getCcompany() const;
	void setCcompany(const std::string &ccompany);
	std::string getOrderKeyType() const;
	void setOrderKeyType(const std::string &orderKeyType);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getOrderByType() const;
	void setOrderByType(const std::string &orderByType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getQueryType() const;
	void setQueryType(const std::string &queryType);
	long getEndExpirationDate() const;
	void setEndExpirationDate(long endExpirationDate);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getStartExpirationDate() const;
	void setStartExpirationDate(long startExpirationDate);
	std::string getDomainGroupId() const;
	void setDomainGroupId(const std::string &domainGroupId);
	long getEndRegistrationDate() const;
	void setEndRegistrationDate(long endRegistrationDate);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	long getStartRegistrationDate() const;
	void setStartRegistrationDate(long startRegistrationDate);

private:
	std::string productDomainType_;
	std::string ccompany_;
	std::string orderKeyType_;
	int pageNum_;
	std::string orderByType_;
	std::string resourceGroupId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string lang_;
	std::string queryType_;
	long endExpirationDate_;
	std::string domainName_;
	long startExpirationDate_;
	std::string domainGroupId_;
	long endRegistrationDate_;
	std::string userClientIp_;
	long startRegistrationDate_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINLISTREQUEST_H_
