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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTINSTANCERESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTINSTANCERESULT_H_

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
			class ALIBABACLOUD_FOAS_EXPORT ListInstanceResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string lastErrorMessage;
					std::string expectState;
					std::string engineVersion;
					long endTime;
					std::string projectName;
					std::string clusterId;
					int priority;
					std::string planJson;
					std::string jobName;
					long startTime;
					std::string properties;
					std::string starter;
					long inputDelay;
					std::string code;
					std::string actualState;
					long lastErrorTime;
					std::string engineJobHandler;
					std::string jobType;
					std::string lastOperator;
					std::string packages;
					std::string apiType;
					long id;
					long lastOperateTime;
					std::string queueName;
				};


				ListInstanceResult();
				explicit ListInstanceResult(const std::string &payload);
				~ListInstanceResult();
				std::vector<Instance> getInstances()const;
				long getTotalCount()const;
				int getPageSize()const;
				int getTotalPage()const;
				int getPageIndex()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				long totalCount_;
				int pageSize_;
				int totalPage_;
				int pageIndex_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTINSTANCERESULT_H_