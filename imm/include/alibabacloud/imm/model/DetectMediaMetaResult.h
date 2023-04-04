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

#ifndef ALIBABACLOUD_IMM_MODEL_DETECTMEDIAMETARESULT_H_
#define ALIBABACLOUD_IMM_MODEL_DETECTMEDIAMETARESULT_H_

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
			class ALIBABACLOUD_IMM_EXPORT DetectMediaMetaResult : public ServiceResult
			{
			public:
				struct VideoStreamsItem
				{
					std::string codecTimeBase;
					std::string rotate;
					std::string sampleAspectRatio;
					std::string colorSpace;
					long index;
					std::string colorRange;
					std::string codecName;
					long bitDepth;
					std::string profile;
					std::string colorPrimaries;
					std::string language;
					long height;
					std::string pixelFormat;
					long width;
					std::string timeBase;
					std::string colorTransfer;
					std::string codecTag;
					std::string frameRate;
					long frameCount;
					double startTime;
					double duration;
					long bitrate;
					std::string displayAspectRatio;
					std::string codecTagString;
					long hasBFrames;
					std::string averageFrameRate;
					std::string codecLongName;
					long level;
				};
				struct AudioStreamsItem
				{
					std::string codecTag;
					std::string codecTimeBase;
					std::string channelLayout;
					long frameCount;
					double startTime;
					long index;
					double duration;
					std::string codecName;
					long bitrate;
					std::string sampleFormat;
					long channels;
					std::string codecTagString;
					long sampleRate;
					std::string language;
					std::string codecLongName;
					std::string lyric;
					std::string timeBase;
				};
				struct SubtitlesItem
				{
					std::string codecTag;
					std::string codecTagString;
					std::string language;
					std::string content;
					std::string codecLongName;
					double startTime;
					long index;
					double duration;
					long height;
					std::string codecName;
					long bitrate;
					long width;
				};
				struct AddressesItem
				{
					std::string language;
					std::string township;
					std::string addressLine;
					std::string country;
					std::string city;
					std::string district;
					std::string province;
				};


				DetectMediaMetaResult();
				explicit DetectMediaMetaResult(const std::string &payload);
				~DetectMediaMetaResult();
				std::string getArtist()const;
				std::string getProduceTime()const;
				std::string getComposer()const;
				std::vector<VideoStreamsItem> getVideoStreams()const;
				long getSize()const;
				long getVideoWidth()const;
				std::string getFormatLongName()const;
				long getProgramCount()const;
				double getStartTime()const;
				std::string getTitle()const;
				std::string getAlbum()const;
				double getDuration()const;
				long getBitrate()const;
				std::string getAlbumArtist()const;
				std::vector<AudioStreamsItem> getAudioStreams()const;
				std::vector<AddressesItem> getAddresses()const;
				long getStreamCount()const;
				std::string getPerformer()const;
				std::string getLanguage()const;
				long getVideoHeight()const;
				std::vector<SubtitlesItem> getSubtitles()const;
				std::string getFormatName()const;
				std::string getLatLong()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string artist_;
				std::string produceTime_;
				std::string composer_;
				std::vector<VideoStreamsItem> videoStreams_;
				long size_;
				long videoWidth_;
				std::string formatLongName_;
				long programCount_;
				double startTime_;
				std::string title_;
				std::string album_;
				double duration_;
				long bitrate_;
				std::string albumArtist_;
				std::vector<AudioStreamsItem> audioStreams_;
				std::vector<AddressesItem> addresses_;
				long streamCount_;
				std::string performer_;
				std::string language_;
				long videoHeight_;
				std::vector<SubtitlesItem> subtitles_;
				std::string formatName_;
				std::string latLong_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_DETECTMEDIAMETARESULT_H_