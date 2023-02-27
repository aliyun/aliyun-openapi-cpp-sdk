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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTJOBSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTJOBSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListLiveSnapshotJobsRequest : public RpcServiceRequest {
public:
	ListLiveSnapshotJobsRequest();
	~ListLiveSnapshotJobsRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSearchKeyWord() const;
	void setSearchKeyWord(const std::string &searchKeyWord);
	int getPageNo() const;
	void setPageNo(int pageNo);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string endTime_;
	std::string startTime_;
	std::string searchKeyWord_;
	int pageNo_;
	int pageSize_;
	std::string sortBy_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTJOBSREQUEST_H_
