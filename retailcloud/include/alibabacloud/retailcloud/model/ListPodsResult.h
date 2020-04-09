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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPODSRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPODSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListPodsResult : public ServiceResult
			{
			public:
				struct PodDetail
				{
					struct DeployStep
					{
						std::string status;
						std::string stepCode;
						std::string stepName;
					};
					std::string groupName;
					std::string hostIp;
					int status;
					int deployPartitionNum;
					std::string startTime;
					std::string statusName;
					long deployOrderId;
					int result;
					std::string appInstanceId;
					std::string resultName;
					std::string podIp;
					std::string updateTime;
					std::string region;
					std::vector<PodDetail::DeployStep> deploySteps;
					std::string hostName;
				};


				ListPodsResult();
				explicit ListPodsResult(const std::string &payload);
				~ListPodsResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getErrorMsg()const;
				std::vector<PodDetail> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string errorMsg_;
				std::vector<PodDetail> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPODSRESULT_H_