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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_STOPTRAINTASKRESULT_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_STOPTRAINTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/viapi-regen/Viapi_regenExport.h>

namespace AlibabaCloud
{
	namespace Viapi_regen
	{
		namespace Model
		{
			class ALIBABACLOUD_VIAPI_REGEN_EXPORT StopTrainTaskResult : public ServiceResult
			{
			public:
				struct Data
				{
					long gmtCreate;
					std::string trainStatus;
					std::string description;
					std::string taskName;
					std::string datasetName;
					std::string labelName;
					std::string modelEffect;
					long id;
					long labelId;
					std::string trainMode;
					long modelId;
					long datasetId;
				};


				StopTrainTaskResult();
				explicit StopTrainTaskResult(const std::string &payload);
				~StopTrainTaskResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_STOPTRAINTASKRESULT_H_