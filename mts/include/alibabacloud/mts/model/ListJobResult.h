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

#ifndef ALIBABACLOUD_MTS_MODEL_LISTJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_LISTJOBRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT ListJobResult : public ServiceResult
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
									std::string codecTag;
									std::string codecTimeBase;
									std::string sar;
									std::string startTime;
									std::string fps;
									std::string index;
									std::string lang;
									std::string duration;
									std::string pixFmt;
									NetworkCost networkCost;
									std::string bitrate;
									std::string codecName;
									std::string avgFPS;
									std::string profile;
									std::string timebase;
									std::string codecTagString;
									std::string hasBFrames;
									std::string dar;
									std::string codecLongName;
									std::string height;
									std::string level;
									std::string numFrames;
									std::string width;
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
							Format format;
							std::string fps;
							std::string height;
							std::string duration;
							std::string fileFormat;
							std::string width;
							std::string bitrate;
							Streams streams;
							std::string fileSize;
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
						Encryption encryption;
						Properties properties;
						SuperReso superReso;
						Clip clip;
						std::vector<WaterMark> waterMarkList;
						Container container;
						TransConfig transConfig;
						std::string waterMarkConfigUrl;
						MuxConfig muxConfig;
						SubtitleConfig subtitleConfig;
						std::vector<Opening> openingList;
						std::string templateId;
						OutputFile outputFile;
						std::vector<TailSlate> tailSlateList;
						std::string priority;
						std::string mergeConfigUrl;
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
					Input input;
					std::string finishTime;
					std::string message;
					long percent;
					std::string state;
					Output output;
					MNSMessageResult mNSMessageResult;
					std::string creationTime;
					std::string pipelineId;
					std::string code;
					std::string jobId;
				};


				ListJobResult();
				explicit ListJobResult(const std::string &payload);
				~ListJobResult();
				std::string getNextPageToken()const;
				std::vector<Job> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextPageToken_;
				std::vector<Job> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_LISTJOBRESULT_H_