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

#ifndef ALIBABACLOUD_IQA_MODEL_DESCRIBEPROJECTRESULT_H_
#define ALIBABACLOUD_IQA_MODEL_DESCRIBEPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iqa/IqaExport.h>

namespace AlibabaCloud
{
	namespace Iqa
	{
		namespace Model
		{
			class ALIBABACLOUD_IQA_EXPORT DescribeProjectResult : public ServiceResult
			{
			public:


				DescribeProjectResult();
				explicit DescribeProjectResult(const std::string &payload);
				~DescribeProjectResult();
				int getQuestionCount()const;
				std::string getModelName()const;
				std::string getDeployAvailable()const;
				std::string getProjectName()const;
				long getDeployTime()const;
				std::string getProjectType()const;
				long getCreateTime()const;
				std::string getProjectId()const;
				std::string getDataStatus()const;
				std::string getModelId()const;
				std::string getOnlineServiceStatus()const;
				std::string getTestServiceStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				int questionCount_;
				std::string modelName_;
				std::string deployAvailable_;
				std::string projectName_;
				long deployTime_;
				std::string projectType_;
				long createTime_;
				std::string projectId_;
				std::string dataStatus_;
				std::string modelId_;
				std::string onlineServiceStatus_;
				std::string testServiceStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IQA_MODEL_DESCRIBEPROJECTRESULT_H_