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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETRUMOCUSTATISTICDATAREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_GETRUMOCUSTATISTICDATAREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT GetRumOcuStatisticDataRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string opType;
		ObjectOfAny value;
		std::string key;
	};
	GetRumOcuStatisticDataRequest();
	~GetRumOcuStatisticDataRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPage() const;
	void setPage(int page);
	std::string getQueryType() const;
	void setQueryType(const std::string &queryType);
	std::vector<std::string> getGroup() const;
	void setGroup(const std::vector<std::string> &group);

private:
	long endTime_;
	long startTime_;
	std::vector<Filter> filter_;
	std::string regionId_;
	int pageSize_;
	int page_;
	std::string queryType_;
	std::vector<std::string> group_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_GETRUMOCUSTATISTICDATAREQUEST_H_
