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

#ifndef ALIBABACLOUD_IMM_MODEL_GENERATEVIDEOPLAYLISTREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_GENERATEVIDEOPLAYLISTREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT GenerateVideoPlaylistRequest : public RpcServiceRequest {
public:
	struct Targets {
		float duration;
		float float;
		std::vector<float> initialSegments;
		struct Subtitle {
			bool disableSubtitle;
			int integer;
			std::vector<int> stream;
			struct ExtractSubtitle {
				std::string format;
				std::string uRI;
			};
			ExtractSubtitle extractSubtitle;
		};
		Subtitle subtitle;
		int transcodeAhead;
		struct Video {
			struct FilterVideo {
				struct DelogosItem {
					double duration;
					float dx;
					float dy;
					float width;
					std::string referPos;
					double startTime;
					float height;
				};
				DelogosItem delogosItem;
				std::vector<DelogosItem> delogos;
				struct WatermarksItem {
					float fontApha;
					int fontSize;
					double startTime;
					std::string type;
					std::string fontName;
					std::string uRI;
					std::string content;
					std::string borderColor;
					double duration;
					float dx;
					float dy;
					int borderWidth;
					float width;
					std::string fontColor;
					std::string referPos;
					float height;
				};
				WatermarksItem watermarksItem;
				std::vector<WatermarksItem> watermarks;
			};
			FilterVideo filterVideo;
			int integer;
			std::vector<int> stream;
			bool disableVideo;
			struct TranscodeVideo {
				std::string resolutionOption;
				int gOPSize;
				std::string pixelFormat;
				float frameRate;
				int rotation;
				int bitrate;
				int bufferSize;
				std::string resolution;
				int bFrames;
				int maxBitrate;
				std::string codec;
				std::string bitrateOption;
				int refs;
				float cRF;
				std::string scaleType;
				std::string frameRateOption;
				bool adaptiveResolutionDirection;
			};
			TranscodeVideo transcodeVideo;
		};
		Video video;
		struct Audio {
			long long;
			std::vector<long> stream;
			bool disableAudio;
			struct TranscodeAudio {
				std::string codec;
				std::string bitrateOption;
				int channel;
				int bitrate;
				std::string sampleRateOption;
				int quality;
				int sampleRate;
			};
			TranscodeAudio transcodeAudio;
			struct FilterAudio {
				bool mixing;
			};
			FilterAudio filterAudio;
		};
		Audio audio;
		std::string uRI;
		float speed;
		float initialTranscode;
	};
	struct CredentialConfig {
		struct ChainItem {
			std::string role;
			std::string roleType;
			std::string assumeRoleFor;
		};
		ChainItem chainItem;
		std::vector<ChainItem> chain;
		std::string serviceRole;
		std::string policy;
	};
	struct SourceSubtitles {
		std::string language;
		std::string uRI;
	};
	GenerateVideoPlaylistRequest();
	~GenerateVideoPlaylistRequest();
	float getSourceDuration() const;
	void setSourceDuration(float sourceDuration);
	std::vector<Targets> getTargets() const;
	void setTargets(const std::vector<Targets> &targets);
	std::string getMasterURI() const;
	void setMasterURI(const std::string &masterURI);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	float getSourceStartTime() const;
	void setSourceStartTime(float sourceStartTime);
	std::string getSourceURI() const;
	void setSourceURI(const std::string &sourceURI);
	std::vector<SourceSubtitles> getSourceSubtitles() const;
	void setSourceSubtitles(const std::vector<SourceSubtitles> &sourceSubtitles);

private:
	float sourceDuration_;
	std::vector<Targets> targets_;
	std::string masterURI_;
	std::string projectName_;
	CredentialConfig credentialConfig_;
	std::map<std::string, std::string> tags_;
	float sourceStartTime_;
	std::string sourceURI_;
	std::vector<SourceSubtitles> sourceSubtitles_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_GENERATEVIDEOPLAYLISTREQUEST_H_
