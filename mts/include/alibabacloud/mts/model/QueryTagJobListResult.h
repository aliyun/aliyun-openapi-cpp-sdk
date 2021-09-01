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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYTAGJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYTAGJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryTagJobListResult : public ServiceResult
			{
			public:
				struct TagJob
				{
					struct VideoTagResult
					{
						struct TagAnResult
						{
							std::string score;
							std::string label;
						};
						struct TagFrResult
						{
							struct TagFace
							{
								std::string score;
								std::string target;
								std::string name;
							};
							std::vector<TagFrResult::TagFace> tagFaces;
							std::string time;
						};
						std::string details;
						std::vector<TagAnResult> tagAnResults;
						std::vector<TagFrResult> tagFrResults;
					};
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					Input input;
					std::string message;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					VideoTagResult videoTagResult;
					std::string code;
				};


				QueryTagJobListResult();
				explicit QueryTagJobListResult(const std::string &payload);
				~QueryTagJobListResult();
				std::vector<TagJob> getTagJobList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TagJob> tagJobList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYTAGJOBLISTRESULT_H_