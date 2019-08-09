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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYTERRORISMJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYTERRORISMJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryTerrorismJobListResult : public ServiceResult
			{
			public:
				struct TerrorismJob
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct TerrorismConfig
					{
						struct OutputFile
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						OutputFile outputFile;
						std::string bizType;
						std::string interval;
					};
					struct CensorTerrorismResult
					{
						struct Counter
						{
							std::string label;
							int count;
						};
						struct Top
						{
							std::string score;
							std::string label;
							std::string index;
							std::string object;
							std::string timestamp;
						};
						std::vector<Counter> terrorismCounterList;
						std::string suggestion;
						std::string maxScore;
						std::string averageScore;
						std::string label;
						std::vector<Top> terrorismTopList;
					};
					Input input;
					CensorTerrorismResult censorTerrorismResult;
					std::string message;
					std::string userData;
					std::string state;
					TerrorismConfig terrorismConfig;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					std::string code;
				};


				QueryTerrorismJobListResult();
				explicit QueryTerrorismJobListResult(const std::string &payload);
				~QueryTerrorismJobListResult();
				std::vector<TerrorismJob> getTerrorismJobList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TerrorismJob> terrorismJobList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYTERRORISMJOBLISTRESULT_H_