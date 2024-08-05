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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHTRACESBYPAGEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHTRACESBYPAGEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT SearchTracesByPageRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	struct ExclusionFilters {
		std::string value;
		std::string key;
	};
	SearchTracesByPageRequest();
	~SearchTracesByPageRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getPid() const;
	void setPid(const std::string &pid);
	long getStartTime() const;
	void setStartTime(long startTime);
	bool getReverse() const;
	void setReverse(bool reverse);
	long getMinDuration() const;
	void setMinDuration(long minDuration);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getIsError() const;
	void setIsError(bool isError);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getServiceIp() const;
	void setServiceIp(const std::string &serviceIp);
	std::vector<ExclusionFilters> getExclusionFilters() const;
	void setExclusionFilters(const std::vector<ExclusionFilters> &exclusionFilters);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getOperationName() const;
	void setOperationName(const std::string &operationName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);

private:
	long endTime_;
	std::string pid_;
	long startTime_;
	bool reverse_;
	long minDuration_;
	int pageNumber_;
	bool isError_;
	std::vector<Tags> tags_;
	std::string serviceIp_;
	std::vector<ExclusionFilters> exclusionFilters_;
	std::string regionId_;
	std::string operationName_;
	int pageSize_;
	std::string serviceName_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHTRACESBYPAGEREQUEST_H_
