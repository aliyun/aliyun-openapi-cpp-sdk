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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYJOBLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QueryJobListResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Output
					{
						struct Video
						{
							struct BitrateBnd
							{
								std::string min;
								std::string max;
							};
							std::string bufsize;
							std::string qscale;
							std::string scanMode;
							std::string preset;
							std::string fps;
							std::string gop;
							BitrateBnd bitrateBnd;
							std::string pixFmt;
							std::string bitrate;
							std::string profile;
							std::string crop;
							std::string pad;
							std::string codec;
							std::string maxrate;
							std::string maxFps;
							std::string crf;
							std::string height;
							std::string degrain;
							std::string width;
							std::string resoPriority;
						};
						struct TransConfig
						{
							std::string isCheckAudioBitrate;
							std::string adjDarMethod;
							std::string isCheckAudioBitrateFail;
							std::string isCheckVideoBitrateFail;
							std::string isCheckReso;
							std::string isCheckVideoBitrate;
							std::string transMode;
							std::string isCheckResoFail;
						};
						struct Encryption
						{
							std::string type;
							std::string keyType;
							std::string id;
							std::string skipCnt;
							std::string key;
							std::string keyUri;
						};
						struct M3U8NonStandardSupport
						{
							struct TS
							{
								bool sizeSupport;
								bool md5Support;
							};
							TS tS;
						};
						struct Audio
						{
							struct Volume
							{
								std::string level;
								std::string method;
							};
							std::string codec;
							std::string qscale;
							Volume volume;
							std::string samplerate;
							std::string bitrate;
							std::string profile;
							std::string channels;
						};
						struct SuperReso
						{
							std::string isHalfSample;
						};
						struct OutputFile
						{
							std::string bucket;
							std::string object;
							std::string roleArn;
							std::string location;
						};
						struct Container
						{
							std::string format;
						};
						struct Clip
						{
							struct TimeSpan
							{
								std::string duration;
								std::string seek;
							};
							TimeSpan timeSpan;
						};
						struct MuxConfig
						{
							struct Webp
							{
								std::string loop;
							};
							struct Gif
							{
								std::string finalDelay;
								std::string loop;
								std::string ditherMode;
								std::string isCustomPalette;
							};
							struct Segment
							{
								std::string duration;
							};
							Webp webp;
							Gif gif;
							Segment segment;
						};
						struct SubtitleConfig
						{
							struct ExtSubtitle
							{
								struct Input1
								{
									std::string bucket;
									std::string object;
									std::string location;
								};
								std::string charEnc;
								Input1 input1;
								std::string fontName;
							};
							struct Subtitle
							{
								std::string map;
							};
							std::vector<ExtSubtitle> extSubtitleList;
							std::vector<Subtitle> subtitleList;
						};
						struct Properties
						{
							struct Streams
							{
								struct VideoStream
								{
									struct NetworkCost
									{
										std::string avgBitrate;
										std::string preloadTime;
										std::string costBandwidth;
									};
									std::string codecTimeBase;
									std::string sar;
									std::string fps;
									std::string index;
									std::string pixFmt;
									std::string bitsPerRawSample;
									NetworkCost networkCost;
									std::string codecName;
									std::string avgFPS;
									std::string profile;
									std::string colorPrimaries;
									std::string height;
									std::string numFrames;
									std::string width;
									std::string colorTransfer;
									std::string codecTag;
									std::string startTime;
									std::string lang;
									std::string duration;
									std::string bitrate;
									std::string timebase;
									std::string codecTagString;
									std::string hasBFrames;
									std::string dar;
									std::string codecLongName;
									std::string level;
								};
								struct AudioStream
								{
									std::string codecTag;
									std::string codecTimeBase;
									std::string channelLayout;
									std::string startTime;
									std::string index;
									std::string lang;
									std::string duration;
									std::string sampleFmt;
									std::string samplerate;
									std::string bitrate;
									std::string codecName;
									std::string channels;
									std::string timebase;
									std::string codecTagString;
									std::string codecLongName;
									std::string numFrames;
								};
								struct SubtitleStream
								{
									std::string index;
									std::string lang;
								};
								std::vector<VideoStream> videoStreamList;
								std::vector<SubtitleStream> subtitleStreamList;
								std::vector<AudioStream> audioStreamList;
							};
							struct Format
							{
								std::string numPrograms;
								std::string size;
								std::string formatLongName;
								std::string startTime;
								std::string numStreams;
								std::string formatName;
								std::string duration;
								std::string bitrate;
							};
							struct SourceLogo
							{
								std::string source;
							};
							Format format;
							std::string fps;
							std::string height;
							std::string duration;
							std::string fileFormat;
							std::vector<SourceLogo> sourceLogos;
							std::string width;
							std::string bitrate;
							Streams streams;
							std::string fileSize;
						};
						struct MultiSpeedInfo
						{
							std::string message;
							std::string downgradePolicy;
							std::string enable;
							int settingSpeed;
							double realSpeed;
							double duration;
							double timeCost;
							std::string code;
						};
						struct TraceMark
						{
							std::string enable;
						};
						struct CopyrightMark
						{
							std::string content;
						};
						struct WaterMark
						{
							struct InputFile
							{
								std::string bucket;
								std::string object;
								std::string location;
							};
							std::string type;
							std::string dx;
							std::string dy;
							std::string waterMarkTemplateId;
							std::string height;
							std::string referPos;
							std::string width;
							InputFile inputFile;
						};
						struct Merge
						{
							std::string start;
							std::string mergeURL;
							std::string duration;
							std::string roleArn;
						};
						struct OutSubtitle
						{
							struct OutSubtitleFile
							{
								std::string bucket;
								std::string object;
								std::string roleArn;
								std::string location;
							};
							std::string message;
							OutSubtitleFile outSubtitleFile;
							std::string map;
							bool success;
						};
						struct Opening
						{
							std::string start;
							std::string openUrl;
							std::string height;
							std::string width;
						};
						struct TailSlate
						{
							std::string tailUrl;
							std::string start;
							std::string blendDuration;
							std::string height;
							std::string bgColor;
							std::string width;
							bool isMergeAudio;
						};
						std::string rotate;
						std::string userData;
						TraceMark traceMark;
						Encryption encryption;
						Properties properties;
						SuperReso superReso;
						Clip clip;
						std::vector<WaterMark> waterMarkList;
						Container container;
						TransConfig transConfig;
						std::string waterMarkConfigUrl;
						std::string extendData;
						MuxConfig muxConfig;
						SubtitleConfig subtitleConfig;
						std::vector<Opening> openingList;
						std::string templateId;
						CopyrightMark copyrightMark;
						OutputFile outputFile;
						std::vector<TailSlate> tailSlateList;
						std::string priority;
						std::string mergeConfigUrl;
						MultiSpeedInfo multiSpeedInfo;
						std::string deWatermark;
						M3U8NonStandardSupport m3U8NonStandardSupport;
						Video video;
						std::vector<OutSubtitle> outSubtitleList;
						std::string videoStreamMap;
						std::string audioStreamMap;
						Audio audio;
						std::vector<Merge> mergeList;
					};
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct MNSMessageResult
					{
						std::string errorCode;
						std::string errorMessage;
						std::string messageId;
					};
					struct Pipeline
					{
						struct ExtendConfig
						{
							bool isBoostNew;
							std::string multiSpeedDowngradePolicy;
							int maxMultiSpeed;
						};
						std::string speed;
						std::string state;
						std::string id;
						ExtendConfig extendConfig;
						std::string name;
					};
					std::string message;
					long percent;
					std::string code;
					std::string submitTime;
					Pipeline pipeline;
					Input input;
					std::string finishTime;
					std::string state;
					Output output;
					MNSMessageResult mNSMessageResult;
					std::string creationTime;
					std::string pipelineId;
					std::string jobId;
				};


				QueryJobListResult();
				explicit QueryJobListResult(const std::string &payload);
				~QueryJobListResult();
				std::vector<std::string> getNonExistJobIds()const;
				std::vector<Job> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistJobIds_;
				std::vector<Job> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYJOBLISTRESULT_H_