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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSONLINELISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSONLINELISTREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamsOnlineListRequest : public RpcServiceRequest {
public:
	DescribeLiveStreamsOnlineListRequest();
	~DescribeLiveStreamsOnlineListRequest();
	std::string getOnlyStream() const;
	void setOnlyStream(const std::string &onlyStream);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getIsGetCurrentRate() const;
	void setIsGetCurrentRate(bool isGetCurrentRate);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getQueryType() const;
	void setQueryType(const std::string &queryType);
	std::string getStreamType() const;
	void setStreamType(const std::string &streamType);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string onlyStream_;
	std::string startTime_;
	int pageNum_;
	std::string type_;
	std::string appName_;
	std::string regionId_;
	int pageSize_;
	bool isGetCurrentRate_;
	std::string streamName_;
	std::string queryType_;
	std::string streamType_;
	std::string domainName_;
	std::string endTime_;
	std::string orderBy_;
	long ownerId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSONLINELISTREQUEST_H_
