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

#ifndef ALIBABACLOUD_MTS_MODEL_ADDCOVERPIPELINERESULT_H_
#define ALIBABACLOUD_MTS_MODEL_ADDCOVERPIPELINERESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT AddCoverPipelineResult : public ServiceResult
			{
			public:
				struct Pipeline
				{
					struct NotifyConfig
					{
						std::string topic;
						std::string queue;
					};
					std::string role;
					std::string priority;
					std::string state;
					NotifyConfig notifyConfig;
					std::string id;
					std::string name;
				};


				AddCoverPipelineResult();
				explicit AddCoverPipelineResult(const std::string &payload);
				~AddCoverPipelineResult();
				Pipeline getPipeline()const;

			protected:
				void parse(const std::string &payload);
			private:
				Pipeline pipeline_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_ADDCOVERPIPELINERESULT_H_