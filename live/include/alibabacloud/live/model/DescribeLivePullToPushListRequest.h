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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHLISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHLISTREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLivePullToPushListRequest : public RpcServiceRequest {
public:
	DescribeLivePullToPushListRequest();
	~DescribeLivePullToPushListRequest();
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getDstUrl() const;
	void setDstUrl(const std::string &dstUrl);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string taskName_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string taskId_;
	std::string dstUrl_;
	long ownerId_;
	std::string region_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHLISTREQUEST_H_
