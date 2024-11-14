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

#ifndef ALIBABACLOUD_LIVE_MODEL_STARTLIVEMPUTASKREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_STARTLIVEMPUTASKREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT StartLiveMPUTaskRequest : public RpcServiceRequest {
public:
	struct SingleSubParams {
		std::string string;
		std::vector<std::string> mixAudioUserIds;
		std::string streamType;
		std::string sourceType;
		std::string userId;
	};
	struct MultiStreamURL {
		bool isAliCdn;
		std::string uRL;
	};
	struct SeiParams {
		std::string payloadType;
		struct LayoutVolume {
			std::string followIdr;
			std::string interval;
		};
		LayoutVolume layoutVolume;
		struct PassThrough {
			std::string followIdr;
			std::string payloadContentKey;
			std::string payloadContent;
			std::string interval;
		};
		PassThrough passThrough;
	};
	struct TranscodeParams {
		struct Layout {
			struct UserPanesItem {
				std::string backgroundImageUrl;
				std::string zOrder;
				std::string width;
				std::string x;
				std::string y;
				struct UserInfo {
					std::string sourceType;
					std::string userId;
					std::string channelId;
				};
				UserInfo userInfo;
				std::string renderMode;
				std::string height;
			};
			UserPanesItem userPanesItem;
			std::vector<UserPanesItem> userPanes;
			std::string layoutMode;
			struct MaxVideoUser {
				std::string streamType;
				std::string sourceType;
				std::string userId;
				std::string channelId;
			};
			MaxVideoUser maxVideoUser;
		};
		Layout layout;
		struct Background {
			std::string renderMode;
			std::string uRL;
		};
		Background background;
		struct UserInfosItem {
			std::string streamType;
			std::string sourceType;
			std::string userId;
			std::string channelId;
		};
		UserInfosItem userInfosItem;
		std::vector<UserInfosItem> userInfos;
		struct EncodeParams {
			std::string audioOnly;
			std::string videoWidth;
			std::string audioBitrate;
			std::string enhancedParam;
			std::string videoFramerate;
			std::string videoHeight;
			std::string audioSampleRate;
			std::string videoBitrate;
			std::string videoCodec;
			std::string audioChannels;
			std::string videoGop;
		};
		EncodeParams encodeParams;
	};
	StartLiveMPUTaskRequest();
	~StartLiveMPUTaskRequest();
	SingleSubParams getSingleSubParams() const;
	void setSingleSubParams(const SingleSubParams &singleSubParams);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getStreamURL() const;
	void setStreamURL(const std::string &streamURL);
	std::vector<MultiStreamURL> getMultiStreamURL() const;
	void setMultiStreamURL(const std::vector<MultiStreamURL> &multiStreamURL);
	std::string getMaxIdleTime() const;
	void setMaxIdleTime(const std::string &maxIdleTime);
	SeiParams getSeiParams() const;
	void setSeiParams(const SeiParams &seiParams);
	TranscodeParams getTranscodeParams() const;
	void setTranscodeParams(const TranscodeParams &transcodeParams);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getMixMode() const;
	void setMixMode(const std::string &mixMode);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);

private:
	SingleSubParams singleSubParams_;
	std::string taskId_;
	std::string streamURL_;
	std::vector<MultiStreamURL> multiStreamURL_;
	std::string maxIdleTime_;
	SeiParams seiParams_;
	TranscodeParams transcodeParams_;
	std::string appId_;
	std::string region_;
	std::string mixMode_;
	std::string channelId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_STARTLIVEMPUTASKREQUEST_H_
