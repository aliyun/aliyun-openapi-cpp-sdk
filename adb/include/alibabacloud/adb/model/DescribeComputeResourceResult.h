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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBECOMPUTERESOURCERESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBECOMPUTERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeComputeResourceResult : public ServiceResult
			{
			public:
				struct ComputeResourceItem
				{
					std::string realValue;
					std::string displayValue;
				};


				DescribeComputeResourceResult();
				explicit DescribeComputeResourceResult(const std::string &payload);
				~DescribeComputeResourceResult();
				std::vector<ComputeResourceItem> getComputeResource()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ComputeResourceItem> computeResource_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBECOMPUTERESOURCERESULT_H_