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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDLIVESTREAMMERGEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDLIVESTREAMMERGEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT AddLiveStreamMergeRequest : public RpcServiceRequest {
public:
	AddLiveStreamMergeRequest();
	~AddLiveStreamMergeRequest();
	std::string getInAppName2() const;
	void setInAppName2(const std::string &inAppName2);
	std::string getInAppName1() const;
	void setInAppName1(const std::string &inAppName1);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getInStreamName2() const;
	void setInStreamName2(const std::string &inStreamName2);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getInStreamName1() const;
	void setInStreamName1(const std::string &inStreamName1);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string inAppName2_;
	std::string inAppName1_;
	std::string startTime_;
	std::string protocol_;
	std::string appName_;
	std::string inStreamName2_;
	std::string streamName_;
	std::string inStreamName1_;
	std::string domainName_;
	std::string endTime_;
	long ownerId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDLIVESTREAMMERGEREQUEST_H_
