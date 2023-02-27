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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTTRANSCODEJOBSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTTRANSCODEJOBSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListTranscodeJobsRequest : public RpcServiceRequest {
public:
	ListTranscodeJobsRequest();
	~ListTranscodeJobsRequest();
	std::string getNextPageToken() const;
	void setNextPageToken(const std::string &nextPageToken);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEndOfCreateTime() const;
	void setEndOfCreateTime(const std::string &endOfCreateTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getParentJobId() const;
	void setParentJobId(const std::string &parentJobId);
	std::string getStartOfCreateTime() const;
	void setStartOfCreateTime(const std::string &startOfCreateTime);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string nextPageToken_;
	std::string jobId_;
	int pageSize_;
	std::string endOfCreateTime_;
	std::string orderBy_;
	std::string parentJobId_;
	std::string startOfCreateTime_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTTRANSCODEJOBSREQUEST_H_
