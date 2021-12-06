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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBETASKATTRIBUTERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBETASKATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeTaskAttributeResult : public ServiceResult
			{
			public:
				struct OperationProgress
				{
					struct RelatedItem
					{
						std::string value;
						std::string name;
					};
					std::string operationStatus;
					std::string errorMsg;
					std::vector<OperationProgress::RelatedItem> relatedItemSet;
					std::string errorCode;
				};


				DescribeTaskAttributeResult();
				explicit DescribeTaskAttributeResult(const std::string &payload);
				~DescribeTaskAttributeResult();
				int getTotalCount()const;
				std::string getTaskId()const;
				std::string getTaskProcess()const;
				std::vector<OperationProgress> getOperationProgressSet()const;
				std::string getSupportCancel()const;
				std::string getTaskAction()const;
				std::string getCreationTime()const;
				int getFailedCount()const;
				std::string getRegionId()const;
				int getSuccessCount()const;
				std::string getTaskStatus()const;
				std::string getFinishedTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string taskId_;
				std::string taskProcess_;
				std::vector<OperationProgress> operationProgressSet_;
				std::string supportCancel_;
				std::string taskAction_;
				std::string creationTime_;
				int failedCount_;
				std::string regionId_;
				int successCount_;
				std::string taskStatus_;
				std::string finishedTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBETASKATTRIBUTERESULT_H_