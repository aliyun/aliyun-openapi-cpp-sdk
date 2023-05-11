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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBERECORDRESOLVESTATISTICSSUMMARYREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBERECORDRESOLVESTATISTICSSUMMARYREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT DescribeRecordResolveStatisticsSummaryRequest : public RpcServiceRequest {
public:
	DescribeRecordResolveStatisticsSummaryRequest();
	~DescribeRecordResolveStatisticsSummaryRequest();
	long getThreshold() const;
	void setThreshold(long threshold);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getDomainType() const;
	void setDomainType(const std::string &domainType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getSearchMode() const;
	void setSearchMode(const std::string &searchMode);

private:
	long threshold_;
	std::string startDate_;
	int pageNumber_;
	std::string domainType_;
	int pageSize_;
	std::string keyword_;
	std::string lang_;
	std::string direction_;
	std::string domainName_;
	std::string endDate_;
	std::string userClientIp_;
	std::string searchMode_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBERECORDRESOLVESTATISTICSSUMMARYREQUEST_H_
