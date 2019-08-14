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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYFPCOMPAREJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYFPCOMPAREJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryFpCompareJobListResult : public ServiceResult
			{
			public:
				struct FpCompareJob
				{
					struct MasterFile
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct QueryFile
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct MatchFrameStorage
					{
						struct MasterMediaFrames
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						struct QueryMediaFrames
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						struct MatchedFramesDescFile
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						MasterMediaFrames masterMediaFrames;
						MatchedFramesDescFile matchedFramesDescFile;
						QueryMediaFrames queryMediaFrames;
					};
					struct FpCompareResult
					{
						struct MasterMediaInfo
						{
							std::string audioBitRate;
							std::string audioSampleRate;
							std::string fpNum;
							std::string totalVideoFrame;
							std::string audioChannels;
							std::string fps;
							std::string duration;
							std::string height;
							std::string width;
						};
						struct QueryMediaInfo
						{
							std::string audioBitRate;
							std::string audioSampleRate;
							std::string fpNum;
							std::string totalVideoFrame;
							std::string audioChannels;
							std::string fps;
							std::string duration;
							std::string height;
							std::string width;
						};
						struct MediaMatchSegment
						{
							std::string masterStartFrame;
							std::string score;
							std::string masterStartTime;
							std::string queryEndFrame;
							std::string totalMatchFrameNum;
							std::string queryStartFrame;
							std::string queryEndTime;
							std::string masterEndFrame;
							std::string masterEndTime;
							std::string queryStartTime;
						};
						MasterMediaInfo masterMediaInfo;
						QueryMediaInfo queryMediaInfo;
						std::vector<MediaMatchSegment> mediaMatchSegments;
					};
					std::string message;
					std::string userData;
					std::string code;
					FpCompareResult fpCompareResult;
					std::string finishTime;
					std::string state;
					std::string creationTime;
					MatchFrameStorage matchFrameStorage;
					std::string pipelineId;
					std::string id;
					QueryFile queryFile;
					MasterFile masterFile;
					std::string fpDBId;
				};


				QueryFpCompareJobListResult();
				explicit QueryFpCompareJobListResult(const std::string &payload);
				~QueryFpCompareJobListResult();
				std::vector<FpCompareJob> getFpCompareJobList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FpCompareJob> fpCompareJobList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYFPCOMPAREJOBLISTRESULT_H_