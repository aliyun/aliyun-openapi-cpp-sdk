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

#ifndef ALIBABACLOUD_LIVE_MODEL_CREATELIVEPULLTOPUSHREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CREATELIVEPULLTOPUSHREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CreateLivePullToPushRequest : public RpcServiceRequest {
public:
	CreateLivePullToPushRequest();
	~CreateLivePullToPushRequest();
	int getFileIndex() const;
	void setFileIndex(int fileIndex);
	int getRetryCount() const;
	void setRetryCount(int retryCount);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getRepeatNumber() const;
	void setRepeatNumber(int repeatNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSourceProtocol() const;
	void setSourceProtocol(const std::string &sourceProtocol);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	int getOffset() const;
	void setOffset(int offset);
	std::string getDstUrl() const;
	void setDstUrl(const std::string &dstUrl);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getSourceUrls() const;
	void setSourceUrls(const std::vector<std::string> &sourceUrls);
	int getRetryInterval() const;
	void setRetryInterval(int retryInterval);
	std::string getCallbackUrl() const;
	void setCallbackUrl(const std::string &callbackUrl);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	int fileIndex_;
	int retryCount_;
	std::string taskName_;
	std::string startTime_;
	int repeatNumber_;
	std::string regionId_;
	std::string sourceProtocol_;
	std::string sourceType_;
	int offset_;
	std::string dstUrl_;
	std::string endTime_;
	long ownerId_;
	std::vector<std::string> sourceUrls_;
	int retryInterval_;
	std::string callbackUrl_;
	std::string region_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CREATELIVEPULLTOPUSHREQUEST_H_
