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

#ifndef ALIBABACLOUD_NIS_MODEL_GETNISNETWORKRANKINGREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_GETNISNETWORKRANKINGREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT GetNisNetworkRankingRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string name;
		std::string value;
	};
	GetNisNetworkRankingRequest();
	~GetNisNetworkRankingRequest();
	bool getUseCrossAccount() const;
	void setUseCrossAccount(bool useCrossAccount);
	int getTopN() const;
	void setTopN(int topN);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	std::string getGroupBy() const;
	void setGroupBy(const std::string &groupBy);
	std::string getSort() const;
	void setSort(const std::string &sort);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getRegionNo() const;
	void setRegionNo(const std::string &regionNo);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	std::vector<std::string> getAccountIds() const;
	void setAccountIds(const std::vector<std::string> &accountIds);

private:
	bool useCrossAccount_;
	int topN_;
	std::string direction_;
	std::string orderBy_;
	long endTime_;
	long beginTime_;
	std::string groupBy_;
	std::string sort_;
	std::string resourceType_;
	std::string regionNo_;
	std::vector<Filter> filter_;
	std::vector<std::string> accountIds_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_GETNISNETWORKRANKINGREQUEST_H_
