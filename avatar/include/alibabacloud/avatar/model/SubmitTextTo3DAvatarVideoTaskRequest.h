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
	struct VideoInfo {
		bool isAlpha;
		std::string backgroundImageUrl;
		bool isSubtitles;
		int resolution;
		int alphaFormat;
	};
	struct AvatarInfo {
		std::string code;
		int locate;
		int angle;
	};
	SubmitTextTo3DAvatarVideoTaskRequest();
	~SubmitTextTo3DAvatarVideoTaskRequest();
	App getApp() const;
	void setApp(const App &app);
	VideoInfo getVideoInfo() const;
	void setVideoInfo(const VideoInfo &videoInfo);
	AvatarInfo getAvatarInfo() const;
	void setAvatarInfo(const AvatarInfo &avatarInfo);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getText() const;
	void setText(const std::string &text);
	std::string getTitle() const;
	void setTitle(const std::string &title);

private:
	App app_;
	VideoInfo videoInfo_;
	AvatarInfo avatarInfo_;
	long tenantId_;
	std::string text_;
	std::string title_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_SUBMITTEXTTO3DAVATARVIDEOTASKREQUEST_H_
