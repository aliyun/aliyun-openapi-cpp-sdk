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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEEXECUTEPLAYBOOKSRESULT_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEEXECUTEPLAYBOOKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sophonsoar/SophonsoarExport.h>

namespace AlibabaCloud
{
	namespace Sophonsoar
	{
		namespace Model
		{
			class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeExecutePlaybooksResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string description;
					std::string actionType;
					std::string uuid;
					std::string displayName;
					std::string commandEntity;
					std::string taskConfig;
					std::string paramConfig;
					std::string paramType;
				};


				DescribeExecutePlaybooksResult();
				explicit DescribeExecutePlaybooksResult(const std::string &payload);
				~DescribeExecutePlaybooksResult();
				std::vector<Data> getPlaybookMetrics()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> playbookMetrics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEEXECUTEPLAYBOOKSRESULT_H_