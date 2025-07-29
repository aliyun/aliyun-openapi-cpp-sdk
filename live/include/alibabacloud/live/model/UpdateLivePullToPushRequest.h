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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATELIVEPULLTOPUSHREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATELIVEPULLTOPUSHREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateLivePullToPushRequest : public RpcServiceRequest {
public:
	UpdateLivePullToPushRequest();
	~UpdateLivePullToPushRequest();
	int getFileIndex() const;
	void setFileIndex(int fileIndex);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getRepeatNumber() const;
	void setRepeatNumber(int repeatNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	int getOffset() const;
	void setOffset(int offset);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getSourceUrls() const;
	void setSourceUrls(const std::vector<std::string> &sourceUrls);
	std::string getCallbackUrl() const;
	void setCallbackUrl(const std::string &callbackUrl);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	int fileIndex_;
	std::string startTime_;
	int repeatNumber_;
	std::string regionId_;
	std::string taskId_;
	int offset_;
	std::string endTime_;
	long ownerId_;
	std::vector<std::string> sourceUrls_;
	std::string callbackUrl_;
	std::string region_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATELIVEPULLTOPUSHREQUEST_H_
