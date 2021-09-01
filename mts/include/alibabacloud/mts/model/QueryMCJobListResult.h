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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMCJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMCJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryMCJobListResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Result
					{
						struct PornResult
						{
							struct PornText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							struct PornVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							struct PornAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							struct PornImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							struct PornOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							std::vector<PornImage> pornImages;
							std::vector<PornAudio> pornAudios;
							std::vector<PornVideo> pornVideos;
							std::vector<PornText> pornTexts;
							std::vector<PornOcr> pornOcrs;
						};
						struct AdResult
						{
							struct AdOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							struct AdText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							struct AdImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							struct AdAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							struct AdVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							std::vector<AdImage> adImages;
							std::vector<AdAudio> adAudios;
							std::vector<AdOcr> adOcrs;
							std::vector<AdVideo> adVideos;
							std::vector<AdText> adTexts;
						};
						struct LogoResult
						{
							struct LogoImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							struct LogoVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							std::vector<LogoImage> logoImages;
							std::vector<LogoVideo> logoVideos;
						};
						struct QrcodeResult
						{
							struct QrcodeImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							struct QrcodeVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							std::vector<QrcodeVideo> qrcodeVideos;
							std::vector<QrcodeImage> qrcodeImages;
						};
						struct PoliticsResult
						{
							struct PoliticsOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							struct PoliticsVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							struct PoliticsImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							struct PoliticsText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							struct PoliticsAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							std::vector<PoliticsText> politicsTexts;
							std::vector<PoliticsVideo> politicsVideos;
							std::vector<PoliticsOcr> politicsOcrs;
							std::vector<PoliticsAudio> politicsAudios;
							std::vector<PoliticsImage> politicsImages;
						};
						struct LiveResult
						{
							struct LiveImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							struct LiveVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							std::vector<LiveVideo> liveVideos;
							std::vector<LiveImage> liveImages;
						};
						struct AbuseResult
						{
							struct AbuseOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							struct AbuseAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							struct AbuseText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							std::vector<AbuseOcr> abuseOcrs;
							std::vector<AbuseText> abuseTexts;
							std::vector<AbuseAudio> abuseAudios;
						};
						struct SpamResult
						{
							struct SpamText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							struct SpamAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							struct SpamOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							std::vector<SpamText> spamTexts;
							std::vector<SpamAudio> spamAudios;
							std::vector<SpamOcr> spamOcrs;
						};
						struct ContrabandResult
						{
							struct ContrabandAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							struct ContrabandOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							struct ContrabandText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							std::vector<ContrabandOcr> contrabandOcrs;
							std::vector<ContrabandText> contrabandTexts;
							std::vector<ContrabandAudio> contrabandAudios;
						};
						struct TerrorismResult
						{
							struct TerrorismOcr
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string text;
								std::string object;
							};
							struct TerrorismAudio
							{
								std::string suggestion;
								std::string score;
								std::string endTime;
								std::string startTime;
								std::string text;
								std::string object;
							};
							struct TerrorismVideo
							{
								std::string suggestion;
								std::string score;
								std::string time;
								std::string object;
							};
							struct TerrorismText
							{
								std::string suggestion;
								std::string score;
								std::string text;
							};
							struct TerrorismImage
							{
								std::string suggestion;
								std::string score;
								std::string text;
								std::string url;
							};
							std::vector<TerrorismAudio> terrorismAudios;
							std::vector<TerrorismText> terrorismTexts;
							std::vector<TerrorismImage> terrorismImages;
							std::vector<TerrorismOcr> terrorismOcrs;
							std::vector<TerrorismVideo> terrorismVideos;
						};
						LogoResult logoResult;
						std::string suggestion;
						std::string score;
						PoliticsResult politicsResult;
						QrcodeResult qrcodeResult;
						AbuseResult abuseResult;
						LiveResult liveResult;
						TerrorismResult terrorismResult;
						SpamResult spamResult;
						PornResult pornResult;
						AdResult adResult;
						ContrabandResult contrabandResult;
					};
					std::string resultOutputFile;
					std::string message;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string code;
					std::string jobId;
					Result result;
				};


				QueryMCJobListResult();
				explicit QueryMCJobListResult(const std::string &payload);
				~QueryMCJobListResult();
				std::string getNextPageToken()const;
				std::vector<Job> getJobList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextPageToken_;
				std::vector<Job> jobList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMCJOBLISTRESULT_H_