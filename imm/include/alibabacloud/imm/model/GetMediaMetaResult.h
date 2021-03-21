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

#ifndef ALIBABACLOUD_IMM_MODEL_GETMEDIAMETARESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETMEDIAMETARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT GetMediaMetaResult : public ServiceResult
			{
			public:
				struct MediaMeta
				{
					struct MediaFormat
					{
						struct Address
						{
							std::string township;
							std::string addressLine;
							std::string country;
							std::string city;
							std::string district;
							std::string province;
						};
						struct Tag
						{
							std::string artist;
							std::string composer;
							std::string performer;
							std::string language;
							std::string creationTime;
							std::string title;
							std::string album;
							std::string albumArtist;
						};
						Address address;
						std::string size;
						int numberStreams;
						std::string formatLongName;
						std::string startTime;
						std::string creationTime;
						std::string formatName;
						std::string duration;
						Tag tag;
						std::string bitrate;
						std::string location;
						int numberPrograms;
					};
					struct MediaStreams
					{
						struct VideoStream
						{
							std::string codecTag;
							std::string frames;
							std::string codecTimeBase;
							std::string rotate;
							std::string sampleAspectRatio;
							std::string startTime;
							std::string duration;
							int index;
							std::string codecName;
							std::string bitrate;
							std::string profile;
							std::string displayAspectRatio;
							int hasBFrames;
							std::string codecTagString;
							std::string averageFrameRate;
							std::string language;
							std::string codecLongName;
							std::string pixelFormat;
							int level;
							int height;
							std::string frameRrate;
							int width;
							std::string timeBase;
						};
						struct SubtitleStream
						{
							std::string language;
							int index;
						};
						struct AudioStream
						{
							std::string codecTag;
							std::string frames;
							std::string codecTimeBase;
							std::string channelLayout;
							std::string startTime;
							std::string duration;
							int index;
							std::string codecName;
							std::string bitrate;
							std::string sampleFormat;
							int channels;
							std::string codecTagString;
							std::string sampleRate;
							std::string language;
							std::string codecLongName;
							std::string timeBase;
						};
						std::vector<VideoStream> videoStreams;
						std::vector<SubtitleStream> subtitleStreams;
						std::vector<AudioStream> audioStreams;
					};
					MediaFormat mediaFormat;
					MediaStreams mediaStreams;
				};


				GetMediaMetaResult();
				explicit GetMediaMetaResult(const std::string &payload);
				~GetMediaMetaResult();
				std::string getMediaUri()const;
				MediaMeta getMediaMeta()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string mediaUri_;
				MediaMeta mediaMeta_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_GETMEDIAMETARESULT_H_