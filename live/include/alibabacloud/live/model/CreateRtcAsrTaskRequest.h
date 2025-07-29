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

#ifndef ALIBABACLOUD_LIVE_MODEL_CREATERTCASRTASKREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CREATERTCASRTASKREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CreateRtcAsrTaskRequest : public RpcServiceRequest {
public:
	CreateRtcAsrTaskRequest();
	~CreateRtcAsrTaskRequest();
	std::string getAuthKey() const;
	void setAuthKey(const std::string &authKey);
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getTranslateEnabled() const;
	void setTranslateEnabled(bool translateEnabled);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getStreamURL() const;
	void setStreamURL(const std::string &streamURL);
	std::string getTargetLanguages() const;
	void setTargetLanguages(const std::string &targetLanguages);
	bool getAutoTerminateEnabled() const;
	void setAutoTerminateEnabled(bool autoTerminateEnabled);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRtcUserId() const;
	void setRtcUserId(const std::string &rtcUserId);
	long getReportInterval() const;
	void setReportInterval(long reportInterval);
	long getAutoTerminateDelay() const;
	void setAutoTerminateDelay(long autoTerminateDelay);
	std::string getSDKAppID() const;
	void setSDKAppID(const std::string &sDKAppID);
	std::string getCallbackURL() const;
	void setCallbackURL(const std::string &callbackURL);
	std::string getChannelID() const;
	void setChannelID(const std::string &channelID);

private:
	std::string authKey_;
	std::string language_;
	std::string mode_;
	std::string regionId_;
	bool translateEnabled_;
	std::string tag_;
	std::string streamURL_;
	std::string targetLanguages_;
	bool autoTerminateEnabled_;
	long ownerId_;
	std::string rtcUserId_;
	long reportInterval_;
	long autoTerminateDelay_;
	std::string sDKAppID_;
	std::string callbackURL_;
	std::string channelID_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CREATERTCASRTASKREQUEST_H_
