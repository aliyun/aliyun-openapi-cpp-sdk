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

#ifndef ALIBABACLOUD_LIVE_MODEL_STARTRTCCLOUDRECORDINGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_STARTRTCCLOUDRECORDINGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT StartRtcCloudRecordingRequest : public RpcServiceRequest {
public:
	struct StorageParams {
		struct FileInfoItem {
			std::string fileNamePattern;
			std::string format;
			std::string sliceNamePattern;
		};
		FileInfoItem fileInfoItem;
		std::vector<FileInfoItem> fileInfo;
		int storageType;
		struct OSSParams {
			std::string oSSBucket;
			std::string oSSEndpoint;
		};
		OSSParams oSSParams;
	};
	struct SubscribeParams {
		struct SubscribeUserIdListItem {
			int streamType;
			int sourceType;
			std::string userId;
		};
		SubscribeUserIdListItem subscribeUserIdListItem;
		std::vector<SubscribeUserIdListItem> subscribeUserIdList;
	};
	struct RecordParams {
		long maxFileDuration;
		int streamType;
		int recordMode;
	};
	struct MixTranscodeParams {
		int videoWidth;
		long audioBitrate;
		int videoFramerate;
		int videoHeight;
		long audioSampleRate;
		int videoBitrate;
		int frameFillType;
		std::string videoCodec;
		int audioChannels;
		int videoGop;
	};
	struct MixLayoutParams {
		struct UserPanesItem {
			int zOrder;
			std::string width;
			std::string x;
			std::string y;
			int sourceType;
			std::string userId;
			std::string height;
			struct SubBackground {
				int renderMode;
				std::string url;
			};
			SubBackground subBackground;
		};
		UserPanesItem userPanesItem;
		std::vector<UserPanesItem> userPanes;
		struct MixBackground {
			int renderMode;
			std::string url;
		};
		MixBackground mixBackground;
	};
	StartRtcCloudRecordingRequest();
	~StartRtcCloudRecordingRequest();
	StorageParams getStorageParams() const;
	void setStorageParams(const StorageParams &storageParams);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	SubscribeParams getSubscribeParams() const;
	void setSubscribeParams(const SubscribeParams &subscribeParams);
	RecordParams getRecordParams() const;
	void setRecordParams(const RecordParams &recordParams);
	MixTranscodeParams getMixTranscodeParams() const;
	void setMixTranscodeParams(const MixTranscodeParams &mixTranscodeParams);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);
	MixLayoutParams getMixLayoutParams() const;
	void setMixLayoutParams(const MixLayoutParams &mixLayoutParams);

private:
	StorageParams storageParams_;
	std::string notifyUrl_;
	SubscribeParams subscribeParams_;
	RecordParams recordParams_;
	MixTranscodeParams mixTranscodeParams_;
	std::string appId_;
	std::string channelId_;
	MixLayoutParams mixLayoutParams_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_STARTRTCCLOUDRECORDINGREQUEST_H_
