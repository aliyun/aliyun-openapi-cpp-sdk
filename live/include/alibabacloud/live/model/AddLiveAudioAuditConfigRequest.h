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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDLIVEAUDIOAUDITCONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDLIVEAUDIOAUDITCONFIGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT AddLiveAudioAuditConfigRequest : public RpcServiceRequest {
public:
	AddLiveAudioAuditConfigRequest();
	~AddLiveAudioAuditConfigRequest();
	std::string getOssEndpoint() const;
	void setOssEndpoint(const std::string &ossEndpoint);
	std::string getOssObject() const;
	void setOssObject(const std::string &ossObject);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getOssBucket() const;
	void setOssBucket(const std::string &ossBucket);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);

private:
	std::string ossEndpoint_;
	std::string ossObject_;
	std::string appName_;
	std::string regionId_;
	std::string streamName_;
	std::string ossBucket_;
	std::string domainName_;
	long ownerId_;
	std::string bizType_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDLIVEAUDIOAUDITCONFIGREQUEST_H_
