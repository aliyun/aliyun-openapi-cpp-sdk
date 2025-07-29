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

#ifndef ALIBABACLOUD_LIVE_MODEL_SETCASTERCONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETCASTERCONFIGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SetCasterConfigRequest : public RpcServiceRequest {
public:
	SetCasterConfigRequest();
	~SetCasterConfigRequest();
	int getChannelEnable() const;
	void setChannelEnable(int channelEnable);
	int getProgramEffect() const;
	void setProgramEffect(int programEffect);
	std::string getProgramName() const;
	void setProgramName(const std::string &programName);
	std::string getUrgentImageUrl() const;
	void setUrgentImageUrl(const std::string &urgentImageUrl);
	std::string getRecordConfig() const;
	void setRecordConfig(const std::string &recordConfig);
	std::string getUrgentMaterialId() const;
	void setUrgentMaterialId(const std::string &urgentMaterialId);
	std::string getTranscodeConfig() const;
	void setTranscodeConfig(const std::string &transcodeConfig);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCasterName() const;
	void setCasterName(const std::string &casterName);
	bool getAutoSwitchUrgentOn() const;
	void setAutoSwitchUrgentOn(bool autoSwitchUrgentOn);
	std::string getAutoSwitchUrgentConfig() const;
	void setAutoSwitchUrgentConfig(const std::string &autoSwitchUrgentConfig);
	std::string getUrgentLiveStreamUrl() const;
	void setUrgentLiveStreamUrl(const std::string &urgentLiveStreamUrl);
	std::string getSideOutputUrl() const;
	void setSideOutputUrl(const std::string &sideOutputUrl);
	std::string getSyncGroupsConfig() const;
	void setSyncGroupsConfig(const std::string &syncGroupsConfig);
	std::string getSideOutputUrlList() const;
	void setSideOutputUrlList(const std::string &sideOutputUrlList);
	std::string getCasterId() const;
	void setCasterId(const std::string &casterId);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	float getDelay() const;
	void setDelay(float delay);
	std::string getUrgentImageId() const;
	void setUrgentImageId(const std::string &urgentImageId);
	std::string getCallbackUrl() const;
	void setCallbackUrl(const std::string &callbackUrl);

private:
	int channelEnable_;
	int programEffect_;
	std::string programName_;
	std::string urgentImageUrl_;
	std::string recordConfig_;
	std::string urgentMaterialId_;
	std::string transcodeConfig_;
	std::string regionId_;
	std::string casterName_;
	bool autoSwitchUrgentOn_;
	std::string autoSwitchUrgentConfig_;
	std::string urgentLiveStreamUrl_;
	std::string sideOutputUrl_;
	std::string syncGroupsConfig_;
	std::string sideOutputUrlList_;
	std::string casterId_;
	std::string domainName_;
	long ownerId_;
	float delay_;
	std::string urgentImageId_;
	std::string callbackUrl_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SETCASTERCONFIGREQUEST_H_
