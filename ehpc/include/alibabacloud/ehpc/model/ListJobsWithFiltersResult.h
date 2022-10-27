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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTJOBSWITHFILTERSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTJOBSWITHFILTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListJobsWithFiltersResult : public ServiceResult
			{
			public:
				struct JobInfo
				{
					struct Resources
					{
						long cores;
						long nodes;
					};
					std::string comment;
					std::string owner;
					std::string _stderr;
					std::string priority;
					std::string nodeList;
					std::string startTime;
					std::string lastModifyTime;
					std::string submitTime;
					std::string _stdout;
					std::string name;
					std::string variableList;
					std::string state;
					std::string shellPath;
					bool rerunable;
					Resources resources;
					std::string id;
					std::string arrayRequest;
					std::string queue;
				};


				ListJobsWithFiltersResult();
				explicit ListJobsWithFiltersResult(const std::string &payload);
				~ListJobsWithFiltersResult();
				int getTotalCount()const;
				long getPageSize()const;
				std::vector<JobInfo> getJobs()const;
				long getPageNumber()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				long pageSize_;
				std::vector<JobInfo> jobs_;
				long pageNumber_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTJOBSWITHFILTERSRESULT_H_