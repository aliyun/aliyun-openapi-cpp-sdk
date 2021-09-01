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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMEDIALISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMEDIALISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryMediaListResult : public ServiceResult
			{
			public:
				struct Media
				{
					struct File
					{
						std::string state;
						std::string uRL;
					};
					struct MediaInfo
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
								std::string rotate;
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
								std::string width;
								std::string numFrames;
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
						Streams streams;
					};
					struct Play
					{
						struct File1
						{
							std::string state;
							std::string uRL;
						};
						std::string format;
						std::string activityName;
						std::string size;
						std::string mediaWorkflowId;
						std::string fps;
						std::string height;
						std::string duration;
						std::string encryption;
						std::string bitrate;
						std::string width;
						std::string mediaWorkflowName;
						File1 file1;
					};
					struct Summary
					{
						struct File2
						{
							std::string state;
							std::string uRL;
						};
						std::string type;
						std::string activityName;
						std::string mediaWorkflowId;
						File2 file2;
						std::string mediaWorkflowName;
					};
					struct Snapshot
					{
						struct File3
						{
							std::string state;
							std::string uRL;
						};
						std::string type;
						std::string activityName;
						std::string mediaWorkflowId;
						std::string count;
						File3 file3;
						std::string mediaWorkflowName;
					};
					std::vector<Media::Play> playList;
					std::string censorState;
					std::vector<Media::Snapshot> snapshotList;
					std::string description;
					std::string size;
					std::vector<Media::Summary> summaryList;
					std::string fps;
					std::string title;
					std::string duration;
					long cateId;
					std::string bitrate;
					std::string publishState;
					MediaInfo mediaInfo;
					std::string format;
					std::string mediaId;
					std::string creationTime;
					std::string height;
					std::string coverURL;
					File file;
					std::string width;
					std::vector<std::string> runIdList;
					std::vector<std::string> tags;
				};


				QueryMediaListResult();
				explicit QueryMediaListResult(const std::string &payload);
				~QueryMediaListResult();
				std::vector<std::string> getNonExistMediaIds()const;
				std::vector<Media> getMediaList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistMediaIds_;
				std::vector<Media> mediaList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMEDIALISTRESULT_H_