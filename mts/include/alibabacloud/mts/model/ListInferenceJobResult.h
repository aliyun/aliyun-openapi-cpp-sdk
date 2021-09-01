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

#ifndef ALIBABACLOUD_MTS_MODEL_LISTINFERENCEJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_LISTINFERENCEJOBRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT ListInferenceJobResult : public ServiceResult
			{
			public:
				struct JobsItem
				{
					std::string status;
					std::string message;
					long userId;
					long jobTime;
					std::string jobId;
					std::string jobParams;
					std::string result;
				};


				ListInferenceJobResult();
				explicit ListInferenceJobResult(const std::string &payload);
				~ListInferenceJobResult();
				std::string getMessage()const;
				std::vector<JobsItem> getJobs()const;
				long getTotalSize()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<JobsItem> jobs_;
				long totalSize_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_LISTINFERENCEJOBRESULT_H_