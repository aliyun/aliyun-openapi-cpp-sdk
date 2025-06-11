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

#ifndef ALIBABACLOUD_LIVE_MODEL_QUERYLIVEDOMAINMULTISTREAMLISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_QUERYLIVEDOMAINMULTISTREAMLISTREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT QueryLiveDomainMultiStreamListRequest : public RpcServiceRequest {
public:
	QueryLiveDomainMultiStreamListRequest();
	~QueryLiveDomainMultiStreamListRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDomain() const;
	void setDomain(const std::string &domain);

private:
	std::string startTime_;
	long pageNumber_;
	int pageSize_;
	std::string streamName_;
	std::string endTime_;
	long ownerId_;
	std::string domain_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_QUERYLIVEDOMAINMULTISTREAMLISTREQUEST_H_
