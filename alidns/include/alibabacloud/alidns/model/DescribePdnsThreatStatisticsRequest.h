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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSTHREATSTATISTICSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSTHREATSTATISTICSREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT DescribePdnsThreatStatisticsRequest : public RpcServiceRequest {
public:
	DescribePdnsThreatStatisticsRequest();
	~DescribePdnsThreatStatisticsRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getThreatType() const;
	void setThreatType(const std::string &threatType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getThreatSourceIp() const;
	void setThreatSourceIp(const std::string &threatSourceIp);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getSubDomain() const;
	void setSubDomain(const std::string &subDomain);
	std::string getThreatLevel() const;
	void setThreatLevel(const std::string &threatLevel);

private:
	std::string type_;
	std::string startDate_;
	long pageNumber_;
	long pageSize_;
	std::string threatType_;
	std::string lang_;
	std::string direction_;
	std::string threatSourceIp_;
	std::string domainName_;
	std::string orderBy_;
	std::string endDate_;
	std::string subDomain_;
	std::string threatLevel_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSTHREATSTATISTICSREQUEST_H_
