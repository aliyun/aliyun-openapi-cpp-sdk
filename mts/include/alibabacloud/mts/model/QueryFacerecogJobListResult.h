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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYFACERECOGJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYFACERECOGJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryFacerecogJobListResult : public ServiceResult
			{
			public:
				struct FacerecogJob
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct VideoFacerecogResult
					{
						struct Facerecog
						{
							struct Face
							{
								std::string score;
								std::string target;
								std::string name;
							};
							std::string time;
							std::vector<Facerecog::Face> faces;
						};
						std::vector<Facerecog> facerecogs;
					};
					Input input;
					VideoFacerecogResult videoFacerecogResult;
					std::string message;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					std::string code;
				};


				QueryFacerecogJobListResult();
				explicit QueryFacerecogJobListResult(const std::string &payload);
				~QueryFacerecogJobListResult();
				std::vector<std::string> getNonExistIds()const;
				std::vector<FacerecogJob> getFacerecogJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistIds_;
				std::vector<FacerecogJob> facerecogJobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYFACERECOGJOBLISTRESULT_H_