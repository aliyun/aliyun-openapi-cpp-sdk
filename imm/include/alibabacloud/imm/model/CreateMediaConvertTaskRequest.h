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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATEMEDIACONVERTTASKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATEMEDIACONVERTTASKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateMediaConvertTaskRequest : public RpcServiceRequest {
public:
	struct Sources {
		double duration;
		struct SubtitlesItem {
			double timeOffset;
			std::string language;
			std::string uRI;
		};
		SubtitlesItem subtitlesItem;
		std::vector<SubtitlesItem> subtitles;
		double startTime;
		std::string uRI;
	};
	struct Targets {
		std::string container;
		struct Image {
			struct SnapshotsItem {
				int number;
				std::string format;
				double width;
				double interval;
				double startTime;
				std::string scaleType;
				std::string uRI;
				double height;
			};
			SnapshotsItem snapshotsItem;
			std::vector<SnapshotsItem> snapshots;
			struct AnimationsItem {
				int number;
				double frameRate;
				std::string format;
				double width;
				double interval;
				double startTime;
				std::string scaleType;
				std::string uRI;
				double height;
			};
			AnimationsItem animationsItem;
			std::vector<AnimationsItem> animations;
			struct SpritesItem {
				int tileHeight;
				int number;
				int pad;
				int margin;
				float scaleWidth;
				std::string format;
				double interval;
				double startTime;
				std::string scaleType;
				float scaleHeight;
				std::string uRI;
				int tileWidth;
			};
			SpritesItem spritesItem;
			std::vector<SpritesItem> sprites;
		};
		Image image;
		struct Encryption {
			std::string protectionSystem;
		};
		Encryption encryption;
		struct Segment {
			double duration;
			std::string format;
			int startNumber;
		};
		Segment segment;
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
		bool stripMetadata;
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
		double pTSOffset;
	};
	struct Notification {
		struct MNS {
			std::string endpoint;
			std::string topicName;
		};
		MNS mNS;
		struct RocketMQ {
			std::string endpoint;
			std::string instanceId;
			std::string topicName;
		};
		RocketMQ rocketMQ;
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
	CreateMediaConvertTaskRequest();
	~CreateMediaConvertTaskRequest();
	std::vector<Sources> getSources() const;
	void setSources(const std::vector<Sources> &sources);
	std::vector<Targets> getTargets() const;
	void setTargets(const std::vector<Targets> &targets);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	int getAlignmentIndex() const;
	void setAlignmentIndex(int alignmentIndex);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);

private:
	std::vector<Sources> sources_;
	std::vector<Targets> targets_;
	std::string userData_;
	Notification notification_;
	std::string notifyEndpoint_;
	int alignmentIndex_;
	std::string projectName_;
	std::string notifyTopicName_;
	CredentialConfig credentialConfig_;
	std::map<std::string, std::string> tags_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEMEDIACONVERTTASKREQUEST_H_
