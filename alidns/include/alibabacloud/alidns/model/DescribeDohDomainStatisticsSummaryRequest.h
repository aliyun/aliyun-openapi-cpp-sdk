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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOHDOMAINSTATISTICSSUMMARYREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOHDOMAINSTATISTICSSUMMARYREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT DescribeDohDomainStatisticsSummaryRequest : public RpcServiceRequest {
public:
	DescribeDohDomainStatisticsSummaryRequest();
	~DescribeDohDomainStatisticsSummaryRequest();
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDirection() const;
	void setDirection(const std::string &direction);

private:
	std::string domainName_;
	std::string orderBy_;
	std::string startDate_;
	int pageNumber_;
	std::string endDate_;
	int pageSize_;
	std::string lang_;
	std::string direction_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOHDOMAINSTATISTICSSUMMARYREQUEST_H_
