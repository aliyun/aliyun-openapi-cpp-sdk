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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMMONITORLISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMMONITORLISTREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamMonitorListRequest : public RpcServiceRequest {
public:
	DescribeLiveStreamMonitorListRequest();
	~DescribeLiveStreamMonitorListRequest();
	std::string getMonitorId() const;
	void setMonitorId(const std::string &monitorId);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getOrderRule() const;
	void setOrderRule(int orderRule);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string monitorId_;
	int pageNum_;
	std::string regionId_;
	int pageSize_;
	long ownerId_;
	int orderRule_;
	int status_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMMONITORLISTREQUEST_H_
