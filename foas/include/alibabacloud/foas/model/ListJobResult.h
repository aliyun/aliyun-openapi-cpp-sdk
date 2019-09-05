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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTJOBRESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT ListJobResult : public ServiceResult
			{
			public:
				struct Job
				{
					long modifyTime;
					std::string description;
					std::string engineVersion;
					std::string projectName;
					std::string clusterId;
					std::string planJson;
					long createTime;
					std::string jobName;
					std::string creator;
					long folderId;
					std::string properties;
					std::string code;
					std::string jobType;
					std::string packages;
					std::string apiType;
					bool isCommitted;
					std::string modifier;
					std::string queueName;
					std::string jobId;
				};


				ListJobResult();
				explicit ListJobResult(const std::string &payload);
				~ListJobResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getTotalPage()const;
				std::vector<Job> getJobs()const;
				int getPageIndex()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int totalPage_;
				std::vector<Job> jobs_;
				int pageIndex_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTJOBRESULT_H_