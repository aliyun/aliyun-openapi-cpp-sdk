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

#ifndef ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEAISTUDIOREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEAISTUDIOREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ModifyLiveAIStudioRequest : public RpcServiceRequest {
public:
	struct MediaLayout {
		float positionX;
		float positionY;
		float heightNormalized;
	};
	struct MattingLayout {
		float positionX;
		float positionY;
		float heightNormalized;
	};
	ModifyLiveAIStudioRequest();
	~ModifyLiveAIStudioRequest();
	std::string getBackgroundResourceId() const;
	void setBackgroundResourceId(const std::string &backgroundResourceId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	MediaLayout getMediaLayout() const;
	void setMediaLayout(const MediaLayout &mediaLayout);
	std::string getBackgroundType() const;
	void setBackgroundType(const std::string &backgroundType);
	std::string getMattingType() const;
	void setMattingType(const std::string &mattingType);
	std::string getMediaResourceUrl() const;
	void setMediaResourceUrl(const std::string &mediaResourceUrl);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getHeight() const;
	void setHeight(int height);
	std::string getBackgroundResourceUrl() const;
	void setBackgroundResourceUrl(const std::string &backgroundResourceUrl);
	std::string getMediaResourceId() const;
	void setMediaResourceId(const std::string &mediaResourceId);
	MattingLayout getMattingLayout() const;
	void setMattingLayout(const MattingLayout &mattingLayout);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getStudioName() const;
	void setStudioName(const std::string &studioName);
	int getWidth() const;
	void setWidth(int width);
	std::string getMediaType() const;
	void setMediaType(const std::string &mediaType);

private:
	std::string backgroundResourceId_;
	std::string description_;
	MediaLayout mediaLayout_;
	std::string backgroundType_;
	std::string mattingType_;
	std::string mediaResourceUrl_;
	std::string regionId_;
	int height_;
	std::string backgroundResourceUrl_;
	std::string mediaResourceId_;
	MattingLayout mattingLayout_;
	long ownerId_;
	std::string studioName_;
	int width_;
	std::string mediaType_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEAISTUDIOREQUEST_H_
