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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDJOBSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDJOBSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListLiveRecordJobsRequest : public RpcServiceRequest {
public:
	ListLiveRecordJobsRequest();
	~ListLiveRecordJobsRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	long getPageNo() const;
	void setPageNo(long pageNo);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string endTime_;
	std::string startTime_;
	long pageNo_;
	long pageSize_;
	std::string sortBy_;
	std::string keyword_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDJOBSREQUEST_H_
