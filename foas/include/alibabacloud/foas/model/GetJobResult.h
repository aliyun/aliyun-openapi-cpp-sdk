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

#ifndef ALIBABACLOUD_FOAS_MODEL_GETJOBRESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_GETJOBRESULT_H_

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
			class ALIBABACLOUD_FOAS_EXPORT GetJobResult : public ServiceResult
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
					std::string fileId;
					std::string modifier;
					std::string queueName;
					std::string jobId;
				};


				GetJobResult();
				explicit GetJobResult(const std::string &payload);
				~GetJobResult();
				Job getJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				Job job_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_GETJOBRESULT_H_