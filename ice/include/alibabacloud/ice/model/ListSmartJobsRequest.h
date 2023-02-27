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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTSMARTJOBSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTSMARTJOBSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListSmartJobsRequest : public RpcServiceRequest {
public:
	ListSmartJobsRequest();
	~ListSmartJobsRequest();
	long getShowInputInfo() const;
	void setShowInputInfo(long showInputInfo);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getJobState() const;
	void setJobState(const std::string &jobState);
	std::string getJobType() const;
	void setJobType(const std::string &jobType);
	long getPageNo() const;
	void setPageNo(long pageNo);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	long getStatus() const;
	void setStatus(long status);

private:
	long showInputInfo_;
	std::string title_;
	std::string nextToken_;
	long pageSize_;
	std::string keyword_;
	std::string jobState_;
	std::string jobType_;
	long pageNo_;
	long maxResults_;
	std::string sortBy_;
	long status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTSMARTJOBSREQUEST_H_
