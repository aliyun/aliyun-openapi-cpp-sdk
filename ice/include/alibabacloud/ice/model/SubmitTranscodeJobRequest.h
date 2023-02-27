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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITTRANSCODEJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITTRANSCODEJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitTranscodeJobRequest : public RpcServiceRequest {
public:
	struct OutputGroup {
		struct Output {
			std::string outputUrl;
			std::string media;
			std::string type;
		};
		Output output;
		struct ProcessConfig {
			struct TextWatermarksItem {
				struct OverwriteParams {
					std::string fontAlpha;
					std::string adaptive;
					std::string top;
					std::string left;
					int borderWidth;
					std::string fontColor;
					int fontSize;
					std::string fontName;
					std::string content;
					std::string borderColor;
				};
				OverwriteParams overwriteParams;
				std::string templateId;
			};
			TextWatermarksItem textWatermarksItem;
			std::vector<TextWatermarksItem> textWatermarks;
			struct SubtitlesItem {
				struct OverwriteParams {
					struct File {
						std::string media;
						std::string type;
					};
					File file;
					std::string format;
					std::string charEnc;
				};
				OverwriteParams overwriteParams;
				std::string templateId;
			};
			SubtitlesItem subtitlesItem;
			std::vector<SubtitlesItem> subtitles;
			struct CombineConfigsItem {
				double duration;
				double start;
				std::string videoIndex;
				std::string audioIndex;
			};
			CombineConfigsItem combineConfigsItem;
			std::vector<CombineConfigsItem> combineConfigs;
			struct Encryption {
				std::string cipherText;
				std::string decryptKeyUri;
				std::string encryptType;
			};
			Encryption encryption;
			struct ImageWatermarksItem {
				struct OverwriteParams {
					struct File {
						std::string media;
						std::string type;
					};
					File file;
					std::string dx;
					std::string dy;
					std::string width;
					struct Timeline {
						std::string duration;
						std::string start;
					};
					Timeline timeline;
					std::string referPos;
					std::string height;
				};
				OverwriteParams overwriteParams;
				std::string templateId;
			};
			ImageWatermarksItem imageWatermarksItem;
			std::vector<ImageWatermarksItem> imageWatermarks;
			struct Transcode {
				struct OverwriteParams {
					struct Container {
						std::string format;
					};
					Container container;
					struct MuxConfig {
						struct Segment {
							std::string duration;
							std::string forceSegTime;
						};
						Segment segment;
					};
					MuxConfig muxConfig;
					struct Video {
						std::string profile;
						std::string fps;
						std::string bufsize;
						std::string gop;
						std::string bitrate;
						std::string preset;
						std::string longShortMode;
						std::string remove;
						std::string pixFmt;
						std::string codec;
						std::string pad;
						std::string abrMax;
						std::string crf;
						std::string scanMode;
						std::string width;
						std::string maxrate;
						std::string crop;
						std::string height;
					};
					Video video;
					struct Audio {
						struct Volume {
							std::string method;
							std::string truePeak;
							std::string loudnessRangeTarget;
							std::string integratedLoudnessTarget;
						};
						Volume volume;
						std::string codec;
						std::string channels;
						std::string profile;
						std::string bitrate;
						std::string remove;
						std::string samplerate;
					};
					Audio audio;
					std::map<std::string, std::string> tags;
				};
				OverwriteParams overwriteParams;
				std::string templateId;
			};
			Transcode transcode;
			bool isInheritTags;
		};
		ProcessConfig processConfig;
	};
	struct InputGroup {
		std::string media;
		std::string inputUrl;
		std::string type;
	};
	struct ScheduleConfig {
		int priority;
		std::string pipelineId;
	};
	SubmitTranscodeJobRequest();
	~SubmitTranscodeJobRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::vector<OutputGroup> getOutputGroup() const;
	void setOutputGroup(const std::vector<OutputGroup> &outputGroup);
	std::vector<InputGroup> getInputGroup() const;
	void setInputGroup(const std::vector<InputGroup> &inputGroup);
	ScheduleConfig getScheduleConfig() const;
	void setScheduleConfig(const ScheduleConfig &scheduleConfig);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string clientToken_;
	std::string source_;
	std::string userData_;
	std::vector<OutputGroup> outputGroup_;
	std::vector<InputGroup> inputGroup_;
	ScheduleConfig scheduleConfig_;
	std::string name_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITTRANSCODEJOBREQUEST_H_
