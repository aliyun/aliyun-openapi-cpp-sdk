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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEMODIFYPARAMETERLOGRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEMODIFYPARAMETERLOGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeModifyParameterLogResult : public ServiceResult
			{
			public:
				struct ChangeLog
				{
					std::string newParameterValue;
					std::string changeTime;
					int synced;
					std::string oldParameterValue;
					std::string parameterName;
				};


				DescribeModifyParameterLogResult();
				explicit DescribeModifyParameterLogResult(const std::string &payload);
				~DescribeModifyParameterLogResult();
				std::vector<ChangeLog> getChangeLogs()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ChangeLog> changeLogs_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEMODIFYPARAMETERLOGRESULT_H_