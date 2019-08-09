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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITIMAGEQUALITYJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITIMAGEQUALITYJOBRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT SubmitImageQualityJobResult : public ServiceResult
			{
			public:
				struct ImageQualityJob
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string url;
						std::string location;
					};
					struct Result
					{
						std::string score;
						std::string message;
						std::string code;
					};
					Input input;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string jobId;
					Result result;
				};


				SubmitImageQualityJobResult();
				explicit SubmitImageQualityJobResult(const std::string &payload);
				~SubmitImageQualityJobResult();
				ImageQualityJob getImageQualityJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				ImageQualityJob imageQualityJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITIMAGEQUALITYJOBRESULT_H_