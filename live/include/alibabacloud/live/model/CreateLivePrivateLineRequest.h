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

#ifndef ALIBABACLOUD_LIVE_MODEL_CREATELIVEPRIVATELINEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CREATELIVEPRIVATELINEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CreateLivePrivateLineRequest : public RpcServiceRequest {
public:
	CreateLivePrivateLineRequest();
	~CreateLivePrivateLineRequest();
	std::string getMaxBandwidth() const;
	void setMaxBandwidth(const std::string &maxBandwidth);
	std::string getReuse() const;
	void setReuse(const std::string &reuse);
	std::string getAccelerationArea() const;
	void setAccelerationArea(const std::string &accelerationArea);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVideoCenter() const;
	void setVideoCenter(const std::string &videoCenter);
	std::string getAccelerationType() const;
	void setAccelerationType(const std::string &accelerationType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string maxBandwidth_;
	std::string reuse_;
	std::string accelerationArea_;
	std::string appName_;
	std::string streamName_;
	std::string domainName_;
	long ownerId_;
	std::string videoCenter_;
	std::string accelerationType_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CREATELIVEPRIVATELINEREQUEST_H_
