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

#ifndef ALIBABACLOUD_RTC_MODEL_STARTMPUTASKREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_STARTMPUTASKREQUEST_H_

#include <alibabacloud/rtc/RtcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rtc {
namespace Model {
class ALIBABACLOUD_RTC_EXPORT StartMPUTaskRequest : public RpcServiceRequest {
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
		int segmentType;
		std::string userId;
		struct Texts {
			int fontType;
			int fontColor;
			float y;
			std::string text;
			int zOrder;
			float x;
			int fontSize;
			int borderWidth;
			long borderColor;
			bool box;
			long boxColor;
			int boxBorderWidth;
			float alpha;
		};
		std::vector<Texts> texts;
		std::string sourceType;
		int paneId;
	};
	struct ClockWidgets {
		int fontType;
		int fontColor;
		float y;
		int zOrder;
		float x;
		int fontSize;
		int borderWidth;
		long borderColor;
		bool box;
		long boxColor;
		int boxBorderWidth;
		float alpha;
	};
	struct Watermarks {
		float alpha;
		float width;
		float height;
		float y;
		std::string url;
		int display;
		int zOrder;
		float x;
	};
	struct EnhancedParam {
		bool enablePortraitSegmentation;
		bool enableVirtualConference;
		bool enableCartoonPortrait;
		bool enableVoiceChanger;
		bool enableUserPaneBackground;
		std::string backgroundPath;
	};
	struct OutputStreamParams {
		std::string streamURL;
	};
	struct Backgrounds {
		float width;
		float height;
		float y;
		std::string url;
		int display;
		int zOrder;
		float x;
	};
	StartMPUTaskRequest();
	~StartMPUTaskRequest();
	int getPayloadType() const;
	void setPayloadType(int payloadType);
	std::vector<UserPanes> getUserPanes() const;
	void setUserPanes(const std::vector<UserPanes> &userPanes);
	int getBackgroundColor() const;
	void setBackgroundColor(int backgroundColor);
	int getReportVad() const;
	void setReportVad(int reportVad);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::vector<ClockWidgets> getClockWidgets() const;
	void setClockWidgets(const std::vector<ClockWidgets> &clockWidgets);
	std::string getShowLog() const;
	void setShowLog(const std::string &showLog);
	std::vector<std::string> getUnsubSpecCameraUsers() const;
	void setUnsubSpecCameraUsers(const std::vector<std::string> &unsubSpecCameraUsers);
	int getTaskType() const;
	void setTaskType(int taskType);
	std::vector<std::string> getUnsubSpecAudioUsers() const;
	void setUnsubSpecAudioUsers(const std::vector<std::string> &unsubSpecAudioUsers);
	long getVadInterval() const;
	void setVadInterval(long vadInterval);
	std::vector<Watermarks> getWatermarks() const;
	void setWatermarks(const std::vector<Watermarks> &watermarks);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getSubSpecAudioUsers() const;
	void setSubSpecAudioUsers(const std::vector<std::string> &subSpecAudioUsers);
	int getMediaEncode() const;
	void setMediaEncode(int mediaEncode);
	EnhancedParam getEnhancedParam() const;
	void setEnhancedParam(const EnhancedParam &enhancedParam);
	int getRtpExtInfo() const;
	void setRtpExtInfo(int rtpExtInfo);
	int getCropMode() const;
	void setCropMode(int cropMode);
	std::vector<std::string> getSubSpecCameraUsers() const;
	void setSubSpecCameraUsers(const std::vector<std::string> &subSpecCameraUsers);
	std::vector<OutputStreamParams> getOutputStreamParams() const;
	void setOutputStreamParams(const std::vector<OutputStreamParams> &outputStreamParams);
	std::string getTaskProfile() const;
	void setTaskProfile(const std::string &taskProfile);
	std::vector<long> getLayoutIds() const;
	void setLayoutIds(const std::vector<long> &layoutIds);
	std::string getStreamURL() const;
	void setStreamURL(const std::string &streamURL);
	int getStreamType() const;
	void setStreamType(int streamType);
	std::vector<std::string> getUnsubSpecShareScreenUsers() const;
	void setUnsubSpecShareScreenUsers(const std::vector<std::string> &unsubSpecShareScreenUsers);
	std::vector<std::string> getSubSpecShareScreenUsers() const;
	void setSubSpecShareScreenUsers(const std::vector<std::string> &subSpecShareScreenUsers);
	std::vector<std::string> getSubSpecUsers() const;
	void setSubSpecUsers(const std::vector<std::string> &subSpecUsers);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::vector<Backgrounds> getBackgrounds() const;
	void setBackgrounds(const std::vector<Backgrounds> &backgrounds);
	long getTimeStampRef() const;
	void setTimeStampRef(long timeStampRef);
	int getMixMode() const;
	void setMixMode(int mixMode);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);

private:
	int payloadType_;
	std::vector<UserPanes> userPanes_;
	int backgroundColor_;
	int reportVad_;
	std::string sourceType_;
	std::string taskId_;
	std::vector<ClockWidgets> clockWidgets_;
	std::string showLog_;
	std::vector<std::string> unsubSpecCameraUsers_;
	int taskType_;
	std::vector<std::string> unsubSpecAudioUsers_;
	long vadInterval_;
	std::vector<Watermarks> watermarks_;
	long ownerId_;
	std::vector<std::string> subSpecAudioUsers_;
	int mediaEncode_;
	EnhancedParam enhancedParam_;
	int rtpExtInfo_;
	int cropMode_;
	std::vector<std::string> subSpecCameraUsers_;
	std::vector<OutputStreamParams> outputStreamParams_;
	std::string taskProfile_;
	std::vector<long> layoutIds_;
	std::string streamURL_;
	int streamType_;
	std::vector<std::string> unsubSpecShareScreenUsers_;
	std::vector<std::string> subSpecShareScreenUsers_;
	std::vector<std::string> subSpecUsers_;
	std::string appId_;
	std::vector<Backgrounds> backgrounds_;
	long timeStampRef_;
	int mixMode_;
	std::string channelId_;
};
} // namespace Model
} // namespace Rtc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RTC_MODEL_STARTMPUTASKREQUEST_H_
