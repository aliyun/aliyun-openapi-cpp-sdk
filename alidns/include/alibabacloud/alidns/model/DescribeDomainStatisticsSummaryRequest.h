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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINSTATISTICSSUMMARYREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINSTATISTICSSUMMARYREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT DescribeDomainStatisticsSummaryRequest : public RpcServiceRequest {
public:
	DescribeDomainStatisticsSummaryRequest();
	~DescribeDomainStatisticsSummaryRequest();
	long getThreshold() const;
	void setThreshold(long threshold);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getSearchMode() const;
	void setSearchMode(const std::string &searchMode);

private:
	long threshold_;
	std::string startDate_;
	long pageNumber_;
	long pageSize_;
	std::string lang_;
	std::string keyword_;
	std::string direction_;
	std::string orderBy_;
	std::string endDate_;
	std::string userClientIp_;
	std::string searchMode_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINSTATISTICSSUMMARYREQUEST_H_
