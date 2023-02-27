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

#ifndef ALIBABACLOUD_ICE_MODEL_GETTRANSCODEJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETTRANSCODEJOBRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetTranscodeJobResult : public ServiceResult
			{
			public:
				struct TranscodeParentJob
				{
					struct ScheduleConfig
					{
						int priority;
						std::string pipelineId;
					};
					struct TranscodeJobListItem
					{
						struct ProcessConfig
						{
							struct Transcode
							{
								struct OverwriteParams6
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
								OverwriteParams6 overwriteParams6;
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
								struct OverwriteParams3
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
								OverwriteParams3 overwriteParams3;
								std::string templateId;
							};
							struct Subtitle
							{
								struct OverwriteParams4
								{
									struct File5
									{
										std::string type;
										std::string media;
									};
									std::string charEnc;
									File5 file5;
									std::string format;
								};
								OverwriteParams4 overwriteParams4;
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
						struct Output
						{
							std::string type;
							std::string media;
							std::string outputUrl;
						};
						struct ScheduleConfig1
						{
							int priority;
							std::string pipelineId;
						};
						struct OutFileMeta
						{
							struct FileBasicInfo
							{
								std::string fileUrl;
								std::string fileStatus;
								std::string mediaId;
								std::string fileType;
								std::string fileName;
								std::string region;
								std::string formatName;
								std::string duration;
								std::string height;
								std::string bitrate;
								std::string width;
								std::string fileSize;
							};
							struct AudioStreamInfoListItem
							{
								std::string codecTag;
								std::string codecTimeBase;
								std::string channelLayout;
								std::string startTime;
								std::string index;
								std::string duration;
								std::string lang;
								std::string sampleFmt;
								std::string codecName;
								std::string bitrate;
								std::string channels;
								std::string timebase;
								std::string codecTagString;
								std::string sampleRate;
								std::string codecLongName;
							};
							struct VideoStreamInfoListItem
							{
								std::string rotate;
								std::string codec_tag;
								std::string sar;
								std::string start_time;
								std::string fps;
								std::string index;
								std::string duration;
								std::string lang;
								std::string codec_long_name;
								std::string pixFmt;
								std::string bit_rate;
								std::string profile;
								std::string has_b_frames;
								std::string codec_time_base;
								std::string dar;
								std::string avg_fps;
								std::string codec_tag_string;
								std::string codec_name;
								std::string height;
								std::string level;
								std::string time_base;
								std::string width;
								std::string numFrames;
							};
							std::vector<VideoStreamInfoListItem> videoStreamInfoList;
							std::vector<AudioStreamInfoListItem> audioStreamInfoList;
							FileBasicInfo fileBasicInfo;
						};
						struct InputGroupItem
						{
							std::string type;
							std::string media;
							std::string inputUrl;
						};
						std::string status;
						ProcessConfig processConfig;
						std::string requestId;
						std::string userData;
						std::string submitResultJson;
						ScheduleConfig1 scheduleConfig1;
						std::string createTime;
						std::vector<TranscodeJobListItem::InputGroupItem> inputGroup2;
						int jobIndex;
						OutFileMeta outFileMeta;
						std::string parentJobId;
						std::string submitTime;
						std::string name;
						std::string finishTime;
						Output output;
						std::string jobId;
					};
					struct InputGroupItem7
					{
						std::string type;
						std::string media;
					};
					struct OutputGroupItem
					{
						struct Output8
						{
							std::string type;
							std::string media;
							std::string outputUrl;
						};
						struct ProcessConfig9
						{
							struct Transcode10
							{
								struct OverwriteParams26
								{
									struct Video27
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
									struct Audio28
									{
										struct Volume31
										{
											std::string loudnessRangeTarget;
											std::string truePeak;
											std::string integratedLoudnessTarget;
											std::string method;
										};
										std::string codec;
										std::string remove;
										std::string samplerate;
										std::string bitrate;
										std::string profile;
										std::string channels;
										Volume31 volume31;
									};
									struct Container29
									{
										std::string format;
									};
									struct MuxConfig30
									{
										struct Segment32
										{
											std::string forceSegTime;
											std::string duration;
										};
										Segment32 segment32;
									};
									Container29 container29;
									Audio28 audio28;
									Video27 video27;
									MuxConfig30 muxConfig30;
								};
								OverwriteParams26 overwriteParams26;
								std::string templateId;
							};
							struct Encryption11
							{
								std::string decryptKeyUri;
								std::string encryptType;
								std::string cipherText;
							};
							struct ImageWatermark16
							{
								struct OverwriteParams17
								{
									struct Timeline18
									{
										std::string start;
										std::string duration;
									};
									struct File19
									{
										std::string type;
										std::string media;
									};
									std::string dx;
									std::string dy;
									File19 file19;
									std::string height;
									std::string referPos;
									std::string width;
									Timeline18 timeline18;
								};
								OverwriteParams17 overwriteParams17;
								std::string templateId;
							};
							struct TextWatermark20
							{
								struct OverwriteParams21
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
								OverwriteParams21 overwriteParams21;
								std::string templateId;
							};
							struct Subtitle22
							{
								struct OverwriteParams23
								{
									struct File24
									{
										std::string type;
										std::string media;
									};
									std::string charEnc;
									File24 file24;
									std::string format;
								};
								OverwriteParams23 overwriteParams23;
								std::string templateId;
							};
							struct CombineConfig25
							{
								double start;
								double duration;
								std::string videoIndex;
								std::string audioIndex;
							};
							Transcode10 transcode10;
							std::vector<TextWatermark20> textWatermarks13;
							std::vector<CombineConfig25> combineConfigs15;
							std::vector<ImageWatermark16> imageWatermarks12;
							std::vector<Subtitle22> subtitles14;
							Encryption11 encryption11;
						};
						Output8 output8;
						ProcessConfig9 processConfig9;
					};
					std::string status;
					std::string requestId;
					int percent;
					std::string userData;
					std::string createTime;
					std::string parentJobId;
					std::vector<OutputGroupItem> outputGroup;
					std::string submitTime;
					std::string name;
					ScheduleConfig scheduleConfig;
					std::vector<InputGroupItem7> inputGroup;
					std::string finishTime;
					std::vector<TranscodeJobListItem> transcodeJobList;
					int jobCount;
					std::string triggerSource;
				};


				GetTranscodeJobResult();
				explicit GetTranscodeJobResult(const std::string &payload);
				~GetTranscodeJobResult();
				TranscodeParentJob getTranscodeParentJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				TranscodeParentJob transcodeParentJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETTRANSCODEJOBRESULT_H_