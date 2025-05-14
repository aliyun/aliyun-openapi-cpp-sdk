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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITJOBSRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITJOBSRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT SubmitJobsResult : public ServiceResult
			{
			public:
				struct JobResult
				{
					struct Job
					{
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
						struct Output
						{
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
								std::string bitrate;
								std::string samplerate;
								std::string channels;
								std::string profile;
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
							struct Container
							{
								std::string format;
							};
							struct DigiWaterMark
							{
								struct InputFile1
								{
									std::string bucket;
									std::string object;
									std::string location;
								};
								std::string type;
								InputFile1 inputFile1;
								std::string alpha;
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
									bool md5Support;
									bool sizeSupport;
								};
								TS tS;
							};
							struct MuxConfig
							{
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
								struct Webp
								{
									std::string loop;
								};
								Gif gif;
								Webp webp;
								Segment segment;
							};
							struct OutputFile
							{
								std::string bucket;
								std::string object;
								std::string roleArn;
								std::string location;
							};
							struct Properties
							{
								struct Format
								{
									std::string numPrograms;
									std::string size;
									std::string formatLongName;
									std::string startTime;
									std::string formatName;
									std::string numStreams;
									std::string duration;
									std::string bitrate;
								};
								struct Streams
								{
									struct AudioStream
									{
										std::string codecTag;
										std::string codecTimeBase;
										std::string channelLayout;
										std::string startTime;
										std::string duration;
										std::string index;
										std::string lang;
										std::string sampleFmt;
										std::string bitrate;
										std::string codecName;
										std::string samplerate;
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
										std::string fps;
										std::string startTime;
										std::string duration;
										std::string index;
										std::string lang;
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
									std::vector<SubtitleStream> subtitleStreamList;
									std::vector<VideoStream> videoStreamList;
									std::vector<AudioStream> audioStreamList;
								};
								Format format;
								std::string fps;
								std::string duration;
								std::string height;
								std::string fileFormat;
								std::string bitrate;
								std::string width;
								Streams streams;
								std::string fileSize;
							};
							struct SubtitleConfig
							{
								struct ExtSubtitle
								{
									struct Input2
									{
										std::string bucket;
										std::string object;
										std::string location;
									};
									std::string charEnc;
									std::string fontName;
									Input2 input2;
								};
								struct Subtitle
								{
									std::string map;
								};
								std::vector<ExtSubtitle> extSubtitleList;
								std::vector<Subtitle> subtitleList;
							};
							struct SuperReso
							{
								std::string isHalfSample;
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
								std::string codec;
								std::string maxrate;
								std::string pad;
								std::string crf;
								std::string maxFps;
								std::string height;
								std::string degrain;
								std::string resoPriority;
								std::string width;
							};
							struct Amix
							{
								std::string amixURL;
								std::string start;
								std::string mixDurMode;
								std::string duration;
								std::string map;
							};
							struct Merge
							{
								std::string mergeURL;
								std::string start;
								std::string duration;
								std::string roleArn;
							};
							struct Opening
							{
								std::string start;
								std::string openUrl;
								std::string height;
								std::string width;
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
							std::string rotate;
							DigiWaterMark digiWaterMark;
							std::string userData;
							Encryption encryption;
							Properties properties;
							Clip clip;
							SuperReso superReso;
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
							std::vector<Amix> amixList;
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
					std::string message;
					Job job;
					std::string code;
					bool success;
				};


				SubmitJobsResult();
				explicit SubmitJobsResult(const std::string &payload);
				~SubmitJobsResult();
				std::vector<JobResult> getJobResultList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<JobResult> jobResultList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITJOBSRESULT_H_