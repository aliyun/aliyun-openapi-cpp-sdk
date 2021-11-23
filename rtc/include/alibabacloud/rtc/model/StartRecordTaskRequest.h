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

#ifndef ALIBABACLOUD_RTC_MODEL_STARTRECORDTASKREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_STARTRECORDTASKREQUEST_H_

#include <alibabacloud/rtc/RtcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rtc {
namespace Model {
class ALIBABACLOUD_RTC_EXPORT StartRecordTaskRequest : public RpcServiceRequest {
public:
	struct UserPanes {
		struct Images {
			float width;
			float height;
			float y;
			std::string url;
			int display;
			int zOrder;
			float x;
		};
		std::vector<Images> images;
		std::string userId;
		struct Texts {
			int fontType;
			int fontColor;
			float y;
			std::string text;
			int zOrder;
			float x;
			int fontSize;
		};
		std::vector<Texts> texts;
		std::string sourceType;
		int paneId;
	};
	StartRecordTaskRequest();
	~StartRecordTaskRequest();
	std::vector<UserPanes> getUserPanes() const;
	void setUserPanes(const std::vector<UserPanes> &userPanes);
	long getCropMode() const;
	void setCropMode(long cropMode);
	std::vector<std::string> getSubSpecCameraUsers() const;
	void setSubSpecCameraUsers(const std::vector<std::string> &subSpecCameraUsers);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getTaskProfile() const;
	void setTaskProfile(const std::string &taskProfile);
	std::vector<long> getLayoutIds() const;
	void setLayoutIds(const std::vector<long> &layoutIds);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getShowLog() const;
	void setShowLog(const std::string &showLog);
	std::vector<std::string> getUnsubSpecCameraUsers() const;
	void setUnsubSpecCameraUsers(const std::vector<std::string> &unsubSpecCameraUsers);
	int getStreamType() const;
	void setStreamType(int streamType);
	std::vector<std::string> getUnsubSpecAudioUsers() const;
	void setUnsubSpecAudioUsers(const std::vector<std::string> &unsubSpecAudioUsers);
	std::vector<std::string> getUnsubSpecShareScreenUsers() const;
	void setUnsubSpecShareScreenUsers(const std::vector<std::string> &unsubSpecShareScreenUsers);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::vector<std::string> getSubSpecAudioUsers() const;
	void setSubSpecAudioUsers(const std::vector<std::string> &subSpecAudioUsers);
	std::vector<std::string> getSubSpecShareScreenUsers() const;
	void setSubSpecShareScreenUsers(const std::vector<std::string> &subSpecShareScreenUsers);
	std::vector<std::string> getSubSpecUsers() const;
	void setSubSpecUsers(const std::vector<std::string> &subSpecUsers);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	int getMediaEncode() const;
	void setMediaEncode(int mediaEncode);
	int getMixMode() const;
	void setMixMode(int mixMode);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);

private:
	std::vector<UserPanes> userPanes_;
	long cropMode_;
	std::vector<std::string> subSpecCameraUsers_;
	std::string sourceType_;
	std::string taskProfile_;
	std::vector<long> layoutIds_;
	std::string taskId_;
	std::string showLog_;
	std::vector<std::string> unsubSpecCameraUsers_;
	int streamType_;
	std::vector<std::string> unsubSpecAudioUsers_;
	std::vector<std::string> unsubSpecShareScreenUsers_;
	long ownerId_;
	std::string templateId_;
	std::vector<std::string> subSpecAudioUsers_;
	std::vector<std::string> subSpecShareScreenUsers_;
	std::vector<std::string> subSpecUsers_;
	std::string appId_;
	int mediaEncode_;
	int mixMode_;
	std::string channelId_;
};
} // namespace Model
} // namespace Rtc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RTC_MODEL_STARTRECORDTASKREQUEST_H_
