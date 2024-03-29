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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT SubmitEditingJobsResult : public ServiceResult
			{
			public:
				struct JobResult
				{
					struct Job
					{
						struct EditingConfig
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
							};
							struct TransConfig
							{
								std::string isCheckAudioBitrate;
								std::string adjDarMethod;
								std::string isCheckAudioBitrateFail;
								std::string isCheckVideoBitrateFail;
								std::string isCheckReso;
								std::string duration;
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
							struct DigiWaterMark
							{
								struct InputFile2
								{
									std::string bucket;
									std::string object;
									std::string location;
								};
								std::string type;
								std::string alpha;
								InputFile2 inputFile2;
							};
							struct OutputFile
							{
								std::string bucket;
								std::string object;
								std::string roleArn;
								std::string location;
							};
							struct Editing
							{
								struct Timeline
								{
									struct TimelineConfig
									{
										struct TimelineConfigAudio
										{
											std::string channelLayout;
											std::string samplerate;
											std::string channels;
										};
										struct TimelineConfigVideo
										{
											std::string renderRatio;
											std::string reclosePrec;
											std::string fps;
											std::string isGpuData;
											std::string height;
											std::string bgColor;
											std::string isOneTrackData;
											std::string width;
										};
										TimelineConfigVideo timelineConfigVideo;
										TimelineConfigAudio timelineConfigAudio;
									};
									struct Track
									{
										struct Clip3
										{
											struct ClipsConfig
											{
												struct ClipsConfigVideo
												{
													std::string t;
													std::string l;
												};
												ClipsConfigVideo clipsConfigVideo;
											};
											std::string clipID;
											std::string in;
											ClipsConfig clipsConfig;
											std::string out;
										};
										std::string order;
										std::vector<Track::Clip3> clips;
										std::string type;
										std::string id;
									};
									std::vector<Track> trackList;
									TimelineConfig timelineConfig;
								};
								struct Clip
								{
									struct Effect
									{
										std::string effect;
										std::string effectConfig;
									};
									std::string type;
									std::string in;
									std::string sourceID;
									std::string sourceType;
									std::vector<Clip::Effect> effects;
									std::string id;
									std::string sourceStrmMap;
									std::string out;
								};
								Timeline timeline;
								std::vector<Clip> clipList;
							};
							struct Container
							{
								std::string format;
							};
							struct Clip4
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
								Gif gif;
								Segment segment;
							};
							struct SubtitleConfig
							{
								struct ExtSubtitle
								{
									struct Input
									{
										std::string bucket;
										std::string object;
										std::string location;
									};
									std::string charEnc;
									Input input;
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
								struct InputFile1
								{
									std::string bucket;
									std::string object;
									std::string location;
								};
								std::string type;
								std::string dx;
								std::string dy;
								InputFile1 inputFile1;
								std::string waterMarkTemplateId;
								std::string height;
								std::string referPos;
								std::string width;
							};
							struct Merge
							{
								std::string start;
								std::string mergeURL;
								std::string duration;
								std::string roleArn;
							};
							std::string rotate;
							DigiWaterMark digiWaterMark;
							std::string userData;
							Editing editing;
							Encryption encryption;
							Properties properties;
							SuperReso superReso;
							std::vector<WaterMark> waterMarkList;
							Container container;
							TransConfig transConfig;
							std::string waterMarkConfigUrl;
							MuxConfig muxConfig;
							SubtitleConfig subtitleConfig;
							std::string templateId;
							OutputFile outputFile;
							Clip4 clip4;
							std::string priority;
							std::string mergeConfigUrl;
							std::string deWatermark;
							M3U8NonStandardSupport m3U8NonStandardSupport;
							Video video;
							std::string videoStreamMap;
							std::string audioStreamMap;
							Audio audio;
							std::vector<Merge> mergeList;
						};
						struct MNSMessageResult
						{
							std::string errorCode;
							std::string errorMessage;
							std::string messageId;
						};
						struct EditingInput
						{
							struct InputFile
							{
								std::string bucket;
								std::string object;
								std::string location;
							};
							struct InputConfig
							{
								std::string deinterlaceMethod;
								std::string isNormalSar;
							};
							InputConfig inputConfig;
							std::string id;
							InputFile inputFile;
						};
						std::vector<EditingInput> editingInputs;
						std::string finishTime;
						std::string message;
						long percent;
						std::string state;
						MNSMessageResult mNSMessageResult;
						std::string creationTime;
						EditingConfig editingConfig;
						std::string pipelineId;
						std::string code;
						std::string jobId;
					};
					std::string message;
					Job job;
					std::string code;
					bool success;
				};


				SubmitEditingJobsResult();
				explicit SubmitEditingJobsResult(const std::string &payload);
				~SubmitEditingJobsResult();
				std::vector<JobResult> getJobResultList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<JobResult> jobResultList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSRESULT_H_