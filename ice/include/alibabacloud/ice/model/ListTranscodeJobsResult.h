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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTTRANSCODEJOBSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTTRANSCODEJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT ListTranscodeJobsResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct ScheduleConfig
					{
						int priority;
						std::string pipelineId;
					};
					struct InputGroupItem
					{
						std::string type;
						std::string media;
						std::string inputUrl;
					};
					struct OutputGroupItem
					{
						struct Output
						{
							std::string type;
							std::string media;
							std::string outputUrl;
						};
						struct ProcessConfig
						{
							struct Transcode
							{
								struct OverwriteParams4
								{
									struct Video
									{
										std::string bufsize;
										std::string scanMode;
										std::string preset;
										std::string fps;
										std::string longShortMode;
										std::string gop;
										std::string remove;
										std::string pixFmt;
										std::string bitrate;
										std::string profile;
										std::string crop;
										std::string codec;
										std::string pad;
										std::string maxrate;
										std::string crf;
										std::string abrMax;
										std::string height;
										std::string width;
									};
									struct Audio
									{
										struct Volume
										{
											std::string loudnessRangeTarget;
											std::string truePeak;
											std::string integratedLoudnessTarget;
											std::string method;
										};
										std::string codec;
										Volume volume;
										std::string remove;
										std::string samplerate;
										std::string bitrate;
										std::string profile;
										std::string channels;
									};
									struct Container
									{
										std::string format;
									};
									struct MuxConfig
									{
										struct Segment
										{
											std::string forceSegTime;
											std::string duration;
										};
										Segment segment;
									};
									Container container;
									Video video;
									Audio audio;
									MuxConfig muxConfig;
									std::string tags;
								};
								OverwriteParams4 overwriteParams4;
								std::string templateId;
							};
							struct Encryption
							{
								std::string decryptKeyUri;
								std::string encryptType;
								std::string cipherText;
							};
							struct ImageWatermark
							{
								struct OverwriteParams
								{
									struct Timeline
									{
										std::string start;
										std::string duration;
									};
									struct File
									{
										std::string type;
										std::string media;
									};
									Timeline timeline;
									std::string dx;
									std::string dy;
									std::string height;
									std::string referPos;
									File file;
									std::string width;
								};
								OverwriteParams overwriteParams;
								std::string templateId;
							};
							struct TextWatermark
							{
								struct OverwriteParams1
								{
									std::string fontAlpha;
									std::string left;
									std::string top;
									std::string adaptive;
									int fontSize;
									std::string content;
									std::string fontName;
									std::string fontColor;
									std::string borderColor;
									int borderWidth;
								};
								OverwriteParams1 overwriteParams1;
								std::string templateId;
							};
							struct Subtitle
							{
								struct OverwriteParams2
								{
									struct File3
									{
										std::string type;
										std::string media;
									};
									std::string charEnc;
									std::string format;
									File3 file3;
								};
								OverwriteParams2 overwriteParams2;
								std::string templateId;
							};
							struct CombineConfig
							{
								double start;
								double duration;
								std::string videoIndex;
								std::string audioIndex;
							};
							std::vector<CombineConfig> combineConfigs;
							std::vector<Subtitle> subtitles;
							std::vector<TextWatermark> textWatermarks;
							Transcode transcode;
							Encryption encryption;
							std::vector<ImageWatermark> imageWatermarks;
							bool isInheritTags;
						};
						ProcessConfig processConfig;
						Output output;
					};
					std::string status;
					std::string requestId;
					int percent;
					std::string userData;
					std::string createTime;
					std::string parentJobId;
					std::vector<Job::OutputGroupItem> outputGroup;
					std::string submitTime;
					std::string name;
					ScheduleConfig scheduleConfig;
					std::vector<Job::InputGroupItem> inputGroup;
					std::string finishTime;
					int jobCount;
					std::string triggerSource;
				};


				ListTranscodeJobsResult();
				explicit ListTranscodeJobsResult(const std::string &payload);
				~ListTranscodeJobsResult();
				std::vector<Job> getJobs()const;
				std::string getNextPageToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Job> jobs_;
				std::string nextPageToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTTRANSCODEJOBSRESULT_H_