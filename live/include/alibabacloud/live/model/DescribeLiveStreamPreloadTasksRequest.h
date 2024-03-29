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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMPRELOADTASKSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMPRELOADTASKSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamPreloadTasksRequest : public RpcServiceRequest {
public:
	DescribeLiveStreamPreloadTasksRequest();
	~DescribeLiveStreamPreloadTasksRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPlayUrl() const;
	void setPlayUrl(const std::string &playUrl);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string startTime_;
	int pageNum_;
	int pageSize_;
	std::string taskId_;
	std::string domainName_;
	std::string endTime_;
	long ownerId_;
	std::string playUrl_;
	std::string status_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMPRELOADTASKSREQUEST_H_
