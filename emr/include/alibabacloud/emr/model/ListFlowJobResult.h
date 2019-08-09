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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListFlowJobResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Resource
					{
						std::string path;
						std::string alias;
					};
					std::string failAct;
					std::string categoryId;
					std::string description;
					std::string mode;
					long gmtModified;
					std::string params;
					int maxRetry;
					std::string name;
					std::string paramConf;
					std::string lastInstanceDetail;
					std::vector<Job::Resource> resourceList;
					long gmtCreate;
					std::string type;
					std::string envConf;
					std::string monitorConf;
					std::string adhoc;
					std::string id;
					long retryInterval;
					std::string runConf;
					std::string customVariables;
					std::string alertConf;
				};


				ListFlowJobResult();
				explicit ListFlowJobResult(const std::string &payload);
				~ListFlowJobResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<Job> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<Job> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBRESULT_H_