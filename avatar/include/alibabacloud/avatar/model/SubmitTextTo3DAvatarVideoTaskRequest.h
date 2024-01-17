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

#ifndef ALIBABACLOUD_AVATAR_MODEL_SUBMITTEXTTO3DAVATARVIDEOTASKREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_SUBMITTEXTTO3DAVATARVIDEOTASKREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT SubmitTextTo3DAvatarVideoTaskRequest : public RpcServiceRequest {
public:
	struct App {
		std::string appId;
	};
	struct AudioInfo {
		std::string voice;
		int volume;
		int speechRate;
		int pitchRate;
		int sampleRate;
	};
	struct AvatarInfo {
		std::string code;
		int locate;
		int angle;
		std::string industryCode;
	};
	struct VideoInfo {
		bool isAlpha;
		std::string backgroundImageUrl;
		bool isSubtitles;
		bool subtitleEmbedded;
		struct SubtitleStyle {
			std::string color;
			int size;
			std::string name;
			int y;
			std::string outlineColor;
		};
		SubtitleStyle subtitleStyle;
		int resolution;
		int alphaFormat;
	};
	SubmitTextTo3DAvatarVideoTaskRequest();
	~SubmitTextTo3DAvatarVideoTaskRequest();
	App getApp() const;
	void setApp(const App &app);
	AudioInfo getAudioInfo() const;
	void setAudioInfo(const AudioInfo &audioInfo);
	AvatarInfo getAvatarInfo() const;
	void setAvatarInfo(const AvatarInfo &avatarInfo);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getExtParams() const;
	void setExtParams(const std::string &extParams);
	VideoInfo getVideoInfo() const;
	void setVideoInfo(const VideoInfo &videoInfo);
	std::string getCallbackParams() const;
	void setCallbackParams(const std::string &callbackParams);
	long getTenantId() const;
	void setTenantId(long tenantId);
	bool getCallback() const;
	void setCallback(bool callback);
	std::string getExtParams_CLS() const;
	void setExtParams_CLS(const std::string &extParams_CLS);
	std::string getText() const;
	void setText(const std::string &text);
	std::string getCallbackParams_CLS() const;
	void setCallbackParams_CLS(const std::string &callbackParams_CLS);

private:
	App app_;
	AudioInfo audioInfo_;
	AvatarInfo avatarInfo_;
	std::string title_;
	std::string extParams_;
	VideoInfo videoInfo_;
	std::string callbackParams_;
	long tenantId_;
	bool callback_;
	std::string extParams_CLS_;
	std::string text_;
	std::string callbackParams_CLS_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_SUBMITTEXTTO3DAVATARVIDEOTASKREQUEST_H_
