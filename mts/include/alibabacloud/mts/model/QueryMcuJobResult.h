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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMCUJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMCUJOBRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryMcuJobResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct AsrResult
					{
						struct AsrText
						{
							std::string endTime;
							int startTime;
							std::string text;
							std::string channelId;
							std::string speechRate;
						};
						std::vector<AsrText> asrTextList;
						std::string duration;
					};
					struct CategoryResult
					{
						struct Category
						{
							std::string score;
							std::string label;
						};
						std::string details;
						std::vector<Category> categories;
					};
					struct Ocr
					{
						std::string ocrText;
						std::string imageId;
						std::string imageUrl;
						std::string time;
					};
					struct Tag
					{
						struct FrameTagInfo
						{
							std::string score;
							std::string category;
							std::string tag;
						};
						std::string imageId;
						std::string imageUrl;
						std::string time;
						std::vector<Tag::FrameTagInfo> frameTagInfos;
					};
					struct Face
					{
						struct Celebrity
						{
							std::string score;
							std::string target;
							std::string name;
						};
						std::vector<Face::Celebrity> celebrities;
						std::string imageId;
						std::string imageUrl;
						std::string time;
					};
					std::vector<Job::Ocr> ocrResult;
					Input input;
					std::string _template;
					CategoryResult categoryResult;
					std::vector<Job::Face> faceResult;
					std::string userData;
					AsrResult asrResult;
					std::vector<Job::Tag> tagResult;
					std::string jobId;
					std::string templateId;
				};


				QueryMcuJobResult();
				explicit QueryMcuJobResult(const std::string &payload);
				~QueryMcuJobResult();
				std::vector<std::string> getNonExistJobIds()const;
				std::vector<Job> getJobResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistJobIds_;
				std::vector<Job> jobResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMCUJOBRESULT_H_