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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBELOGINBASECONFIGSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBELOGINBASECONFIGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeLoginBaseConfigsResult : public ServiceResult
			{
			public:
				struct BaseConfig
				{
					struct Target
					{
						std::string target;
						std::string targetType;
					};
					std::vector<BaseConfig::Target> targetList;
					std::string account;
					int totalCount;
					std::string endTime;
					std::string ip;
					std::string startTime;
					int uuidCount;
					std::string location;
					std::string remark;
				};


				DescribeLoginBaseConfigsResult();
				explicit DescribeLoginBaseConfigsResult(const std::string &payload);
				~DescribeLoginBaseConfigsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<BaseConfig> getBaseConfigs()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<BaseConfig> baseConfigs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBELOGINBASECONFIGSRESULT_H_